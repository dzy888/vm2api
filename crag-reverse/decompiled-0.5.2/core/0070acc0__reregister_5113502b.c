// 0070acc0 reregister

/* WARNING: Switch with 1 destination removed at 0x0070aef9 */
/* <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::reregister
          (int *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  longlong local_38;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    lVar9 = *(longlong *)(param_4 + 0x18);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    lVar9 = *(longlong *)(param_4 + 0x18);
  }
  if (lVar9 != -1) {
    <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::remove(param_1 + 2,param_4);
  }
  uVar5 = 1;
  if ((char)param_1[0xc] == '\0') {
    *(undefined8 *)(param_4 + 0x18) = param_3;
    *(undefined8 *)(param_4 + 0x10) = param_3;
    auVar11 = <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::insert(param_1 + 2,param_4);
    param_4 = auVar11._8_8_;
    if ((auVar11._0_8_ & 1) == 0) {
      if (param_4 <= *(longlong *)(param_1 + 10) - 1U) {
        if (*(int *)((longlong)param_2 + 0x44) == -1) {
          <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark(*param_2 + 0x10);
        }
        else {
          local_38 = (*(code *)PTR_wake_0079a830)();
          if (local_38 != 0) {
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_38,
                       &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
      }
      if (((bVar6 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      LOCK();
      iVar1 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    uVar5 = 0;
    lVar9 = *(longlong *)(param_4 + 0x18);
  }
  else {
    lVar9 = *(longlong *)(param_4 + 0x18);
  }
  if (lVar9 != -1) {
    *(undefined1 *)(param_4 + 0x38) = uVar5;
    *(undefined8 *)(param_4 + 0x18) = 0xffffffffffffffff;
    uVar8 = *(ulonglong *)(param_4 + 0x30);
    do {
      LOCK();
      uVar2 = *(ulonglong *)(param_4 + 0x30);
      bVar10 = uVar8 == uVar2;
      if (bVar10) {
        *(ulonglong *)(param_4 + 0x30) = uVar8 | 2;
      }
      else {
        uVar8 = uVar2;
      }
      UNLOCK();
    } while (!bVar10);
    if (uVar8 == 0) {
      lVar9 = *(longlong *)(param_4 + 0x20);
      *(undefined8 *)(param_4 + 0x20) = 0;
      LOCK();
      *(undefined8 *)(param_4 + 0x30) = 0;
      UNLOCK();
      goto joined_r0x0070ad69;
    }
  }
  lVar9 = 0;
joined_r0x0070ad69:
  if (((bVar6 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0070adef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))();
  return;
}


