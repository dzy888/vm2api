// 006ee820 <tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiters>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiters>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiters>>
          (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ee84b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  return;
}


