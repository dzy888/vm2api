// 004354c0 <<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined **param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  undefined **unaff_R12;
  undefined **ppuVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_120;
  undefined8 local_118;
  undefined **ppuStack_110;
  undefined **local_108;
  undefined8 local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined **local_b8;
  undefined1 local_a9;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined **local_48;
  undefined **local_40;
  undefined1 local_38;
  
  puVar1 = param_2[4];
  puVar3 = param_2[5];
  local_70 = param_1;
  if (puVar3 < puVar1) {
    puVar10 = (uint *)-(longlong)puVar1;
    do {
      puVar3 = puVar3 + 1;
      bVar2 = (param_2[3] + -1)[(longlong)puVar3];
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          ppuVar7 = param_2 + 7;
          *(char *)ppuVar7 = *(char *)ppuVar7 + -1;
          if (*(char *)ppuVar7 != '\0') {
            param_2[5] = puVar3;
            ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,1);
            ppuVar7 = (undefined **)&local_f8;
            bVar2 = (byte)&local_118;
            local_118 = param_2;
            auVar23 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_f8 == '\x01') {
              ppuVar8 = local_f0;
LAB_00435db1:
              ppuVar12 = (undefined **)0xffffffffffffffff;
              local_d0 = ppuVar7;
            }
            else {
              if (local_f8._1_1_ != '\x01') {
                bVar2 = 0x80;
                ppuVar7 = (undefined **)0x0;
                auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789d80,&DAT_00789c78);
                ppuVar8 = auVar23._0_8_;
                goto LAB_00435db1;
              }
              ppuVar7 = (undefined **)&local_f8;
              ppuVar15 = local_118;
              auVar23 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              ppuVar5 = local_e8;
              ppuVar8 = local_f0;
              ppuVar12 = local_f8;
              bVar2 = (byte)ppuVar15;
              if (local_f8 == (undefined **)0xffffffffffffffff) goto LAB_00435db1;
              ppuVar15 = (undefined **)&local_f8;
              ppuVar7 = (undefined **)&local_118;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        ();
              uVar4 = extraout_RDX_03;
              if ((char)local_f8 == '\x01') goto LAB_00435a58;
              if (local_f8._1_1_ == '\x01') {
                ppuVar15 = (undefined **)&local_f8;
                ppuVar7 = local_118;
                deserialize_enum::
                <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                          ();
                uVar4 = extraout_RDX_04;
                if ((char)local_f8 == '\x01') {
LAB_00435a58:
                  auVar23._8_8_ = uVar4;
                  auVar23._0_8_ = local_f0;
                  ppuVar5 = local_f0;
                  goto joined_r0x00435c5c;
                }
                bVar2 = local_f8._1_1_;
                ppuVar11 = (undefined **)(ulonglong)local_f8._1_1_;
                ppuVar15 = (undefined **)&local_f8;
                ppuVar7 = (undefined **)&local_118;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>();
                uVar4 = extraout_RDX_05;
                if ((char)local_f8 == '\x01') goto LAB_00435a58;
                local_88 = ppuVar5;
                if (local_f8._1_1_ == '\x01') {
                  ppuVar15 = (undefined **)&local_f8;
                  ppuVar7 = local_118;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ();
                  auVar23._8_8_ = extraout_RDX_06;
                  auVar23._0_8_ = local_f0;
                  if (local_f8 == (undefined **)0xfffffffffffffffe) goto LAB_00435c59;
                  local_a0 = local_e8;
                  ppuVar11 = local_f0;
                  ppuVar16 = local_f8;
                }
                else {
                  ppuVar16 = (undefined **)0xffffffffffffffff;
                }
                auVar23._8_8_ = ppuVar16;
                auVar23._0_8_ = ppuVar11;
                ppuVar15 = (undefined **)&local_f8;
                ppuVar7 = (undefined **)&local_118;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>();
                auVar24._8_8_ = extraout_RDX_07;
                auVar24._0_8_ = local_f0;
                if ((char)local_f8 == '\x01') {
LAB_00435ff8:
                  uVar4 = auVar24._8_8_;
                  ppuVar5 = auVar24._0_8_;
                  if (0 < (longlong)ppuVar16) {
                    uVar4 = 1;
                    (*(code *)PTR___rust_dealloc_00798fc8)();
                    ppuVar7 = ppuVar16;
                    ppuVar15 = ppuVar11;
                  }
                  auVar23._8_8_ = uVar4;
                  auVar23._0_8_ = ppuVar5;
                  unaff_R12 = ppuVar5;
                  goto joined_r0x00435c5c;
                }
                if (local_f8._1_1_ != '\x01') {
                  ppuVar7 = &PTR_DAT_00789d80;
                  ppuVar15 = (undefined **)0x3;
                  auVar24 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(3,&PTR_DAT_00789d80,&DAT_00789c78);
                  goto LAB_00435ff8;
                }
                ppuVar15 = local_118;
                auVar19 = deserialize_u64::
                          <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    ();
                unaff_R12 = auVar19._8_8_;
                auVar24._8_8_ = unaff_R12;
                auVar24._0_8_ = unaff_R12;
                if ((auVar19._0_8_ & 1) != 0) goto LAB_00435ff8;
                puVar10 = (uint *)local_88;
                local_d0 = local_a0;
              }
              else {
                ppuVar7 = &PTR_DAT_00789d80;
                ppuVar15 = (undefined **)0x1;
                auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(1,&PTR_DAT_00789d80,&DAT_00789c78);
LAB_00435c59:
                ppuVar5 = auVar23._0_8_;
joined_r0x00435c5c:
                if (ppuVar12 != (undefined **)0x0) {
                  uVar4 = 1;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar23._8_8_ = uVar4;
                  auVar23._0_8_ = ppuVar5;
                  ppuVar7 = ppuVar12;
                  ppuVar15 = ppuVar8;
                }
                ppuVar8 = auVar23._0_8_;
                bVar2 = (byte)ppuVar7;
                ppuVar12 = (undefined **)0xffffffffffffffff;
                local_d0 = ppuVar15;
              }
            }
            local_e0 = auVar23._8_8_;
            local_d8 = auVar23._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_f8 = ppuVar12;
            local_f0 = ppuVar8;
            local_e8 = (undefined **)puVar10;
            uStack_c8 = unaff_R12;
            local_c0 = bVar2;
            ppuVar7 = (undefined **)
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::end_seq(param_2);
            goto LAB_00435df7;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            ppuVar8 = (undefined **)
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_invalid_type(param_2,&local_a9,&DAT_0078a680);
            goto LAB_0043606f;
          }
          ppuVar7 = param_2 + 7;
          *(char *)ppuVar7 = *(char *)ppuVar7 + -1;
          if (*(char *)ppuVar7 != '\0') {
            param_2[5] = puVar3;
            local_38 = 1;
            local_a0 = (undefined **)CONCAT71(local_a0._1_7_,0xff);
            local_b8 = (undefined **)0xfffffffffffffffe;
            local_78 = 0;
            local_80 = (undefined **)&DAT_00194660;
            local_40 = param_2;
            ppuVar12 = (undefined **)0xffffffffffffffff;
            goto LAB_004355c0;
          }
        }
        local_f8 = (undefined **)0x18;
        goto LAB_0043552e;
      }
      param_2[5] = puVar3;
    } while (puVar3 != puVar1);
  }
  local_f8 = (undefined **)0x5;
