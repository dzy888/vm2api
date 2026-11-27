// 0052e360 persist

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::persist */

longlong ** __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::persist(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong extraout_RDX;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  byte bVar19;
  ulonglong uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 local_148;
  longlong **pplStack_140;
  undefined8 local_138;
  longlong **local_130;
  longlong **local_128;
  longlong local_120;
  undefined1 *puStack_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong **pplStack_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e0;
  undefined4 local_d8;
  longlong **local_d0;
  longlong *local_c8;
  longlong **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong **local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong **pplStack_60;
  longlong *local_58;
  longlong local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(longlong *)(param_1 + 0x78) == -1) {
    local_120 = -1;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
  }
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_108,param_1 + 0x30);
  local_38 = 2;
  local_50 = local_120;
  puStack_48 = puStack_118;
  local_40 = local_110;
  local_68 = local_108;
  pplStack_60 = pplStack_100;
  local_58 = local_f8;
  uVar21 = *(undefined8 *)(param_1 + 8);
  local_b0 = *(undefined8 *)(param_1 + 0x10);
  lVar11 = extraout_RDX;
  lVar8 = (*(code *)PTR_parent_00799418)();
  if ((lVar8 != 0) && (lVar11 != 0)) {
    local_108 = (longlong *)CONCAT35(local_108._5_3_,0x1000001ff);
    pplVar9 = (longlong **)(*(code *)PTR__create_00799410)();
    if (pplVar9 != (longlong **)0x0) goto LAB_0052e579;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar10 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar10 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0053049b:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_120 = 0x80;
  local_a8 = &local_120;
  *puVar10 = 0x7b;
  local_110 = 1;
  local_d8 = CONCAT22(local_d8._2_2_,0x200);
  local_d0 = &local_a8;
  puStack_118 = puVar10;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (local_d0,1,&anon_ec7f14c74815bf4c93b295cfd0665412_78_llvm_7806621557641746444,7);
  plVar15 = local_a8;
  lVar8 = local_a8[2];
  if (*local_a8 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar8,1,1,1);
    lVar8 = plVar15[2];
  }
  *(undefined1 *)(plVar15[1] + lVar8) = 0x3a;
  plVar15[2] = lVar8 + 1;
  plVar15 = local_a8;
  lVar11 = (*(code *)PTR_fmt_00799cc8)();
  uVar20 = 10 - lVar11;
  lVar8 = plVar15[2];
  if ((ulonglong)(*plVar15 - lVar8) < uVar20) {
    uVar22 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,uVar20,1,1);
    lVar8 = plVar15[2];
