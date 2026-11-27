// 00534c20 persist

/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::persist */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::persist(longlong param_1)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong extraout_RDX;
  longlong *plVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined8 local_d8;
  code *local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_58,param_1 + 0x18);
  local_40 = 1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar9 = extraout_RDX;
  lVar8 = (*(code *)PTR_parent_00799418)();
  if ((lVar8 != 0) && (lVar9 != 0)) {
    local_80 = 0x1ff;
    uStack_7c = CONCAT31(uStack_7c._1_3_,1);
    lVar9 = (*(code *)PTR__create_00799410)();
    uVar14 = extraout_XMM0_Da;
    if (lVar9 != 0) goto LAB_00535738;
  }
  local_90 = uVar4;
  local_88 = uVar3;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_c0 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (local_c0 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_c8 = 0x80;
  plVar12 = &local_c8;
  *local_c0 = 0x7b;
  local_b8 = 1;
  local_a8 = plVar12;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (&local_a8,1,&anon_ec7f14c74815bf4c93b295cfd0665412_78_llvm_7806621557641746444,7);
  if (local_c8 == local_b8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_b8,1,1,1);
  }
  local_c0[local_b8] = 0x3a;
  local_b8 = local_b8 + 1;
  lVar9 = (*(code *)PTR_fmt_00799cc8)();
  uVar13 = 10 - lVar9;
  if ((ulonglong)(local_c8 - local_b8) < uVar13) {
    uVar14 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_b8,uVar13,1,1);
