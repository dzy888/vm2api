// 004b3640 retire_slot_bg

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg
          (undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_2048;
  longlong local_2040;
  longlong local_2038;
  undefined8 *local_2030;
  undefined1 local_2028 [2120];
  longlong *local_17e0;
  undefined8 local_1030;
  undefined1 local_38;
  
  local_1030 = 0;
  local_2030 = (undefined8 *)0x0;
  plVar1 = (longlong *)*param_1;
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x808) + 0x10);
  lVar2 = *(longlong *)(lVar10 + 0x140);
  lVar3 = *(longlong *)(lVar10 + 0x148);
  lVar4 = *(longlong *)(lVar10 + 0x150);
  lVar5 = *(longlong *)(lVar10 + 0x158);
  lVar10 = *(longlong *)(lVar10 + 0x160);
  LOCK();
  plVar1[0x26] = plVar1[0x26] + lVar2;
  UNLOCK();
  LOCK();
  plVar1[0x27] = plVar1[0x27] + lVar3;
  UNLOCK();
  LOCK();
  plVar1[0x28] = plVar1[0x28] + lVar4;
  UNLOCK();
  LOCK();
  plVar1[0x29] = plVar1[0x29] + lVar5;
  UNLOCK();
  LOCK();
  plVar1[0x2a] = plVar1[0x2a] + lVar10;
  UNLOCK();
  LOCK();
  lVar10 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar10,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  local_17e0 = plVar1;
  (*(code *)PTR_memcpy_00799008)(lVar2,0x848);
  local_38 = 0;
  LOCK();
  bVar11 = (int)plVar1[0x52] == 0;
  if (bVar11) {
    *(int *)(plVar1 + 0x52) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
  }
  while (<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next
                   (&local_2048,plVar1 + 0x53), puVar7 = local_2030, local_2048 != 0) {
    if ((local_2040 != 0) && (local_2038 != 0)) {
      if ((code *)*local_2030 != (code *)0x0) {
        (*(code *)*local_2030)();
      }
      if (puVar7[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  lVar10 = tokio[d7d91d38da47d894]::task::spawn::spawn::
           <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>
                     (local_2028,&anon_572fb51faa0db1e51baf8d00d92dd3e9_3_llvm_7677212527096675952);
  <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert(plVar1 + 0x53,lVar10);
  local_2048 = lVar10;
  (*(code *)PTR_drop_00799460)();
  if (((bVar8 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)((longlong)plVar1 + 0x294) = 1;
  }
  LOCK();
  lVar10 = plVar1[0x52];
  *(int *)(plVar1 + 0x52) = 0;
  UNLOCK();
  if ((int)lVar10 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


