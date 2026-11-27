// 006f3550 shutdown

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::shutdown
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  int *unaff_RBX;
  longlong unaff_R14;
  longlong lVar7;
  bool bVar8;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong local_38;
  
  if (*(int *)(param_2 + 0x44) == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_c49be660a078f24638188b28ebcb61a3_13_llvm_15508925077749842928);
  }
  else {
    unaff_RBX = (int *)(param_2 + 8);
    LOCK();
    bVar8 = *(int *)(param_2 + 8) == 0;
    if (bVar8) {
      *(int *)(param_2 + 8) = 1;
    }
    UNLOCK();
    unaff_R14 = param_2;
    if (bVar8) goto LAB_006f3581;
  }
  (*(code *)PTR_lock_contended_00798fe0)();
LAB_006f3581:
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::shutdown
            (&local_48,unaff_R14,unaff_R14 + 0x10);
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(unaff_R14 + 0xc) = 1;
  }
  LOCK();
  iVar1 = *unaff_RBX;
  *unaff_RBX = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  puVar4 = PTR_drop_slow_00799150;
  local_50 = local_40 + local_38;
  local_68 = local_40;
  local_60 = local_40;
  local_58 = local_48;
  if (local_38 != 0) {
    lVar7 = local_38 << 3;
    puVar3 = local_40;
    do {
      plVar2 = (longlong *)*puVar3;
      LOCK();
      plVar2[0x12] = plVar2[0x12] | 0x80000000;
      UNLOCK();
      local_60 = puVar3 + 1;
      <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake(plVar2 + 0x10,0x3f);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar4)();
      }
      lVar7 = lVar7 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar7 != 0);
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_68);
  return;
}