LAB_0052e500:
    (*(code *)PTR_memcpy_00799008)(uVar22,uVar20);
  }
  else {
    uVar22 = extraout_XMM0_Qa;
    if (lVar11 != 10) goto LAB_0052e500;
  }
  plVar15[2] = lVar8 + uVar20;
  <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
  ::serialize_entry::
  <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
            (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_79_llvm_7806621557641746444,0x16,
             &local_50);
  plVar15 = local_58;
  pplVar13 = pplStack_60;
  pplVar9 = local_d0;
  if ((char)local_d8 == '\0') {
    if (local_d8._1_1_ != '\x01') {
      plVar14 = *local_d0;
      lVar8 = plVar14[2];
      if (*plVar14 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
        lVar8 = plVar14[2];
      }
      *(undefined1 *)(plVar14[1] + lVar8) = 0x2c;
      plVar14[2] = lVar8 + 1;
    }
    local_d8._0_2_ = CONCAT11(2,(char)local_d8);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9);
    plVar14 = *pplVar9;
    lVar8 = plVar14[2];
    if (*plVar14 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
      lVar8 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar8) = 0x3a;
    plVar14[2] = lVar8 + 1;
    plVar14 = *pplVar9;
    lVar8 = plVar14[2];
    if (*plVar14 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
      lVar8 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar8) = 0x5b;
    lVar8 = lVar8 + 1;
    plVar14[2] = lVar8;
    local_b8 = uVar21;
    if (plVar15 != (longlong *)0x0) {
      local_88 = pplVar13 + (longlong)plVar15 * 0x50;
      bVar5 = true;
      local_c0 = pplVar9;
LAB_0052e667:
      pplVar9 = local_c0;
      plVar15 = *local_c0;
      if (!bVar5) {
        lVar8 = plVar15[2];
        if (*plVar15 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
          lVar8 = plVar15[2];
        }
        *(undefined1 *)(plVar15[1] + lVar8) = 0x2c;
        plVar15[2] = lVar8 + 1;
        plVar15 = *pplVar9;
      }
      local_70 = pplVar13[0x2b];
      local_c8 = pplVar13[0x38];
      local_78 = pplVar13[0x3b];
      local_80 = pplVar13[0x43];
      lVar8 = plVar15[2];
      if (*plVar15 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
        lVar8 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar8) = 0x7b;
      plVar15[2] = lVar8 + 1;
      plVar15 = pplVar13[1];
      plVar14 = pplVar13[2];
      local_148 = (longlong *)CONCAT62((int6)((ulonglong)local_148 >> 0x10),0x200);
      pplStack_140 = pplVar9;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_53_llvm_7806621557641746444
                 ,0xf);
      plVar12 = *local_c0;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (local_c0,lVar8 + 1,plVar15,plVar14);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10,
                 pplVar13 + 0x22);
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444,0x16,
                 pplVar13 + 0x25);
      pplVar9 = pplStack_140;
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      plVar15 = pplVar13[4];
      plVar14 = pplVar13[5];
      if (local_148._1_1_ != '\x01') {
        plVar12 = *pplStack_140;
        lVar8 = plVar12[2];
        if (*plVar12 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
          lVar8 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
        plVar12[2] = lVar8 + 1;
      }
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      plVar15 = pplVar13[7];
      plVar14 = pplVar13[8];
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
      plVar12[2] = lVar8 + 1;
      local_148._0_2_ = CONCAT11(2,(byte)local_148);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_39_llvm_7806621557641746444
                 ,0xe);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_56_llvm_7806621557641746444,0x11,
                 pplVar13 + 0x28);
      pplVar9 = pplStack_140;
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      plVar15 = pplVar13[10];
      plVar14 = pplVar13[0xb];
      if (local_148._1_1_ != '\x01') {
        plVar12 = *pplStack_140;
        lVar8 = plVar12[2];
        if (*plVar12 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
          lVar8 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
        plVar12[2] = lVar8 + 1;
      }
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      plVar15 = pplVar13[0xd];
      plVar14 = pplVar13[0xe];
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
      plVar12[2] = lVar8 + 1;
      local_148._0_2_ = CONCAT11(2,(byte)local_148);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_58_llvm_7806621557641746444
                 ,10);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,0xc,
                 pplVar13 + 0x4c);
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_60_llvm_7806621557641746444,10,
                 pplVar13 + 0x4d);
      pplVar9 = pplStack_140;
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      bVar19 = *(byte *)((longlong)pplVar13 + 0x27a);
      if (local_148._1_1_ != '\x01') {
        plVar15 = *pplStack_140;
        lVar8 = plVar15[2];
        if (*plVar15 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
          lVar8 = plVar15[2];
        }
        *(undefined1 *)(plVar15[1] + lVar8) = 0x2c;
        plVar15[2] = lVar8 + 1;
      }
      local_148._0_2_ = CONCAT11(2,(byte)local_148);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9);
      plVar15 = *pplVar9;
      lVar8 = plVar15[2];
      if (*plVar15 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
        lVar8 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar8) = 0x3a;
      plVar15[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,
                 (&PTR_anon_ec7f14c74815bf4c93b295cfd0665412_30_llvm_7806621557641746444_0078da38)
                 [bVar19],*(undefined8 *)(&DAT_0018cde0 + (ulonglong)bVar19 * 8));
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_62_llvm_7806621557641746444,0xd,
                 pplVar13 + 0x4e);
      pplVar9 = pplStack_140;
      if ((byte)local_148 != '\0') goto LAB_005300b2;
      plVar15 = pplVar13[0x10];
      plVar14 = pplVar13[0x11];
      if (local_148._1_1_ != '\x01') {
        plVar12 = *pplStack_140;
        lVar8 = plVar12[2];
        if (*plVar12 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
          lVar8 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
        plVar12[2] = lVar8 + 1;
      }
      local_148._0_2_ = CONCAT11(2,(byte)local_148);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      lVar8 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                        (&local_148,
                         &anon_ec7f14c74815bf4c93b295cfd0665412_64_llvm_7806621557641746444,7,
                         pplVar13[0x13],pplVar13[0x14]);
      uVar21 = extraout_XMM0_Qa_00;
      if (lVar8 == 0) {
        lVar8 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::
                <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                          (&local_148,
                           &anon_ec7f14c74815bf4c93b295cfd0665412_65_llvm_7806621557641746444,5,
                           pplVar13[0x16],pplVar13[0x17]);
        pplVar9 = pplStack_140;
        uVar21 = extraout_XMM0_Qa_01;
        if (lVar8 == 0) {
          if ((byte)local_148 != '\0') goto LAB_005300b2;
          if (local_148._1_1_ != '\x01') {
            plVar15 = *pplStack_140;
            lVar8 = plVar15[2];
            if (*plVar15 == lVar8) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
              lVar8 = plVar15[2];
            }
            *(undefined1 *)(plVar15[1] + lVar8) = 0x2c;
            plVar15[2] = lVar8 + 1;
          }
          local_148._0_2_ = CONCAT11(2,(byte)local_148);
          serde_json[dc3825464c436029]::ser::format_escaped_str::
          <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                    (pplVar9);
          plVar15 = *pplVar9;
          lVar8 = plVar15[2];
          if (*plVar15 == lVar8) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
            lVar8 = plVar15[2];
          }
          *(undefined1 *)(plVar15[1] + lVar8) = 0x3a;
          plVar15[2] = lVar8 + 1;
          plVar15 = pplVar13[0x46];
          plVar14 = pplVar13[0x49];
          local_98 = *plVar15;
          uStack_90 = plVar15[1];
          local_e0 = *pplVar9;
          lVar8 = local_e0[2];
          if (*local_e0 == lVar8) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(local_e0,lVar8,1,1,1);
            lVar8 = local_e0[2];
          }
          *(undefined1 *)(local_e0[1] + lVar8) = 0x7b;
          lVar8 = lVar8 + 1;
          local_e0[2] = lVar8;
          local_128 = pplVar9;
          if (plVar14 != (longlong *)0x0) {
            pauVar17 = (undefined1 (*) [16])(plVar15 + 2);
            auVar1._8_8_ = uStack_90;
            auVar1._0_8_ = local_98;
            uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                     (ushort)((byte)(uStack_90 >> 7) & 1) << 8 |
                                     (ushort)((byte)(uStack_90 >> 0xf) & 1) << 9 |
                                     (ushort)((byte)(uStack_90 >> 0x17) & 1) << 10 |
                                     (ushort)((byte)(uStack_90 >> 0x1f) & 1) << 0xb |
                                     (ushort)((byte)(uStack_90 >> 0x27) & 1) << 0xc |
                                     (ushort)((byte)(uStack_90 >> 0x2f) & 1) << 0xd |
                                     (ushort)((byte)(uStack_90 >> 0x37) & 1) << 0xe |
                                    (ushort)(byte)(uStack_90 >> 0x3f) << 0xf);
            if ((short)uVar18 == 0) {
              do {
                auVar1 = *pauVar17;
                plVar15 = plVar15 + -0x40;
                pauVar17 = pauVar17 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar18 == 0);
            }
            iVar4 = 0;
            for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              iVar4 = iVar4 + 1;
            }
            lVar8 = (longlong)plVar15 - (ulonglong)(uint)(iVar4 << 5);
            local_98 = *(longlong *)(lVar8 + -8);
            local_a0 = plVar14;
            serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (pplVar9,lVar8,*(undefined8 *)(lVar8 + -0x18),*(undefined8 *)(lVar8 + -0x10));
            uVar18 = uVar18 - 1 & uVar18;
            plVar14 = local_e0;
            do {
              lVar8 = plVar14[2];
              if (*plVar14 == lVar8) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
                lVar8 = plVar14[2];
              }
              *(undefined1 *)(plVar14[1] + lVar8) = 0x3a;
              plVar14[2] = lVar8 + 1;
              lVar11 = (*(code *)PTR_fmt_00799cd0)();
              uVar20 = 0x14 - lVar11;
              lVar8 = plVar14[2];
              if ((ulonglong)(*plVar14 - lVar8) < uVar20) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,uVar20,1,1);
                lVar8 = local_e0[2];
