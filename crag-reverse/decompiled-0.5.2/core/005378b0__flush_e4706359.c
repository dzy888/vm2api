// 005378b0 flush

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::flush */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::flush(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  ulonglong *******pppppppuVar8;
  ulonglong ******ppppppuVar9;
  ulonglong *******pppppppuVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong extraout_RDX;
  undefined1 (*pauVar15) [16];
  ulonglong *******pppppppuVar16;
  longlong lVar17;
  int iVar18;
  ulonglong ******ppppppuVar19;
  ulonglong ******ppppppuVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  ulonglong uVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 local_168;
  undefined1 *puStack_160;
  ulonglong *******local_158;
  code *pcStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_124;
  longlong local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong ******local_e8;
  ulonglong ******ppppppuStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong *******local_c0;
  ulonglong *******local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong *******local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  (*(code *)PTR_now_00799478)();
  iVar18 = (int)(uint)local_b8 >> 0xd;
  iVar14 = iVar18 + -1;
  iVar13 = 0;
  if (iVar18 < 1) {
    iVar13 = (1U - iVar18) / 400 + 1;
    iVar14 = iVar14 + iVar13 * 400;
    iVar13 = iVar13 * -0x23ab1;
  }
  local_118 = (ulonglong *******)
              (((ulonglong)puStack_b0 & 0xffffffff) / 1000000 +
              ((longlong)
               (int)(((((uint)local_b8 >> 4 & 0x1ff) + iVar13) - iVar14 / 100) +
                     (iVar14 * 0x5b5 >> 2) + (iVar14 / 100 >> 2) + -0xaf93b) * 0x15180 +
              ((ulonglong)local_b8 >> 0x20)) * 1000);
  if ((longlong)local_118 < 1) {
    local_118 = (ulonglong *******)0x0;
  }
  if (*(char *)(param_1 + 0x90) != '\x01') {
    return (undefined1 *)0x0;
  }
  ppppppuVar19 = *(ulonglong *******)(param_1 + 0x80);
  lVar12 = param_1 + 0x18;
  local_e8 = *(ulonglong *******)(param_1 + 0x30);
  lVar21 = *(longlong *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  local_c0 = local_118;
  local_b8 = (ulonglong *******)ppppppuVar19;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::
  <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::_closure_0_>
            (lVar12,&local_118,&local_b8);
  lVar17 = *(longlong *)(param_1 + 0x60);
  local_c8 = param_1;
  if (lVar17 == 0) {
    lVar17 = 0;
    if (*(ulonglong *******)(param_1 + 0x30) == local_e8) goto LAB_00537aba;
LAB_00537abf:
    *(undefined1 *)(local_c8 + 0x90) = 1;
  }
  else {
    pauVar23 = (undefined1 (*) [16])*puVar1;
    auVar3 = *pauVar23;
    uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
    pauVar15 = pauVar23 + 1;
    local_120 = lVar12;
    local_d8 = lVar21;
    do {
      if ((short)uVar22 == 0) {
        do {
          auVar3 = *pauVar15;
          pauVar23 = pauVar23 + -0x58;
          pauVar15 = pauVar15 + 1;
          uVar22 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar22 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      plVar2 = (longlong *)((longlong)pauVar23 + (ulonglong)uVar5 * -0x58 + -8);
      ppppppuVar9 = (ulonglong ******)((longlong)local_c0 - *plVar2);
      if (local_c0 < (ulonglong *******)*plVar2) {
        ppppppuVar9 = (ulonglong ******)0x0;
      }
      if (ppppppuVar19 < ppppppuVar9) {
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>
        ::erase(puVar1,(ulonglong)uVar5 * -0x58 + (longlong)pauVar23);
      }
      uVar22 = uVar22 - 1 & uVar22;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = *(longlong *)(local_c8 + 0x60);
    lVar21 = local_d8;
    lVar12 = local_120;
    if (*(ulonglong *******)(local_c8 + 0x30) != local_e8) goto LAB_00537abf;
LAB_00537aba:
    if (lVar17 != lVar21) goto LAB_00537abf;
  }
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_158,lVar12);
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_118,puVar1);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  lStack_70 = lStack_100;
  local_88 = local_118;
  plStack_80 = plStack_110;
  local_58 = 2;
  local_b8 = local_158;
  puStack_b0 = pcStack_150;
  local_a8 = (undefined4)local_148;
  uStack_a4 = local_148._4_4_;
  uStack_a0 = uStack_140;
  uStack_9c = uStack_13c;
  local_98 = local_138;
  uStack_94 = uStack_134;
  uStack_90 = uStack_130;
  uStack_8c = uStack_12c;
  local_d8 = *(undefined8 *)(local_c8 + 8);
  local_d0 = *(undefined8 *)(local_c8 + 0x10);
  lVar12 = extraout_RDX;
  pppppppuVar10 = (ulonglong *******)(*(code *)PTR_parent_00799418)();
  if ((pppppppuVar10 == (ulonglong *******)0x0) || (lVar12 == 0)) {
LAB_00537b95:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcStack_150 = (code *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcStack_150 == (code *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_158 = (ulonglong *******)&DAT_00000080;
    *pcStack_150 = (code)0x7b;
    local_148 = (ulonglong *******)0x1;
    local_168 = (ulonglong *******)&local_158;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (&local_168,1,&anon_ec7f14c74815bf4c93b295cfd0665412_78_llvm_7806621557641746444,7);
    if (local_158 == local_148) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
    }
    pcStack_150[(longlong)local_148] = (code)0x3a;
    local_148 = (ulonglong *******)((longlong)local_148 + 1);
    lVar12 = (*(code *)PTR_fmt_00799cc8)();
    uVar24 = 10 - lVar12;
    if ((ulonglong)((longlong)local_158 - (longlong)local_148) < uVar24) {
      uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,uVar24,1,1);
LAB_00537c42:
      puVar11 = (undefined1 *)local_148;
      (*(code *)PTR_memcpy_00799008)(uVar25,uVar24);
    }
    else {
      puVar11 = (undefined1 *)local_148;
      uVar25 = extraout_XMM0_Qa;
      if (lVar12 != 10) goto LAB_00537c42;
    }
    local_148 = (ulonglong *******)(puVar11 + uVar24);
    if (local_158 == local_148) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_158,local_158,1,1,1);
    }
    pcStack_150[(longlong)local_148] = (code)0x2c;
    local_148 = (ulonglong *******)((longlong)local_148 + 1);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (&local_168);
    if (local_158 == local_148) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
    }
    pppppppuVar10 = local_b8;
    pcStack_150[(longlong)local_148] = (code)0x3a;
    local_148 = (ulonglong *******)((longlong)local_148 + 1);
    local_120 = CONCAT44(uStack_9c,uStack_a0);
    local_e8 = *local_b8;
    ppppppuStack_e0 = local_b8[1];
    if (local_158 == local_148) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
    }
    pcStack_150[(longlong)local_148] = (code)0x7b;
    local_148 = (ulonglong *******)((longlong)local_148 + 1);
    if (local_120 == 0) {
      if (local_158 == local_148) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
      }
      pcStack_150[(longlong)local_148] = (code)0x7d;
      local_148 = (ulonglong *******)((longlong)local_148 + 1);
      ppppppuVar19 = local_168[2];
      pppppppuVar10 = local_168;
      if (*local_168 == ppppppuVar19) goto LAB_00538ac3;
    }
    else {
      pauVar15 = (undefined1 (*) [16])(pppppppuVar10 + 2);
      auVar3._8_8_ = ppppppuStack_e0;
      auVar3._0_8_ = local_e8;
      uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 7) & 1) << 8 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0xf) & 1) << 9 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x17) & 1) << 10 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x1f) & 1) << 0xb |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x27) & 1) << 0xc |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x2f) & 1) << 0xd |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x37) & 1) << 0xe |
                              (ushort)(byte)((ulonglong)ppppppuStack_e0 >> 0x3f) << 0xf);
      if ((short)uVar22 == 0) {
        do {
          auVar3 = *pauVar15;
          pppppppuVar10 = pppppppuVar10 + -0x70;
          pauVar15 = pauVar15 + 1;
          uVar22 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar22 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar24 = (ulonglong)uVar5;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,local_148,pppppppuVar10[uVar24 * -7 + -6],
                 pppppppuVar10[uVar24 * -7 + -5]);
      if (local_158 == local_148) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
      }
      pcStack_150[(longlong)local_148] = (code)0x3a;
      local_148 = (ulonglong *******)((longlong)local_148 + 1);
      if (local_158 == local_148) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_158,local_148,1,1,1);
      }
      pcStack_150[(longlong)local_148] = (code)0x7b;
      local_148 = (ulonglong *******)((longlong)local_148 + 1);
      local_e8 = pppppppuVar10[uVar24 * -7 + -3];
      ppppppuVar19 = pppppppuVar10[uVar24 * -7 + -2];
      local_118 = (ulonglong *******)CONCAT62((int6)((ulonglong)local_118 >> 0x10),0x200);
      plStack_110 = &local_168;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,local_148,
                 anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10);
      pppppppuVar16 = local_168;
      ppppppuVar9 = local_168[2];
      if (*local_168 == ppppppuVar9) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar9,1,1,1);
        ppppppuVar9 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar9) = 0x3a;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar9 + 1U);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,(ulonglong ******)((longlong)ppppppuVar9 + 1U),local_e8,ppppppuVar19);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_118,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,0xc,
                 pppppppuVar10 + uVar24 * -7 + -1);
      if ((((ulonglong)local_118 & 1) == 0) && (local_118._1_1_ != '\0')) {
        plVar2 = (longlong *)*plStack_110;
        lVar12 = plVar2[2];
        if (*plVar2 == lVar12) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar12,1,1,1);
          lVar12 = plVar2[2];
        }
        *(undefined1 *)(plVar2[1] + lVar12) = 0x7d;
        plVar2[2] = lVar12 + 1;
      }
      local_120 = local_120 + -1;
      if (local_120 != 0) {
        uVar22 = uVar22 - 1 & uVar22;
        do {
          pppppppuVar16 = local_168;
          if ((short)uVar22 == 0) {
            do {
              auVar3 = *pauVar15;
              pppppppuVar10 = pppppppuVar10 + -0x70;
              pauVar15 = pauVar15 + 1;
              uVar22 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar22 == 0);
          }
          local_e8 = (ulonglong ******)(ulonglong)uVar22;
          uVar5 = 0;
          for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar24 = (ulonglong)uVar5;
          ppppppuVar19 = pppppppuVar10[uVar24 * -7 + -6];
          ppppppuVar9 = pppppppuVar10[uVar24 * -7 + -5];
          ppppppuVar20 = local_168[2];
          if (*local_168 == ppppppuVar20) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar20,1,1,1);
            ppppppuVar20 = pppppppuVar16[2];
          }
          *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar20) = 0x2c;
          pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar20 + 1U);
          serde_json[dc3825464c436029]::ser::format_escaped_str::
          <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                    (&local_168,(ulonglong ******)((longlong)ppppppuVar20 + 1U),ppppppuVar19,
                     ppppppuVar9);
          pppppppuVar16 = local_168;
          ppppppuVar19 = local_168[2];
          if (*local_168 == ppppppuVar19) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
            ppppppuVar19 = pppppppuVar16[2];
          }
          pppppppuVar8 = local_168;
          *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
          pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
          ppppppuVar19 = local_168[2];
          if (*local_168 == ppppppuVar19) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
            ppppppuVar19 = pppppppuVar8[2];
          }
          *(undefined1 *)((longlong)pppppppuVar8[1] + (longlong)ppppppuVar19) = 0x7b;
          pppppppuVar8[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
          ppppppuVar9 = pppppppuVar10[uVar24 * -7 + -3];
          ppppppuVar20 = pppppppuVar10[uVar24 * -7 + -2];
          local_118 = (ulonglong *******)CONCAT62((int6)((ulonglong)local_118 >> 0x10),0x200);
          plStack_110 = &local_168;
          serde_json[dc3825464c436029]::ser::format_escaped_str::
          <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                    (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),
                     anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10);
          pppppppuVar16 = local_168;
          ppppppuVar19 = local_168[2];
          if (*local_168 == ppppppuVar19) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
            ppppppuVar19 = pppppppuVar16[2];
          }
          *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
          pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
          serde_json[dc3825464c436029]::ser::format_escaped_str::
          <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                    (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),ppppppuVar9,
                     ppppppuVar20);
          <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,u64>
                    (&local_118,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,
                     0xc,pppppppuVar10 + uVar24 * -7 + -1);
          if ((((ulonglong)local_118 & 1) == 0) && (local_118._1_1_ != '\0')) {
            plVar2 = (longlong *)*plStack_110;
            lVar12 = plVar2[2];
            if (*plVar2 == lVar12) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar12,1,1,1);
              lVar12 = plVar2[2];
            }
            *(undefined1 *)(plVar2[1] + lVar12) = 0x7d;
            plVar2[2] = lVar12 + 1;
          }
          uVar22 = (uint)local_e8 - 1 & (uint)local_e8;
          local_120 = local_120 + -1;
        } while (local_120 != 0);
      }
      pppppppuVar10 = local_168;
      ppppppuVar19 = local_168[2];
      if (*local_168 == ppppppuVar19) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar10[2];
      }
      *(undefined1 *)((longlong)pppppppuVar10[1] + (longlong)ppppppuVar19) = 0x7d;
      pppppppuVar10[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
      ppppppuVar19 = local_168[2];
      pppppppuVar10 = local_168;
      if (*local_168 == ppppppuVar19) {
LAB_00538ac3:
        pppppppuVar10 = local_168;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar10[2];
      }
    }
    *(undefined1 *)((longlong)pppppppuVar10[1] + (longlong)ppppppuVar19) = 0x2c;
    pppppppuVar10[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),
               anon_ec7f14c74815bf4c93b295cfd0665412_110_llvm_7806621557641746444,9);
    pppppppuVar10 = local_168;
    ppppppuVar19 = local_168[2];
    if (*local_168 == ppppppuVar19) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
      ppppppuVar19 = pppppppuVar10[2];
    }
    pppppppuVar16 = local_168;
    *(undefined1 *)((longlong)pppppppuVar10[1] + (longlong)ppppppuVar19) = 0x3a;
    pppppppuVar10[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
    pppppppuVar10 = local_88;
    local_120 = lStack_70;
    local_e8 = *local_88;
    ppppppuStack_e0 = local_88[1];
    ppppppuVar19 = local_168[2];
    if (*local_168 == ppppppuVar19) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
      ppppppuVar19 = pppppppuVar16[2];
    }
    *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x7b;
    ppppppuVar19 = (ulonglong ******)((longlong)ppppppuVar19 + 1);
    pppppppuVar16[2] = ppppppuVar19;
    if (local_120 == 0) {
      if (*pppppppuVar16 == ppppppuVar19) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pppppppuVar16,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x7d;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
      ppppppuVar19 = local_168[2];
      pppppppuVar16 = local_168;
      if (*local_168 == ppppppuVar19) {
LAB_00538c55:
        pppppppuVar16 = local_168;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar16[2];
      }
LAB_0053870f:
      puVar11 = (undefined1 *)local_148;
      pcVar4 = pcStack_150;
      pppppppuVar8 = local_158;
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x7d;
      pppppppuVar10 = (ulonglong *******)((longlong)ppppppuVar19 + 1);
      pppppppuVar16[2] = (ulonglong ******)pppppppuVar10;
      if (local_158 != (ulonglong *******)0xffffffffffffffff) {
        (*(code *)PTR_new_v4_00799350)();
        pppppppuVar10 = local_158;
        local_168 = local_158;
        puStack_160 = pcStack_150;
        pcStack_150 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                      ::fmt;
        local_158 = (ulonglong *******)&local_168;
        (*(code *)PTR_format_inner_00799048)(pppppppuVar10,&local_158);
        uVar25 = (*(code *)PTR__with_extension_00799bd0)(local_40,local_d0,local_38);
        if (local_48 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
        }
        pcStack_150 = (code *)CONCAT26((short)((ulonglong)pcStack_150 >> 0x30),0x10000000100);
        local_158 = (ulonglong *******)0x180000a0000;
        (*(code *)PTR__open_00799768)(local_108,plStack_110);
        if ((int)local_168 == 1) {
          puVar11 = puStack_160;
LAB_00538869:
          uVar24 = (*(code *)PTR_remove_file_007992f0)();
          uVar25 = extraout_XMM0_Qa_00;
          if (((uVar24 != 0) && (1 < ((uint)uVar24 & 3) - 2)) && ((uVar24 & 3) != 0)) {
            pcStack_150 = (code *)(uVar24 - 1);
            local_158 = (ulonglong *******)CONCAT71(local_158._1_7_,3);
            uVar25 = (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          local_124 = local_168._4_4_;
          puVar11 = (undefined1 *)
                    <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                              (&local_124,pcVar4,puVar11);
          if ((puVar11 != (undefined1 *)0x0) ||
             (puVar11 = (undefined1 *)(*(code *)PTR_sync_data_00799770)(),
             puVar11 != (undefined1 *)0x0)) {
            (*(code *)PTR_close_00799030)();
            goto LAB_00538869;
          }
          (*(code *)PTR_close_00799030)();
          puVar11 = (undefined1 *)(*(code *)PTR_rename_00799778)(local_d0,local_d8);
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = (undefined1 *)
                      (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Qa_01,0x180);
            pppppppuVar10 = local_118;
            uVar25 = extraout_XMM0_Qa_03;
            if (puVar11 == (undefined1 *)0x0) {
              if (local_118 != (ulonglong *******)0x0) {
                uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_03,1);
              }
              if (pppppppuVar8 != (ulonglong *******)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                pppppppuVar10 = pppppppuVar8;
              }
              *(undefined1 *)(local_c8 + 0x90) = 0;
              *(ulonglong ********)(local_c8 + 0x88) = local_c0;
              <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_b8,pppppppuVar10);
              puVar11 = (undefined1 *)0x0;
              goto LAB_005388e7;
            }
          }
          else {
            uVar24 = (*(code *)PTR_remove_file_007992f0)();
            uVar25 = extraout_XMM0_Qa_02;
            if (((uVar24 != 0) && (1 < ((uint)uVar24 & 3) - 2)) && ((uVar24 & 3) != 0)) {
              pcStack_150 = (code *)(uVar24 - 1);
              local_158 = (ulonglong *******)CONCAT71(local_158._1_7_,3);
              uVar25 = (*(code *)PTR_drop_00799040)();
            }
          }
        }
        pppppppuVar10 = local_118;
        if (local_118 != (ulonglong *******)0x0) {
          uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
        }
        if (pppppppuVar8 != (ulonglong *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
          pppppppuVar10 = pppppppuVar8;
        }
        goto LAB_005388d2;
      }
    }
    else {
      pauVar15 = (undefined1 (*) [16])(pppppppuVar10 + 2);
      auVar7._8_8_ = ppppppuStack_e0;
      auVar7._0_8_ = local_e8;
      uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 7) & 1) << 8 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0xf) & 1) << 9 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x17) & 1) << 10 |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x1f) & 1) << 0xb |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x27) & 1) << 0xc |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x2f) & 1) << 0xd |
                               (ushort)((byte)((ulonglong)ppppppuStack_e0 >> 0x37) & 1) << 0xe |
                              (ushort)(byte)((ulonglong)ppppppuStack_e0 >> 0x3f) << 0xf);
      if ((short)uVar22 == 0) {
        do {
          auVar3 = *pauVar15;
          pppppppuVar10 = pppppppuVar10 + -0xb0;
          pauVar15 = pauVar15 + 1;
          uVar22 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar22 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar22; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar24 = (ulonglong)uVar5;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,ppppppuVar19,pppppppuVar10[uVar24 * -0xb + -10],
                 pppppppuVar10[uVar24 * -0xb + -9]);
      ppppppuVar19 = pppppppuVar16[2];
      if (*pppppppuVar16 == ppppppuVar19) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pppppppuVar16,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
      ppppppuVar19 = (ulonglong ******)((longlong)ppppppuVar19 + 1);
      pppppppuVar16[2] = ppppppuVar19;
      if (*pppppppuVar16 == ppppppuVar19) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pppppppuVar16,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x7b;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
      local_118 = (ulonglong *******)((ulonglong)local_118 & 0xffffffffffffff00);
      ppppppuVar9 = pppppppuVar10[uVar24 * -0xb + -7];
      local_e8 = pppppppuVar10[uVar24 * -0xb + -6];
      plStack_110 = &local_168;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),
                 anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10);
      pppppppuVar16 = local_168;
      ppppppuVar19 = local_168[2];
      if (*local_168 == ppppppuVar19) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
        ppppppuVar19 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),ppppppuVar9,local_e8);
      pppppppuVar16 = local_168;
      ppppppuVar19 = pppppppuVar10[uVar24 * -0xb + -4];
      local_e8 = pppppppuVar10[uVar24 * -0xb + -3];
      ppppppuVar9 = local_168[2];
      if (*local_168 == ppppppuVar9) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar9,1,1,1);
        ppppppuVar9 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar9) = 0x2c;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar9 + 1U);
      local_118._0_2_ = CONCAT11(2,(char)local_118);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,(ulonglong ******)((longlong)ppppppuVar9 + 1U),
                 anon_ec7f14c74815bf4c93b295cfd0665412_53_llvm_7806621557641746444,0xf);
      pppppppuVar16 = local_168;
      ppppppuVar9 = local_168[2];
      if (*local_168 == ppppppuVar9) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar9,1,1,1);
        ppppppuVar9 = pppppppuVar16[2];
      }
      *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar9) = 0x3a;
      pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar9 + 1U);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_168,(ulonglong ******)((longlong)ppppppuVar9 + 1U),ppppppuVar19,local_e8);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>(&local_118,"turn_seq",8,pppppppuVar10 + uVar24 * -0xb + -2);
      if ((char)local_118 == '\0') {
        <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
        ::serialize_entry::<str,u64>
                  (&local_118,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,0xc,
                   pppppppuVar10 + uVar24 * -0xb + -1);
        if ((((ulonglong)local_118 & 1) == 0) && (local_118._1_1_ != '\0')) {
          plVar2 = (longlong *)*plStack_110;
          lVar12 = plVar2[2];
          if (*plVar2 == lVar12) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar12,1,1,1);
            lVar12 = plVar2[2];
          }
          *(undefined1 *)(plVar2[1] + lVar12) = 0x7d;
          plVar2[2] = lVar12 + 1;
        }
        local_120 = local_120 + -1;
        if (local_120 != 0) {
          uVar22 = uVar22 - 1 & uVar22;
          do {
            pppppppuVar16 = local_168;
            if ((short)uVar22 == 0) {
              do {
                auVar3 = *pauVar15;
                pppppppuVar10 = pppppppuVar10 + -0xb0;
                pauVar15 = pauVar15 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar22 == 0);
            }
            local_e8 = (ulonglong ******)(ulonglong)uVar22;
            uVar5 = 0;
            for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar24 = (ulonglong)uVar5;
            ppppppuVar19 = pppppppuVar10[uVar24 * -0xb + -10];
            ppppppuVar9 = pppppppuVar10[uVar24 * -0xb + -9];
            ppppppuVar20 = local_168[2];
            if (*local_168 == ppppppuVar20) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar20,1,1,1);
              ppppppuVar20 = pppppppuVar16[2];
            }
            *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar20) = 0x2c;
            pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar20 + 1U);
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (&local_168,(ulonglong ******)((longlong)ppppppuVar20 + 1U),ppppppuVar19,
                       ppppppuVar9);
            pppppppuVar16 = local_168;
            ppppppuVar19 = local_168[2];
            if (*local_168 == ppppppuVar19) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
              ppppppuVar19 = pppppppuVar16[2];
            }
            pppppppuVar8 = local_168;
            *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
            pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
            ppppppuVar19 = local_168[2];
            if (*local_168 == ppppppuVar19) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
              ppppppuVar19 = pppppppuVar8[2];
            }
            *(undefined1 *)((longlong)pppppppuVar8[1] + (longlong)ppppppuVar19) = 0x7b;
            pppppppuVar8[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
            local_118 = (ulonglong *******)((ulonglong)local_118 & 0xffffffffffffff00);
            ppppppuVar9 = pppppppuVar10[uVar24 * -0xb + -7];
            ppppppuVar20 = pppppppuVar10[uVar24 * -0xb + -6];
            plStack_110 = &local_168;
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),
                       anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10);
            pppppppuVar16 = local_168;
            ppppppuVar19 = local_168[2];
            if (*local_168 == ppppppuVar19) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
              ppppppuVar19 = pppppppuVar16[2];
            }
            *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar19) = 0x3a;
            pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1U);
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (&local_168,(ulonglong ******)((longlong)ppppppuVar19 + 1U),ppppppuVar9,
                       ppppppuVar20);
            pppppppuVar16 = local_168;
            ppppppuVar19 = pppppppuVar10[uVar24 * -0xb + -4];
            ppppppuVar9 = pppppppuVar10[uVar24 * -0xb + -3];
            ppppppuVar20 = local_168[2];
            if (*local_168 == ppppppuVar20) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar20,1,1,1);
              ppppppuVar20 = pppppppuVar16[2];
            }
            *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar20) = 0x2c;
            pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar20 + 1U);
            local_118._0_2_ = CONCAT11(2,(char)local_118);
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (&local_168,(ulonglong ******)((longlong)ppppppuVar20 + 1U),
                       anon_ec7f14c74815bf4c93b295cfd0665412_53_llvm_7806621557641746444,0xf);
            pppppppuVar16 = local_168;
            ppppppuVar20 = local_168[2];
            if (*local_168 == ppppppuVar20) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar20,1,1,1);
              ppppppuVar20 = pppppppuVar16[2];
            }
            *(undefined1 *)((longlong)pppppppuVar16[1] + (longlong)ppppppuVar20) = 0x3a;
            pppppppuVar16[2] = (ulonglong ******)((longlong)ppppppuVar20 + 1U);
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (&local_168,(ulonglong ******)((longlong)ppppppuVar20 + 1U),ppppppuVar19,
                       ppppppuVar9);
            <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>(&local_118,"turn_seq",8,pppppppuVar10 + uVar24 * -0xb + -2)
            ;
            if ((char)local_118 != '\0') goto LAB_00538324;
            <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>
                      (&local_118,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,
                       0xc,pppppppuVar10 + uVar24 * -0xb + -1);
            if ((((ulonglong)local_118 & 1) == 0) && (local_118._1_1_ != '\0')) {
              plVar2 = (longlong *)*plStack_110;
              lVar12 = plVar2[2];
              if (*plVar2 == lVar12) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar12,1,1,1);
                lVar12 = plVar2[2];
              }
              *(undefined1 *)(plVar2[1] + lVar12) = 0x7d;
              plVar2[2] = lVar12 + 1;
            }
            uVar22 = (uint)local_e8 - 1 & (uint)local_e8;
            local_120 = local_120 + -1;
          } while (local_120 != 0);
        }
        pppppppuVar10 = local_168;
        ppppppuVar19 = local_168[2];
        if (*local_168 == ppppppuVar19) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(local_168,ppppppuVar19,1,1,1);
          ppppppuVar19 = pppppppuVar10[2];
        }
        *(undefined1 *)((longlong)pppppppuVar10[1] + (longlong)ppppppuVar19) = 0x7d;
        pppppppuVar10[2] = (ulonglong ******)((longlong)ppppppuVar19 + 1);
        ppppppuVar19 = local_168[2];
        pppppppuVar16 = local_168;
        if (*local_168 == ppppppuVar19) goto LAB_00538c55;
        goto LAB_0053870f;
      }
LAB_00538324:
      uVar25 = (*(code *)PTR_invalid_raw_value_00799700)();
      pppppppuVar10 = local_158;
      if (local_158 != (ulonglong *******)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
      }
    }
    puVar11 = (undefined1 *)(*(code *)PTR_from_007993d8)();
  }
  else {
    local_118 = (ulonglong *******)CONCAT35(local_118._5_3_,0x1000001ff);
    puVar11 = (undefined1 *)(*(code *)PTR__create_00799410)();
    if (puVar11 == (undefined1 *)0x0) goto LAB_00537b95;
  }
LAB_005388d2:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_b8,pppppppuVar10);
LAB_005388e7:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_88);
  return puVar11;
}


