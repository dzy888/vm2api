// 00424e40 <<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

ulonglong ******* __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (ulonglong *******param_1,ulonglong *******param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,ulonglong *******param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong ******ppppppuVar5;
  ulonglong ******ppppppuVar6;
  ulonglong *******pppppppuVar7;
  ulonglong *******pppppppuVar8;
  ulonglong *******pppppppuVar9;
  ulonglong *******extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  ulonglong *******extraout_RDX_04;
  ulonglong *******extraout_RDX_05;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulonglong *******extraout_RDX_06;
  ulonglong *******extraout_RDX_07;
  ulonglong *******extraout_RDX_08;
  ulonglong *******extraout_RDX_09;
  ulonglong *******extraout_RDX_10;
  ulonglong *******extraout_RDX_11;
  ulonglong *******pppppppuVar12;
  ulonglong *******pppppppuVar13;
  ulonglong uVar14;
  ulonglong *******pppppppuVar15;
  byte bVar16;
  byte bVar17;
  ulonglong *******unaff_R12;
  ulonglong *******pppppppuVar18;
  longlong in_FS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte local_1c1;
  ulonglong *******local_1b8;
  ulonglong *******local_1b0;
  ulonglong *******local_1a0;
  ulonglong *******local_198;
  ulonglong *******pppppppuStack_190;
  ulonglong *******local_188;
  ulonglong *******pppppppuStack_180;
  ulonglong *******local_178;
  ulonglong *******pppppppuStack_170;
  undefined1 local_159;
  undefined8 local_158;
  ulonglong *******local_150;
  ulonglong *******pppppppuStack_148;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong *******local_128;
  ulonglong *******pppppppuStack_120;
  ulonglong *******local_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******local_108;
  ulonglong *******pppppppuStack_100;
  byte local_f8;
  undefined7 uStack_f7;
  ulonglong *******local_f0;
  undefined1 local_e8;
  ulonglong *******local_e0;
  ulonglong *******local_d8;
  ulonglong *******local_d0;
  undefined8 local_c8;
  ulonglong *******pppppppuStack_c0;
  ulonglong *******local_b8;
  ulonglong *******pppppppuStack_b0;
  ulonglong *******local_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******local_90;
  ulonglong *******local_88;
  ulonglong *******pppppppuStack_80;
  ulonglong *******local_78;
  ulonglong *******pppppppuStack_70;
  ulonglong ******local_68;
  ulonglong *******local_58;
  ulonglong *******pppppppuStack_50;
  ulonglong *******local_48;
  ulonglong *******pppppppuStack_40;
  
  bVar16 = (byte)param_5;
  ppppppuVar6 = param_2[4];
  ppppppuVar5 = param_2[5];
  local_d0 = param_1;
  if (ppppppuVar5 < ppppppuVar6) {
    local_1b8 = (ulonglong *******)-(longlong)ppppppuVar6;
    pppppppuVar12 = (ulonglong *******)0x100002600;
    do {
      ppppppuVar5 = (ulonglong ******)((longlong)ppppppuVar5 + 1);
      bVar17 = *(byte *)(((longlong)param_2[3] - 1U) + (longlong)ppppppuVar5);
      if ((0x20 < (ulonglong)bVar17) || ((0x100002600U >> ((ulonglong)bVar17 & 0x3f) & 1) == 0)) {
        if (bVar17 == 0x5b) {
          pppppppuVar13 = param_2 + 7;
          *(char *)pppppppuVar13 = *(char *)pppppppuVar13 + -1;
          if (*(char *)pppppppuVar13 != '\0') {
            param_2[5] = ppppppuVar5;
            local_e8 = 1;
            pppppppuVar13 = (ulonglong *******)&local_158;
            pppppppuVar15 = (ulonglong *******)&local_f0;
            local_f0 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>()
            ;
            pppppppuVar9 = extraout_RDX_04;
            if ((char)local_158 == '\x01') {
LAB_0042539a:
              pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
              local_1a0 = local_150;
            }
            else {
              if (local_158._1_1_ == '\x01') {
                pppppppuVar13 = (ulonglong *******)&local_158;
                pppppppuVar15 = local_f0;
                deserialize_map::
                <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                          ();
                pppppppuVar9 = extraout_RDX_05;
                if (local_158 == (ulonglong *******)0x0) goto LAB_0042539a;
                pppppppuStack_170 = pppppppuStack_130;
                pppppppuStack_180 = pppppppuStack_140;
                local_178 = pppppppuStack_138;
                pppppppuStack_190 = local_150;
                local_188 = pppppppuStack_148;
                local_198 = local_158;
                local_1b8 = pppppppuStack_130;
                puVar11 = (undefined1 *)local_158;
                bVar17 = bVar16;
              }
              else {
                pppppppuVar12 = (ulonglong *******)0xffffffffffffffc8;
                bVar17 = bVar16;
                if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
                  local_178 = *(ulonglong ********)(in_FS_OFFSET + -0x38);
                  pppppppuStack_170 = *(ulonglong ********)(in_FS_OFFSET + -0x30);
                }
                else {
                  pppppppuStack_170 = extraout_RDX_04;
                  local_178 = (ulonglong *******)(*(code *)PTR_hashmap_random_keys_00799248)();
                  *(ulonglong ********)(in_FS_OFFSET + -0x38) = local_178;
                  *(ulonglong ********)(in_FS_OFFSET + -0x30) = pppppppuStack_170;
                  *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
                }
                local_1b8 = (ulonglong *******)((longlong)local_178 + 1);
                *(ulonglong ********)(in_FS_OFFSET + -0x38) = local_1b8;
                local_198 = (ulonglong *******)
                            PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                ;
                pppppppuStack_190 = _DAT_00789cc8;
                local_188 = _DAT_00789cd0;
                pppppppuStack_180 = DAT_00789cd8;
                puVar11 = anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
              }
              pppppppuVar13 = (ulonglong *******)&local_158;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (pppppppuVar13,&local_f0);
              pppppppuVar9 = extraout_RDX_06;
              if ((char)local_158 == '\x01') {
LAB_004256dd:
                pppppppuVar8 = local_150;
              }
              else {
                if (local_158._1_1_ == '\x01') {
                  pppppppuVar13 = (ulonglong *******)&local_158;
                  deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
                            (pppppppuVar13,local_f0);
                  pppppppuVar9 = extraout_RDX_07;
                  if ((char)local_158 == '\x01') goto LAB_004256dd;
                  bVar16 = local_158._1_1_;
                }
                else {
                  bVar16 = 0;
                }
                pppppppuVar13 = (ulonglong *******)&local_158;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar13,&local_f0);
                pppppppuVar9 = extraout_RDX_08;
                if ((char)local_158 == '\x01') goto LAB_004256dd;
                if (local_158._1_1_ == '\x01') {
                  pppppppuVar13 = (ulonglong *******)&local_158;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (pppppppuVar13,local_f0);
                  pppppppuVar9 = extraout_RDX_09;
                  pppppppuVar8 = local_150;
                  if (local_158 != (ulonglong *******)0xfffffffffffffffe) {
                    local_e0 = pppppppuStack_148;
                    local_1a0 = local_150;
                    pppppppuVar18 = local_158;
                    goto LAB_004259fd;
                  }
                }
                else {
                  pppppppuVar18 = (ulonglong *******)0xffffffffffffffff;
                  local_1a0 = unaff_R12;
LAB_004259fd:
                  pppppppuVar13 = (ulonglong *******)&local_158;
                  pppppppuVar15 = (ulonglong *******)&local_f0;
                  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                  ::next_element_seed::has_next_element::
                  <serde_json[dc3825464c436029]::read::SliceRead>();
                  if ((char)local_158 != '\x01') {
                    if (local_158._1_1_ == '\x01') {
                      pppppppuVar13 = (ulonglong *******)&local_158;
                      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (pppppppuVar13,local_f0);
                      pppppppuVar9 = extraout_RDX_11;
                      pppppppuVar8 = local_150;
                      if (local_158 == (ulonglong *******)0xfffffffffffffffe) goto LAB_00425a1b;
                      local_1b8 = local_150;
                      pppppppuVar15 = pppppppuStack_148;
                    }
                    else {
                      local_158 = (ulonglong *******)0xfffffffffffffffe;
                      local_1b8 = pppppppuVar12;
                    }
                    pppppppuVar13 = (ulonglong *******)0xffffffffffffffff;
                    if (local_158 != (ulonglong *******)0xfffffffffffffffe) {
                      pppppppuVar13 = local_158;
                    }
                    local_a8 = local_178;
                    pppppppuStack_a0 = pppppppuStack_170;
                    local_b8 = local_188;
                    pppppppuStack_b0 = pppppppuStack_180;
                    local_c8 = local_198;
                    pppppppuStack_c0 = pppppppuStack_190;
                    pppppppuVar9 = local_e0;
                    goto LAB_00425718;
                  }
                  pppppppuVar9 = extraout_RDX_10;
                  pppppppuVar8 = local_150;
LAB_00425a1b:
                  if (0 < (longlong)pppppppuVar18) {
                    pppppppuVar9 = (ulonglong *******)0x1;
                    (*(code *)PTR___rust_dealloc_00798fc8)();
                    pppppppuVar13 = local_1a0;
                  }
                }
              }
              bVar16 = bVar17;
              pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
              pppppppuVar15 = (ulonglong *******)0x0;
              local_1a0 = pppppppuVar8;
              if (pppppppuStack_190 != (ulonglong *******)0x0) {
                pppppppuVar15 = (ulonglong *******)((longlong)pppppppuStack_190 * 0x21 + 0x31);
                if (pppppppuVar15 != (ulonglong *******)0x0) {
                  pppppppuVar13 =
                       (ulonglong *******)
                       ((longlong)puVar11 + ((longlong)pppppppuStack_190 * -4 + -4) * 8);
                  pppppppuVar9 = (ulonglong *******)&DAT_00000010;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                }
              }
            }
LAB_00425718:
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_128 = local_c8;
            pppppppuStack_120 = pppppppuStack_c0;
            local_118 = local_b8;
            pppppppuStack_110 = pppppppuStack_b0;
            local_108 = local_a8;
            pppppppuStack_100 = pppppppuStack_a0;
            local_158 = pppppppuVar18;
            local_150 = local_1a0;
            pppppppuStack_148 = pppppppuVar9;
            pppppppuStack_140 = pppppppuVar13;
            pppppppuStack_138 = local_1b8;
            pppppppuStack_130 = pppppppuVar15;
            local_f8 = bVar16;
            pppppppuVar12 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_seq(param_2);
            local_178 = (ulonglong *******)CONCAT71(uStack_f7,local_f8);
            if (pppppppuVar18 == (ulonglong *******)0xfffffffffffffffe) goto LAB_004257dd;
            if (pppppppuVar12 == (ulonglong *******)0x0) goto LAB_004258e8;
            if ((pppppppuStack_120 != (ulonglong *******)0x0) &&
               ((longlong)pppppppuStack_120 * 0x21 != -0x31)) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            if (0 < (longlong)pppppppuVar18) goto LAB_00425835;
            goto LAB_00425848;
          }
        }
        else {
          if (bVar17 != 0x7b) {
            local_1a0 = (ulonglong *******)
                        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_invalid_type(param_2,&local_159,&DAT_0078a520);
            goto LAB_00425c54;
          }
          pppppppuVar12 = param_2 + 7;
          *(char *)pppppppuVar12 = *(char *)pppppppuVar12 + -1;
          if (*(char *)pppppppuVar12 != '\0') {
            param_2[5] = ppppppuVar5;
            local_e8 = 1;
            local_1c1 = 2;
            pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
            local_198 = (ulonglong *******)0x0;
            local_d8 = (ulonglong *******)&DAT_001945c1;
            pppppppuVar13 = (ulonglong *******)0xfffffffffffffffe;
            pppppppuVar9 = local_198;
            local_f0 = param_2;
            local_1b8 = param_1;
            goto LAB_00424f40;
          }
        }
        local_158 = (ulonglong *******)0x18;
        goto LAB_00424eae;
      }
      param_2[5] = ppppppuVar5;
    } while (ppppppuVar5 != ppppppuVar6);
  }
  local_158 = (ulonglong *******)0x5;
