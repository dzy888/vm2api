// 004b3520 record_success

/* WARNING: Switch with 1 destination removed at 0x004b3601 */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_success */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_success(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int *local_28;
  byte local_20;
  
  *(undefined8 *)(param_1 + 0xd0) = 0;
  piVar1 = (int *)(param_1 + 0xd8);
  LOCK();
  bVar6 = *(int *)(param_1 + 0xd8) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0xd8) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_20 = 0;
    cVar5 = *(char *)(param_1 + 0xdc);
  }
  else {
    local_20 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_20 = local_20 ^ 1;
    cVar5 = *(char *)(param_1 + 0xdc);
  }
  if (cVar5 != '\0') {
    local_28 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_181_llvm_7677212527096675952,&local_28,
               &anon_572fb51faa0db1e51baf8d00d92dd3e9_284_llvm_7677212527096675952);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  if (((local_20 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


