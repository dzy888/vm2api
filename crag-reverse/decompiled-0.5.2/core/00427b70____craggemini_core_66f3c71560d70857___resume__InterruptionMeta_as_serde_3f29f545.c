// 00427b70 <<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined1 *puVar1;
  unkbyte9 Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  uint uVar12;
  undefined **ppuVar13;
  byte extraout_DL;
  byte extraout_DL_00;
  byte extraout_DL_01;
  byte extraout_DL_02;
  byte extraout_DL_03;
  byte bVar14;
  byte extraout_DL_04;
  byte extraout_DL_05;
  byte extraout_DL_06;
  byte extraout_DL_07;
  byte extraout_DL_08;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined **extraout_RDX_03;
  undefined **extraout_RDX_04;
  undefined **extraout_RDX_05;
  undefined **extraout_RDX_06;
  undefined **extraout_RDX_07;
  undefined **ppuVar15;
  undefined **unaff_RBP;
  ulonglong uVar16;
  undefined **ppuVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  undefined **unaff_R12;
  byte bVar20;
  undefined **unaff_R15;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined **local_118;
  undefined8 local_108;
  undefined **ppuStack_100;
  undefined **local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined **local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined **local_a0;
  undefined1 local_91;
  undefined **local_90;
  uint local_84;
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined1 local_38;
  
  puVar8 = param_2[4];
  puVar6 = param_2[5];
  local_80 = param_1;
  if (puVar6 < puVar8) {
    ppuVar13 = (undefined **)-(longlong)puVar8;
    ppuVar15 = (undefined **)0x100002600;
    do {
      puVar6 = puVar6 + 1;
      bVar20 = (param_2[3] + -1)[(longlong)puVar6];
      if ((0x20 < (ulonglong)bVar20) || ((0x100002600U >> ((ulonglong)bVar20 & 0x3f) & 1) == 0)) {
        if (bVar20 == 0x5b) {
          ppuVar17 = param_2 + 7;
          *(char *)ppuVar17 = *(char *)ppuVar17 + -1;
          if (*(char *)ppuVar17 != '\0') {
            param_2[5] = puVar6;
            ppuStack_100 = (undefined **)CONCAT71(ppuStack_100._1_7_,1);
            uVar18 = SUB81(&local_e0,0);
            ppuVar17 = (undefined **)&local_108;
            local_108 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>()
            ;
            auVar23._8_8_ = extraout_RDX;
            auVar23._0_8_ = local_d8._0_8_;
            if ((char)local_e0 == '\x01') {
              local_118 = (undefined **)0xffffffffffffffff;
              ppuVar15 = ppuVar17;
            }
            else {
              if (local_e0._1_1_ == '\x01') {
                uVar18 = SUB81(&local_e0,0);
                ppuVar15 = local_108;
                <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          ();
                auVar23._8_8_ = extraout_RDX_00;
                auVar23._0_8_ = local_d8._0_8_;
                unaff_RBP = local_e0;
                if (local_e0 == (undefined **)0xfffffffffffffffe) {
                  local_118 = (undefined **)0xffffffffffffffff;
                  goto LAB_004283ae;
                }
                ppuVar17 = ppuVar13;
                ppuVar15 = (undefined **)local_d8._8_8_;
                ppuVar13 = (undefined **)local_d8._0_8_;
                uVar22 = param_5;
              }
              else {
                unaff_RBP = (undefined **)0xffffffffffffffff;
                ppuVar17 = ppuVar13;
                ppuVar13 = unaff_R12;
                uVar22 = param_5;
              }
              uVar18 = SUB81(&local_e0,0);
              ppuVar11 = (undefined **)&local_108;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        ();
              auVar23._8_8_ = extraout_RDX_01;
              auVar23._0_8_ = local_d8._0_8_;
              ppuVar10 = (undefined **)local_d8._0_8_;
              param_5 = uVar22;
              if ((char)local_e0 != '\x01') {
                if (local_e0._1_1_ == '\x01') {
                  uVar18 = SUB81(&local_e0,0);
                  ppuVar11 = local_108;
                  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
                  uVar7 = local_d8._0_8_;
                  local_118 = local_e0;
                  auVar23._8_8_ = extraout_RDX_02;
                  auVar23._0_8_ = local_d8._0_8_;
                  if (local_e0 != (undefined **)0xffffffffffffffff) {
                    local_a0 = (undefined **)local_d8._8_8_;
                    ppuVar10 = (undefined **)&local_e0;
                    ppuVar11 = (undefined **)&local_108;
                    <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                    ::next_element_seed::has_next_element::
                    <serde_json[dc3825464c436029]::read::SliceRead>();
                    unaff_R15 = extraout_RDX_03;
                    if ((char)local_e0 == '\x01') {
LAB_00428543:
                    }
                    else {
                      if (local_e0._1_1_ == '\x01') {
                        ppuVar10 = (undefined **)&local_e0;
                        ppuVar11 = local_108;
                        deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>();
                        unaff_R15 = extraout_RDX_04;
                        if ((char)local_e0 == '\x01') goto LAB_00428543;
                        local_e8 = (undefined **)CONCAT44(local_e8._4_4_,(uint)local_e0._1_1_);
                      }
                      else {
                        local_e8 = (undefined **)((ulonglong)local_e8 & 0xffffffff00000000);
                      }
                      ppuVar10 = (undefined **)&local_e0;
                      ppuVar11 = (undefined **)&local_108;
                      <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
                      unaff_R15 = extraout_RDX_05;
                      if ((char)local_e0 == '\x01') goto LAB_00428543;
                      param_5 = 0;
                      if (local_e0._1_1_ == '\x01') {
                        ppuVar10 = (undefined **)&local_e0;
                        ppuVar11 = local_108;
                        deserialize_u32::
                        <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  ();
                        unaff_R15 = extraout_RDX_06;
                        if ((int)local_e0 == 1) goto LAB_00428543;
                        param_5 = local_e0._4_4_;
                      }
                      ppuVar10 = (undefined **)&local_e0;
                      ppuVar11 = (undefined **)&local_108;
                      <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
                      unaff_R15 = extraout_RDX_07;
                      if ((char)local_e0 == '\x01') goto LAB_00428543;
                      if (local_e0._1_1_ != '\x01') {
                        unaff_R15 = (undefined **)0x0;
LAB_004287f1:
                        auVar23._8_8_ = local_a0;
                        auVar23._0_8_ = uVar7;
                        uVar18 = SUB81(local_e8,0);
                        goto LAB_004283ae;
                      }
                      ppuVar10 = local_108;
                      auVar23 = deserialize_u64::
                                <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                          ();
                      unaff_R15 = auVar23._8_8_;
                      local_d8._0_8_ = unaff_R15;
                      if ((auVar23._0_8_ & 1) == 0) goto LAB_004287f1;
                    }
                    if (local_118 != (undefined **)0x0) {
                      unaff_R15 = (undefined **)0x1;
                      (*(code *)PTR___rust_dealloc_00798fc8)();
                      ppuVar11 = local_118;
                      ppuVar10 = (undefined **)uVar7;
                    }
                    auVar23._8_8_ = unaff_R15;
                    auVar23._0_8_ = local_d8._0_8_;
                    uVar18 = SUB81(ppuVar10,0);
                    ppuVar10 = (undefined **)local_d8._0_8_;
                    unaff_R15 = (undefined **)local_d8._0_8_;
                    param_5 = uVar22;
                    goto joined_r0x00428391;
                  }
                }
                else {
                  ppuVar11 = &PTR_DAT_00789d00;
                  uVar18 = 1;
                  auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_DAT_00789d00,&DAT_00789c78);
                }
                ppuVar10 = auVar23._0_8_;
                param_5 = uVar22;
              }
joined_r0x00428391:
              ppuVar15 = ppuVar11;
              if (0 < (longlong)unaff_RBP) {
                uVar18 = SUB81(ppuVar13,0);
                uVar7 = 1;
                (*(code *)PTR___rust_dealloc_00798fc8)();
                auVar23._8_8_ = uVar7;
                auVar23._0_8_ = ppuVar10;
                ppuVar15 = unaff_RBP;
              }
              ppuVar13 = ppuVar17;
              local_118 = (undefined **)0xffffffffffffffff;
            }
LAB_004283ae:
            local_a0 = auVar23._8_8_;
            unaff_R12 = auVar23._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            uStack_a4 = CONCAT31(uStack_a4._1_3_,uVar18);
            local_e0 = local_118;
            local_c8 = unaff_RBP;
            local_c0 = ppuVar13;
            local_b8 = ppuVar15;
            uStack_b0 = unaff_R15;
            local_a8 = param_5;
            local_d8 = auVar23;
            ppuVar15 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::end_seq(param_2);
            local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
            local_108 = local_b8;
            ppuStack_100 = uStack_b0;
            if (local_118 == (undefined **)0xffffffffffffffff) {
              if (ppuVar15 != (undefined **)0x0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (ppuVar15);
              }
              goto LAB_00428842;
            }
            if (ppuVar15 == (undefined **)0x0) {
              unaff_R15 = unaff_RBP;
              local_68 = (undefined4)local_b8;
              uStack_64 = local_b8._4_4_;
              uStack_5c = uStack_b0._4_4_;
              uStack_60 = (int)uStack_b0;
              goto joined_r0x004284d9;
            }
            uVar22 = (undefined4)local_b8;
            if ((undefined1 *)((longlong)unaff_RBP + -1) < (undefined1 *)0xfffffffffffffffe) {
              uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(local_f8,1);
            }
            unaff_R12 = ppuVar15;
            if (local_118 != (undefined **)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
            }
            goto LAB_00428842;
          }
        }
        else {
          if (bVar20 != 0x7b) {
            unaff_R12 = (undefined **)
                        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_invalid_type(param_2,&local_91,&DAT_0078a580);
            goto LAB_00428842;
          }
          ppuVar15 = param_2 + 7;
          *(char *)ppuVar15 = *(char *)ppuVar15 + -1;
          if (*(char *)ppuVar15 != '\0') {
            param_2[5] = puVar6;
            local_38 = 1;
            bVar20 = 2;
            local_78 = 0;
            local_118 = (undefined **)0xffffffffffffffff;
            local_90 = (undefined **)&DAT_00194605;
            local_70 = 0;
            local_e8 = (undefined **)0xfffffffffffffffe;
            ppuVar13 = (undefined **)&DAT_00194605;
            local_40 = param_2;
            goto LAB_00427c72;
          }
        }
        local_e0 = (undefined **)0x18;
        goto LAB_00427bde;
      }
      param_2[5] = puVar6;
    } while (puVar6 != puVar8);
  }
  local_e0 = (undefined **)0x5;