LAB_0052ed56:
                (*(code *)PTR_memcpy_00799008)();
                plVar14 = local_e0;
              }
              else if (lVar11 != 0x14) goto LAB_0052ed56;
              plVar12 = (longlong *)((longlong)local_a0 + -1);
              plVar14[2] = lVar8 + uVar20;
              if (plVar12 == (longlong *)0x0) goto LAB_0052ee97;
              if ((short)uVar18 == 0) {
                do {
                  auVar1 = *pauVar17;
                  plVar15 = plVar15 + -0x40;
                  pauVar17 = pauVar17 + 1;
                  uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar18 == 0);
              }
              iVar4 = 0;
              for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                iVar4 = iVar4 + 1;
              }
              uVar7 = iVar4 << 5;
              uVar21 = *(undefined8 *)((longlong)plVar15 + (-0x18 - (ulonglong)uVar7));
              uVar22 = *(undefined8 *)((longlong)plVar15 + (-0x10 - (ulonglong)uVar7));
              local_98 = *(longlong *)((longlong)plVar15 + (-8 - (ulonglong)uVar7));
              lVar8 = plVar14[2];
              local_a0 = plVar12;
              if (*plVar14 == lVar8) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
                lVar8 = plVar14[2];
              }
              uVar18 = uVar18 - 1 & uVar18;
              *(undefined1 *)(plVar14[1] + lVar8) = 0x2c;
              plVar14[2] = lVar8 + 1;
              serde_json[dc3825464c436029]::ser::format_escaped_str::
              <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                        (local_128,lVar8 + 1,uVar21,uVar22);
            } while( true );
          }
          plVar14 = local_e0;
          if (*local_e0 == lVar8) goto LAB_0052fb98;
          goto LAB_0052eeb8;
        }
      }
      goto LAB_0052e553;
    }
    goto LAB_005300cf;
  }
  uVar21 = (*(code *)PTR_invalid_raw_value_00799700)();