LAB_0043552e:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_f8);
  goto LAB_0043553b;
LAB_004355c0:
  puVar14 = (undefined1 *)&local_f8;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_f8,&local_40);
  puVar13 = (undefined1 *)local_40;
  auVar20._8_8_ = local_48;
  auVar20._0_8_ = local_90;
  auVar19._8_8_ = extraout_RDX;
  auVar19._0_8_ = local_f0;
  if ((char)local_f8 == '\x01') {
    goto LAB_00435a70;
  }
  if (local_f8._1_1_ != '\x01') {
    if (ppuVar12 != (undefined **)0xffffffffffffffff) {
      if ((byte)local_a0 == -1) {
        local_118 = (undefined **)&DAT_00194669;
        ppuStack_110 = (undefined **)&DAT_00000006;
        local_f8 = (undefined **)&local_118;
        local_f0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar14 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        auVar22 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_f8);
        bVar17 = true;
      }
      else {
        bVar17 = local_b8 == (undefined **)0xfffffffffffffffe;
        ppuVar7 = local_b8;
        if (bVar17) {
          ppuVar7 = (undefined **)0xffffffffffffffff;
        }
        puVar10 = (uint *)local_88;
        if ((local_78 & 1) != 0) {
          local_d8 = local_a8;
          uStack_c8 = local_90;
          ppuVar8 = local_98;
          goto LAB_00435ace;
        }
        local_118 = (undefined **)&DAT_0019463c;
        ppuStack_110 = (undefined **)0xc;
        local_f8 = (undefined **)&local_118;
        local_f0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar14 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_f8);
        ppuVar8 = local_a8;
        uVar4 = auVar23._8_8_;
        if ((undefined1 *)((longlong)ppuVar7 + -1) < (undefined1 *)0xfffffffffffffffe) {
          uVar4 = 1;
          (*(code *)PTR___rust_dealloc_00798fc8)();
          puVar14 = (undefined1 *)ppuVar8;
        }
        auVar22._8_8_ = uVar4;
        auVar22._0_8_ = auVar23._0_8_;
      }
      ppuVar7 = local_98;
      auVar20._8_8_ = auVar22._8_8_;
      auVar20._0_8_ = local_90;
      bVar2 = 1;
      ppuVar8 = auVar22._0_8_;
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar12 = (undefined **)0x0;
      }
      else {
        uVar4 = 1;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        auVar20._8_8_ = uVar4;
        auVar20._0_8_ = local_90;
        puVar14 = (undefined1 *)ppuVar7;
      }
      goto LAB_00435a7a;
    }
    local_118 = (undefined **)&DAT_00194660;
    ppuStack_110 = (undefined **)&DAT_00000009;
    local_f8 = (undefined **)&local_118;
    local_f0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar13 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
    auVar21 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                         &local_f8);
