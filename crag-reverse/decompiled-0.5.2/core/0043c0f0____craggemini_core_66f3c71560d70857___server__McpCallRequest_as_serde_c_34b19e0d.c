// 0043c0f0 <<craggemini_core[66f3c71560d70857]::server::McpCallRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::McpCallRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::McpCallRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *******pppppppuVar9;
  undefined1 uVar10;
  uint uVar11;
  ulonglong *******pppppppuVar12;
  ulonglong uVar13;
  undefined8 extraout_RDX;
  ulonglong *puVar14;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  ulonglong *******pppppppuVar15;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  ulonglong *******pppppppuVar16;
  undefined8 unaff_RBP;
  ulonglong uVar17;
  undefined **ppuVar18;
  ulonglong *******unaff_R12;
  ulonglong *******unaff_R15;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint local_1d4;
  ulonglong *******local_1d0;
  ulonglong *******local_1c8;
  ulonglong *******local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong *******local_168;
  undefined1 local_151;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong *******local_100;
  ulonglong *******local_f8;
  ulonglong *******local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined3 uStack_dc;
  ulonglong *******local_d8;
  ulonglong *******local_d0;
  ulonglong *******local_c8;
  ulonglong *******local_c0;
  ulonglong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******local_98;
  ulonglong *******pppppppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined4 uStack_55;
  undefined8 uStack_51;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = param_2[4];
  uVar7 = param_2[5];
  local_e8 = param_1;
  if (uVar7 < uVar4) {
    pppppppuVar12 = (ulonglong *******)-uVar4;
    pppppppuVar16 = (ulonglong *******)0x100002600;
    do {
      uVar7 = uVar7 + 1;
      bVar3 = *(byte *)((param_2[3] - 1) + uVar7);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          puVar1 = param_2 + 7;
          *(char *)puVar1 = (char)*puVar1 + -1;
          if ((char)*puVar1 != '\0') {
            param_2[5] = uVar7;
            local_150._0_4_ = SUB84(param_2,0);
            local_150._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
            uStack_148 = CONCAT31(uStack_148._1_3_,1);
            ppuVar18 = (undefined **)&local_150;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_1b8);
            if ((byte)local_1b8 == '\x01') {
              uVar8 = extraout_RDX_03;
LAB_0043c537:
              auVar21._8_8_ = uVar8;
              auVar21._0_8_ = uStack_1b0;
              pppppppuVar16 = (ulonglong *******)0xffffffffffffffff;
              goto LAB_0043c887;
            }
            if (local_1b8._1_1_ == '\x01') {
              ppuVar18 = (undefined **)CONCAT44(local_150._4_4_,(undefined4)local_150);
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_1b8);
              uVar8 = extraout_RDX_04;
              unaff_R15 = local_1b8;
              if (local_1b8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0043c537;
              unaff_R12 = (ulonglong *******)CONCAT44(uStack_1a4,local_1a8);
              pppppppuVar15 = pppppppuVar12;
              pppppppuVar12 = (ulonglong *******)uStack_1b0;
            }
            else {
              unaff_R15 = (ulonglong *******)0xffffffffffffffff;
              pppppppuVar15 = pppppppuVar12;
              pppppppuVar12 = pppppppuVar16;
            }
            ppuVar18 = (undefined **)&local_150;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_1b8);
            auVar21._8_8_ = extraout_RDX_05;
            auVar21._0_8_ = uStack_1b0;
            if ((byte)local_1b8 == '\x01') {
LAB_0043c85f:
              pppppppuVar12 = pppppppuVar15;
              pppppppuVar15 = auVar21._0_8_;
              pppppppuVar16 = (ulonglong *******)0xffffffffffffffff;
              if (0 < (longlong)unaff_R15) {
                uVar8 = 1;
                (*(code *)PTR___rust_dealloc_00798fc8)();
                auVar21._8_8_ = uVar8;
                auVar21._0_8_ = pppppppuVar15;
                ppuVar18 = (undefined **)unaff_R15;
                unaff_R12 = pppppppuVar15;
              }
            }
            else {
              if (local_1b8._1_1_ != '\x01') {
                ppuVar18 = &PTR_DAT_00789f80;
                auVar21 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(1,&PTR_DAT_00789f80,&DAT_00789c78);
                goto LAB_0043c85f;
              }
              ppuVar18 = (undefined **)CONCAT44(local_150._4_4_,(undefined4)local_150);
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_1b8);
              pppppppuVar9 = (ulonglong *******)uStack_1b0;
              pppppppuVar16 = local_1b8;
              auVar21._8_8_ = extraout_RDX_07;
              auVar21._0_8_ = uStack_1b0;
              if (local_1b8 == (ulonglong *******)0xffffffffffffffff) goto LAB_0043c85f;
              unaff_RBP = CONCAT44(uStack_1a4,local_1a8);
              ppuVar18 = (undefined **)&local_150;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_1b8);
              auVar21._8_8_ = extraout_RDX_08;
              auVar21._0_8_ = pppppppuVar9;
              uVar8 = extraout_RDX_08;
              if ((byte)local_1b8 == '\x01') {
LAB_0043c797:
                if (pppppppuVar16 != (ulonglong *******)0x0) {
                  uVar8 = 1;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                  ppuVar18 = (undefined **)pppppppuVar16;
                }
                auVar21._8_8_ = uVar8;
                auVar21._0_8_ = uStack_1b0;
                unaff_R12 = (ulonglong *******)uStack_1b0;
                goto LAB_0043c85f;
              }
              if (local_1b8._1_1_ == '\x01') {
                <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (&local_1b8,CONCAT44(local_150._4_4_,(undefined4)local_150));
                auVar21._8_8_ = uStack_1b0;
                ppuVar18 = (undefined **)((ulonglong)local_1b8 & 0xff);
                uVar8 = extraout_RDX_09;
                if ((byte)local_1b8 == -1) goto LAB_0043c797;
                uStack_dc = (undefined3)((ulonglong)local_1b8 >> 0x28);
                local_e0 = local_1b8._1_4_;
                local_48 = CONCAT44(uStack_1a4,local_1a8);
                uStack_40 = CONCAT44(uStack_19c,uStack_1a0);
              }
              else {
                ppuVar18 = (undefined **)0x0;
              }
            }