LAB_0052e553:
  lVar8 = local_120;
  if (local_120 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
LAB_0052e56d:
  pplVar9 = (longlong **)(*(code *)PTR_from_007993d8)();
LAB_0052e579:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::resume::PersistedSessions>(&local_68,lVar8);
  return pplVar9;
LAB_0052ee97:
  lVar8 = plVar14[2];
  pplVar9 = local_128;
  if (*plVar14 == lVar8) {
LAB_0052fb98:
    pplVar9 = local_128;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
    lVar8 = local_e0[2];
    plVar14 = local_e0;
  }
LAB_0052eeb8:
  *(undefined1 *)(plVar14[1] + lVar8) = 0x7d;
  plVar14[2] = lVar8 + 1;
  plVar15 = pplVar13[0x19];
  plVar14 = pplVar13[0x1a];
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
  plVar12[2] = lVar8 + 1;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_67_llvm_7806621557641746444,
             0x12);
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
  plVar12[2] = lVar8 + 1;
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x5b;
  lVar8 = lVar8 + 1;
  plVar12[2] = lVar8;
  if (plVar14 != (longlong *)0x0) {
    lVar8 = <craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::
            <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                      (plVar15,pplVar9);
    pplVar9 = local_128;
    uVar21 = extraout_XMM0_Qa_02;
    if (lVar8 != 0) goto LAB_0052e553;
    lVar8 = (longlong)plVar14 * 0x48;
    while( true ) {
      lVar8 = lVar8 + -0x48;
      plVar15 = plVar15 + 9;
      plVar12 = *pplVar9;
      if (lVar8 == 0) break;
      lVar11 = plVar12[2];
      if (*plVar12 == lVar11) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar11,1,1,1);
        lVar11 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar11) = 0x2c;
      plVar12[2] = lVar11 + 1;
      lVar11 = <craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary_as_serde_core[48776c27239fa21f]::ser::Serialize>
               ::serialize::
               <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                         (plVar15,pplVar9);
      uVar21 = extraout_XMM0_Qa_03;
      if (lVar11 != 0) goto LAB_0052e553;
    }
    lVar8 = plVar12[2];
  }
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x5d;
  plVar12[2] = lVar8 + 1;
  if (local_70 != (longlong *)0xffffffffffffffff) {
    plVar15 = *pplVar9;
    lVar8 = plVar15[2];
    if (*plVar15 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
      lVar8 = plVar15[2];
    }
    *(undefined1 *)(plVar15[1] + lVar8) = 0x2c;
    plVar15[2] = lVar8 + 1;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_68_llvm_7806621557641746444,
               10);
    plVar15 = *pplVar9;
    lVar8 = plVar15[2];
    if (*plVar15 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
      lVar8 = plVar15[2];
    }
    *(undefined1 *)(plVar15[1] + lVar8) = 0x3a;
    plVar15[2] = lVar8 + 1;
    if (pplVar13[0x2b] == (longlong *)0xffffffffffffffff) {
      plVar15 = *pplVar9;
      lVar8 = plVar15[2];
      if ((ulonglong)(*plVar15 - lVar8) < 4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,4,1,1);
        lVar8 = plVar15[2];
      }
      *(undefined4 *)(plVar15[1] + lVar8) = 0x6c6c756e;
      lVar8 = lVar8 + 4;
    }
    else {
      plVar15 = *pplVar9;
      lVar8 = plVar15[2];
      if (*plVar15 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
        lVar8 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar8) = 0x7b;
      plVar15[2] = lVar8 + 1;
      local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffffffff00);
      plVar15 = pplVar13[0x2c];
      plVar14 = pplVar13[0x2d];
      pplStack_100 = pplVar9;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444
                 ,0x16);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      plVar15 = pplVar13[0x2f];
      plVar14 = pplVar13[0x30];
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_38_llvm_7806621557641746444
                 ,0xc);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      plVar15 = pplVar13[0x32];
      plVar14 = pplVar13[0x33];
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
      plVar12[2] = lVar8 + 1;
      local_108._0_2_ = CONCAT11(2,(char)local_108);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_39_llvm_7806621557641746444
                 ,0xe);
      plVar12 = *pplVar9;
      lVar8 = plVar12[2];
      if (*plVar12 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
        lVar8 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
      plVar12[2] = lVar8 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pplVar9,lVar8 + 1,plVar15,plVar14);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_108,anon_ec7f14c74815bf4c93b295cfd0665412_40_llvm_7806621557641746444,10,
                 pplVar13 + 0x34);
      if ((char)local_108 != '\0') {
LAB_005300bd:
        uVar21 = (*(code *)PTR_invalid_raw_value_00799700)();
        goto LAB_0052e553;
      }
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_108,anon_ec7f14c74815bf4c93b295cfd0665412_41_llvm_7806621557641746444,0xb,
                 pplVar13 + 0x35);
      if ((char)local_108 != '\0') goto LAB_005300bd;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_108,anon_ec7f14c74815bf4c93b295cfd0665412_42_llvm_7806621557641746444,10,
                 pplVar13 + 0x36);
      if ((char)local_108 != '\0') goto LAB_005300bd;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,bool>
                (&local_108,anon_ec7f14c74815bf4c93b295cfd0665412_43_llvm_7806621557641746444,0xe,
                 pplVar13 + 0x37);
      pplVar9 = local_128;
      if ((((ulonglong)local_108 & 1) != 0) || (local_108._1_1_ == '\0')) goto LAB_0052f2e5;
      plVar15 = *pplStack_100;
      lVar8 = plVar15[2];
      if (*plVar15 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
        lVar8 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar8) = 0x7d;
      lVar8 = lVar8 + 1;
    }
    plVar15[2] = lVar8;
  }
