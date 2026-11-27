// 003d2780 <<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::readiness::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::readiness::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::readiness::_closure_0_>
          (longlong param_1)

{
  if ((*(char *)(param_1 + 0x68) == '\x03') && (*(char *)(param_1 + 0x60) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003d27b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))();
      return;
    }
  }
  return;
}


