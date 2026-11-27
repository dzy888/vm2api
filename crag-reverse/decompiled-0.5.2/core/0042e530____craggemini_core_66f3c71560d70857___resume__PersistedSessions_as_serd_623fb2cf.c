// 0042e530 <<craggemini_core[66f3c71560d70857]::resume::PersistedSessions_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::PersistedSessions
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::PersistedSessions_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,longlong *******param_2)

{
  byte bVar1;
  bool bVar2;
  longlong ******pppppplVar3;
  undefined8 uVar4;
  longlong ******pppppplVar5;
  longlong *******ppppppplVar6;
  longlong *******ppppppplVar7;
  longlong *******ppppppplVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  uint uVar9;
  longlong *******unaff_RBX;
  undefined1 *puVar10;
  longlong *******ppppppplVar11;
  ulonglong uVar12;
  longlong *******unaff_R12;
  longlong *******unaff_R15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong *******local_178;
  longlong *******local_170;
  undefined8 local_148;
  longlong *******ppppppplStack_140;
  longlong *******local_138;
  longlong *******ppppppplStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong *******local_110;
  uint local_fc;
  uint local_f8;
  undefined1 local_f1;
  undefined8 local_f0;
  longlong *******ppppppplStack_e8;
  longlong *******local_e0;
  longlong *******ppppppplStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  longlong *******local_b8;
  undefined8 *local_b0;
  longlong *******local_a8;
  longlong *******local_a0;
  longlong *******local_98;
  undefined1 local_90;
  longlong *******local_88;
  longlong *******ppppppplStack_80;
  longlong *******local_78;
  longlong *******ppppppplStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  pppppplVar5 = param_2[4];
  pppppplVar3 = param_2[5];
  local_b0 = param_1;
  if (pppppplVar3 < pppppplVar5) {
    ppppppplVar8 = (longlong *******)-(longlong)pppppplVar5;
    do {
      pppppplVar3 = (longlong ******)((longlong)pppppplVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)pppppplVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          ppppppplVar7 = param_2 + 7;
          *(char *)ppppppplVar7 = *(char *)ppppppplVar7 + -1;
          if (*(char *)ppppppplVar7 != '\0') {
            param_2[5] = pppppplVar3;
            ppppppplStack_e8 = (longlong *******)CONCAT71(ppppppplStack_e8._1_7_,1);
            local_f0 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_148,&local_f0);
            uVar4 = extraout_RDX;
            if ((char)local_148 == '\x01') goto LAB_0042ea2a;
            if (local_148._1_1_ == '\x01') {
              deserialize_u32::
              <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                        (&local_148,local_f0);
              uVar4 = extraout_RDX_00;
              if ((int)local_148 == 1) {
LAB_0042ea2a:
                auVar15._8_8_ = uVar4;
                auVar15._0_8_ = ppppppplStack_140;
                uVar9 = (uint)unaff_RBX;
                goto LAB_0042ea2f;
              }
              uVar9 = local_148._4_4_;
              unaff_RBX = (longlong *******)(ulonglong)local_148._4_4_;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_148,&local_f0);
              uVar4 = extraout_RDX_01;
              if ((char)local_148 == '\x01') goto LAB_0042ea2a;
              if (local_148._1_1_ != '\x01') {
                uVar4 = 1;
                goto LAB_0042ee41;
              }
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_148,local_f0);
              ppppppplVar11 = local_138;
              ppppppplVar7 = ppppppplStack_140;
              unaff_R12 = local_148;
              auVar15._8_8_ = extraout_RDX_02;
              auVar15._0_8_ = ppppppplStack_140;
              if (local_148 == (longlong *******)0xfffffffffffffffe) goto LAB_0042ea2f;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_148,&local_f0);
              auVar16._8_8_ = extraout_RDX_03;
              auVar16._0_8_ = ppppppplStack_140;
              if ((char)local_148 == '\x01') {
LAB_0042ee9f:
                local_148 = (longlong *******)0xffffffffffffffff;
                if ((longlong)unaff_R12 < 1) {
                  local_138 = ppppppplVar8;
                  auVar15 = auVar16;
                }
                else {
                  uVar4 = 1;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar15._8_8_ = uVar4;
                  auVar15._0_8_ = auVar16._0_8_;
                  local_138 = ppppppplVar8;
                }
              }
              else {
                if (local_148._1_1_ != '\x01') {
                  auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(2,&PTR_DAT_00789d20,&DAT_00789c78);
                  goto LAB_0042ee9f;
                }
                deserialize_seq::
                <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>>
                          (&local_148,local_f0);
                auVar15._8_8_ = ppppppplVar7;
                auVar15._0_8_ = ppppppplStack_140;
                auVar16._8_8_ = extraout_RDX_04;
                auVar16._0_8_ = ppppppplStack_140;
                if (local_148 == (longlong *******)0xffffffffffffffff) goto LAB_0042ee9f;
              }
            }
            else {
              uVar4 = 0;
LAB_0042ee41:
              uVar9 = (uint)unaff_RBX;
              auVar15 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::invalid_length(uVar4,&PTR_DAT_00789d20,&DAT_00789c78);
LAB_0042ea2f:
              local_138 = ppppppplVar8;
              ppppppplVar11 = (longlong *******)0x100002600;
              local_148 = (longlong *******)0xffffffffffffffff;
            }
            local_d0 = auVar15._8_8_;
            ppppppplStack_e8 = auVar15._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_f0 = local_148;
            local_e0 = local_138;
            ppppppplStack_d8 = unaff_R12;
            uStack_c8 = ppppppplVar11;
            local_c0 = uVar9;
            ppppppplVar8 = (longlong *******)
                           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::end_seq(param_2);
            goto LAB_0042ec2f;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            ppppppplVar7 = (longlong *******)
                           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::peek_invalid_type(param_2,&local_f1,&DAT_0078a5c0);
            goto LAB_0042f046;
          }
          ppppppplVar8 = param_2 + 7;
          *(char *)ppppppplVar8 = *(char *)ppppppplVar8 + -1;
          if (*(char *)ppppppplVar8 != '\0') {
            param_2[5] = pppppplVar3;
            local_90 = 1;
            local_f8 = 0;
            local_178 = (longlong *******)0xffffffffffffffff;
            local_48 = 0x635f657669746361;
            uStack_40 = 0x7461737265766e6f;
            local_58._8_8_ = 0x64695f6e6f697461;
            local_58._0_8_ = 0x737265766e6f635f;
            local_a8 = (longlong *******)&DAT_001945d5;
            local_98 = param_2;
            ppppppplVar8 = (longlong *******)0xfffffffffffffffe;
            goto LAB_0042e680;
          }
        }
        local_148 = (longlong *******)0x18;
        goto LAB_0042e59e;
      }
      param_2[5] = pppppplVar3;
    } while (pppppplVar3 != pppppplVar5);
  }
  local_148 = (longlong *******)0x5;