LAB_0052f2e5:
  plVar15 = *pplVar9;
  lVar8 = plVar15[2];
  if (*plVar15 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
    lVar8 = plVar15[2];
  }
  *(undefined1 *)(plVar15[1] + lVar8) = 0x2c;
  plVar15[2] = lVar8 + 1;
  local_148._0_2_ = CONCAT11(2,(byte)local_148);
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_69_llvm_7806621557641746444);
  plVar15 = *pplVar9;
  lVar8 = plVar15[2];
  if (*plVar15 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
    lVar8 = plVar15[2];
  }
  *(undefined1 *)(plVar15[1] + lVar8) = 0x3a;
  plVar15[2] = lVar8 + 1;
  plVar15 = pplVar13[0x1e];
  if (plVar15 == (longlong *)0x0) {
    lVar8 = 0;
    plVar14 = (longlong *)0x0;
LAB_0052f386:
    lVar11 = 0;
  }
  else {
    plVar14 = pplVar13[0x1b];
    plVar12 = (longlong *)0x0;
    if (plVar14 <= pplVar13[0x1d]) {
      plVar12 = plVar14;
    }
    lVar8 = (longlong)pplVar13[0x1d] - (longlong)plVar12;
    lVar11 = (longlong)plVar15 - ((longlong)plVar14 - lVar8);
    if (plVar15 < (longlong *)((longlong)plVar14 - lVar8) || lVar11 == 0) {
      plVar14 = (longlong *)((longlong)plVar15 + lVar8);
      goto LAB_0052f386;
    }
  }
  local_f8 = pplVar13[0x1c];
  local_108 = local_f8 + lVar8 * 3;
  pplStack_100 = (longlong **)(local_f8 + (longlong)plVar14 * 3);
  local_f0 = local_f8 + lVar11 * 3;
  plVar15 = *local_128;
  lVar16 = plVar15[2];
  if (*plVar15 == lVar16) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar16,1,1,1);
    lVar16 = plVar15[2];
  }
  pplVar9 = local_128;
  *(undefined1 *)(plVar15[1] + lVar16) = 0x5b;
  lVar16 = lVar16 + 1;
  plVar15[2] = lVar16;
  uVar6 = 1;
  if (((ulonglong)((longlong)plVar14 * 0x18 + lVar8 * -0x18) >> 3) * -0x5555555555555555 == 0 &&
      lVar11 == 0) {
    if (*plVar15 == lVar16) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar16,1,1,1);
      lVar16 = plVar15[2];
    }
    *(undefined1 *)(plVar15[1] + lVar16) = 0x5d;
    plVar15[2] = lVar16 + 1;
    uVar6 = 0;
  }
  local_138 = (undefined8 *)((ulonglong)CONCAT61((int6)((ulonglong)local_138 >> 0x10),uVar6) << 8);
  local_130 = pplVar9;
  lVar8 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::try_fold::
          <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::try_for_each::call<&alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>,<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq<&alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),serde_json[dc3825464c436029]::error::Error>>
                    ();
  pplVar9 = local_128;
  uVar21 = extraout_XMM0_Qa_04;
  if (lVar8 != 0) goto LAB_0052e553;
  if ((char)local_138 == '\x01') {
    (*(code *)PTR_panic_00799338)
              (extraout_XMM0_Qa_04,
               &PTR_anon_dd81358582bfba60c2fc675a0b056dad_4_llvm_5330800135125066393_0078d978);
    goto LAB_0053049b;
  }
  if (local_138._1_1_ != '\0') {
    plVar15 = *local_130;
    lVar8 = plVar15[2];
    if (*plVar15 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
      lVar8 = plVar15[2];
    }
    *(undefined1 *)(plVar15[1] + lVar8) = 0x5d;
    plVar15[2] = lVar8 + 1;
  }
  plVar15 = pplVar13[0x20];
  plVar14 = pplVar13[0x21];
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x2c;
  plVar12[2] = lVar8 + 1;
  local_148._0_2_ = CONCAT11(2,(byte)local_148);
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (pplVar9,lVar8 + 1,anon_ec7f14c74815bf4c93b295cfd0665412_70_llvm_7806621557641746444,9);
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x3a;
  plVar12[2] = lVar8 + 1;
  plVar12 = *pplVar9;
  lVar8 = plVar12[2];
  if (*plVar12 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
    lVar8 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x5b;
  lVar8 = lVar8 + 1;
  plVar12[2] = lVar8;
  if (plVar14 == (longlong *)0x0) {
    if (*plVar12 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
      goto LAB_0052ff62;
    }
  }
  else {
    lVar8 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::
            <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                      (plVar15,pplVar9);
    pplVar9 = local_128;
    uVar21 = extraout_XMM0_Qa_05;
    if (lVar8 != 0) goto LAB_0052e553;
    lVar8 = (longlong)plVar14 * 200;
    while( true ) {
      lVar8 = lVar8 + -200;
      plVar15 = plVar15 + 0x19;
      plVar12 = *pplVar9;
      if (lVar8 == 0) break;
      lVar11 = plVar12[2];
      if (*plVar12 == lVar11) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar11,1,1,1);
        lVar11 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar11) = 0x2c;
      plVar12[2] = lVar11 + 1;
      lVar11 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_serde_core[48776c27239fa21f]::ser::Serialize>
               ::serialize::
               <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                         (plVar15,pplVar9);
      uVar21 = extraout_XMM0_Qa_06;
      if (lVar11 != 0) goto LAB_0052e553;
    }
    lVar8 = plVar12[2];
    if (*plVar12 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar8,1,1,1);
