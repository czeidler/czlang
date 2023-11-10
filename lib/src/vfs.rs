use std::{
    collections::HashMap,
    ffi::OsString,
    fs,
    path::{Path, PathBuf},
};

pub trait VirtualFileSystem: Send {
    fn read_dir(&self, path: &Path) -> Result<Vec<OsString>, String>;
    fn read_file(&self, path: &Path) -> Result<String, String>;
}

pub struct DiskFS {}

impl VirtualFileSystem for DiskFS {
    fn read_dir(&self, path: &Path) -> Result<Vec<OsString>, String> {
        let dir = fs::read_dir(path).map_err(|e| format!("{}", e))?;
        let mut files = Vec::new();
        for file in dir {
            let file = file.map_err(|e| format!("{}", e))?;
            let file_name = file.file_name();
            files.push(file_name);
        }
        Ok(files)
    }

    fn read_file(&self, path: &Path) -> Result<String, String> {
        let content = fs::read_to_string(path).map_err(|e| format!("{}", e))?;
        Ok(content)
    }
}

pub struct MemoryFS {
    /// dir -> map of filename -> file content
    pub dirs: HashMap<PathBuf, HashMap<OsString, String>>,
}

impl MemoryFS {
    pub fn new() -> Self {
        MemoryFS {
            dirs: HashMap::new(),
        }
    }

    pub fn add_file(&mut self, path: PathBuf, content: String) {
        let dir = path
            .parent()
            .map(|p| p.to_path_buf())
            .unwrap_or(PathBuf::new());
        let file_name = path.file_name().unwrap().to_os_string();
        let files = self.dirs.entry(dir).or_insert(HashMap::new());
        files.insert(file_name, content);
    }
}

impl VirtualFileSystem for MemoryFS {
    fn read_dir(&self, path: &Path) -> Result<Vec<OsString>, String> {
        let Some(dir) = self.dirs.get(path) else {
            return Ok(vec![]);
        };
        Ok(dir.keys().into_iter().map(|k| k.clone()).collect())
    }

    fn read_file(&self, path: &Path) -> Result<String, String> {
        let dir = path
            .parent()
            .map(|p| p.to_path_buf())
            .unwrap_or(PathBuf::new());
        let Some(dir) = self.dirs.get(&dir) else {
            return Err("Dir not found".to_string());
        };
        let file_name = path.file_name().unwrap().to_os_string();
        let Some(content) =dir.get(&file_name) else {
            return Err("File not found".to_string());
        };
        return Ok(content.clone());
    }
}
