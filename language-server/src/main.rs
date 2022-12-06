use std::env;

use anyhow::Result;
use czlang_language_server::Server;
use lsp_server::Connection;

fn main() -> Result<()> {
    let (connection, threads) = Connection::stdio();
    Server::new(connection, env::current_dir()?).run()?;
    threads.join()?;

    Ok(())
}
