// 002507d0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#8}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_none_or::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#8}>
    */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::is_none_or::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_8_>
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    goto LAB_002508dd;
  }
  piVar1 = (int *)(param_3 + 0x160);
  LOCK();
  bVar8 = *(int *)(param_3 + 0x160) == 0;
  if (bVar8) {
    *(int *)(param_3 + 0x160) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    if (*(char *)(param_3 + 0x164) != '\0') goto LAB_00250825;
LAB_002508aa:
    uVar7 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::can_auto_recover
                      (param_3 + 0x168,param_1,param_2);
    if ((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) {
      uVar7 = uVar7 & 0xffffffff;
      cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar5 == '\0') {
        *(undefined1 *)(param_3 + 0x164) = 1;
      }
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    uVar6 = (uint)uVar7;
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    if (*(char *)(param_3 + 0x164) == '\0') goto LAB_002508aa;
LAB_00250825:
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_3 + 0x164) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    uVar6 = 0;
    uVar7 = 0;
  }
  if (iVar2 == 2) {
    uVar7 = (ulonglong)uVar6;
    (*(code *)PTR_wake_00799010)();
  }
LAB_002508dd:
  return uVar7 & 0xffffffff;
}