LAB_00427bde:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_e0);
  goto LAB_00427beb;
LAB_00427c72:
  ppuVar15 = unaff_R15;
LAB_00427c80:
  puVar19 = (undefined1 *)&local_e0;
  ppuVar17 = ppuVar13;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(puVar19,&local_40);
  unaff_R15 = local_40;
  if ((char)local_e0 == '\x01') {
    ppuVar11 = (undefined **)local_d8._0_8_;
    unaff_R15 = ppuVar15;
    bVar14 = extraout_DL;
    goto LAB_00428605;
  }
  if (local_e0._1_1_ != '\x01') {
    bVar21 = local_e8 == (undefined **)0xfffffffffffffffe;
    unaff_R15 = local_e8;
    if (bVar21) {
      unaff_R15 = (undefined **)0xffffffffffffffff;
    }
    if (local_118 == (undefined **)0xffffffffffffffff) {
      ppuVar17 = (undefined **)(ulonglong)local_84;
      local_108 = (undefined **)&DAT_001945e3;
      ppuStack_100 = (undefined **)&DAT_00000006;
      local_e0 = (undefined **)&local_108;
      local_d8._0_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      puVar19 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
      ppuVar11 = (undefined **)
                 <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                 ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                           (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                            &local_e0);
      bVar14 = extraout_DL_04;
      if ((undefined1 *)((longlong)unaff_R15 + -1) < (undefined1 *)0xfffffffffffffffe) {
        bVar14 = 1;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        puVar19 = (undefined1 *)ppuVar13;
      }
      goto LAB_00428627;
    }
    bVar14 = bVar20 & 1;
    uVar12 = local_84;
    if ((local_78 & 1) == 0) {
      uVar12 = 0;
    }
    uStack_b0 = (undefined **)0x0;
    if ((local_70 & 1) != 0) {
      uStack_b0 = local_48;
    }
    puVar19 = (undefined1 *)(ulonglong)uVar12;
    local_d8._8_8_ = local_a0;
    local_b8 = local_50;
    goto LAB_00428652;
  }
  ppuVar11 = local_40 + 3;
  local_40[5] = local_40[5] + 1;
  local_40[2] = (undefined *)0x0;
  puVar19 = (undefined1 *)&local_e0;
  ppuVar15 = local_40;
  (*(code *)PTR_parse_str_007998f8)();
  auVar3._8_8_ = ppuVar15;
  auVar3._0_8_ = local_d8._0_8_;
  Var2 = auVar3._0_9_;
  if ((int)local_e0 == 2) goto LAB_00428600;
  ppuVar17 = ppuVar11;
  puVar19 = (undefined1 *)unaff_R15;
  ppuVar15 = unaff_R15;
  switch(local_d8._8_8_) {
  case (BADTYPE)0x6:
    if (*(short *)(local_d8._0_8_ + 4) == 0x6e6f && *(int *)local_d8._0_8_ == 0x73616572) {
      if (local_118 != (undefined **)0xffffffffffffffff) {
        local_90 = (undefined **)&DAT_001945e3;
        goto LAB_0042887c;
      }
      ppuVar15 = (undefined **)unaff_R15[4];
      ppuVar10 = (undefined **)unaff_R15[5];
      ppuVar17 = ppuVar15;
      if (ppuVar15 <= ppuVar10) goto LAB_00428574;
      puVar8 = *ppuVar11;
      ppuVar17 = (undefined **)-(longlong)ppuVar15;
      goto LAB_00428023;
    }
    break;
  case (BADTYPE)0x7:
    ppuVar17 = (undefined **)0x64695f6e;
    if (*(int *)(local_d8._0_8_ + 3) == 0x64695f6e && *(int *)local_d8._0_8_ == 0x6e727574)
    goto LAB_0042809a;
    break;
  case (BADTYPE)0xa:
    if (*(short *)(local_d8._0_8_ + 8) == 0x736d &&
        *(undefined **)local_d8._0_8_ == (undefined *)0x5f74615f7473616c) {
      if (local_70 != 0) goto LAB_0042887c;
      puVar8 = unaff_R15[5];
      if (puVar8 < unaff_R15[4]) {
        puVar6 = *ppuVar11;
        do {
          puVar8 = puVar8 + 1;
          uVar16 = (ulonglong)(byte)(puVar6 + -1)[(longlong)puVar8];
          if (0x3a < uVar16) {
LAB_00427ea3:
            local_e0 = (undefined **)&DAT_00000006;
            uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(unaff_R15,&local_e0);
            goto LAB_00427dc1;
          }
          if ((0x100002600U >> (uVar16 & 0x3f) & 1) == 0) {
            if (uVar16 != 0x3a) goto LAB_00427ea3;
            unaff_R15[5] = puVar8;
            auVar24 = deserialize_u64::
                      <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                ();
            goto LAB_00427e81;
          }
          unaff_R15[5] = puVar8;
        } while (puVar8 != unaff_R15[4]);
      }
      local_e0 = (undefined **)0x3;
      uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(unaff_R15,&local_e0);
LAB_00427dc1:
      auVar24._8_8_ = uVar7;
      auVar24._0_8_ = 1;
LAB_00427e81:
      ppuVar17 = auVar24._8_8_;
      auVar4._8_8_ = ppuVar17;
      auVar4._0_8_ = ppuVar17;
      Var2 = auVar4._0_9_;
      if ((auVar24._0_8_ & 1) != 0) {
        ppuVar17 = ppuVar13;
        goto LAB_00428600;
      }
      local_70 = 1;
      local_48 = ppuVar17;
      goto LAB_00427c80;
    }
    break;
  case (BADTYPE)0xe:
    if (*(longlong *)(local_d8._0_8_ + 6) == 0x74757074756f5f6c &&
        *(undefined **)local_d8._0_8_ == (undefined *)0x5f6c616974726170) {
      if (bVar20 != 2) {
        local_90 = (undefined **)&DAT_001945e9;
        goto LAB_0042887c;
      }
      ppuVar10 = (undefined **)unaff_R15[4];
      ppuVar9 = (undefined **)unaff_R15[5];
      ppuVar17 = ppuVar10;
      if (ppuVar10 <= ppuVar9) {
LAB_004285cf:
        local_e0 = (undefined **)0x3;
        auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(unaff_R15,&local_e0);
        Var2 = auVar23._0_9_;
        goto LAB_004285fd;
      }
      puVar8 = *ppuVar11;
      ppuVar17 = (undefined **)-(longlong)ppuVar10;
      while( true ) {
        ppuVar9 = (undefined **)((longlong)ppuVar9 + 1);
        uVar16 = (ulonglong)(byte)(puVar8 + -1)[(longlong)ppuVar9];
        if (0x3a < uVar16) goto LAB_00428902;
        if ((0x100002600U >> (uVar16 & 0x3f) & 1) == 0) break;
        unaff_R15[5] = (undefined *)ppuVar9;
        if (ppuVar9 == ppuVar10) goto LAB_004285cf;
      }
      if (uVar16 != 0x3a) {
LAB_00428902:
        local_e0 = (undefined **)&DAT_00000006;
        auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(unaff_R15,&local_e0);
        Var2 = auVar23._0_9_;
        goto LAB_004285fd;
      }
      unaff_R15[5] = (undefined *)ppuVar9;
      puVar19 = (undefined1 *)&local_108;
      deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>(puVar19,unaff_R15);
      bVar14 = extraout_DL_00;
      if ((char)local_108 == '\x01') goto LAB_004287e4;
      bVar20 = local_108._1_1_;
    }
    else {
      ppuVar17 = (undefined **)0x746e756f635f7972;
      if (*(longlong *)(local_d8._0_8_ + 6) != 0x746e756f635f7972 ||
          *(undefined **)local_d8._0_8_ != (undefined *)0x797265766f636572) break;
      if ((int)local_78 != 0) {
        local_90 = (undefined **)&DAT_001945f7;
        goto LAB_0042887c;
      }
      ppuVar10 = (undefined **)unaff_R15[4];
      ppuVar9 = (undefined **)unaff_R15[5];
      ppuVar17 = ppuVar10;
      if (ppuVar10 <= ppuVar9) {
LAB_004285e7:
        local_e0 = (undefined **)0x3;
        auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(unaff_R15,&local_e0);
        Var2 = auVar23._0_9_;
        goto LAB_004285fd;
      }
      puVar8 = *ppuVar11;
      ppuVar17 = (undefined **)-(longlong)ppuVar10;
      while( true ) {
        ppuVar9 = (undefined **)((longlong)ppuVar9 + 1);
        uVar16 = (ulonglong)(byte)(puVar8 + -1)[(longlong)ppuVar9];
        if (0x3a < uVar16) goto LAB_0042891d;
        if ((0x100002600U >> (uVar16 & 0x3f) & 1) == 0) break;
        unaff_R15[5] = (undefined *)ppuVar9;
        if (ppuVar9 == ppuVar10) goto LAB_004285e7;
      }
      if (uVar16 != 0x3a) {
LAB_0042891d:
        local_e0 = (undefined **)&DAT_00000006;
        auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(unaff_R15,&local_e0);
        Var2 = auVar23._0_9_;
        goto LAB_004285fd;
      }
      unaff_R15[5] = (undefined *)ppuVar9;
      puVar19 = (undefined1 *)&local_108;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (puVar19,unaff_R15);
      bVar14 = extraout_DL_01;
      if ((int)local_108 == 1) {
LAB_004287e4:
        ppuVar11 = ppuStack_100;
        goto LAB_00428605;
      }
      local_84 = local_108._4_4_;
      local_78 = 1;
    }
    goto LAB_00427c80;
  }
  auVar23 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                      (unaff_R15,ppuVar17);
  Var2 = auVar23._0_9_;
  ppuVar17 = ppuVar13;
  if (auVar23._0_8_ != 0) goto LAB_00428600;
  goto LAB_00427c80;
