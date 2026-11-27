// 004b7df0 lookup_inbound_session

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::lookup_inbound_session */

undefined4 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::lookup_inbound_session
          (undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  piVar1 = (int *)(param_2 + 0x150);
  LOCK();
  bVar8 = *(int *)(param_2 + 0x150) == 0;
  if (bVar8) {
    *(int *)(param_2 + 0x150) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(param_2 + 0x154);
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(param_2 + 0x154);
  }
  if (cVar6 != '\0') {
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    *(undefined8 *)(param_1 + 6) = 2;
    return param_1;
  }
  lVar7 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find
                    (param_2 + 0x158,param_3,param_4);
  if (lVar7 == 0) {
    lVar7 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find_by_response_id
                      (param_2 + 0x158,param_3,param_4);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 6) = 2;
      goto joined_r0x004b7f9e;
    }
    (*(code *)PTR_clone_00798fd0)();
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x268);
  *(undefined8 *)(param_1 + 4) = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  *(undefined8 *)(param_1 + 6) = 1;
  *(undefined8 *)(param_1 + 8) = uVar3;
joined_r0x004b7f9e:
  if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_2 + 0x154) = 1;
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


