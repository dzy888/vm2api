// 002f9b80 <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness>(longlong param_1)

{
  (*(code *)PTR_drop_007990e0)();
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002f9ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))();
  return;
}