LAB_00428023:
  ppuVar10 = (undefined **)((longlong)ppuVar10 + 1);
  uVar16 = (ulonglong)(byte)(puVar8 + -1)[(longlong)ppuVar10];
  if (0x3a < uVar16) goto LAB_004288de;
  if ((0x100002600U >> (uVar16 & 0x3f) & 1) == 0) goto LAB_00428051;
  unaff_R15[5] = (undefined *)ppuVar10;
  if (ppuVar10 == ppuVar15) goto LAB_00428574;
  goto LAB_00428023;
LAB_00428051:
  if (uVar16 == 0x3a) {
    unaff_R15[5] = (undefined *)ppuVar10;
    puVar19 = (undefined1 *)&local_108;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(puVar19,unaff_R15);
    local_118 = local_108;
    ppuVar11 = ppuStack_100;
    bVar14 = extraout_DL_02;
    if (local_108 != (undefined **)0xffffffffffffffff) {
      local_a0 = local_f8;
      unaff_R12 = ppuStack_100;
      goto LAB_00427c72;
    }
    goto LAB_00428596;
  }
LAB_004288de:
  local_e0 = (undefined **)&DAT_00000006;
  ppuVar11 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(unaff_R15,&local_e0);
  bVar14 = extraout_DL_08;
  goto LAB_00428593;
