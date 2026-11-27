// 006a7f50 <hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioSleep>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioSleep> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioSleep>
          (char *param_1)

{
  longlong *plVar1;
  
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
  return;
}


