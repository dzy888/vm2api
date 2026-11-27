// 00617540 admit

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::server::Runtime>::admit */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::admit
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  byte bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 local_400 [32];
  longlong local_3e0;
  byte local_3d8;
  
  LOCK();
  bVar22 = *(int *)(param_2 + 0x310) == 0;
  if (bVar22) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar22) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)(param_2 + 0x314);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)(param_2 + 0x314);
  }
  if (cVar10 != '\0') {
    local_3e0 = param_2 + 0x310;
    local_3d8 = bVar9;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_3e0,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
  ::retain::<<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_0_>();
  lVar2 = *(longlong *)(param_3 + 0x70);
  if (*(longlong *)(param_2 + 0x3a8) != 0) {
    uVar13 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_2 + 0x3b0,*(undefined8 *)(param_3 + 0x68),lVar2);
    puVar8 = PTR_bcmp_00799020;
    lVar16 = *(longlong *)(param_2 + 0x390);
    uVar3 = *(ulonglong *)(param_2 + 0x398);
    bVar23 = (byte)(uVar13 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    lVar14 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar3;
      auVar1 = *(undefined1 (*) [16])(lVar16 + uVar13);
      auVar26[0] = -(auVar1[0] == auVar25[0]);
      auVar26[1] = -(auVar1[1] == auVar25[1]);
      auVar26[2] = -(auVar1[2] == auVar25[2]);
      auVar26[3] = -(auVar1[3] == auVar25[3]);
      auVar26[4] = -(auVar1[4] == auVar25[4]);
      auVar26[5] = -(auVar1[5] == auVar25[5]);
      auVar26[6] = -(auVar1[6] == auVar25[6]);
      auVar26[7] = -(auVar1[7] == auVar25[7]);
      auVar26[8] = -(auVar1[8] == auVar25[0]);
      auVar26[9] = -(auVar1[9] == auVar25[1]);
      auVar26[10] = -(auVar1[10] == auVar25[2]);
      auVar26[0xb] = -(auVar1[0xb] == auVar25[3]);
      auVar26[0xc] = -(auVar1[0xc] == auVar25[4]);
      auVar26[0xd] = -(auVar1[0xd] == auVar25[5]);
      auVar26[0xe] = -(auVar1[0xe] == auVar25[6]);
      auVar26[0xf] = -(auVar1[0xf] == auVar25[7]);
      uVar11 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar11;
      if (uVar11 != 0) {
        do {
          uVar6 = 0;
          for (uVar7 = uVar20; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if ((lVar2 == *(longlong *)(lVar16 + -8 + (uVar6 + uVar13 & uVar3) * -0x18)) &&
             (iVar12 = (*(code *)puVar8)(), iVar12 == 0)) goto LAB_0061794d;
          uVar11 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar11);
        } while (uVar11 != 0);
      }
      auVar28[0] = -(auVar1[0] == -1);
      auVar28[1] = -(auVar1[1] == -1);
      auVar28[2] = -(auVar1[2] == -1);
      auVar28[3] = -(auVar1[3] == -1);
      auVar28[4] = -(auVar1[4] == -1);
      auVar28[5] = -(auVar1[5] == -1);
      auVar28[6] = -(auVar1[6] == -1);
      auVar28[7] = -(auVar1[7] == -1);
      auVar28[8] = -(auVar1[8] == -1);
      auVar28[9] = -(auVar1[9] == -1);
      auVar28[10] = -(auVar1[10] == -1);
      auVar28[0xb] = -(auVar1[0xb] == -1);
      auVar28[0xc] = -(auVar1[0xc] == -1);
      auVar28[0xd] = -(auVar1[0xd] == -1);
      auVar28[0xe] = -(auVar1[0xe] == -1);
      auVar28[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar13 = uVar13 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  uVar3 = *(ulonglong *)(param_2 + 0x348);
  if (uVar3 != 0) {
    uVar13 = *(ulonglong *)(param_2 + 0x340);
    uVar4 = *(ulonglong *)(param_2 + 0x330);
    uVar17 = uVar4;
    if (uVar13 < uVar4) {
      uVar17 = 0;
    }
    uVar19 = uVar13 - uVar17;
    uVar15 = uVar4 - uVar19;
    lVar16 = (uVar3 - uVar15) * 0x3b0;
    if (uVar3 <= uVar15) {
      lVar16 = 0;
    }
    lVar14 = *(longlong *)(param_2 + 0x338);
    uVar18 = uVar19 + uVar3;
    if (uVar15 < uVar3) {
      uVar18 = uVar4;
    }
    if (uVar19 != uVar18) {
      if (uVar3 < uVar15) {
        uVar15 = uVar3;
      }
      lVar21 = 0;
      do {
        if ((*(longlong *)(uVar13 * 0x3b0 + uVar17 * -0x3b0 + lVar14 + 0x70 + lVar21) == lVar2) &&
           (iVar12 = (*(code *)PTR_bcmp_00799020)(), iVar12 == 0)) goto LAB_0061794d;
        lVar21 = lVar21 + 0x3b0;
      } while (uVar15 * 0x3b0 != lVar21);
    }
    puVar8 = PTR_bcmp_00799020;
    if (lVar16 != 0) {
      lVar21 = 0;
      do {
        if ((*(longlong *)(lVar14 + 0x70 + lVar21) == lVar2) &&
           (iVar12 = (*(code *)puVar8)(), iVar12 == 0)) goto LAB_0061794d;
        lVar21 = lVar21 + 0x3b0;
      } while (lVar16 != lVar21);
    }
  }
  cVar10 = (*(code *)PTR_is_cancelled_00799260)();
  uVar27 = _UNK_0078f598;
  uVar24 = _UNK_0078f558;
  if (cVar10 == '\0') {
    if (((*(char *)(param_2 + 0x414) == '\0') && (*(char *)(param_2 + 0x413) != '\x01')) &&
       (*(int *)(param_2 + 1000) != 0)) {
      lVar2 = *(longlong *)(param_2 + 0x3c8);
      lVar16 = *(longlong *)(param_2 + 0x2b8);
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
      ::iter(local_400,param_2 + 0x330);
      lVar14 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
               ::fold::
               <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::server::Turn,usize,usize,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_2_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_2_>>::_closure_0_>::_closure_0_>
                         (local_400,0);
      if (((ulonglong)(lVar14 + *(longlong *)(param_3 + 0x88)) < 0x1000001) &&
         (*(ulonglong *)(param_2 + 0x348) < (ulonglong)(lVar2 == -1) + lVar16)) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,0x3b0);
        <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
        ::push_back_mut(param_2 + 0x330,&local_3e0);
        (*(code *)PTR_notify_one_00799168)();
        *param_1 = 0xfffffffffffffffe;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::server::Registry>>
                  (param_2 + 0x310,bVar9);
        return param_1;
      }
      *param_1 = 0xffffffffffffffff;
      param_1[1] = "queue_full";
      param_1[2] = 10;
      param_1[3] = 0xffffffffffffffff;
      param_1[4] = "native TUI session busy or queue full";
      param_1[5] = 0x25;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 7) = 0x60201f7;
      goto joined_r0x00617a43;
    }
    param_1[6] = _DAT_0078f550;
    param_1[7] = uVar24;
    uVar24 = _UNK_0078f548;
    param_1[4] = PTR_s_native_TUI_session_unavailable_o_0078f540;
    param_1[5] = uVar24;
    uVar24 = _UNK_0078f538;
    param_1[2] = _DAT_0078f530;
    param_1[3] = uVar24;
    uVar24 = _DAT_0078f520;
    uVar27 = _UNK_0078f528;
  }
  else {
    param_1[6] = _DAT_0078f590;
    param_1[7] = uVar27;
    uVar24 = _UNK_0078f588;
    param_1[4] = PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_385_llvm_10049508496007902178_0078f580;
    param_1[5] = uVar24;
    uVar24 = _UNK_0078f578;
    param_1[2] = _DAT_0078f570;
    param_1[3] = uVar24;
    uVar24 = _anon_1b4a85c95499e1b671cf4fa96a1b6d0f_386_llvm_10049508496007902178;
    uVar27 = _UNK_0078f568;
  }
  *param_1 = uVar24;
  param_1[1] = uVar27;
joined_r0x00617a43:
  if (((bVar9 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
    *(undefined1 *)(param_2 + 0x314) = 1;
  }
  LOCK();
  iVar12 = *(int *)(param_2 + 0x310);
  *(int *)(param_2 + 0x310) = 0;
  UNLOCK();
  if (iVar12 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::Turn>(param_3)
  ;
  return param_1;
LAB_0061794d:
  *param_1 = 0xffffffffffffffff;
  param_1[1] = "duplicate_request";
  param_1[2] = 0x11;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = "request_id already submitted or queued";
  param_1[5] = 0x26;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6020199;
  goto joined_r0x00617a43;
}