LAB_00428574:
  local_e0 = (undefined **)0x3;
  ppuVar11 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(unaff_R15,&local_e0);
  bVar14 = extraout_DL_05;
LAB_00428593:
LAB_00428596:
  bVar21 = true;
  goto LAB_00428627;
LAB_0042809a:
  if (local_e8 != (undefined **)0xfffffffffffffffe) {
    local_90 = (undefined **)&DAT_001945dc;
LAB_0042887c:
    local_108 = local_90;
    ppuStack_100 = (undefined **)local_d8._8_8_;
    local_e0 = (undefined **)&local_108;
    local_d8._0_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar19 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
    ppuVar17 = local_90;
    auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_e0);
    Var2 = auVar23._0_9_;
LAB_004285fd:
LAB_00428600:
    bVar14 = (byte)((unkuint9)Var2 >> 0x40);
    ppuVar11 = (undefined **)Var2;
    goto LAB_00428605;
  }
  ppuVar15 = (undefined **)unaff_R15[4];
  ppuVar10 = (undefined **)unaff_R15[5];
  ppuVar17 = ppuVar15;
  if (ppuVar10 < ppuVar15) {
    puVar8 = *ppuVar11;
    ppuVar17 = (undefined **)-(longlong)ppuVar15;
    while( true ) {
      ppuVar10 = (undefined **)((longlong)ppuVar10 + 1);
      uVar16 = (ulonglong)(byte)(puVar8 + -1)[(longlong)ppuVar10];
      if (0x3a < uVar16) goto LAB_004288ba;
      if ((0x100002600U >> (uVar16 & 0x3f) & 1) == 0) break;
      unaff_R15[5] = (undefined *)ppuVar10;
      if (ppuVar10 == ppuVar15) goto LAB_0042859d;
    }
    if (uVar16 == 0x3a) {
      unaff_R15[5] = (undefined *)ppuVar10;
      puVar19 = (undefined1 *)&local_108;
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
      ::deserialize::
      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                (puVar19,unaff_R15);
      ppuVar11 = ppuStack_100;
      bVar14 = extraout_DL_03;
      if (local_108 == (undefined **)0xfffffffffffffffe) goto LAB_004285c4;
      local_50 = local_f8;
      local_e8 = local_108;
      ppuVar13 = ppuStack_100;
      goto LAB_00427c72;
    }
LAB_004288ba:
    local_e0 = (undefined **)&DAT_00000006;
    local_e8 = (undefined **)0xfffffffffffffffe;
    ppuVar11 = (undefined **)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(unaff_R15,&local_e0);
    bVar14 = extraout_DL_07;
  }
  else {
LAB_0042859d:
    local_e0 = (undefined **)0x3;
    local_e8 = (undefined **)0xfffffffffffffffe;
    ppuVar11 = (undefined **)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(unaff_R15,&local_e0);
    bVar14 = extraout_DL_06;
  }