LAB_00424eae:
  ppppppuVar6 = (ulonglong ******)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(param_2,&local_158);
  goto LAB_00424ebb;
  while( true ) {
    auVar23 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (pppppppuVar12,pppppppuVar7);
    bVar16 = (byte)param_5;
    if (auVar23._0_8_ != 0) break;
LAB_00424f40:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_158,&local_f0);
    pppppppuVar12 = local_f0;
    auVar23._8_8_ = extraout_RDX;
    auVar23._0_8_ = local_150;
    bVar16 = (byte)param_5;
    if ((char)local_158 == '\x01') {
      goto LAB_0042543b;
    }
    if (local_158._1_1_ != '\x01') {
      if (local_198 == (ulonglong *******)0x0) {
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_178 = *(ulonglong ********)(in_FS_OFFSET + -0x38);
          pppppppuStack_170 = *(ulonglong ********)(in_FS_OFFSET + -0x30);
        }
        else {
          pppppppuStack_170 = extraout_RDX;
          local_178 = (ulonglong *******)(*(code *)PTR_hashmap_random_keys_00799248)();
          *(ulonglong ********)(in_FS_OFFSET + -0x38) = local_178;
          *(ulonglong ********)(in_FS_OFFSET + -0x30) = pppppppuStack_170;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(undefined1 **)(in_FS_OFFSET + -0x38) = (undefined1 *)((longlong)local_178 + 1);
        local_58 = (ulonglong *******)
                   PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0;
        pppppppuStack_50 = _DAT_00789cc8;
        local_48 = _DAT_00789cd0;
        pppppppuStack_40 = DAT_00789cd8;
      }
      else {
        local_48 = local_188;
        pppppppuStack_40 = pppppppuStack_180;
        pppppppuStack_50 = local_1b0;
        local_58 = local_198;
      }
      auVar23._8_8_ = pppppppuStack_170;
      auVar23._0_8_ = local_1a0;
      auVar4._8_8_ = pppppppuStack_170;
      auVar4._0_8_ = local_1a0;
      bVar16 = local_1c1 & 1;
      if (pppppppuVar18 == (ulonglong *******)0xfffffffffffffffe) {
        pppppppuVar18 = (ulonglong *******)0xffffffffffffffff;
      }
      pppppppuVar9 = local_e0;
      if (pppppppuVar13 == (ulonglong *******)0xfffffffffffffffe) {
        pppppppuVar15 = pppppppuVar13;
        pppppppuVar13 = (ulonglong *******)0xffffffffffffffff;
        auVar23 = auVar4;
      }
      else {
        pppppppuVar15 = local_90;
      }
      goto LAB_004254c7;
    }
    pppppppuVar15 = local_f0 + 3;
    local_f0[5] = (ulonglong ******)((longlong)local_f0[5] + 1);
    local_f0[2] = (ulonglong ******)0x0;
    pppppppuVar8 = local_f0;
    (*(code *)PTR_parse_str_007998f8)();
    auVar23._8_8_ = pppppppuVar8;
    auVar23._0_8_ = local_150;
    bVar16 = (byte)param_5;
    if ((int)local_158 == 2) break;
    pppppppuVar8 = pppppppuStack_148 + -1;
    pppppppuVar9 = pppppppuVar8;
    pppppppuVar7 = pppppppuVar15;
    if (pppppppuVar8 < &DAT_0000000d) {
      pppppppuVar9 = (ulonglong *******)
                     ((longlong)&switchD_00424fd5::switchdataD_00193fe8 +
                     (longlong)
                     (int)(&switchD_00424fd5::switchdataD_00193fe8)[(longlong)pppppppuVar8]);
      switch(pppppppuVar8) {
      case (ulonglong *******)0x0:
        pppppppuVar9 = (ulonglong *******)0x7365696c696d6166;
        if (*local_150 == (ulonglong ******)0x7365696c696d6166) {
          if (local_198 != (ulonglong *******)0x0) {
            local_d8 = (ulonglong *******)0x1852b0;
LAB_00425cc4:
            local_c8 = local_d8;
            pppppppuStack_c0 = pppppppuStack_148;
            local_158 = (ulonglong *******)&local_c8;
            local_150 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            pppppppuVar9 = local_d8;
            auVar23 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                 ,&local_158);
            goto LAB_00425416;
          }
          pppppppuVar8 = (ulonglong *******)pppppppuVar12[4];
          pppppppuVar7 = (ulonglong *******)pppppppuVar12[5];
          pppppppuVar9 = pppppppuVar8;
          if (pppppppuVar8 <= pppppppuVar7) {
LAB_00425af2:
            local_198 = (ulonglong *******)0x0;
            local_c8 = (ulonglong *******)0x3;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_c8);
            goto LAB_00425416;
          }
          ppppppuVar6 = *pppppppuVar15;
          pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar8;
          while( true ) {
            pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
            uVar14 = (ulonglong)*(byte *)(((longlong)ppppppuVar6 - 1U) + (longlong)pppppppuVar7);
            if (0x3a < uVar14) goto LAB_00425d8c;
            if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
            pppppppuVar12[5] = (ulonglong ******)pppppppuVar7;
            if (pppppppuVar7 == pppppppuVar8) goto LAB_00425af2;
          }
          if (uVar14 != 0x3a) {
LAB_00425d8c:
            local_198 = (ulonglong *******)0x0;
            local_c8 = (ulonglong *******)&DAT_00000006;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_c8);
            goto LAB_00425416;
          }
          pppppppuVar12[5] = (ulonglong ******)pppppppuVar7;
          deserialize_map::
          <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                    (&local_158,pppppppuVar12);
          auVar23._8_8_ = extraout_RDX_03;
          auVar23._0_8_ = local_150;
          bVar16 = (byte)param_5;
          pppppppuVar9 = local_158;
          if (local_158 == (ulonglong *******)0x0) {
            local_198 = (ulonglong *******)0x0;
            goto LAB_0042543b;
          }
          local_178 = pppppppuStack_138;
          pppppppuStack_170 = pppppppuStack_130;
          local_188 = pppppppuStack_148;
          pppppppuStack_180 = pppppppuStack_140;
          local_1b0 = local_150;
          local_198 = local_158;
          goto LAB_00424f40;
        }
        break;
      case (ulonglong *******)0x6:
        pppppppuVar9 = (ulonglong *******)((ulonglong)*local_150 ^ 0x69746164696c6176);
        pppppppuVar7 = (ulonglong *******)0x6c72755f6e6f6974;
        if (*(longlong *)((longlong)local_150 + 6) == 0x6c72755f6e6f6974 &&
            pppppppuVar9 == (ulonglong *******)0x0) {
          if (pppppppuVar18 != (ulonglong *******)0xfffffffffffffffe) {
            local_d8 = (ulonglong *******)&DAT_001945b3;
            goto LAB_00425cc4;
          }
          pppppppuVar8 = (ulonglong *******)pppppppuVar12[4];
          pppppppuVar18 = (ulonglong *******)pppppppuVar12[5];
          pppppppuVar9 = pppppppuVar8;
          if (pppppppuVar18 < pppppppuVar8) {
            ppppppuVar6 = *pppppppuVar15;
            pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar8;
            while( true ) {
              pppppppuVar18 = (ulonglong *******)((longlong)pppppppuVar18 + 1);
              uVar14 = (ulonglong)*(byte *)(((longlong)ppppppuVar6 - 1U) + (longlong)pppppppuVar18);
              if (0x3a < uVar14) goto LAB_00425dc3;
              if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
              pppppppuVar12[5] = (ulonglong ******)pppppppuVar18;
              if (pppppppuVar18 == pppppppuVar8) goto LAB_00425b2c;
            }
            if (uVar14 == 0x3a) {
              pppppppuVar12[5] = (ulonglong ******)pppppppuVar18;
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_c8,pppppppuVar12);
              auVar23._8_8_ = extraout_RDX_02;
              auVar23._0_8_ = pppppppuStack_c0;
              bVar16 = (byte)param_5;
              if (local_c8 == (ulonglong *******)0xfffffffffffffffe) {
                pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
                pppppppuVar9 = local_198;
                goto LAB_0042543b;
              }
              local_e0 = local_b8;
              local_1a0 = pppppppuStack_c0;
              pppppppuVar9 = local_198;
              pppppppuVar18 = local_c8;
              goto LAB_00424f40;
            }
LAB_00425dc3:
            local_158 = (ulonglong *******)&DAT_00000006;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_158);
          }
          else {
LAB_00425b2c:
            local_158 = (ulonglong *******)0x3;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_158);
          }
          pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
          goto LAB_00425416;
        }
        break;
      case (ulonglong *******)0xb:
        auVar19[0] = -(*(char *)local_150 == s_validation_requi_00182a20[0]);
        auVar19[1] = -(*(char *)((longlong)local_150 + 1) == s_validation_requi_00182a20[1]);
        auVar19[2] = -(*(char *)((longlong)local_150 + 2) == s_validation_requi_00182a20[2]);
        auVar19[3] = -(*(char *)((longlong)local_150 + 3) == s_validation_requi_00182a20[3]);
        auVar19[4] = -(*(char *)((longlong)local_150 + 4) == s_validation_requi_00182a20[4]);
        auVar19[5] = -(*(char *)((longlong)local_150 + 5) == s_validation_requi_00182a20[5]);
        auVar19[6] = -(*(char *)((longlong)local_150 + 6) == s_validation_requi_00182a20[6]);
        auVar19[7] = -(*(char *)((longlong)local_150 + 7) == s_validation_requi_00182a20[7]);
        auVar19[8] = -(*(char *)(local_150 + 1) == s_validation_requi_00182a20[8]);
        auVar19[9] = -(*(char *)((longlong)local_150 + 9) == s_validation_requi_00182a20[9]);
        auVar19[10] = -(*(char *)((longlong)local_150 + 10) == s_validation_requi_00182a20[10]);
        auVar19[0xb] = -(*(char *)((longlong)local_150 + 0xb) == s_validation_requi_00182a20[0xb]);
        auVar19[0xc] = -(*(char *)((longlong)local_150 + 0xc) == s_validation_requi_00182a20[0xc]);
        auVar19[0xd] = -(*(char *)((longlong)local_150 + 0xd) == s_validation_requi_00182a20[0xd]);
        auVar19[0xe] = -(*(char *)((longlong)local_150 + 0xe) == s_validation_requi_00182a20[0xe]);
        auVar19[0xf] = -(*(char *)((longlong)local_150 + 0xf) == s_validation_requi_00182a20[0xf]);
        auVar21[0] = -(*(char *)((longlong)local_150 + 3) == DAT_00184140);
        auVar21[1] = -(*(char *)((longlong)local_150 + 4) == UNK_00184141);
        auVar21[2] = -(*(char *)((longlong)local_150 + 5) == UNK_00184142);
        auVar21[3] = -(*(char *)((longlong)local_150 + 6) == UNK_00184143);
        auVar21[4] = -(*(char *)((longlong)local_150 + 7) == UNK_00184144);
        auVar21[5] = -(*(char *)(local_150 + 1) == UNK_00184145);
        auVar21[6] = -(*(char *)((longlong)local_150 + 9) == UNK_00184146);
        auVar21[7] = -(*(char *)((longlong)local_150 + 10) == UNK_00184147);
        auVar21[8] = -(*(char *)((longlong)local_150 + 0xb) == UNK_00184148);
        auVar21[9] = -(*(char *)((longlong)local_150 + 0xc) == UNK_00184149);
        auVar21[10] = -(*(char *)((longlong)local_150 + 0xd) == UNK_0018414a);
        auVar21[0xb] = -(*(char *)((longlong)local_150 + 0xe) == UNK_0018414b);
        auVar21[0xc] = -(*(char *)((longlong)local_150 + 0xf) == UNK_0018414c);
        auVar21[0xd] = -(*(char *)(local_150 + 2) == UNK_0018414d);
        auVar21[0xe] = -(*(char *)((longlong)local_150 + 0x11) == UNK_0018414e);
        auVar21[0xf] = -(*(char *)((longlong)local_150 + 0x12) == UNK_0018414f);
        auVar21 = auVar21 & auVar19;
        uVar2 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar21[0xf] >> 7) << 0xf;
        pppppppuVar9 = (ulonglong *******)(ulonglong)uVar2;
        if (uVar2 == 0xffff) {
          if (local_1c1 != 2) {
            local_d8 = (ulonglong *******)&DAT_001945a0;
            goto LAB_00425cc4;
          }
          pppppppuVar8 = (ulonglong *******)pppppppuVar12[4];
          pppppppuVar7 = (ulonglong *******)pppppppuVar12[5];
          pppppppuVar9 = pppppppuVar8;
          if (pppppppuVar8 <= pppppppuVar7) {
LAB_00425ac0:
            local_158 = (ulonglong *******)0x3;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_158);
            goto LAB_00425416;
          }
          ppppppuVar6 = *pppppppuVar15;
          pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar8;
          while( true ) {
            pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
            uVar14 = (ulonglong)*(byte *)(((longlong)ppppppuVar6 - 1U) + (longlong)pppppppuVar7);
            if (0x3a < uVar14) goto LAB_00425d22;
            if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
            pppppppuVar12[5] = (ulonglong ******)pppppppuVar7;
            if (pppppppuVar7 == pppppppuVar8) goto LAB_00425ac0;
          }
          if (uVar14 != 0x3a) {
LAB_00425d22:
            local_158 = (ulonglong *******)&DAT_00000006;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12,&local_158);
            goto LAB_00425416;
          }
          pppppppuVar12[5] = (ulonglong ******)pppppppuVar7;
          deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
                    (&local_c8,pppppppuVar12);
          auVar23._8_8_ = extraout_RDX_00;
          auVar23._0_8_ = pppppppuStack_c0;
          bVar16 = (byte)param_5;
          if ((char)local_c8 == '\x01') {
            goto LAB_0042543b;
          }
          local_1c1 = local_c8._1_1_;
          goto LAB_00424f40;
        }
        break;
      case (ulonglong *******)0xc:
        auVar20[0] = -(*(char *)local_150 == DAT_001830a0);
        auVar20[1] = -(*(char *)((longlong)local_150 + 1) == UNK_001830a1);
        auVar20[2] = -(*(char *)((longlong)local_150 + 2) == UNK_001830a2);
        auVar20[3] = -(*(char *)((longlong)local_150 + 3) == UNK_001830a3);
        auVar20[4] = -(*(char *)((longlong)local_150 + 4) == UNK_001830a4);
        auVar20[5] = -(*(char *)((longlong)local_150 + 5) == UNK_001830a5);
        auVar20[6] = -(*(char *)((longlong)local_150 + 6) == UNK_001830a6);
        auVar20[7] = -(*(char *)((longlong)local_150 + 7) == UNK_001830a7);
        auVar20[8] = -(*(char *)(local_150 + 1) == UNK_001830a8);
        auVar20[9] = -(*(char *)((longlong)local_150 + 9) == UNK_001830a9);
        auVar20[10] = -(*(char *)((longlong)local_150 + 10) == UNK_001830aa);
        auVar20[0xb] = -(*(char *)((longlong)local_150 + 0xb) == UNK_001830ab);
        auVar20[0xc] = -(*(char *)((longlong)local_150 + 0xc) == UNK_001830ac);
        auVar20[0xd] = -(*(char *)((longlong)local_150 + 0xd) == UNK_001830ad);
        auVar20[0xe] = -(*(char *)((longlong)local_150 + 0xe) == UNK_001830ae);
        auVar20[0xf] = -(*(char *)((longlong)local_150 + 0xf) == UNK_001830af);
        uVar1 = *(undefined4 *)(local_150 + 2);
        auVar22[0] = -((char)uVar1 == DAT_00182940);
        auVar22[1] = -((char)((uint)uVar1 >> 8) == UNK_00182941);
        auVar22[2] = -((char)((uint)uVar1 >> 0x10) == UNK_00182942);
        auVar22[3] = -((char)((uint)uVar1 >> 0x18) == UNK_00182943);
        auVar22[4] = -(UNK_00182944 == '\0');
        auVar22[5] = -(UNK_00182945 == '\0');
        auVar22[6] = -(UNK_00182946 == '\0');
        auVar22[7] = -(UNK_00182947 == '\0');
        auVar22[8] = -(UNK_00182948 == '\0');
        auVar22[9] = -(UNK_00182949 == '\0');
        auVar22[10] = -(UNK_0018294a == '\0');
        auVar22[0xb] = -(UNK_0018294b == '\0');
        auVar22[0xc] = -(UNK_0018294c == '\0');
        auVar22[0xd] = -(UNK_0018294d == '\0');
        auVar22[0xe] = -(UNK_0018294e == '\0');
        auVar22[0xf] = -(UNK_0018294f == '\0');
        auVar22 = auVar22 & auVar20;
        uVar2 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
        pppppppuVar9 = (ulonglong *******)(ulonglong)uVar2;
        if (uVar2 == 0xffff) {
          if (pppppppuVar13 != (ulonglong *******)0xfffffffffffffffe) goto LAB_00425cc4;
          pppppppuVar13 = (ulonglong *******)pppppppuVar12[4];
          pppppppuVar8 = (ulonglong *******)pppppppuVar12[5];
          pppppppuVar9 = pppppppuVar13;
          local_1b8 = local_198;
          if (pppppppuVar8 < pppppppuVar13) {
            ppppppuVar6 = *pppppppuVar15;
            pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar13;
            while( true ) {
              pppppppuVar8 = (ulonglong *******)((longlong)pppppppuVar8 + 1);
              uVar14 = (ulonglong)*(byte *)(((longlong)ppppppuVar6 - 1U) + (longlong)pppppppuVar8);
              if (0x3a < uVar14) goto LAB_00425d51;
              if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
              pppppppuVar12[5] = (ulonglong ******)pppppppuVar8;
              if (pppppppuVar8 == pppppppuVar13) goto LAB_00425b6c;
            }
            if (uVar14 == 0x3a) {
              pppppppuVar12[5] = (ulonglong ******)pppppppuVar8;
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_c8,pppppppuVar12);
              auVar23._8_8_ = extraout_RDX_01;
              auVar23._0_8_ = pppppppuStack_c0;
              bVar16 = (byte)param_5;
              pppppppuVar12 = pppppppuStack_c0;
              pppppppuVar9 = local_198;
              pppppppuVar13 = local_c8;
              if (local_c8 == (ulonglong *******)0xfffffffffffffffe) goto joined_r0x00425bad;
              local_90 = local_b8;
              local_1b8 = pppppppuStack_c0;
              goto LAB_00424f40;
            }
LAB_00425d51:
            local_158 = (ulonglong *******)&DAT_00000006;
            pppppppuVar13 = (ulonglong *******)&local_158;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12);
          }
          else {
LAB_00425b6c:
            local_158 = (ulonglong *******)0x3;
            pppppppuVar13 = (ulonglong *******)&local_158;
            auVar23 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(pppppppuVar12);
          }
          pppppppuVar12 = auVar23._0_8_;
          goto joined_r0x00425bad;
        }
      }
    }
  }