LAB_00435c2d:
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._0_8_ = local_90;
    bVar17 = true;
    ppuVar12 = (undefined **)0xffffffffffffffff;
    bVar2 = 0;
    puVar14 = puVar13;
    ppuVar8 = auVar21._0_8_;
    goto LAB_00435a7a;
  }
  ppuVar7 = local_40 + 3;
  local_40[5] = local_40[5] + 1;
  local_40[2] = (undefined *)0x0;
  ppuVar8 = local_40;
  (*(code *)PTR_parse_str_007998f8)();
  auVar19._8_8_ = ppuVar8;
  auVar19._0_8_ = local_f0;
  puVar10 = (uint *)local_f8;
  puVar14 = (undefined1 *)&local_f8;
  if (local_f8 == (undefined **)0x2) goto LAB_00435a70;
  if ((int)local_f8 == 1) {
    puVar10 = &switchD_0043564a::switchdataD_0019413c;
    switch((undefined1 *)((longlong)local_e8 + -6)) {
    case (undefined1 *)0x0:
switchD_0043564a_caseD_0:
      uVar9 = *(ushort *)((longlong)local_f0 + 4) ^ 0x796c | *(uint *)local_f0 ^ 0x696d6166;
      puVar10 = (uint *)(ulonglong)uVar9;
      if (uVar9 == 0) {
        if ((byte)local_a0 != -1) {
          ppuStack_110 = (undefined **)&DAT_00000006;
          local_80 = (undefined **)&DAT_00194669;
          goto LAB_004360c6;
        }
        ppuVar8 = *(undefined ***)((longlong)puVar13 + 0x20);
        ppuVar5 = *(undefined ***)((longlong)puVar13 + 0x28);
        puVar10 = (uint *)ppuVar8;
        if (ppuVar5 < ppuVar8) {
          puVar1 = *ppuVar7;
          puVar10 = (uint *)-(longlong)ppuVar8;
          while( true ) {
            ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
            uVar6 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
            if (0x3a < uVar6) goto LAB_0043610c;
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
            if (ppuVar5 == ppuVar8) goto LAB_00435f87;
          }
          if (uVar6 == 0x3a) {
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
            ppuVar7 = (undefined **)&local_118;
            deserialize_enum::
            <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (ppuVar7,puVar13);
            auVar25._8_8_ = extraout_RDX_01;
            auVar25._0_8_ = ppuStack_110;
            puVar13 = (undefined1 *)ppuVar7;
            if ((char)local_118 != '\x01') {
              local_a0 = (undefined **)CONCAT71(local_a0._1_7_,local_118._1_1_);
              goto LAB_004355c0;
            }
          }
          else {
LAB_0043610c:
            local_f8 = (undefined **)&DAT_00000006;
            auVar25 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(puVar13,&local_f8);
          }
        }
        else {
LAB_00435f87:
          local_f8 = (undefined **)0x3;
          auVar25 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(puVar13,&local_f8);
        }
LAB_00435fa5:
        ppuVar8 = auVar25._0_8_;
        auVar20._8_8_ = auVar25._8_8_;
        auVar20._0_8_ = local_90;
        bVar17 = true;
        bVar2 = 0;
        puVar14 = puVar13;
        goto LAB_00435a7a;
      }
      break;
    case (undefined1 *)0x3:
switchD_0043564a_caseD_3:
      puVar10 = (uint *)((ulonglong)*(byte *)(local_f0 + 1) ^ 0x65 |
                        (ulonglong)*local_f0 ^ 0x727574616e676973);
      if ((undefined **)puVar10 == (undefined **)0x0) {
        if (ppuVar12 != (undefined **)0xffffffffffffffff) {
          ppuStack_110 = (undefined **)&DAT_00000009;
LAB_004360c6:
          local_118 = local_80;
          local_f8 = (undefined **)&local_118;
          local_f0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          puVar13 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
          puVar10 = (uint *)local_80;
          auVar25 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                               &local_f8);
          goto LAB_00435fa5;
        }
        ppuVar8 = *(undefined ***)((longlong)puVar13 + 0x20);
        ppuVar12 = *(undefined ***)((longlong)puVar13 + 0x28);
        puVar10 = (uint *)ppuVar8;
        if (ppuVar12 < ppuVar8) {
          puVar1 = *ppuVar7;
          puVar10 = (uint *)-(longlong)ppuVar8;
          while( true ) {
            ppuVar12 = (undefined **)((longlong)ppuVar12 + 1);
            uVar6 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar12];
            if (0x3a < uVar6) goto LAB_00436150;
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar12;
            if (ppuVar12 == ppuVar8) goto LAB_00435f65;
          }
          if (uVar6 != 0x3a) {
LAB_00436150:
            local_f8 = (undefined **)&DAT_00000006;
            auVar21 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(puVar13,&local_f8);
            goto LAB_00435c2d;
          }
          *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar12;
          ppuVar7 = (undefined **)&local_118;
          deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                    (ppuVar7,puVar13);
          auVar21._8_8_ = extraout_RDX_02;
          auVar21._0_8_ = ppuStack_110;
          puVar13 = (undefined1 *)ppuVar7;
          if (local_118 != (undefined **)0xffffffffffffffff) {
            local_88 = local_108;
            local_98 = ppuStack_110;
            ppuVar12 = local_118;
            goto LAB_004355c0;
          }
        }
        else {
LAB_00435f65:
          local_f8 = (undefined **)0x3;
          auVar21 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(puVar13,&local_f8);
        }
        goto LAB_00435c2d;
      }
      break;
    case (undefined1 *)0x4:
