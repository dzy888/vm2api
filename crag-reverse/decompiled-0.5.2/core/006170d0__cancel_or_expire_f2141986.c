// 006170d0 cancel_or_expire

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire
          (longlong param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  code *pcVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined8 local_808;
  longlong local_800;
  undefined8 *local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined *local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  longlong local_7a8;
  longlong local_7a0;
  longlong local_798;
  longlong local_790;
  undefined8 *local_788;
  char *local_780;
  undefined8 *local_778;
  
  LOCK();
  bVar14 = *(int *)(param_1 + 0x310) == 0;
  if (bVar14) {
    *(int *)(param_1 + 0x310) = 1;
  }
  UNLOCK();
  local_808 = param_2;
  local_800 = param_3;
  if (!bVar14) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar4 = *(char *)(param_1 + 0x314);
  }
  else {
    bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar3 = bVar3 ^ 1;
    cVar4 = *(char *)(param_1 + 0x314);
  }
  if (cVar4 != '\0') {
    uVar11 = (ulonglong)local_780 >> 8;
    local_780 = (char *)CONCAT71((int7)uVar11,bVar3);
    local_788 = (undefined8 *)(param_1 + 0x310);
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_788,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar11 = *(ulonglong *)(param_1 + 0x348);
  if (uVar11 == 0) {
    lVar6 = 0;
    uVar12 = 0;
    lVar10 = 0;
  }
  else {
    uVar12 = *(ulonglong *)(param_1 + 0x330);
    uVar9 = 0;
    if (uVar12 <= *(ulonglong *)(param_1 + 0x340)) {
      uVar9 = uVar12;
    }
    lVar6 = *(ulonglong *)(param_1 + 0x340) - uVar9;
    lVar10 = uVar11 - (uVar12 - lVar6);
    if (uVar11 < uVar12 - lVar6 || lVar10 == 0) {
      uVar12 = uVar11 + lVar6;
      lVar10 = 0;
    }
  }
  local_798 = *(longlong *)(param_1 + 0x338);
  local_7a8 = lVar6 * 0x3b0 + local_798;
  local_7a0 = uVar12 * 0x3b0 + local_798;
  local_790 = lVar10 * 0x3b0 + local_798;
  local_7e8 = 0;
  local_788 = &local_808;
  local_778 = &local_7e8;
  local_780 = param_4;
  auVar17 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
            ::try_fold::
            <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::position::check<&craggemini_core[66f3c71560d70857]::server::Turn,<craggemini_core[66f3c71560d70857]::server::Runtime>::cancel_or_expire::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<usize>>
                      ();
  uVar11 = auVar17._8_8_;
  if ((auVar17._0_8_ == 1) && (uVar12 = *(ulonglong *)(param_1 + 0x348), uVar11 < uVar12)) {
    lVar6 = *(longlong *)(param_1 + 0x340);
    uVar9 = *(ulonglong *)(param_1 + 0x330);
    uVar8 = 0;
    if (uVar9 <= uVar11 + lVar6) {
      uVar8 = uVar9;
    }
    lVar10 = (uVar11 + lVar6) - uVar8;
    local_7f8 = *(undefined8 **)(*(longlong *)(param_1 + 0x338) + lVar10 * 0x3b0);
    local_7f0 = param_4;
    (*(code *)PTR_memcpy_00799008)();
    if (~uVar11 + uVar12 < uVar11) {
      uVar11 = 0;
      if (uVar9 <= lVar10 + 1U) {
        uVar11 = uVar9;
      }
      lVar6 = (lVar10 - uVar11) + 1;
    }
    else {
      uVar11 = 0;
      if (uVar9 <= lVar6 + 1U) {
        uVar11 = uVar9;
      }
      lVar10 = (lVar6 - uVar11) + 1;
      *(longlong *)(param_1 + 0x340) = lVar10;
    }
    uVar15 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
             ::wrap_copy(param_1 + 0x330,lVar6,lVar10);
    pcVar2 = local_7f0;
    *(ulonglong *)(param_1 + 0x348) = uVar12 - 1;
    puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    param_4 = local_7f0;
    if (local_7f8 == (undefined8 *)0x2) goto LAB_006172fd;
    local_788 = local_7f8;
    (*(code *)PTR_memcpy_00799008)(uVar15,0x3a8);
    if (*pcVar2 == '\x01') {
      local_7b8 = _DAT_0078f610;
      uStack_7b0 = _UNK_0078f618;
      local_7c8 = PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_394_llvm_10049508496007902178_0078f600;
      uStack_7c0 = _UNK_0078f608;
      local_7d8 = _DAT_0078f5f0;
      uStack_7d0 = _UNK_0078f5f8;
      uVar15 = _anon_1b4a85c95499e1b671cf4fa96a1b6d0f_395_llvm_10049508496007902178;
      uVar16 = _UNK_0078f5e4;
      uStack_7e0 = _UNK_0078f5e8;
      uStack_7dc = _UNK_0078f5ec;
    }
    else {
      local_7b8 = _DAT_0078f5d0;
      uStack_7b0 = _UNK_0078f5d8;
      local_7c8 = PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_391_llvm_10049508496007902178_0078f5c0;
      uStack_7c0 = _UNK_0078f5c8;
      local_7d8 = _DAT_0078f5b0;
      uStack_7d0 = _UNK_0078f5b8;
      uVar15 = _anon_1b4a85c95499e1b671cf4fa96a1b6d0f_392_llvm_10049508496007902178;
      uVar16 = _UNK_0078f5a4;
      uStack_7e0 = _UNK_0078f5a8;
      uStack_7dc = _UNK_0078f5ac;
    }
    local_7e8 = CONCAT44(uVar16,uVar15);
    <craggemini_core[66f3c71560d70857]::server::Turn>::settle_err(&local_788,&local_7e8);
LAB_00617429:
    if (((bVar3 == 0) && ((*puVar13 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(param_1 + 0x314) = 1;
    }
    LOCK();
    iVar5 = *(int *)(param_1 + 0x310);
    *(int *)(param_1 + 0x310) = 0;
    UNLOCK();
    uVar7 = 1;
  }
  else {
LAB_006172fd:
    if (((*param_4 == '\0') && (*(longlong *)(param_1 + 0x3c8) != -1)) &&
       (*(longlong *)(param_1 + 0x3d8) == local_800)) {
      cVar4 = param_4[1];
      iVar5 = (*(code *)PTR_bcmp_00799020)();
      if ((iVar5 == 0) && (*(char *)(*(longlong *)(param_1 + 0x3e0) + 0x20) == cVar4)) {
        (*(code *)PTR_cancel_00799220)();
        goto LAB_00617429;
      }
    }
    if (((bVar3 == 0) && ((*puVar13 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(param_1 + 0x314) = 1;
    }
    uVar7 = 0;
    LOCK();
    iVar5 = *(int *)(param_1 + 0x310);
    *(int *)(param_1 + 0x310) = 0;
    UNLOCK();
  }
  if (iVar5 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar7;
}


