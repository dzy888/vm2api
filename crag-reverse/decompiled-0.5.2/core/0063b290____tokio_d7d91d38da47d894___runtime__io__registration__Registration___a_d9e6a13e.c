// 0063b290 <<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<usize,<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::peek::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<usize,
   <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::peek::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<usize,<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::peek::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  if (((*(char *)(param_1 + 0x50) == '\x03') && (*(char *)(param_1 + 0xc0) == '\x03')) &&
     (*(char *)(param_1 + 0xb8) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0063b2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))();
      return;
    }
  }
  return;
}


