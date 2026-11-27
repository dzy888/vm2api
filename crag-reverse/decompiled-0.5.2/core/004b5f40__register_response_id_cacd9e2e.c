// 004b5f40 register_response_id

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::register_response_id */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::register_response_id
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  int *local_40;
  byte local_38;
  
  piVar1 = (int *)(param_1 + 0x150);
  LOCK();
  bVar7 = *(int *)(param_1 + 0x150) == 0;
  if (bVar7) {
    *(int *)(param_1 + 0x150) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar5 = *(char *)(param_1 + 0x154);
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)(param_4,param_3);
    local_38 = local_38 ^ 1;
    cVar5 = *(char *)(param_1 + 0x154);
  }
  if (cVar5 != '\0') {
    local_40 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_189_llvm_7677212527096675952,&local_40,
               &anon_572fb51faa0db1e51baf8d00d92dd3e9_294_llvm_7677212527096675952);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::register_response_id
                    (param_1 + 0x158,param_2,param_3,param_4,param_5);
  if (((local_38 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0x154) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar6;
}