LAB_0052ff62:
      lVar8 = plVar12[2];
    }
  }
  *(undefined1 *)(plVar12[1] + lVar8) = 0x5d;
  plVar12[2] = lVar8 + 1;
  if (local_c8 != (longlong *)0xffffffffffffffff) {
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::
    <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
              (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_71_llvm_7806621557641746444,0xe,
               pplVar13 + 0x38);
    if ((byte)local_148 != '\0') goto LAB_005300b2;
  }
  <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
  ::serialize_entry::<str,bool>
            (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_72_llvm_7806621557641746444,0xb,
             pplVar13 + 0x4f);
  if ((byte)local_148 != '\0') goto LAB_005300b2;
  <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
  ::serialize_entry::<str,bool>
            (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_73_llvm_7806621557641746444,0x17,
             (longlong)pplVar13 + 0x279);
  pplVar9 = pplStack_140;
  plVar15 = local_148;
  bVar19 = (byte)local_148;
  if (local_78 != (longlong *)0xffffffffffffffff) {
    if (((ulonglong)local_148 & 1) != 0) goto LAB_005300b2;
    if (local_148._1_1_ != '\x01') {
      plVar14 = *pplStack_140;
      lVar8 = plVar14[2];
      if (*plVar14 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
        lVar8 = plVar14[2];
      }
      *(undefined1 *)(plVar14[1] + lVar8) = 0x2c;
      plVar14[2] = lVar8 + 1;
    }
    local_148._0_2_ = CONCAT11(2,(byte)local_148);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9);
    plVar14 = *pplVar9;
    lVar8 = plVar14[2];
    if (*plVar14 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
      lVar8 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar8) = 0x3a;
    plVar14[2] = lVar8 + 1;
    if (pplVar13[0x3b] == (longlong *)0xffffffffffffffff) {
      plVar14 = *pplVar9;
      lVar8 = plVar14[2];
      if ((ulonglong)(*plVar14 - lVar8) < 4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,4,1,1);
        lVar8 = plVar14[2];
      }
      *(undefined4 *)(plVar14[1] + lVar8) = 0x6c6c756e;
      plVar14[2] = lVar8 + 4;
      goto joined_r0x0052f933;
    }
    plVar14 = *pplVar9;
    lVar8 = plVar14[2];
    if (*plVar14 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
      lVar8 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar8) = 0x7b;
    plVar14[2] = lVar8 + 1;
    local_138 = (undefined8 *)CONCAT62(local_138._2_6_,0x100);
    local_130 = pplVar9;
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::
    <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
              (&local_138,&anon_ec7f14c74815bf4c93b295cfd0665412_46_llvm_7806621557641746444,7,
               pplVar13 + 0x3e);
    pplVar9 = local_130;
    if ((char)local_138 != '\0') {
LAB_0053037d:
      uVar21 = (*(code *)PTR_invalid_raw_value_00799700)();
      goto LAB_0052e553;
    }
    plVar14 = pplVar13[0x3c];
    plVar12 = pplVar13[0x3d];
    if (local_138._1_1_ != '\x01') {
      <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                (*local_130,&anon_ec7f14c74815bf4c93b295cfd0665412_177_llvm_7806621557641746444,1);
    }
    local_138._0_2_ = CONCAT11(2,(char)local_138);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9);
    plVar2 = *pplVar9;
    lVar8 = plVar2[2];
    if (*plVar2 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar8,1,1,1);
      lVar8 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar8) = 0x3a;
    plVar2[2] = lVar8 + 1;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9,lVar8 + 1,plVar14,plVar12);
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::<str,bool>
              (&local_138,anon_ec7f14c74815bf4c93b295cfd0665412_48_llvm_7806621557641746444,0xe,
               (longlong)pplVar13 + 0x214);
    pplVar9 = local_130;
    if ((char)local_138 != '\0') goto LAB_0053037d;
    if (local_138._1_1_ != '\x01') {
      <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                (*local_130,&anon_ec7f14c74815bf4c93b295cfd0665412_177_llvm_7806621557641746444,1);
    }
    local_138._0_2_ = CONCAT11(2,(char)local_138);
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (pplVar9);
    plVar14 = *pplVar9;
    lVar8 = plVar14[2];
    if (*plVar14 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
      lVar8 = plVar14[2];
    }
    *(undefined1 *)(plVar14[1] + lVar8) = 0x3a;
    plVar14[2] = lVar8 + 1;
    plVar14 = *pplVar9;
    lVar11 = (*(code *)PTR_fmt_00799cc8)();
    uVar20 = 10 - lVar11;
    lVar8 = plVar14[2];
    if ((ulonglong)(*plVar14 - lVar8) < uVar20) {
      uVar21 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,uVar20,1,1);
      lVar8 = plVar14[2];