LAB_0043c887:
            *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
            local_150._0_4_ = SUB84(pppppppuVar16,0);
            local_150._4_4_ = (undefined4)((ulonglong)pppppppuVar16 >> 0x20);
            uStack_148 = auVar21._0_4_;
            uStack_144 = auVar21._4_4_;
            local_140 = (undefined4)unaff_RBP;
            uStack_13c = (undefined4)((ulonglong)unaff_RBP >> 0x20);
            uStack_11c = CONCAT31(uStack_dc,local_e0._3_1_);
            local_120._1_3_ = (undefined3)local_e0;
            local_120 = CONCAT31(local_120._1_3_,(char)ppuVar18);
            uStack_118 = auVar21._8_4_;
            uStack_114 = auVar21._12_4_;
            uStack_110 = (undefined4)local_48;
            uStack_10c = local_48._4_4_;
            uStack_108 = (undefined4)uStack_40;
            uStack_104 = uStack_40._4_4_;
            uStack_138 = unaff_R15;
            local_130 = pppppppuVar12;
            uStack_128 = unaff_R12;
            pppppppuVar16 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_seq(param_2);
            goto LAB_0043c8ff;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pppppppuVar12 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_invalid_type(param_2,&local_151,&DAT_0078a7a0);
            goto LAB_0043cc63;
          }
          puVar1 = param_2 + 7;
          *(char *)puVar1 = (char)*puVar1 + -1;
          if ((char)*puVar1 != '\0') {
            param_2[5] = uVar7;
            local_b0 = 1;
            local_1d4 = (uint)CONCAT71((int7)(uVar7 >> 8),0xff);
            local_1c0 = (ulonglong *******)0xfffffffffffffffe;
            local_1d0 = (ulonglong *******)0xffffffffffffffff;
            local_d0 = (ulonglong *******)&DAT_00194568;
            local_b8 = param_2;
            goto LAB_0043c1db;
          }
        }
        local_1b8 = (ulonglong *******)0x18;
        goto LAB_0043c15e;
      }
      param_2[5] = uVar7;
    } while (uVar7 != uVar4);
  }
  local_1b8 = (ulonglong *******)0x5;
