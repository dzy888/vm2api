// 00616170 active_model

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::active_model */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::active_model
          (undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int *local_38;
  byte local_30;
  
  piVar1 = (int *)(param_2 + 0x310);
  LOCK();
  bVar6 = *(int *)(param_2 + 0x310) == 0;
  if (bVar6) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar5 = *(char *)(param_2 + 0x314);
  }
  else {
    local_30 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_30 = local_30 ^ 1;
    cVar5 = *(char *)(param_2 + 0x314);
  }
  if (cVar5 != '\0') {
    local_38 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_38,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  (*(code *)PTR_clone_00798fd0)();
  if (((local_30 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 0x314) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


