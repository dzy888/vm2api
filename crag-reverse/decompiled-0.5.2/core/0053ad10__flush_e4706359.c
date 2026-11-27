// 0053ad10 flush

/* <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::flush */

longlong *** __rustcall
<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::flush(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong **pplVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  longlong ***ppplVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong extraout_RDX;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  longlong **local_1a0;
  undefined8 local_198;
  longlong ***ppplStack_190;
  byte local_188;
  char cStack_187;
  undefined2 uStack_186;
  uint uStack_184;
  longlong ***ppplStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  longlong ***ppplStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong ***ppplStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong ***ppplStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  longlong ***ppplStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 200) != '\x01') {
    return (longlong ***)0x0;
  }
  prune_to_bounds();
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_60,param_1 + 0x18);
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_f8,param_1 + 0x48);
  local_138 = (undefined4)local_d8;
  uStack_134 = local_d8._4_4_;
  uStack_130 = (undefined4)uStack_d0;
  uStack_12c = uStack_d0._4_4_;
  local_148 = local_e8;
  uStack_140 = (undefined4)uStack_e0;
  uStack_13c = uStack_e0._4_4_;
  local_158 = local_f8;
  ppplStack_150 = ppplStack_f0;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_188,param_1 + 0x78);
  local_78 = local_168;
  uStack_70 = uStack_160;
  local_88 = local_178;
  uStack_80 = uStack_170;
  ppplStack_90 = ppplStack_180;
  local_68 = 1;
  local_f8 = local_60;
  ppplStack_f0 = (longlong ***)uStack_58;
  local_e8 = local_50;
  uStack_e0 = uStack_48;
  local_d8 = local_40;
  uStack_d0 = uStack_38;
  local_c8 = local_158;
  ppplStack_c0 = ppplStack_150;
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  local_a8 = local_138;
  uStack_a4 = uStack_134;
  uStack_a0 = uStack_130;
  uStack_9c = uStack_12c;
  local_120 = *(undefined8 *)(param_1 + 8);
  local_128 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = extraout_RDX;
  lVar5 = (*(code *)PTR_parent_00799418)();
  if ((lVar5 == 0) || (lVar7 == 0)) {
LAB_0053ae69:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    ppplVar6 = (longlong ***)(*(code *)PTR___rust_alloc_00799000)();
    if (ppplVar6 == (longlong ***)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_158 = (longlong *)&DAT_00000080;
    local_1a0 = &local_158;
    *(undefined1 *)ppplVar6 = 0x7b;
    local_148 = 1;
    local_198 = (longlong *)CONCAT62(local_198._2_6_,0x200);
    ppplStack_190 = &local_1a0;
    ppplStack_150 = ppplVar6;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (ppplStack_190,1,&anon_ec7f14c74815bf4c93b295cfd0665412_78_llvm_7806621557641746444,7)
    ;
    pplVar2 = local_1a0;
    plVar12 = local_1a0[2];
    if (*local_1a0 == plVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_1a0,plVar12,1,1,1);
      plVar12 = pplVar2[2];
    }
    *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x3a;
    pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
    pplVar2 = local_1a0;
    lVar7 = (*(code *)PTR_fmt_00799cc8)();
    uVar14 = 10 - lVar7;
    plVar12 = pplVar2[2];
    if ((ulonglong)((longlong)*pplVar2 - (longlong)plVar12) < uVar14) {
      uVar16 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,uVar14,1,1);
      plVar12 = pplVar2[2];
LAB_0053af29:
      (*(code *)PTR_memcpy_00799008)(uVar16,uVar14);
    }
    else {
      uVar16 = extraout_XMM0_Qa;
      if (lVar7 != 10) goto LAB_0053af29;
    }
    pplVar2[2] = (longlong *)((longlong)plVar12 + uVar14);
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::
            <std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>>
                      (&local_198,
                       &anon_ec7f14c74815bf4c93b295cfd0665412_119_llvm_7806621557641746444,&local_f8
                      );
    ppplVar6 = ppplStack_190;
    uVar16 = extraout_XMM0_Qa_00;
    if (lVar7 == 0) {
      if ((char)local_198 != '\0') {
        uVar16 = (*(code *)PTR_invalid_raw_value_00799700)();
        goto LAB_0053b188;
      }
      if (local_198._1_1_ != '\x01') {
        pplVar2 = *ppplStack_190;
        plVar12 = pplVar2[2];
        if (*pplVar2 == plVar12) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
          plVar12 = pplVar2[2];
        }
        *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x2c;
        pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
      }
      local_198._0_2_ = CONCAT11(2,(char)local_198);
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                ();
      pplVar2 = *ppplVar6;
      plVar12 = pplVar2[2];
      if (*pplVar2 == plVar12) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
        plVar12 = pplVar2[2];
      }
      plVar15 = local_c8;
      *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x3a;
      pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
      lVar7 = CONCAT44(uStack_ac,uStack_b0);
      local_118 = *local_c8;
      uStack_110 = local_c8[1];
      pplVar2 = *ppplVar6;
      plVar12 = pplVar2[2];
      if (*pplVar2 == plVar12) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
        plVar12 = pplVar2[2];
      }
      *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x7b;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
      pplVar2[2] = plVar12;
      if (lVar7 != 0) {
        pauVar13 = (undefined1 (*) [16])(plVar15 + 2);
        auVar1._8_8_ = uStack_110;
        auVar1._0_8_ = local_118;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)((byte)(uStack_110 >> 7) & 1) << 8 |
                                 (ushort)((byte)(uStack_110 >> 0xf) & 1) << 9 |
                                 (ushort)((byte)(uStack_110 >> 0x17) & 1) << 10 |
                                 (ushort)((byte)(uStack_110 >> 0x1f) & 1) << 0xb |
                                 (ushort)((byte)(uStack_110 >> 0x27) & 1) << 0xc |
                                 (ushort)((byte)(uStack_110 >> 0x2f) & 1) << 0xd |
                                 (ushort)((byte)(uStack_110 >> 0x37) & 1) << 0xe |
                                (ushort)(byte)(uStack_110 >> 0x3f) << 0xf);
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar13;
            plVar15 = plVar15 + -0x80;
            pauVar13 = pauVar13 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar10 == 0);
        }
        iVar9 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        uVar4 = iVar9 << 6;
        local_108 = lVar7;
        serde_json[dc3825464c436029]::ser::format_escaped_str::
        <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                  (ppplVar6,plVar12,*(undefined8 *)((longlong)plVar15 + (-0x38 - (ulonglong)uVar4)),
                   *(undefined8 *)((longlong)plVar15 + (-0x30 - (ulonglong)uVar4)));
        plVar12 = pplVar2[2];
        if (*pplVar2 == plVar12) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
          plVar12 = pplVar2[2];
        }
        *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x3a;
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        pplVar2[2] = plVar12;
        local_118 = *(longlong *)((longlong)plVar15 + (-0x28 - (ulonglong)uVar4));
        if (*pplVar2 == plVar12) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
          plVar12 = pplVar2[2];
        }
        *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x7b;
        pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
        local_188 = 0;
        cStack_187 = '\x01';
        ppplStack_180 = ppplVar6;
        lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                          (&local_188,*(undefined1 *)((longlong)plVar15 + (-8 - (ulonglong)uVar4)));
        uVar16 = extraout_XMM0_Qa_01;
        if (lVar7 != 0) goto LAB_0053b188;
        if (local_118 == -1) {
LAB_0053b136:
          if (local_188 == 0) {
            <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>
                      (&local_188,anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,
                       0xc,(undefined1 *)((longlong)plVar15 + (-0x10 - (ulonglong)uVar4)));
            if (((local_188 & 1) == 0) && (cStack_187 != '\0')) {
              <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                        (*ppplStack_180,
                         &anon_ec7f14c74815bf4c93b295cfd0665412_167_llvm_7806621557641746444,1);
            }
            local_108 = local_108 + -1;
            if (local_108 != 0) {
              uVar10 = uVar10 - 1 & uVar10;
              do {
                if ((short)uVar10 == 0) {
                  do {
                    auVar1 = *pauVar13;
                    plVar15 = plVar15 + -0x80;
                    pauVar13 = pauVar13 + 1;
                    uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                  } while (uVar10 == 0);
                }
                local_100 = (ulonglong)uVar10;
                iVar9 = 0;
                for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  iVar9 = iVar9 + 1;
                }
                uVar10 = iVar9 << 6;
                uVar16 = *(undefined8 *)((longlong)plVar15 + (-0x38 - (ulonglong)uVar10));
                local_118 = *(longlong *)((longlong)plVar15 + (-0x30 - (ulonglong)uVar10));
                pplVar2 = *ppplVar6;
                plVar12 = pplVar2[2];
                if (*pplVar2 == plVar12) {
                  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
                  plVar12 = pplVar2[2];
                }
                *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x2c;
                pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
                serde_json[dc3825464c436029]::ser::format_escaped_str::
                <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                          (ppplVar6,(longlong *)((longlong)plVar12 + 1),uVar16,local_118);
                pplVar2 = *ppplVar6;
                plVar12 = pplVar2[2];
                if (*pplVar2 == plVar12) {
                  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
                  plVar12 = pplVar2[2];
                }
                *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x3a;
                pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
                lVar7 = *(longlong *)((longlong)plVar15 + (-0x28 - (ulonglong)uVar10));
                pplVar2 = *ppplVar6;
                plVar12 = pplVar2[2];
                if (*pplVar2 == plVar12) {
                  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                  ::<alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
                  plVar12 = pplVar2[2];
                }
                *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x7b;
                pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
                local_188 = 0;
                cStack_187 = '\x01';
                ppplStack_180 = ppplVar6;
                lVar5 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                        ::serialize_field::<craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                                  (&local_188,
                                   *(undefined1 *)((longlong)plVar15 + (-8 - (ulonglong)uVar10)));
                uVar16 = extraout_XMM0_Qa_07;
                if (lVar5 != 0) goto LAB_0053b188;
                if (lVar7 != -1) {
                  if (local_188 != 0) goto LAB_0053b141;
                  <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::
                  <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                            (&local_188,
                             anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10,
                             (undefined1 *)((longlong)plVar15 + (-0x28 - (ulonglong)uVar10)));
                }
                if (local_188 != 0) goto LAB_0053b141;
                <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,u64>
                          (&local_188,
                           anon_ec7f14c74815bf4c93b295cfd0665412_59_llvm_7806621557641746444,0xc,
                           (undefined1 *)((longlong)plVar15 + (-0x10 - (ulonglong)uVar10)));
                if (((local_188 & 1) == 0) && (cStack_187 != '\0')) {
                  pplVar2 = *ppplStack_180;
                  plVar12 = pplVar2[2];
                  if (*pplVar2 == plVar12) {
                    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                              (pplVar2,plVar12,1,1,1);
                    plVar12 = pplVar2[2];
                  }
                  *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x7d;
                  pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
                }
                uVar10 = (uint)local_100 - 1 & (uint)local_100;
                local_108 = local_108 + -1;
              } while (local_108 != 0);
            }
            <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                      (*ppplVar6,&anon_ec7f14c74815bf4c93b295cfd0665412_167_llvm_7806621557641746444
                       ,1);
            goto LAB_0053b164;
          }
        }
        else if (local_188 == 0) {
          <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::
          <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                    (&local_188,anon_ec7f14c74815bf4c93b295cfd0665412_54_llvm_7806621557641746444,10
                     ,(undefined1 *)((longlong)plVar15 + (-0x28 - (ulonglong)uVar4)));
          goto LAB_0053b136;
        }
