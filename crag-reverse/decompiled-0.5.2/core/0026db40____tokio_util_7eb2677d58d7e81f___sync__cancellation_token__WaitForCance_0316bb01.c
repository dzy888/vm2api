// 0026db40 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0},tokio[d7d91d38da47d894]::sync::notify::Notified)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio[d7d91d38da47d894]::time::sleep::Sleep,
   <craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0},
   tokio[d7d91d38da47d894]::sync::notify::Notified)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_,tokio[d7d91d38da47d894]::sync::notify::Notified)>
          (char *param_1)

{
  longlong *plVar1;
  
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x98) + 0x18))();
  }
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0x10);
  if ((((param_1[0xd0] == '\x03') && (param_1[0x188] == '\x03')) && (param_1[0x180] == '\x03')) &&
     ((param_1[0x178] == '\x03' && (param_1[0x170] == '\x03')))) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x148) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))();
    }
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0026dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x18))();
  return;
}