LAB_00425416:
LAB_0042543b:
  pppppppuVar12 = auVar23._0_8_;
  local_1b8 = local_198;
  if ((undefined1 *)((longlong)pppppppuVar13 + -1) < (undefined1 *)0xfffffffffffffffd) {
    uVar10 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar23._8_8_ = uVar10;
    auVar23._0_8_ = pppppppuVar12;
  }
joined_r0x00425bad:
  local_178 = (ulonglong *******)((longlong)pppppppuVar18 + -1);
  if (local_178 < (ulonglong *******)0xfffffffffffffffd) {
    uVar10 = 1;
    local_178 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00798fc8)();
    auVar23._8_8_ = uVar10;
    auVar23._0_8_ = pppppppuVar12;
    pppppppuVar13 = pppppppuVar18;
  }
  pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
  pppppppuVar15 = pppppppuVar13;
  pppppppuVar13 = param_6;
  if (local_1b8 != (ulonglong *******)0x0) {
    pppppppuVar18 = (ulonglong *******)0xfffffffffffffffe;
    pppppppuVar15 = (ulonglong *******)0x0;
    if (local_1b0 != (ulonglong *******)0x0) {
      local_178 = (ulonglong *******)((longlong)local_1b0 * 0x20);
      pppppppuVar15 = (ulonglong *******)((longlong)local_1b0 * 0x21 + 0x31);
      if (pppppppuVar15 != (ulonglong *******)0x0) {
        local_1b8 = (ulonglong *******)((longlong)local_1b8 + ((longlong)local_1b0 * -4 + -4) * 8);
        puVar11 = &DAT_00000010;
        local_178 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00798fc8)();
        auVar3._8_8_ = puVar11;
        auVar3._0_8_ = auVar23._0_8_;
        pppppppuVar13 = param_6;
        auVar23 = auVar3;
      }
    }
  }