LAB_0053b141:
        uVar16 = (*(code *)PTR_invalid_raw_value_00799700)();
        goto LAB_0053b188;
      }
      if (*pplVar2 == plVar12) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(pplVar2,plVar12,1,1,1);
        plVar12 = pplVar2[2];
      }
      *(undefined1 *)((longlong)pplVar2[1] + (longlong)plVar12) = 0x7d;
      pplVar2[2] = (longlong *)((longlong)plVar12 + 1);
LAB_0053b164:
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::
              <std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>>
                        (&local_198,"text",local_98);
      uVar16 = extraout_XMM0_Qa_02;
      if (lVar7 != 0) goto LAB_0053b188;
      if ((((ulonglong)local_198 & 1) == 0) && (local_198._1_1_ != '\0')) {
        <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                  (*ppplStack_190,
                   &anon_ec7f14c74815bf4c93b295cfd0665412_167_llvm_7806621557641746444,1);
      }
      uVar16 = local_148;
      ppplVar6 = ppplStack_150;
      plVar12 = local_158;
      if (local_158 != (longlong *)0xffffffffffffffff) {
        (*(code *)PTR_new_v4_00799350)();
        plVar15 = local_158;
        local_198 = local_158;
        ppplStack_190 = ppplStack_150;
        ppplStack_150 =
             (longlong ***)
             <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_158 = &local_198;
        (*(code *)PTR_format_inner_00799048)(plVar15,&local_158);
        <std[6c98fd8553dbae28]::path::Path>::with_extension::
        <alloc[12e961f32105355]::string::String>(&local_188,local_120,local_128,&local_60);
        ppplStack_150 =
             (longlong ***)CONCAT26((short)((ulonglong)ppplStack_150 >> 0x30),0x10000000100);
        local_158 = (longlong *)0x180000a0000;
        (*(code *)PTR__open_00799768)(local_178,ppplStack_180);
        if ((int)local_198 == 1) {
          ppplVar6 = ppplStack_190;
LAB_0053b37c:
          uVar14 = (*(code *)PTR_remove_file_007992f0)();
          uVar16 = extraout_XMM0_Qa_03;
          if (((uVar14 != 0) && (1 < ((uint)uVar14 & 3) - 2)) && ((uVar14 & 3) != 0)) {
            ppplStack_150 = (longlong ***)(uVar14 - 1);
            local_158 = (longlong *)CONCAT71(local_158._1_7_,3);
            uVar16 = (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          local_1a0 = (longlong **)CONCAT44(local_1a0._4_4_,local_198._4_4_);
          ppplVar6 = (longlong ***)
                     <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::
                     write_all(&local_1a0,ppplVar6,uVar16);
          if ((ppplVar6 != (longlong ***)0x0) ||
             (ppplVar6 = (longlong ***)(*(code *)PTR_sync_data_00799770)(),
             ppplVar6 != (longlong ***)0x0)) {
            (*(code *)PTR_close_00799030)();
            goto LAB_0053b37c;
          }
          (*(code *)PTR_close_00799030)();
          ppplVar6 = (longlong ***)(*(code *)PTR_rename_00799778)(local_128,local_120);
          if (ppplVar6 == (longlong ***)0x0) {
            ppplVar6 = (longlong ***)
                       (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Qa_04,0x180);
            uVar16 = extraout_XMM0_Qa_06;
            if (ppplVar6 == (longlong ***)0x0) {
              if (CONCAT44(uStack_184,CONCAT22(uStack_186,CONCAT11(cStack_187,local_188))) != 0) {
                uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_06,1);
              }
              if (plVar12 != (longlong *)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
              }
              *(undefined1 *)(param_1 + 200) = 0;
              (*(code *)PTR_now_00799478)();
              iVar11 = CONCAT22(uStack_186,CONCAT11(cStack_187,local_188)) >> 0xd;
              iVar9 = iVar11 + -1;
              iVar8 = 0;
              if (iVar11 < 1) {
                iVar8 = (1U - iVar11) / 400 + 1;
                iVar9 = iVar9 + iVar8 * 400;
                iVar8 = iVar8 * -0x23ab1;
              }
              lVar5 = ((ulonglong)ppplStack_180 & 0xffffffff) / 1000000 +
                      ((longlong)
                       (int)(((((CONCAT11(cStack_187,local_188) & 0x1ff0) >> 4) + iVar8) -
                             iVar9 / 100) + (iVar9 * 0x5b5 >> 2) + (iVar9 / 100 >> 2) + -0xaf93b) *
                       0x15180 + (ulonglong)uStack_184) * 1000;
              lVar7 = 0;
              if (0 < lVar5) {
                lVar7 = lVar5;
              }
              *(longlong *)(param_1 + 0xc0) = lVar7;
              <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_f8);
              <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_c8);
              ppplVar6 = (longlong ***)0x0;
              goto LAB_0053b1c8;
            }
          }
          else {
            uVar14 = (*(code *)PTR_remove_file_007992f0)();
            uVar16 = extraout_XMM0_Qa_05;
            if (((uVar14 != 0) && (1 < ((uint)uVar14 & 3) - 2)) && ((uVar14 & 3) != 0)) {
              ppplStack_150 = (longlong ***)(uVar14 - 1);
              local_158 = (longlong *)CONCAT71(local_158._1_7_,3);
              uVar16 = (*(code *)PTR_drop_00799040)();
            }
          }
        }
        if (CONCAT44(uStack_184,CONCAT22(uStack_186,CONCAT11(cStack_187,local_188))) != 0) {
          uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
        if (plVar12 != (longlong *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
        goto LAB_0053b1ae;
      }
    }
    else {
LAB_0053b188:
      if (local_158 != (longlong *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
      }
    }
    ppplVar6 = (longlong ***)(*(code *)PTR_from_007993d8)();
  }
  else {
    local_188 = 0xff;
    cStack_187 = '\x01';
    uStack_186 = 0;
    uStack_184 = CONCAT31(uStack_184._1_3_,1);
    ppplVar6 = (longlong ***)(*(code *)PTR__create_00799410)();
    if (ppplVar6 == (longlong ***)0x0) goto LAB_0053ae69;
  }
LAB_0053b1ae:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_f8);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_c8);
LAB_0053b1c8:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(local_98);
  return ppplVar6;
}