LAB_004285c4:
  local_e8 = (undefined **)0xfffffffffffffffe;
LAB_00428605:
  bVar21 = true;
  if ((undefined1 *)((longlong)local_118 + -1) < (undefined1 *)0xfffffffffffffffe) {
    bVar14 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    puVar19 = (undefined1 *)unaff_R12;
  }
LAB_00428627:
  puVar1 = (undefined1 *)((longlong)local_e8 + -1);
  uStack_b0 = (undefined **)
              CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar1 < (undefined1 *)0xfffffffffffffffd);
  local_118 = (undefined **)0xffffffffffffffff;
  local_d8._8_8_ = ppuVar17;
  local_b8 = local_e8;
  unaff_R12 = ppuVar11;
  if ((bool)(puVar1 < (undefined1 *)0xfffffffffffffffd & bVar21)) {
    bVar14 = 1;
    uStack_b0 = (undefined **)(*(code *)PTR___rust_dealloc_00798fc8)();
    local_d8._8_8_ = ppuVar17;
    puVar19 = (undefined1 *)ppuVar13;
  }
LAB_00428652:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_e0 = local_118;
  local_a8 = SUB84(puVar19,0);
  uStack_a4 = CONCAT31(uStack_a4._1_3_,bVar14);
  local_d8._0_8_ = unaff_R12;
  local_c8 = unaff_R15;
  local_c0 = ppuVar13;
  local_a0 = (undefined **)local_d8._8_8_;
  ppuVar15 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::end_map(param_2);
  auVar5._8_8_ = local_d8._8_8_;
  auVar5._0_8_ = local_d8._0_8_;
  local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
  local_108 = local_b8;
  ppuStack_100 = uStack_b0;
  if (local_118 == (undefined **)0xffffffffffffffff) {
    if (ppuVar15 != (undefined **)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(ppuVar15)
      ;
    }
  }
  else if (ppuVar15 == (undefined **)0x0) {
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    uStack_5c = uStack_b0._4_4_;
    uStack_60 = (int)uStack_b0;
    local_d8 = auVar5;
joined_r0x004284d9:
    local_b8 = local_108;
    uStack_b0 = ppuStack_100;
    local_58 = local_f8;
    if (local_118 != (undefined **)0xffffffffffffffff) {
      local_80[2] = local_a0;
      local_80[3] = unaff_R15;
      local_80[4] = ppuVar13;
      local_80[5] = CONCAT44(uStack_64,local_68);
      local_80[6] = CONCAT44(uStack_5c,uStack_60);
      local_80[7] = local_f8;
      *local_80 = local_118;
      local_80[1] = unaff_R12;
      return local_80;
    }
  }
  else {
    uVar22 = (undefined4)local_b8;
    if ((undefined1 *)((longlong)unaff_R15 + -1) < (undefined1 *)0xfffffffffffffffe) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(local_f8,1);
    }
    unaff_R12 = ppuVar15;
    if (local_118 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
  }
LAB_00428842:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (unaff_R12,param_2);
LAB_00427beb:
  local_80[1] = uVar7;
  *local_80 = 0xffffffffffffffff;
  return local_80;
}