switchD_0043564a_caseD_4:
      puVar10 = (uint *)((ulonglong)*(ushort *)(local_f0 + 1) ^ 0x6469 |
                        (ulonglong)*local_f0 ^ 0x5f746e756f636361);
      if ((undefined **)puVar10 == (undefined **)0x0) {
        if (local_b8 != (undefined **)0xfffffffffffffffe) {
          ppuStack_110 = (undefined **)0xa;
          local_80 = (undefined **)&DAT_00194632;
          goto LAB_004360c6;
        }
        ppuVar8 = *(undefined ***)((longlong)puVar13 + 0x20);
        ppuVar5 = *(undefined ***)((longlong)puVar13 + 0x28);
        puVar10 = (uint *)ppuVar8;
        puVar14 = puVar13;
        ppuVar15 = ppuVar12;
        if (ppuVar5 < ppuVar8) {
          puVar1 = *ppuVar7;
          puVar10 = (uint *)-(longlong)ppuVar8;
          while( true ) {
            ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
            uVar6 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
            if (0x3a < uVar6) goto LAB_00436127;
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
            if (ppuVar5 == ppuVar8) goto LAB_00435faf;
          }
          if (uVar6 == 0x3a) {
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
            puVar14 = (undefined1 *)&local_118;
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ();
            auVar20._8_8_ = extraout_RDX_00;
            auVar20._0_8_ = local_90;
            local_a8 = ppuStack_110;
            local_b8 = local_118;
            puVar10 = (uint *)local_118;
            if (local_118 == (undefined **)0xfffffffffffffffe) {
              bVar2 = 0;
              ppuVar8 = ppuStack_110;
              goto LAB_00435aa2;
            }
            local_48 = local_108;
            goto LAB_004355c0;
          }
LAB_00436127:
          local_f8 = (undefined **)&DAT_00000006;
          local_b8 = (undefined **)0xfffffffffffffffe;
          ppuVar7 = (undefined **)&local_f8;
          auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error();
          puVar13 = (undefined1 *)ppuVar7;
        }
        else {
LAB_00435faf:
          local_f8 = (undefined **)0x3;
          local_b8 = (undefined **)0xfffffffffffffffe;
          ppuVar7 = (undefined **)&local_f8;
          auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error();
          puVar13 = (undefined1 *)ppuVar7;
        }
        auVar20._8_8_ = auVar23._8_8_;
        auVar20._0_8_ = local_90;
        bVar2 = 0;
        ppuVar8 = auVar23._0_8_;
        goto LAB_00435aa2;
      }
      break;
    case (undefined1 *)0x6:
