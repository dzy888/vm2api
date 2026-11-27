// 004d4f20 drop

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  longlong *local_38;
  longlong local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x818);
  LOCK();
  bVar9 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar9) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
  }
  local_38 = (longlong *)
             <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::remove::<alloc[12e961f32105355]::string::String>(lVar2 + 0x18,param_1 + 0x5e0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(&local_38);
    }
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
  LOCK();
  iVar8 = *(int *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x10) = 0;
  UNLOCK();
  if (iVar8 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  (*(code *)PTR_cancel_00799220)();
  puVar3 = PTR_kill_00799120;
  uVar1 = *(uint *)(param_1 + 0x840);
  if (1 < uVar1) {
    (*(code *)PTR_kill_00799120)();
    (*(code *)puVar3)();
  }
  puVar3 = PTR_waitpid_00799128;
  if (0 < (int)uVar1) {
    iVar8 = 0x40;
    do {
      local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
      iVar6 = (*(code *)puVar3)();
      if (iVar6 < 1) break;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(char *)(param_1 + 0x844) == '\0') {
    uVar7 = (*(code *)PTR_remove_dir_all_00799038)();
    if (((uVar7 != 0) && (1 < ((uint)uVar7 & 3) - 2)) && ((uVar7 & 3) != 0)) {
      local_30 = uVar7 - 1;
      local_38 = (longlong *)CONCAT71(local_38._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x844) = 1;
  }
  return;
}


