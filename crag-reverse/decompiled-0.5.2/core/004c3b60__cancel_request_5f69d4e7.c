// 004c3b60 cancel_request

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::cancel_request */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::cancel_request
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 (*local_80) [16];
  undefined1 (*local_78) [16];
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 (*local_40) [16];
  longlong local_38;
  
  local_58 = param_5;
  if (param_2 == 0) {
    pauVar9 = (undefined1 (*) [16])(param_1 + 0x340);
    LOCK();
    bVar12 = *(int *)(param_1 + 0x340) == 0;
    if (bVar12) {
      *(int *)(param_1 + 0x340) = 1;
    }
    UNLOCK();
    if (!bVar12) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      uVar10 = 0;
      cVar7 = *(char *)(param_1 + 0x344);
    }
    else {
      uVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      uVar10 = (ulonglong)uVar8 ^ 1;
      cVar7 = *(char *)(param_1 + 0x344);
    }
    if (cVar7 != '\0') {
      uVar5 = (ulonglong)local_78 >> 8;
      local_78 = (undefined1 (*) [16])CONCAT71((int7)uVar5,(char)uVar10);
      local_80 = pauVar9;
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_572fb51faa0db1e51baf8d00d92dd3e9_183_llvm_7677212527096675952,&local_80,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc28);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_80 = *(undefined1 (**) [16])(param_1 + 0x348);
    local_70 = *local_80 + *(longlong *)(param_1 + 0x350) + 1;
    auVar2 = *local_80;
    local_60 = *(undefined8 *)(param_1 + 0x360);
    local_78 = local_80 + 1;
    uVar5 = (ulonglong)local_68 >> 0x10;
    local_68 = (undefined1 *)
               CONCAT62((int6)uVar5,
                        ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf));
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>>>
    ::from_iter(&local_48,&local_80);
    if ((((char)uVar10 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(param_1 + 0x344) = 1;
    }
    LOCK();
    iVar1 = *(int *)*pauVar9;
    *(undefined4 *)*pauVar9 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_68 = *local_40 + local_38 * 8;
    lVar11 = local_38 << 3;
    local_80 = local_40;
    local_70 = (undefined1 *)local_48;
    local_78 = local_40;
    pauVar9 = local_40;
    do {
      uVar10 = CONCAT71((int7)(uVar10 >> 8),lVar11 != 0);
      if (lVar11 == 0) break;
      plVar3 = *(longlong **)*pauVar9;
      local_78 = (undefined1 (*) [16])(*pauVar9 + 8);
      local_50 = plVar3;
      cVar7 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request
                        (plVar3 + 2,param_4,local_58);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(&local_50);
      }
      lVar11 = lVar11 + -8;
      pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
    } while (cVar7 == '\0');
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_80);
  }
  else {
    pauVar9 = (undefined1 (*) [16])get_pool();
    if (pauVar9 == (undefined1 (*) [16])0x0) {
      uVar10 = 0;
    }
    else {
      local_80 = pauVar9;
      uVar8 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request
                        (pauVar9 + 1,param_4,local_58);
      uVar10 = (ulonglong)uVar8;
      LOCK();
      *(longlong *)*pauVar9 = *(longlong *)*pauVar9 + -1;
      UNLOCK();
      if (*(longlong *)*pauVar9 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(&local_80);
      }
    }
  }
  return uVar10;
}