LAB_0042e59e:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_148);
  goto LAB_0042e5ab;
LAB_0042e680:
  ppppppplVar11 = (longlong *******)&local_98;
  uVar4 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
          ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_148)
  ;
  ppppppplVar7 = local_98;
  if ((char)local_148 == '\x01') {
    ppppppplVar6 = ppppppplStack_140;
    goto LAB_0042eb58;
  }
  if (local_148._1_1_ != '\x01') {
    if ((local_f8 & 1) != 0) {
      if (ppppppplVar8 != (longlong *******)0xfffffffffffffffe) {
        unaff_R15 = ppppppplVar8;
      }
      else {
        unaff_R15 = (longlong *******)0xffffffffffffffff;
      }
      bVar2 = ppppppplVar8 == (longlong *******)0xfffffffffffffffe;
      if (local_178 == (longlong *******)0xffffffffffffffff) {
        local_f0 = (longlong *******)&DAT_00194625;
        ppppppplStack_e8 = (longlong *******)&DAT_0000000d;
        local_148 = (longlong *******)&local_f0;
        ppppppplStack_140 = (longlong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        ppppppplVar7 = (longlong *******)&local_148;
        local_170 = (longlong *******)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298);
        uVar4 = extraout_XMM0_Qa_01;
        if ((undefined1 *)((longlong)unaff_R15 + -1) < (undefined1 *)0xfffffffffffffffe) {
          uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_01,1);
          ppppppplVar7 = unaff_R15;
        }
        goto LAB_0042ebb0;
      }
      local_d0 = local_b8;
      uStack_c8 = local_a0;
      goto LAB_0042ebe3;
    }
    local_f0 = (longlong *******)&DAT_001945d5;
    ppppppplStack_e8 = (longlong *******)&DAT_00000007;
    local_148 = (longlong *******)&local_f0;
    ppppppplStack_140 = (longlong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    ppppppplVar11 = (longlong *******)&local_148;
    ppppppplVar6 = (longlong *******)
                   <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                   ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                             (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298);
    uVar4 = extraout_XMM0_Qa_00;
LAB_0042eb54:
    goto LAB_0042eb58;
  }
  unaff_R15 = local_98 + 3;
  local_98[5] = (longlong ******)((longlong)local_98[5] + 1);
  local_98[2] = (longlong ******)0x0;
  uVar4 = (*(code *)PTR_parse_str_007998f8)(uVar4,local_98);
  ppppppplVar11 = unaff_R15;
  ppppppplVar6 = ppppppplStack_140;
  if (local_148 == (longlong *******)0x2) goto LAB_0042ea7e;
  if (local_138 == (longlong *******)&DAT_00000016) {
    auVar14[0] = -(*(char *)((longlong)ppppppplStack_140 + 6) == local_58[0]);
    auVar14[1] = -(*(char *)((longlong)ppppppplStack_140 + 7) == local_58[1]);
    auVar14[2] = -(*(char *)(ppppppplStack_140 + 1) == local_58[2]);
    auVar14[3] = -(*(char *)((longlong)ppppppplStack_140 + 9) == local_58[3]);
    auVar14[4] = -(*(char *)((longlong)ppppppplStack_140 + 10) == local_58[4]);
    auVar14[5] = -(*(char *)((longlong)ppppppplStack_140 + 0xb) == local_58[5]);
    auVar14[6] = -(*(char *)((longlong)ppppppplStack_140 + 0xc) == local_58[6]);
    auVar14[7] = -(*(char *)((longlong)ppppppplStack_140 + 0xd) == local_58[7]);
    auVar14[8] = -(*(char *)((longlong)ppppppplStack_140 + 0xe) == local_58[8]);
    auVar14[9] = -(*(char *)((longlong)ppppppplStack_140 + 0xf) == local_58[9]);
    auVar14[10] = -(*(char *)(ppppppplStack_140 + 2) == local_58[10]);
    auVar14[0xb] = -(*(char *)((longlong)ppppppplStack_140 + 0x11) == local_58[0xb]);
    auVar14[0xc] = -(*(char *)((longlong)ppppppplStack_140 + 0x12) == local_58[0xc]);
    auVar14[0xd] = -(*(char *)((longlong)ppppppplStack_140 + 0x13) == local_58[0xd]);
    auVar14[0xe] = -(*(char *)((longlong)ppppppplStack_140 + 0x14) == local_58[0xe]);
    auVar14[0xf] = -(*(char *)((longlong)ppppppplStack_140 + 0x15) == local_58[0xf]);
    auVar13[0] = -(*(char *)ppppppplStack_140 == (char)local_48);
    auVar13[1] = -(*(char *)((longlong)ppppppplStack_140 + 1) == local_48._1_1_);
    auVar13[2] = -(*(char *)((longlong)ppppppplStack_140 + 2) == local_48._2_1_);
    auVar13[3] = -(*(char *)((longlong)ppppppplStack_140 + 3) == local_48._3_1_);
    auVar13[4] = -(*(char *)((longlong)ppppppplStack_140 + 4) == local_48._4_1_);
    auVar13[5] = -(*(char *)((longlong)ppppppplStack_140 + 5) == local_48._5_1_);
    auVar13[6] = -(*(char *)((longlong)ppppppplStack_140 + 6) == local_48._6_1_);
    auVar13[7] = -(*(char *)((longlong)ppppppplStack_140 + 7) == local_48._7_1_);
    auVar13[8] = -(*(char *)(ppppppplStack_140 + 1) == (char)uStack_40);
    auVar13[9] = -(*(char *)((longlong)ppppppplStack_140 + 9) == uStack_40._1_1_);
    auVar13[10] = -(*(char *)((longlong)ppppppplStack_140 + 10) == uStack_40._2_1_);
    auVar13[0xb] = -(*(char *)((longlong)ppppppplStack_140 + 0xb) == uStack_40._3_1_);
    auVar13[0xc] = -(*(char *)((longlong)ppppppplStack_140 + 0xc) == uStack_40._4_1_);
    auVar13[0xd] = -(*(char *)((longlong)ppppppplStack_140 + 0xd) == uStack_40._5_1_);
    auVar13[0xe] = -(*(char *)((longlong)ppppppplStack_140 + 0xe) == uStack_40._6_1_);
    auVar13[0xf] = -(*(char *)((longlong)ppppppplStack_140 + 0xf) == uStack_40._7_1_);
    auVar13 = auVar13 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0042e7f1;
    if (ppppppplVar8 != (longlong *******)0xfffffffffffffffe) {
      ppppppplStack_e8 = (longlong *******)&DAT_00000016;
      local_a8 = (longlong *******)&DAT_0019460f;
      goto LAB_0042f07f;
    }
    pppppplVar5 = ppppppplVar7[5];
    if (pppppplVar5 < ppppppplVar7[4]) {
      pppppplVar3 = *unaff_R15;
      while( true ) {
        pppppplVar5 = (longlong ******)((longlong)pppppplVar5 + 1);
        uVar12 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar5);
        if (0x3a < uVar12) goto LAB_0042f128;
        if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
        ppppppplVar7[5] = pppppplVar5;
        if (pppppplVar5 == ppppppplVar7[4]) goto LAB_0042eed1;
      }
      if (uVar12 == 0x3a) {
        ppppppplVar7[5] = pppppplVar5;
        uVar4 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (&local_f0);
        if (local_f0 == (longlong *******)0xfffffffffffffffe) {
          ppppppplVar8 = (longlong *******)0xfffffffffffffffe;
          ppppppplVar11 = ppppppplVar7;
          ppppppplVar6 = ppppppplStack_e8;
          goto LAB_0042eb58;
        }
        local_a0 = local_e0;
        local_b8 = ppppppplStack_e8;
        ppppppplVar8 = local_f0;
        goto LAB_0042e680;
      }
LAB_0042f128:
      local_148 = (longlong *******)&DAT_00000006;
      ppppppplVar11 = (longlong *******)&local_148;
      ppppppplVar6 = (longlong *******)
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(ppppppplVar7);
      uVar4 = extraout_XMM0_Qa_07;
    }
    else {
LAB_0042eed1:
      local_148 = (longlong *******)0x3;
      ppppppplVar11 = (longlong *******)&local_148;
      ppppppplVar6 = (longlong *******)
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(ppppppplVar7);
      uVar4 = extraout_XMM0_Qa_02;
    }
    ppppppplVar8 = (longlong *******)0xfffffffffffffffe;
    goto LAB_0042eb54;
  }
  if (local_138 == (longlong *******)&DAT_0000000d) {
    if (*(longlong *)((longlong)ppppppplStack_140 + 5) == 0x736e6f6974617372 &&
        *ppppppplStack_140 == (longlong ******)0x61737265766e6f63) {
      if (local_178 != (longlong *******)0xffffffffffffffff) {
        ppppppplStack_e8 = (longlong *******)&DAT_0000000d;
        local_a8 = (longlong *******)&DAT_00194625;
        goto LAB_0042f07f;
      }
      pppppplVar5 = ppppppplVar7[5];
      if (pppppplVar5 < ppppppplVar7[4]) {
        pppppplVar3 = *unaff_R15;
        while( true ) {
          pppppplVar5 = (longlong ******)((longlong)pppppplVar5 + 1);
          uVar12 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar5);
          if (0x3a < uVar12) goto LAB_0042f0e3;
          if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
          ppppppplVar7[5] = pppppplVar5;
          if (pppppplVar5 == ppppppplVar7[4]) goto LAB_0042ef15;
        }
        if (uVar12 == 0x3a) {
          ppppppplVar7[5] = pppppplVar5;
          uVar4 = deserialize_seq::
                  <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>>
                            (&local_f0);
          if (local_f0 == (longlong *******)0xffffffffffffffff) {
            bVar2 = true;
            local_170 = ppppppplStack_e8;
            goto LAB_0042ebb0;
          }
          local_170 = ppppppplStack_e8;
          local_178 = local_f0;
          unaff_RBX = local_e0;
          goto LAB_0042e680;
        }
LAB_0042f0e3:
        local_148 = (longlong *******)&DAT_00000006;
        ppppppplVar11 = (longlong *******)&local_148;
        local_170 = (longlong *******)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(ppppppplVar7);
        uVar4 = extraout_XMM0_Qa_06;
      }
      else {
LAB_0042ef15:
        local_148 = (longlong *******)0x3;
        ppppppplVar11 = (longlong *******)&local_148;
        local_170 = (longlong *******)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(ppppppplVar7);
        uVar4 = extraout_XMM0_Qa_03;
      }
      bVar2 = true;
      ppppppplVar7 = ppppppplVar11;
      goto LAB_0042ebb0;
    }
  }
  else if ((local_138 == (longlong *******)&DAT_00000007) &&
          (*(int *)((longlong)ppppppplStack_140 + 3) == 0x6e6f6973 &&
           *(int *)ppppppplStack_140 == 0x73726576)) {
    if (local_f8 != 0) {
      ppppppplStack_e8 = (longlong *******)&DAT_00000007;
LAB_0042f07f:
      local_f0 = local_a8;
      local_148 = (longlong *******)&local_f0;
      ppppppplStack_140 = (longlong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      ppppppplVar11 = (longlong *******)&local_148;
      ppppppplVar6 = (longlong *******)
                     <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                     ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                               (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298)
      ;
      uVar4 = extraout_XMM0_Qa_05;
      goto LAB_0042eb54;
    }
    pppppplVar5 = ppppppplVar7[5];
    if (ppppppplVar7[4] <= pppppplVar5) {
LAB_0042ef5d:
      local_148 = (longlong *******)0x3;
      ppppppplVar11 = (longlong *******)&local_148;
      ppppppplVar6 = (longlong *******)
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(ppppppplVar7);
      uVar4 = extraout_XMM0_Qa_04;
      goto LAB_0042eb54;
    }
    pppppplVar3 = *unaff_R15;
    while( true ) {
      pppppplVar5 = (longlong ******)((longlong)pppppplVar5 + 1);
      uVar12 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar5);
      if (0x3a < uVar12) goto LAB_0042f162;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      ppppppplVar7[5] = pppppplVar5;
      if (pppppplVar5 == ppppppplVar7[4]) goto LAB_0042ef5d;
    }
    if (uVar12 == 0x3a) {
      ppppppplVar7[5] = pppppplVar5;
      uVar4 = deserialize_u32::
              <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                        (&local_f0);
      if ((int)local_f0 == 1) {
        ppppppplVar11 = ppppppplVar7;
        ppppppplVar6 = ppppppplStack_e8;
        goto LAB_0042eb58;
      }
      local_fc = local_f0._4_4_;
      local_f8 = 1;
      goto LAB_0042e680;
    }
LAB_0042f162:
    local_148 = (longlong *******)&DAT_00000006;
    ppppppplVar11 = (longlong *******)&local_148;
    ppppppplVar6 = (longlong *******)
                   <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(ppppppplVar7);
    uVar4 = extraout_XMM0_Qa_08;
    goto LAB_0042eb54;
  }