switchD_0043564a_caseD_6:
      puVar10 = (uint *)((ulonglong)*(uint *)(local_f0 + 1) ^ 0x736d5f64 |
                        (ulonglong)*local_f0 ^ 0x6573755f7473616c);
      if ((undefined **)puVar10 == (undefined **)0x0) {
        if (local_78 != 0) {
          ppuStack_110 = (undefined **)0xc;
          local_80 = (undefined **)&DAT_0019463c;
          goto LAB_004360c6;
        }
        ppuVar8 = *(undefined ***)((longlong)puVar13 + 0x20);
        ppuVar5 = *(undefined ***)((longlong)puVar13 + 0x28);
        puVar10 = (uint *)ppuVar8;
        if (ppuVar5 < ppuVar8) {
          puVar1 = *ppuVar7;
          puVar10 = (uint *)-(longlong)ppuVar8;
          do {
            ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
            uVar6 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
            if (0x3a < uVar6) {
LAB_00435910:
              local_f8 = (undefined **)&DAT_00000006;
              auVar20 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar13,&local_f8);
              goto LAB_00435845;
            }
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
              if (uVar6 != 0x3a) goto LAB_00435910;
              *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
              auVar23 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  ();
              auVar20._8_8_ = auVar23._8_8_;
              auVar20._0_8_ = auVar23._8_8_;
              uVar6 = auVar23._0_8_;
              goto LAB_004358f6;
            }
            *(undefined ***)((longlong)puVar13 + 0x28) = ppuVar5;
          } while (ppuVar5 != ppuVar8);
        }
        local_f8 = (undefined **)0x3;
        auVar20 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar13,&local_f8);
LAB_00435845:
        uVar6 = 1;