LAB_00534d54:
    lVar8 = local_b8;
    (*(code *)PTR_memcpy_00799008)(uVar14,uVar13);
  }
  else {
    lVar8 = local_b8;
    uVar14 = extraout_XMM0_Da_00;
    if (lVar9 != 10) goto LAB_00534d54;
  }
  lVar10 = local_48;
  lVar9 = local_50;
  local_b8 = lVar8 + uVar13;
  if (local_c8 == local_b8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_c8,1,1,1);
  }
  local_c0[local_b8] = 0x2c;
  local_b8 = local_b8 + 1;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (&local_a8);
  if (local_c8 == local_b8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_b8,1,1,1);
  }
  local_c0[local_b8] = 0x3a;
  local_b8 = local_b8 + 1;
  if (local_c8 == local_b8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_b8,1,1,1);
  }
  local_c0[local_b8] = 0x5b;
  local_b8 = local_b8 + 1;
  if (lVar10 == 0) {
    if (local_c8 == local_b8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_b8,1,1,1);
    }
    local_c0[local_b8] = 0x5d;
    lVar9 = local_b8 + 1;
    local_b8 = lVar9;
    if (local_c8 == lVar9) goto LAB_005357d6;
  }
  else {
    local_38 = lVar10 * 0xd8;
    bVar7 = true;
    lVar8 = 0;
    do {
      plVar12 = local_a8;
      if (!bVar7) {
        lVar10 = local_a8[2];
        if (*local_a8 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar10,1,1,1);
          lVar10 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar10) = 0x2c;
        plVar12[2] = lVar10 + 1;
      }
      plVar12 = local_a8;
      lVar10 = local_a8[2];
      if (*local_a8 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x7b;
      plVar12[2] = lVar10 + 1;
      local_d8 = (undefined8 *)((ulonglong)local_d8 & 0xffffffffffffff00);
      local_d0 = (code *)&local_a8;
      uVar3 = *(undefined8 *)(lVar9 + 8 + lVar8);
      uVar4 = *(undefined8 *)(lVar9 + 0x10 + lVar8);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (local_d0,lVar10 + 1,
                 &anon_ec7f14c74815bf4c93b295cfd0665412_89_llvm_7806621557641746444,3);
      plVar12 = local_a8;
      lVar10 = local_a8[2];
      if (*local_a8 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x3a;
      plVar12[2] = lVar10 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_a8,lVar10 + 1,uVar3,uVar4);
      plVar12 = local_a8;
      uVar3 = *(undefined8 *)(lVar9 + 0x20 + lVar8);
      uVar4 = *(undefined8 *)(lVar9 + 0x28 + lVar8);
      lVar10 = local_a8[2];
      if (*local_a8 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x2c;
      plVar12[2] = lVar10 + 1;
      local_d8._0_2_ = CONCAT11(2,(char)local_d8);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_a8,lVar10 + 1,
                 anon_ec7f14c74815bf4c93b295cfd0665412_53_llvm_7806621557641746444,0xf);
      plVar12 = local_a8;
      lVar10 = local_a8[2];
      if (*local_a8 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x3a;
      plVar12[2] = lVar10 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (&local_a8,lVar10 + 1,uVar3,uVar4);
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_d8,&anon_ec7f14c74815bf4c93b295cfd0665412_46_llvm_7806621557641746444,7,
                 lVar9 + lVar8 + 0x60);
      lVar10 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
               ::serialize_field::
               <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                         (&local_d8,
                          &anon_ec7f14c74815bf4c93b295cfd0665412_90_llvm_7806621557641746444,8,
                          *(undefined8 *)(lVar9 + 0x38 + lVar8),
                          *(undefined8 *)(lVar9 + 0x40 + lVar8));
      pcVar5 = local_d0;
      uVar14 = extraout_XMM0_Da_05;
      if (lVar10 != 0) {
LAB_00535712:
        if (local_c8 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
        }
        goto LAB_0053572c;
      }
      if ((char)local_d8 != '\0') {
LAB_00535709:
        uVar14 = (*(code *)PTR_invalid_raw_value_00799700)();
        goto LAB_00535712;
      }
      uVar3 = *(undefined8 *)(lVar9 + 0x50 + lVar8);
      uVar4 = *(undefined8 *)(lVar9 + 0x58 + lVar8);
      if (local_d8._1_1_ != '\x01') {
        plVar12 = *(longlong **)local_d0;
        lVar10 = plVar12[2];
        if (*plVar12 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
          lVar10 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar10) = 0x2c;
        plVar12[2] = lVar10 + 1;
      }
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pcVar5);
      plVar12 = *(longlong **)pcVar5;
      lVar10 = plVar12[2];
      if (*plVar12 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x3a;
      plVar12[2] = lVar10 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pcVar5,lVar10 + 1,uVar3,uVar4);
      bVar1 = *(byte *)(lVar9 + 0xd5 + lVar8);
      plVar12 = *(longlong **)pcVar5;
      lVar10 = plVar12[2];
      if (*plVar12 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x2c;
      plVar12[2] = lVar10 + 1;
      local_d8._0_2_ = CONCAT11(2,(char)local_d8);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pcVar5,lVar10 + 1,
                 &anon_ec7f14c74815bf4c93b295cfd0665412_92_llvm_7806621557641746444,5);
      plVar12 = *(longlong **)pcVar5;
      lVar10 = plVar12[2];
      if (*plVar12 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x3a;
      plVar12[2] = lVar10 + 1;
      uVar13 = (ulonglong)bVar1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pcVar5,lVar10 + 1,
                 (&PTR_anon_ec7f14c74815bf4c93b295cfd0665412_83_llvm_7806621557641746444_0078da90)
                 [uVar13],*(undefined8 *)(&DAT_0018d320 + uVar13 * 8));
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,bool>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_93_llvm_7806621557641746444,0x18,
                 lVar9 + lVar8 + 0xd4);
      if ((char)local_d8 != '\0') goto LAB_00535709;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_94_llvm_7806621557641746444,10,
                 lVar9 + lVar8 + 0x78);
      pcVar5 = local_d0;
      if ((char)local_d8 != '\0') goto LAB_00535709;
      sVar2 = *(short *)(lVar9 + 0xd0 + lVar8);
      if (local_d8._1_1_ != '\x01') {
        plVar12 = *(longlong **)local_d0;
        lVar10 = plVar12[2];
        if (*plVar12 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
          lVar10 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar10) = 0x2c;
        plVar12[2] = lVar10 + 1;
      }
      local_d8._0_2_ = CONCAT11(2,(char)local_d8);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (pcVar5);
      plVar12 = *(longlong **)pcVar5;
      lVar10 = plVar12[2];
      if (*plVar12 == lVar10) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
        lVar10 = plVar12[2];
      }
      *(undefined1 *)(plVar12[1] + lVar10) = 0x3a;
      plVar12[2] = lVar10 + 1;
      plVar12 = *(longlong **)pcVar5;
      if (sVar2 == 1) {
        lVar11 = (*(code *)PTR_fmt_00799cf0)();
        uVar13 = 5 - lVar11;
        lVar10 = plVar12[2];
        if ((ulonglong)(*plVar12 - lVar10) < uVar13) {
          uVar14 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,uVar13,1,1);
          lVar10 = plVar12[2];
LAB_0053542f:
          (*(code *)PTR_memcpy_00799008)(uVar14,uVar13);
        }
        else {
          uVar14 = extraout_XMM0_Da_06;
          if (lVar11 != 5) goto LAB_0053542f;
        }
        plVar12[2] = lVar10 + uVar13;
      }
      else {
        lVar10 = plVar12[2];
        if ((ulonglong)(*plVar12 - lVar10) < 4) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,4,1,1);
          lVar10 = plVar12[2];
        }
        *(undefined4 *)(plVar12[1] + lVar10) = 0x6c6c756e;
        plVar12[2] = lVar10 + 4;
      }
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_96_llvm_7806621557641746444,0x13,
                 lVar9 + lVar8 + 0x90);
      if ((char)local_d8 != '\0') goto LAB_00535709;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_97_llvm_7806621557641746444,0x18,
                 lVar9 + lVar8 + 0xa8);
      if ((char)local_d8 != '\0') goto LAB_00535709;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_98_llvm_7806621557641746444,0xd,
                 lVar9 + lVar8 + 0xc0);
      if ((char)local_d8 != '\0') goto LAB_00535709;
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::<str,u64>
                (&local_d8,anon_ec7f14c74815bf4c93b295cfd0665412_99_llvm_7806621557641746444,0xd,
                 lVar9 + lVar8 + 200);
      if ((((ulonglong)local_d8 & 1) == 0) && (local_d8._1_1_ != '\0')) {
        plVar12 = *(longlong **)local_d0;
        lVar10 = plVar12[2];
        if (*plVar12 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar10,1,1,1);
          lVar10 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar10) = 0x7d;
        plVar12[2] = lVar10 + 1;
      }
      plVar12 = local_a8;
      lVar8 = lVar8 + 0xd8;
      bVar7 = false;
    } while (local_38 != lVar8);
    lVar9 = local_a8[2];
    if (*local_a8 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_a8,lVar9,1,1,1);
      lVar9 = plVar12[2];
    }
    *(undefined1 *)(plVar12[1] + lVar9) = 0x5d;
    plVar12[2] = lVar9 + 1;
    lVar9 = local_a8[2];
    plVar12 = local_a8;
    if (*local_a8 == lVar9) {
LAB_005357d6:
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar12,lVar9,1,1,1);
      lVar9 = plVar12[2];
    }
  }
  puVar6 = local_c0;
  lVar8 = local_c8;
  *(undefined1 *)(plVar12[1] + lVar9) = 0x7d;
  plVar12[2] = lVar9 + 1;
  lVar9 = local_b8;
  if (local_c8 == -1) {
LAB_0053572c:
    lVar9 = (*(code *)PTR_from_007993d8)();
    uVar14 = extraout_XMM0_Da_07;
    goto LAB_00535738;
  }
  (*(code *)PTR_new_v4_00799350)();
  local_a8 = (longlong *)CONCAT44(uStack_7c,local_80);
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
  local_d8 = &local_a8;
  local_d0 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_format_inner_00799048)(local_80,&local_d8);
  uVar14 = (*(code *)PTR__with_extension_00799bd0)(CONCAT44(uStack_74,uStack_78),local_90,local_70);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
  }
  local_d0 = (code *)CONCAT26((short)((ulonglong)local_d0 >> 0x30),0x10000000100);
  local_d8 = (undefined8 *)0x180000a0000;
  (*(code *)PTR__open_00799768)(local_b8,local_c0);
  if ((int)local_a8 == 1) {
    lVar9 = CONCAT44(uStack_9c,uStack_a0);
LAB_00534f6e:
    uVar13 = (*(code *)PTR_remove_file_007992f0)();
    uVar14 = extraout_XMM0_Da_01;
    if (((uVar13 != 0) && (1 < ((uint)uVar13 & 3) - 2)) && ((uVar13 & 3) != 0)) {
      local_d0 = (code *)(uVar13 - 1);
      local_d8 = (undefined8 *)CONCAT71(local_d8._1_7_,3);
      uVar14 = (*(code *)PTR_drop_00799040)();
    }
LAB_00534fa8:
    if (local_c8 != 0) {
      uVar14 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
    }
  }
  else {
    local_ac = local_a8._4_4_;
    lVar9 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                      (&local_ac,puVar6,lVar9);
    if ((lVar9 != 0) || (lVar9 = (*(code *)PTR_sync_data_00799770)(), lVar9 != 0)) {
      (*(code *)PTR_close_00799030)();
      goto LAB_00534f6e;
    }
    (*(code *)PTR_close_00799030)();
    lVar9 = (*(code *)PTR_rename_00799778)(local_90,local_88);
    if (lVar9 != 0) {
      uVar13 = (*(code *)PTR_remove_file_007992f0)();
      uVar14 = extraout_XMM0_Da_03;
      if (((uVar13 != 0) && (1 < ((uint)uVar13 & 3) - 2)) && ((uVar13 & 3) != 0)) {
        local_d0 = (code *)(uVar13 - 1);
        local_d8 = (undefined8 *)CONCAT71(local_d8._1_7_,3);
        uVar14 = (*(code *)PTR_drop_00799040)();
      }
      goto LAB_00534fa8;
    }
    lVar9 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_02,0x180);
    uVar14 = extraout_XMM0_Da_04;
    if (lVar9 != 0) goto LAB_00534fa8;
    if (local_c8 != 0) {
      uVar14 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
    }
    lVar9 = 0;
  }
  if (lVar8 != 0) {
    uVar14 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
  }
LAB_00535738:
  lVar8 = local_50;
  for (lVar10 = local_48 + 1; lVar10 != 1; lVar10 = lVar10 + -1) {
    uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar8);
    lVar8 = lVar8 + 0xd8;
  }
  if (local_58 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
  }
  return lVar9;
}


