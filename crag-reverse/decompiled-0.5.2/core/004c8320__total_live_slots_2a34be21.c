// 004c8320 total_live_slots

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulonglong uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  undefined1 *local_70;
  ushort local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x340);
  LOCK();
  bVar9 = *(int *)(param_1 + 0x340) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x340) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_1 + 0x344);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_1 + 0x344);
  }
  if (cVar8 != '\0') {
    uVar5 = (ulonglong)local_78 >> 8;
    local_78 = (undefined1 (*) [16])CONCAT71((int7)uVar5,bVar7);
    local_80 = pauVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_183_llvm_7677212527096675952,&local_80,
               &anon_572fb51faa0db1e51baf8d00d92dd3e9_411_llvm_7677212527096675952);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_80 = *(undefined1 (**) [16])(param_1 + 0x348);
  local_70 = *local_80 + *(longlong *)(param_1 + 0x350) + 1;
  auVar3 = *local_80;
  local_68 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
  local_60 = *(undefined8 *)(param_1 + 0x360);
  local_78 = local_80 + 1;
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>>>
  ::from_iter(&local_58,&local_80);
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 0x344) = 1;
  }
  LOCK();
  iVar2 = *(int *)*pauVar1;
  *(undefined4 *)*pauVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  local_28 = local_50 + local_48 * 8;
  local_40 = local_50;
  local_30 = local_58;
  local_38 = local_50;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
  ::fold::
  <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,usize,usize,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::total_live_slots::_closure_0_>>::_closure_0_>::_closure_0_>
            (&local_40,0);
  return;
}


