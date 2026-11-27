// 002edb30 <<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::readiness::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::readiness::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::readiness::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x03') {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x002edb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
      return;
    }
  }
  return;
}


