// 005cc9c0 register

/* WARNING: Switch with 1 destination removed at 0x005ccb16 */
/* <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::register */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::register
          (int *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  LOCK();
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = (char)param_1[1];
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = (char)param_1[1];
  }
  if (cVar9 == '\0') {
    LOCK();
    lVar3 = *param_3;
    *param_3 = *param_3 + 1;
    UNLOCK();
    if (*param_3 != 0 && SCARRY8(lVar3,1) == *param_3 < 0) {
      local_30 = 0;
      lVar3 = *(longlong *)(param_1 + 6);
      local_40 = param_3;
      uStack_38 = param_2;
      if (lVar3 == *(longlong *)(param_1 + 2)) {
        (*(code *)PTR_grow_one_00799b08)();
      }
      lVar4 = *(longlong *)(param_1 + 4);
      *(undefined8 *)(lVar4 + 0x10 + lVar3 * 0x18) = local_30;
      puVar1 = (undefined4 *)(lVar4 + lVar3 * 0x18);
      *puVar1 = (undefined4)local_40;
      puVar1[1] = local_40._4_4_;
      puVar1[2] = (undefined4)uStack_38;
      puVar1[3] = uStack_38._4_4_;
      *(longlong *)(param_1 + 6) = lVar3 + 1;
      if (lVar3 + 1 == 0) {
        LOCK();
        *(bool *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xc) == 0;
        UNLOCK();
      }
      else {
        LOCK();
        *(undefined1 *)(param_1 + 0xe) = 0;
        UNLOCK();
      }
      if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      LOCK();
      iVar2 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
  }
  else {
    uVar6 = (ulonglong)uStack_38 >> 8;
    uStack_38 = CONCAT71((int7)uVar6,bVar8);
    local_40 = (longlong *)param_1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>>>>_0078e328
               ,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078e438);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


