// 006f8900 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
          (ulonglong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*param_1 != 2) {
    lVar3 = 0x240;
    if ((*param_1 & 1) != 0) {
      lVar3 = 0x338;
    }
    if (*(int *)(param_1[1] + 0x90 + lVar3) == -1) {
      (*(code *)PTR_expect_failed_00799440)
                (0x338,&anon_880d723ff0f66ce4ced63274bf095def_35_llvm_12887403613343987975);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::clear_entry
              (param_1[1] + lVar3 + 0x50,param_1 + 2);
    if ((char)*param_1 == '\0') {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f897b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[6] + 0x18))();
      return;
    }
  }
  return;
}