LAB_0043c15e:
  uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_1b8);
  goto LAB_0043c16b;
LAB_0043c1db:
LAB_0043c1e0:
  uVar10 = SUB81(pppppppuVar12,0);
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_1b8,&local_b8)
  ;
  puVar1 = local_b8;
  auVar22._8_8_ = extraout_RDX;
  auVar22._0_8_ = uStack_1b0;
  uStack_148 = SUB84(local_1c8,0);
  uStack_144 = (undefined4)((ulonglong)local_1c8 >> 0x20);
  if ((byte)local_1b8 == '\x01') {
LAB_0043c66f:
    local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
    bVar19 = true;
    goto LAB_0043c672;
  }
  if (local_1b8._1_1_ != '\x01') {
    local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
    bVar19 = local_1c0 == (ulonglong *******)0xfffffffffffffffe;
    pppppppuVar16 = local_1c0;
    if (bVar19) {
      pppppppuVar16 = (ulonglong *******)0xffffffffffffffff;
    }
    if (local_1d0 != (ulonglong *******)0xffffffffffffffff) {
      if ((char)local_1d4 == -1) {
        local_1d4 = 0;
      }
      else {
        uStack_148._0_1_ = SUB81(local_1c8,0);
        local_68 = CONCAT17((undefined1)uStack_148,CONCAT43(local_150._4_4_,local_150._1_3_));
        uStack_60 = (undefined7)((ulonglong)local_1c8 >> 8);
        uStack_55 = uStack_13c;
        uStack_51 = uStack_138;
        uStack_59 = local_140;
      }
      uVar10 = (undefined1)local_1d4;
      uStack_128 = local_c0;
      local_1c0 = local_c8;
      pppppppuVar12 = local_d8;
      goto LAB_0043c6d2;
    }
    local_100 = (ulonglong *******)
                &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178;
    local_f8 = (ulonglong *******)&DAT_00000004;
    local_1b8 = (ulonglong *******)&local_100;
    uStack_1b0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    auVar21 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                         &local_1b8);
    uVar8 = auVar21._8_8_;
    local_1d0 = (ulonglong *******)0xffffffffffffffff;
    if ((undefined1 *)((longlong)pppppppuVar16 + -1) < (undefined1 *)0xfffffffffffffffe) {
      uVar8 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    auVar22._8_8_ = uVar8;
    auVar22._0_8_ = auVar21._0_8_;
    goto LAB_0043c672;
  }
  puVar2 = local_b8 + 3;
  local_b8[5] = local_b8[5] + 1;
  local_b8[2] = 0;
  puVar14 = local_b8;
  (*(code *)PTR_parse_str_007998f8)();
  auVar22._8_8_ = puVar14;
  auVar22._0_8_ = uStack_1b0;
  if (local_1b8 == (ulonglong *******)0x2) {
    local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
    uVar10 = 2;
    goto LAB_0043c64f;
  }
  lVar6 = CONCAT44(uStack_1a4,local_1a8);
  pppppppuVar12 = local_1b8;
  if (lVar6 == 4) {
    if (*(uint *)uStack_1b0 == 0x656d616e) {
      if (local_1d0 != (ulonglong *******)0xffffffffffffffff) {
        local_f8 = (ulonglong *******)&DAT_00000004;
        local_d0 = (ulonglong *******)
                   &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178;
        goto LAB_0043cc9c;
      }
      pppppppuVar15 = (ulonglong *******)puVar1[4];
      pppppppuVar9 = (ulonglong *******)puVar1[5];
      pppppppuVar12 = pppppppuVar15;
      if (pppppppuVar15 <= pppppppuVar9) goto LAB_0043caf4;
      uVar4 = *puVar2;
      pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar15;
      uVar10 = SUB81(pppppppuVar12,0);
      goto LAB_0043c3b2;
    }
LAB_0043c31a:
    auVar22 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (puVar1,puVar2);
    uVar10 = SUB81(pppppppuVar12,0);
    if (auVar22._0_8_ != 0) {
      goto LAB_0043c66f;
    }
    goto LAB_0043c1e0;
  }
  if (lVar6 != 9) {
    if ((lVar6 != 7) ||
       (uVar11 = *(uint *)((longlong)uStack_1b0 + 3) ^ 0x64695f6c | *(uint *)uStack_1b0 ^ 0x6c6c6163
       , pppppppuVar12 = (ulonglong *******)(ulonglong)uVar11, uVar11 != 0)) goto LAB_0043c31a;
    if (local_1c0 != (ulonglong *******)0xfffffffffffffffe) {
      local_f8 = (ulonglong *******)&DAT_00000007;
      goto LAB_0043cc9c;
    }
    pppppppuVar15 = (ulonglong *******)puVar1[4];
    pppppppuVar9 = (ulonglong *******)puVar1[5];
    pppppppuVar12 = pppppppuVar15;
    if (pppppppuVar15 <= pppppppuVar9) {
LAB_0043cb8a:
      uVar10 = SUB81(pppppppuVar12,0);
      local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
      local_1b8 = (ulonglong *******)0x3;
      auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar1,&local_1b8);
LAB_0043cbc7:
      bVar19 = true;
      local_1c0 = (ulonglong *******)0xfffffffffffffffe;
      goto LAB_0043c672;
    }
    uVar4 = *puVar2;
    pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar15;
    uVar10 = SUB81(pppppppuVar12,0);
    while( true ) {
      pppppppuVar9 = (ulonglong *******)((longlong)pppppppuVar9 + 1);
      uVar7 = (ulonglong)*(byte *)((uVar4 - 1) + (longlong)pppppppuVar9);
      if (0x3a < uVar7) goto LAB_0043cd75;
      if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
      puVar1[5] = (ulonglong)pppppppuVar9;
      if (pppppppuVar9 == pppppppuVar15) goto LAB_0043cb8a;
    }
    if (uVar7 != 0x3a) {
LAB_0043cd75:
      local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
      local_1b8 = (ulonglong *******)&DAT_00000006;
      auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar1,&local_1b8);
      goto LAB_0043cbc7;
    }
    puVar1[5] = (ulonglong)pppppppuVar9;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_100,puVar1);
    auVar22._8_8_ = extraout_RDX_00;
    auVar22._0_8_ = local_f8;
    uVar10 = SUB81(pppppppuVar12,0);
    if (local_100 == (ulonglong *******)0xfffffffffffffffe) {
      local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
      goto LAB_0043cbc7;
    }
    local_1c0 = local_100;
    local_c0 = local_f0;
    unaff_R12 = local_f8;
    goto LAB_0043c1e0;
  }
  pppppppuVar12 =
       (ulonglong *******)
       ((ulonglong)*(byte *)((longlong)uStack_1b0 + 8) ^ 0x73 |
       (ulonglong)*(ulonglong *******)uStack_1b0 ^ 0x746e656d75677261);
  if (pppppppuVar12 != (ulonglong *******)0x0) goto LAB_0043c31a;
  if ((char)local_1d4 != -1) {
    local_f8 = (ulonglong *******)&DAT_00000009;
    local_d0 = (ulonglong *******)&DAT_0019467d;
LAB_0043cc9c:
    local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
    local_100 = local_d0;
    local_1b8 = (ulonglong *******)&local_100;
    uStack_1b0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pppppppuVar16 = local_d0;
    auVar22 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_1b8);
    uVar10 = SUB81(pppppppuVar16,0);