LAB_0042e7f1:
  ppppppplVar6 = (longlong *******)
                 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                 ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                           (ppppppplVar7);
  uVar4 = extraout_XMM0_Qa;
  if (ppppppplVar6 != (longlong *******)0x0) goto LAB_0042ea7e;
  goto LAB_0042e680;
LAB_0042ea7e:
LAB_0042eb58:
  bVar2 = true;
  if (local_178 != (longlong *******)0xffffffffffffffff) {
    for (puVar10 = (undefined1 *)((longlong)unaff_RBX + 1); puVar10 != (undefined1 *)0x1;
        puVar10 = puVar10 + -1) {
      local_170 = local_170 + 0x50;
      uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>();
      unaff_R15 = local_170;
    }
    unaff_RBX = (longlong *******)0x1;
    if (local_178 != (longlong *******)0x0) {
      ppppppplVar11 = (longlong *******)((longlong)local_178 * 0x280);
      uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,8);
    }
  }
  ppppppplVar7 = ppppppplVar11;
  local_170 = ppppppplVar6;
LAB_0042ebb0:
  puVar10 = (undefined1 *)((longlong)ppppppplVar8 + -1);
  local_d0 = (longlong *******)
             CONCAT71((int7)((ulonglong)puVar10 >> 8),puVar10 < (undefined1 *)0xfffffffffffffffd);
  local_178 = (longlong *******)0xffffffffffffffff;
  if ((bool)(puVar10 < (undefined1 *)0xfffffffffffffffd & bVar2)) {
    local_d0 = (longlong *******)(*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
    ppppppplVar7 = ppppppplVar8;
  }
  uStack_c8 = ppppppplVar7;
LAB_0042ebe3:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_f0 = local_178;
  ppppppplStack_e8 = local_170;
  local_e0 = unaff_RBX;
  ppppppplStack_d8 = unaff_R15;
  local_c0 = local_fc;
  ppppppplVar8 = (longlong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_map(param_2);
LAB_0042ec2f:
  ppppppplVar7 = ppppppplStack_e8;
  local_118 = CONCAT44(uStack_bc,local_c0);
  local_128 = (undefined4)local_d0;
  uStack_124 = local_d0._4_4_;
  uStack_120 = (undefined4)uStack_c8;
  uStack_11c = uStack_c8._4_4_;
  local_138 = local_e0;
  ppppppplStack_130 = ppppppplStack_d8;
  local_148 = local_f0;
  ppppppplStack_140 = ppppppplStack_e8;
  local_110 = ppppppplVar8;
  if (local_f0 == (longlong *******)0xffffffffffffffff) {
    if (ppppppplVar8 != (longlong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (ppppppplVar8);
    }
  }
  else if (ppppppplVar8 == (longlong *******)0x0) {
    local_88 = local_e0;
    ppppppplStack_80 = ppppppplStack_d8;
    local_78 = local_d0;
    ppppppplStack_70 = uStack_c8;
    local_68 = local_118;
    if (local_f0 != (longlong *******)0xffffffffffffffff) {
      local_b0[6] = local_118;
      local_b0[4] = local_d0;
      local_b0[5] = uStack_c8;
      local_b0[2] = local_e0;
      local_b0[3] = ppppppplStack_d8;
      *local_b0 = local_f0;
      local_b0[1] = ppppppplStack_e8;
      return local_b0;
    }
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::resume::PersistedSessions>(&local_148);
    ppppppplVar7 = ppppppplVar8;
  }
LAB_0042f046:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (ppppppplVar7,param_2);
LAB_0042e5ab:
  local_b0[1] = uVar4;
  *local_b0 = 0xffffffffffffffff;
  return local_b0;
}