LAB_0052f8bd:
      (*(code *)PTR_memcpy_00799008)(uVar21,uVar20);
    }
    else {
      uVar21 = extraout_XMM0_Qa_07;
      if (lVar11 != 10) goto LAB_0052f8bd;
    }
    plVar14[2] = lVar8 + uVar20;
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::<str,u64>
              (&local_138,anon_ec7f14c74815bf4c93b295cfd0665412_50_llvm_7806621557641746444,10,
               pplVar13 + 0x41);
    if ((((ulonglong)local_138 & 1) == 0) && (local_138._1_1_ != '\0')) {
      <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                (*local_130,&anon_ec7f14c74815bf4c93b295cfd0665412_167_llvm_7806621557641746444,1);
    }
  }
joined_r0x0052f933:
  if (local_80 != (longlong *)0xffffffffffffffff) {
    if (((ulonglong)plVar15 & 1) != 0) {
LAB_005300b2:
      uVar21 = (*(code *)PTR_invalid_raw_value_00799700)();
      goto LAB_0052e553;
    }
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::
    <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
              (&local_148,anon_ec7f14c74815bf4c93b295cfd0665412_75_llvm_7806621557641746444,0x11,
               pplVar13 + 0x43);
    bVar19 = (byte)local_148;
  }
  if (((bVar19 & 1) == 0) && (local_148._1_1_ != '\0')) {
    plVar15 = *pplStack_140;
    lVar8 = plVar15[2];
    if (*plVar15 == lVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
      lVar8 = plVar15[2];
    }
    *(undefined1 *)(plVar15[1] + lVar8) = 0x7d;
    plVar15[2] = lVar8 + 1;
  }
  pplVar13 = pplVar13 + 0x50;
  bVar5 = false;
  if (pplVar13 == local_88) goto LAB_005300c8;
  goto LAB_0052e667;