LAB_0043c64f:
    bVar19 = true;
    goto LAB_0043c672;
  }
  uVar4 = puVar1[4];
  uVar7 = puVar1[5];
  uVar13 = uVar4;
  if (uVar7 < uVar4) {
    uVar5 = *puVar2;
    uVar13 = -uVar4;
    uVar10 = (undefined1)uVar13;
    while( true ) {
      uVar7 = uVar7 + 1;
      uVar17 = (ulonglong)*(byte *)((uVar5 - 1) + uVar7);
      if (0x3a < uVar17) goto LAB_0043ccfe;
      if ((0x100002600U >> (uVar17 & 0x3f) & 1) == 0) break;
      puVar1[5] = uVar7;
      if (uVar7 == uVar4) goto LAB_0043cb46;
    }
    if (uVar17 == 0x3a) {
      puVar1[5] = uVar7;
      <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
      ::deserialize::
      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                (&local_1b8,puVar1);
      auVar22._8_8_ = extraout_RDX_02;
      auVar22._0_8_ = uStack_1b0;
      if ((byte)local_1b8 == 0xff) {
        local_150._0_4_ = CONCAT31(local_150._1_3_,0xff);
        bVar19 = true;
        goto LAB_0043c684;
      }
      local_150._1_3_ = (undefined3)((ulonglong)local_1b8 >> 8);
      local_1c8 = (ulonglong *******)uStack_1b0;
      local_140 = local_1a8;
      uStack_13c = uStack_1a4;
      uStack_138 = (ulonglong *******)CONCAT44(uStack_19c,uStack_1a0);
      local_1d4 = (uint)(byte)local_1b8;
      pppppppuVar12 = (ulonglong *******)uStack_1b0;
      local_150._4_4_ = local_1b8._4_4_;
      goto LAB_0043c1db;
    }
LAB_0043ccfe:
    local_150._0_4_ = CONCAT31(local_150._1_3_,0xff);
    local_100 = (ulonglong *******)&DAT_00000006;
    auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar1,&local_100);
  }
  else {
LAB_0043cb46:
    uVar10 = (undefined1)uVar13;
    local_150._0_4_ = CONCAT31(local_150._1_3_,0xff);
    local_100 = (ulonglong *******)0x3;
    auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar1,&local_100);
  }
  pppppppuVar16 = (ulonglong *******)0x1000026ff;
  bVar19 = true;
  goto LAB_0043c684;