LAB_004254c7:
  pppppppuStack_100 = auVar23._8_8_;
  local_1a0 = auVar23._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_128 = local_58;
  pppppppuStack_120 = pppppppuStack_50;
  local_118 = local_48;
  pppppppuStack_110 = pppppppuStack_40;
  local_158 = pppppppuVar18;
  local_150 = local_1a0;
  pppppppuStack_148 = pppppppuVar9;
  pppppppuStack_140 = pppppppuVar13;
  pppppppuStack_138 = local_1b8;
  pppppppuStack_130 = pppppppuVar15;
  local_108 = local_178;
  local_f8 = bVar16;
  pppppppuVar12 =
       (ulonglong *******)
       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
       ::end_map(param_2);
  local_178 = (ulonglong *******)CONCAT71(uStack_f7,local_f8);
  if (pppppppuVar18 == (ulonglong *******)0xfffffffffffffffe) {
LAB_004257dd:
    if (pppppppuVar12 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>();
    }
  }
  else if (pppppppuVar12 == (ulonglong *******)0x0) {
LAB_004258e8:
    local_68 = (ulonglong ******)local_178;
    local_78 = local_108;
    pppppppuStack_70 = pppppppuStack_100;
    local_88 = local_118;
    pppppppuStack_80 = pppppppuStack_110;
    if (pppppppuVar18 != (ulonglong *******)0xfffffffffffffffe) {
      local_d0[2] = (ulonglong ******)pppppppuVar9;
      local_d0[3] = (ulonglong ******)pppppppuVar13;
      local_d0[4] = (ulonglong ******)local_1b8;
      local_d0[5] = (ulonglong ******)pppppppuVar15;
      local_d0[6] = (ulonglong ******)local_128;
      local_d0[7] = (ulonglong ******)pppppppuStack_120;
      local_d0[8] = (ulonglong ******)local_118;
      local_d0[9] = (ulonglong ******)pppppppuStack_110;
      local_d0[10] = (ulonglong ******)local_108;
      local_d0[0xb] = (ulonglong ******)pppppppuStack_100;
      local_d0[0xc] = (ulonglong ******)local_178;
      *local_d0 = (ulonglong ******)pppppppuVar18;
      local_d0[1] = (ulonglong ******)local_1a0;
      return local_d0;
    }
  }
  else {
    if ((pppppppuStack_120 != (ulonglong *******)0x0) &&
       ((longlong)pppppppuStack_120 * 0x21 != -0x31)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((longlong)pppppppuVar18 - 1U < 0xfffffffffffffffe) {
LAB_00425835:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_00425848:
    if ((longlong)pppppppuVar13 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    local_1a0 = pppppppuVar12;
  }
LAB_00425c54:
  ppppppuVar6 = (ulonglong ******)
                ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_1a0,param_2);
LAB_00424ebb:
  local_d0[1] = ppppppuVar6;
  *local_d0 = (ulonglong ******)0xfffffffffffffffe;
  return local_d0;
}


