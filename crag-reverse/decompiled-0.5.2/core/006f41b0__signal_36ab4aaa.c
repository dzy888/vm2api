// 006f41b0 signal

/* tokio[d7d91d38da47d894]::signal::unix::signal */

longlong * __rustcall
tokio[d7d91d38da47d894]::signal::unix::signal
          (longlong *param_1,undefined4 param_2,longlong *param_3)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_28;
  
  plVar4 = param_3;
  bVar2 = (*(code *)PTR_current_00799480)();
  plVar5 = plVar4 + 0x67;
  if ((bVar2 & 1) == 0) {
    plVar5 = plVar4 + 0x48;
  }
  if (plVar5[9] == 0) {
    (*(code *)PTR_expect_failed_00799440)(plVar4 + 0x48,param_3);
LAB_006f42f0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  signal_with_handle(&local_c0,param_2,plVar5 + 9);
  if (local_c0 == 0) {
    param_1[1] = local_b8;
    *param_1 = 0;
  }
  else {
    local_28 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_006f42f0;
    }
    (*(code *)PTR_memcpy_00799008)();
    *param_1 = lVar3;
    param_1[1] = (longlong)&anon_8e901ac342272c81d7b37a6ae0143219_26_llvm_8038038081886927865;
  }
  if (bVar2 == 0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  return param_1;
}