LAB_0043c3b2:
  pppppppuVar9 = (ulonglong *******)((longlong)pppppppuVar9 + 1);
  uVar7 = (ulonglong)*(byte *)((uVar4 - 1) + (longlong)pppppppuVar9);
  if (0x3a < uVar7) goto LAB_0043cd39;
  if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) goto LAB_0043c434;
  puVar1[5] = (ulonglong)pppppppuVar9;
  if (pppppppuVar9 == pppppppuVar15) goto LAB_0043caf4;
  goto LAB_0043c3b2;
LAB_0043c434:
  if (uVar7 != 0x3a) {
LAB_0043cd39:
    local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
    local_1b8 = (ulonglong *******)&DAT_00000006;
    auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar1,&local_1b8);
    goto LAB_0043cb31;
  }
  puVar1[5] = (ulonglong)pppppppuVar9;
  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_100,puVar1);
  auVar22._8_8_ = extraout_RDX_01;
  auVar22._0_8_ = local_f8;
  uVar10 = SUB81(pppppppuVar12,0);
  local_1d0 = local_100;
  if (local_100 == (ulonglong *******)0xffffffffffffffff) goto LAB_0043cbf9;
  local_c8 = local_f0;
  local_d8 = local_f8;
  goto LAB_0043c1db;
LAB_0043caf4:
  uVar10 = SUB81(pppppppuVar12,0);
  local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
  local_1b8 = (ulonglong *******)0x3;
  auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar1,&local_1b8);
  goto LAB_0043cb31;
LAB_0043cbf9:
  local_150._0_4_ = CONCAT31(local_150._1_3_,(char)local_1d4);
LAB_0043cb31:
  bVar19 = true;
  local_1d0 = (ulonglong *******)0xffffffffffffffff;
LAB_0043c672:
  uVar8 = auVar22._0_8_;
  pppppppuVar16 = (ulonglong *******)(ulonglong)local_1d4;
  if ((char)local_1d4 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_150)
    ;
    auVar22._8_8_ = extraout_RDX_06;
    auVar22._0_8_ = uVar8;
  }