LAB_004358f6:
        local_90 = auVar20._0_8_;
        if ((uVar6 & 1) != 0) {
          bVar17 = true;
          bVar2 = 0;
          puVar14 = puVar13;
          ppuVar8 = local_90;
          goto LAB_00435a7a;
        }
        local_78 = 1;
        goto LAB_004355c0;
      }
    }
  }
  else {
    puVar10 = &switchD_00435668::switchdataD_00194120;
    switch((undefined1 *)((longlong)local_e8 + -6)) {
    case (undefined1 *)0x0:
      goto switchD_0043564a_caseD_0;
    case (undefined1 *)0x3:
      goto switchD_0043564a_caseD_3;
    case (undefined1 *)0x4:
      goto switchD_0043564a_caseD_4;
    case (undefined1 *)0x6:
      goto switchD_0043564a_caseD_6;
    }
  }
  auVar19 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                      (puVar13,ppuVar7);
  puVar14 = puVar13;
  if (auVar19._0_8_ != 0) goto LAB_00435a70;
  goto LAB_004355c0;
LAB_00435a70:
  auVar20._8_8_ = auVar19._8_8_;
  auVar20._0_8_ = local_90;
  bVar17 = true;
  bVar2 = 0;
  ppuVar8 = auVar19._0_8_;
LAB_00435a7a:
  ppuVar7 = local_a8;
  puVar13 = (undefined1 *)local_b8;
  local_90 = auVar20._0_8_;
  ppuVar15 = ppuVar12;
  if ((bool)((undefined1 *)((longlong)local_b8 + -1) < (undefined1 *)0xfffffffffffffffd & bVar17)) {
    uVar4 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar20._8_8_ = uVar4;
    auVar20._0_8_ = local_90;
    puVar14 = (undefined1 *)ppuVar7;
  }
LAB_00435aa2:
  ppuVar5 = local_98;
  local_90 = auVar20._0_8_;
  bVar2 = (undefined1 *)((longlong)ppuVar15 + 1) < (undefined1 *)0x2 | bVar2;
  ppuVar12 = (undefined **)0xffffffffffffffff;
  local_d8 = (undefined **)CONCAT71((int7)((ulonglong)((longlong)ppuVar15 + 1) >> 8),bVar2);
  uStack_c8 = (undefined **)puVar13;
  ppuVar7 = (undefined **)puVar14;
  if (bVar2 == 0) {
    uVar4 = 1;
    local_d8 = (undefined **)(*(code *)PTR___rust_dealloc_00798fc8)();
    auVar20._8_8_ = uVar4;
    auVar20._0_8_ = local_90;
    uStack_c8 = ppuVar15;
    ppuVar7 = ppuVar5;
  }
LAB_00435ace:
  auVar23._8_8_ = ppuVar7;
  auVar23._0_8_ = local_d8;
  local_d0 = auVar20._8_8_;
  local_90 = auVar20._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_c0 = (byte)local_a0;
  local_f8 = ppuVar12;
  local_f0 = ppuVar8;
  local_e8 = (undefined **)puVar10;
  local_e0 = ppuVar7;
  ppuVar7 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map(param_2);
LAB_00435df7:
  local_120 = auVar23._8_8_;
  local_108 = (undefined **)CONCAT71(uStack_bf,local_c0);
  local_118 = local_d0;
  ppuStack_110 = uStack_c8;
  if (ppuVar12 == (undefined **)0xffffffffffffffff) {
    if (ppuVar7 != (undefined **)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(ppuVar7);
    }
  }
  else if (ppuVar7 == (undefined **)0x0) {
    local_68 = (undefined4)local_d0;
    uStack_64 = local_d0._4_4_;
    uStack_5c = uStack_c8._4_4_;
    uStack_60 = (int)uStack_c8;
    local_58 = local_108;
    if (ppuVar12 != (undefined **)0xffffffffffffffff) {
      local_70[2] = puVar10;
      local_70[3] = local_120;
      local_70[4] = auVar23._0_8_;
      local_70[5] = local_d0;
      local_70[6] = uStack_c8;
      local_70[7] = local_108;
      *local_70 = ppuVar12;
      local_70[1] = ppuVar8;
      return local_70;
    }
  }
  else {
    uVar18 = (undefined4)local_d0;
    if (ppuVar12 != (undefined **)0x0) {
      uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(local_108,1);
    }
    ppuVar8 = ppuVar7;
    if (local_120 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
    }
  }
LAB_0043606f:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (ppuVar8,param_2);
LAB_0043553b:
  local_70[1] = uVar4;
  *local_70 = 0xffffffffffffffff;
  return local_70;
}