LAB_005300c8:
  plVar14 = *local_c0;
  lVar8 = plVar14[2];
  pplVar9 = local_c0;
LAB_005300cf:
  if (*plVar14 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar14,lVar8,1,1,1);
    lVar8 = plVar14[2];
  }
  *(undefined1 *)(plVar14[1] + lVar8) = 0x5d;
  plVar14[2] = lVar8 + 1;
  plVar15 = *pplVar9;
  lVar8 = plVar15[2];
  if (*plVar15 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar15,lVar8,1,1,1);
    lVar8 = plVar15[2];
  }
  uVar21 = local_110;
  puVar10 = puStack_118;
  lVar11 = local_120;
  *(undefined1 *)(plVar15[1] + lVar8) = 0x7d;
  lVar8 = lVar8 + 1;
  plVar15[2] = lVar8;
  if (local_120 != -1) {
    (*(code *)PTR_new_v4_00799350)();
    local_148 = local_108;
    pplStack_140 = pplStack_100;
    local_138 = &local_148;
    local_130 = (longlong **)
                <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    (*(code *)PTR_format_inner_00799048)(local_108,&local_138);
    uVar22 = (*(code *)PTR__with_extension_00799bd0)(pplStack_100,local_b0,local_f8);
    if (local_108 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    local_130 = (longlong **)CONCAT26((short)((ulonglong)local_130 >> 0x30),0x10000000100);
    local_138 = (undefined8 *)0x180000a0000;
    (*(code *)PTR__open_00799768)(local_110,puStack_118);
    if ((int)local_148 == 1) {
      pplVar9 = pplStack_140;
LAB_00530242:
      uVar20 = (*(code *)PTR_remove_file_007992f0)();
      uVar21 = extraout_XMM0_Qa_08;
      if (((uVar20 != 0) && (1 < ((uint)uVar20 & 3) - 2)) && ((uVar20 & 3) != 0)) {
        local_130 = (longlong **)(uVar20 - 1);
        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
        uVar21 = (*(code *)PTR_drop_00799040)();
      }
LAB_0053027d:
      lVar8 = local_120;
      if (local_120 != 0) {
        uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
      }
    }
    else {
      local_d8 = local_148._4_4_;
      pplVar9 = (longlong **)
                <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                          (&local_d8,puVar10,uVar21);
      if ((pplVar9 != (longlong **)0x0) ||
         (pplVar9 = (longlong **)(*(code *)PTR_sync_data_00799770)(), pplVar9 != (longlong **)0x0))
      {
        (*(code *)PTR_close_00799030)();
        goto LAB_00530242;
      }
      (*(code *)PTR_close_00799030)();
      pplVar9 = (longlong **)(*(code *)PTR_rename_00799778)(local_b0,local_b8);
      if (pplVar9 != (longlong **)0x0) {
        uVar20 = (*(code *)PTR_remove_file_007992f0)();
        uVar21 = extraout_XMM0_Qa_10;
        if (((uVar20 != 0) && (1 < ((uint)uVar20 & 3) - 2)) && ((uVar20 & 3) != 0)) {
          local_130 = (longlong **)(uVar20 - 1);
          local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
          uVar21 = (*(code *)PTR_drop_00799040)();
        }
        goto LAB_0053027d;
      }
      pplVar9 = (longlong **)(*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Qa_09,0x180);
      lVar8 = local_120;
      uVar21 = extraout_XMM0_Qa_11;
      if (pplVar9 != (longlong **)0x0) goto LAB_0053027d;
      if (local_120 != 0) {
        uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_11,1);
      }
      pplVar9 = (longlong **)0x0;
    }
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
      lVar8 = lVar11;
    }
    goto LAB_0052e579;
  }
  goto LAB_0052e56d;
}


