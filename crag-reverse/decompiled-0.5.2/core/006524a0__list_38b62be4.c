// 006524a0 list

/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
          (undefined8 *param_1,longlong param_2)

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
  undefined1 local_69;
  undefined1 (*local_68) [16];
  undefined1 (*local_60) [16];
  undefined1 *local_58;
  ushort local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x20);
  LOCK();
  bVar9 = *(int *)(param_2 + 0x20) == 0;
  if (bVar9) {
    *(int *)(param_2 + 0x20) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_2 + 0x24);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_2 + 0x24);
  }
  if (cVar8 != '\0') {
    uVar5 = (ulonglong)local_60 >> 8;
    local_60 = (undefined1 (*) [16])CONCAT71((int7)uVar5,bVar7);
    local_68 = pauVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_63b06cc94833867f683611f039574387_321_llvm_6903579140370050947,&local_68,
               &anon_63b06cc94833867f683611f039574387_370_llvm_6903579140370050947);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_68 = *(undefined1 (**) [16])(param_2 + 0x28);
  local_58 = *local_68 + *(longlong *)(param_2 + 0x30) + 1;
  auVar3 = *local_68;
  local_50 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
  local_48 = *(undefined8 *)(param_2 + 0x40);
  local_60 = local_68 + 1;
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>
  ::from_iter(&local_40,&local_68);
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0x24) = 1;
  }
  LOCK();
  iVar2 = *(int *)*pauVar1;
  *(undefined4 *)*pauVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  local_68 = (undefined1 (*) [16])&local_69;
  if (1 < local_30) {
    if (local_30 < 0x15) {
      core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (uStack_38,local_30,1,&local_68);
    }
    else {
      core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>
                (uStack_38,local_30,&local_68);
    }
  }
  param_1[2] = local_30;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return param_1;
}