LAB_0043c684:
  pppppppuVar12 = auVar22._8_8_;
  if ((undefined1 *)((longlong)local_1d0 + -1) < (undefined1 *)0xfffffffffffffffe) {
    pppppppuVar12 = (ulonglong *******)0x1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_1d0 = (ulonglong *******)0xffffffffffffffff;
  uStack_128 = pppppppuVar12;
  pppppppuVar12 = auVar22._0_8_;
  if ((bool)((undefined1 *)((longlong)local_1c0 + -1) < (undefined1 *)0xfffffffffffffffd & bVar19))
  {
    pppppppuVar15 = (ulonglong *******)0x1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    uStack_128 = pppppppuVar15;
  }
LAB_0043c6d2:
  *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
  local_150._0_4_ = SUB84(local_1d0,0);
  local_150._4_4_ = (undefined4)((ulonglong)local_1d0 >> 0x20);
  uStack_148 = SUB84(pppppppuVar12,0);
  uStack_144 = (undefined4)((ulonglong)pppppppuVar12 >> 0x20);
  local_140 = SUB84(local_1c0,0);
  uStack_13c = (undefined4)((ulonglong)local_1c0 >> 0x20);
  local_120._1_3_ = (undefined3)local_68;
  local_120 = CONCAT31(local_120._1_3_,uVar10);
  uStack_11c = (undefined4)((ulonglong)local_68 >> 0x18);
  uStack_118._0_1_ = (undefined1)((ulonglong)local_68 >> 0x38);
  uStack_118._1_3_ = (undefined3)uStack_60;
  uStack_114 = (undefined4)((uint7)uStack_60 >> 0x18);
  uStack_110 = uStack_59;
  uStack_10c = uStack_55;
  uStack_108 = (undefined4)uStack_51;
  uStack_104 = uStack_51._4_4_;
  uStack_138 = pppppppuVar16;
  local_130 = unaff_R12;
  pppppppuVar16 =
       (ulonglong *******)
       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
       ::end_map(param_2);
LAB_0043c8ff:
  pppppppuVar9 = uStack_138;
  local_178 = CONCAT44(uStack_10c,uStack_110);
  uStack_170 = CONCAT44(uStack_104,uStack_108);
  local_188 = local_120;
  uStack_184 = uStack_11c;
  uStack_180 = uStack_118;
  uStack_17c = uStack_114;
  local_198 = (undefined4)local_130;
  uStack_194 = local_130._4_4_;
  uStack_190 = (undefined4)uStack_128;
  uStack_18c = uStack_128._4_4_;
  local_1a8 = local_140;
  uStack_1a4 = uStack_13c;
  uStack_1a0 = (undefined4)uStack_138;
  uStack_19c = uStack_138._4_4_;
  local_1b8 = (ulonglong *******)CONCAT44(local_150._4_4_,(undefined4)local_150);
  pppppppuVar15 = local_1b8;
  uStack_1b0 = (code *)CONCAT44(uStack_144,uStack_148);
  pppppppuVar12 = (ulonglong *******)uStack_1b0;
  local_168 = pppppppuVar16;
  if (local_1b8 == (ulonglong *******)0xffffffffffffffff) {
    if (pppppppuVar16 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pppppppuVar16);
    }
  }
  else if (pppppppuVar16 == (ulonglong *******)0x0) {
    local_a8 = CONCAT44(uStack_13c,local_140);
    pppppppuStack_a0 = uStack_138;
    local_98 = local_130;
    pppppppuStack_90 = uStack_128;
    local_88 = CONCAT44(uStack_11c,local_120);
    uStack_80 = CONCAT44(uStack_114,uStack_118);
    local_78 = uStack_110;
    uStack_74 = uStack_10c;
    uStack_70 = uStack_108;
    uStack_6c = uStack_104;
    if (local_1b8 != (ulonglong *******)0xffffffffffffffff) {
      local_e8[8] = CONCAT44(uStack_10c,uStack_110);
      local_e8[9] = CONCAT44(uStack_104,uStack_108);
      local_e8[6] = local_88;
      local_e8[7] = uStack_80;
      local_e8[4] = local_130;
      local_e8[5] = uStack_128;
      local_e8[2] = local_a8;
      local_e8[3] = uStack_138;
      *local_e8 = local_1b8;
      local_e8[1] = uStack_1b0;
      return local_e8;
    }
  }
  else {
    uVar20 = (undefined4)local_150;
    if ((uStack_138 != (ulonglong *******)0xffffffffffffffff) &&
       (uStack_138 != (ulonglong *******)0x0)) {
      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_150,1);
    }
    if (pppppppuVar15 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
      pppppppuVar9 = pppppppuVar15;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
              (&local_188,pppppppuVar9);
    pppppppuVar12 = pppppppuVar16;
  }
LAB_0043cc63:
  uVar8 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pppppppuVar12,param_2);
LAB_0043c16b:
  local_e8[1] = uVar8;
  *local_e8 = 0xffffffffffffffff;
  return local_e8;
}


