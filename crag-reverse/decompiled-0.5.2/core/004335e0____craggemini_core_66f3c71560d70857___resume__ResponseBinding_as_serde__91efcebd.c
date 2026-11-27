// 004335e0 <<craggemini_core[66f3c71560d70857]::resume::ResponseBinding_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::ResponseBinding
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::ResponseBinding_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,ulonglong *******param_2)

{
  byte bVar1;
  ulonglong ******ppppppuVar2;
  bool bVar3;
  undefined2 uVar4;
  ulonglong *******pppppppuVar5;
  ulonglong ******ppppppuVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *******pppppppuVar9;
  ulonglong *******pppppppuVar10;
  ulonglong *******pppppppuVar11;
  ulonglong *******pppppppuVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar13;
  ulonglong *******pppppppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong *******pppppppuVar18;
  ulonglong *******unaff_R15;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong *******local_128;
  ulonglong *******local_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******local_108;
  undefined8 local_f8;
  ulonglong *******local_f0;
  ulonglong *******local_e8;
  ulonglong *******local_e0;
  ulonglong *******local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong *******local_c0;
  undefined1 local_b1;
  ulonglong *******local_b0;
  ulonglong *******local_a8;
  ulonglong *******local_a0;
  ulonglong *******local_98;
  ulonglong *******local_90;
  undefined8 *local_88;
  ulonglong *******local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong *******local_58;
  ulonglong *******local_48;
  ulonglong *******local_40;
  undefined1 local_38;
  
  ppppppuVar2 = param_2[4];
  ppppppuVar6 = param_2[5];
  local_88 = param_1;
  if (ppppppuVar6 < ppppppuVar2) {
    pppppppuVar12 = (ulonglong *******)-(longlong)ppppppuVar2;
    do {
      ppppppuVar6 = (ulonglong ******)((longlong)ppppppuVar6 + 1);
      bVar1 = *(byte *)(((longlong)param_2[3] - 1U) + (longlong)ppppppuVar6);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar6;
            pppppppuStack_110 = (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,1);
            pppppppuVar10 = (ulonglong *******)&local_f8;
            ppuVar15 = (undefined **)&local_118;
            local_118 = param_2;
            auVar24 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_f8 == '\x01') {
LAB_00433e19:
              local_e8 = (ulonglong *******)ppuVar15;
              pppppppuVar14 = (ulonglong *******)0xffffffffffffffff;
              pppppppuVar11 = local_f0;
            }
            else {
              if (local_f8._1_1_ != '\x01') {
                ppuVar15 = &PTR_DAT_00789d60;
                pppppppuVar10 = (ulonglong *******)0x0;
                auVar24 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789d60,&DAT_00789c78);
                local_f0 = auVar24._0_8_;
                goto LAB_00433e19;
              }
              pppppppuVar10 = (ulonglong *******)&local_f8;
              ppuVar15 = (undefined **)local_118;
              auVar24 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              pppppppuVar9 = local_e8;
              pppppppuVar11 = local_f0;
              pppppppuVar14 = local_f8;
              if (local_f8 == (ulonglong *******)0xffffffffffffffff) goto LAB_00433e19;
              pppppppuVar18 = (ulonglong *******)&local_f8;
              ppuVar15 = (undefined **)&local_118;
              auVar25 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>();
              unaff_R15 = pppppppuVar9;
              if ((char)local_f8 == '\x01') {
                pppppppuVar12 = local_f0;
LAB_00433f4b:
                local_e8 = (ulonglong *******)ppuVar15;
                pppppppuVar10 = pppppppuVar18;
                auVar24 = auVar25;
                if (pppppppuVar14 != (ulonglong *******)0x0) {
                  uVar13 = 1;
                  uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar24._8_8_ = uVar13;
                  auVar24._0_8_ = uVar7;
                  local_e8 = pppppppuVar14;
                  pppppppuVar10 = pppppppuVar11;
                }
                pppppppuVar14 = (ulonglong *******)0xffffffffffffffff;
                pppppppuVar11 = pppppppuVar12;
              }
              else {
                if (local_f8._1_1_ != '\x01') {
                  ppuVar15 = &PTR_DAT_00789d60;
                  pppppppuVar18 = (ulonglong *******)0x1;
                  auVar25 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_DAT_00789d60,&DAT_00789c78);
                  pppppppuVar12 = auVar25._0_8_;
                  goto LAB_00433f4b;
                }
                pppppppuVar18 = (ulonglong *******)&local_f8;
                ppuVar15 = (undefined **)local_118;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
                pppppppuVar12 = local_f0;
                pppppppuVar5 = local_f8;
                auVar25._8_8_ = extraout_RDX_02;
                auVar25._0_8_ = local_f8;
                if (local_f8 == (ulonglong *******)0xffffffffffffffff) goto LAB_00433f4b;
                local_80 = pppppppuVar9;
                pppppppuVar18 = (ulonglong *******)&local_f8;
                auVar25 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                          ::next_element_seed::has_next_element::
                          <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar18,&local_118);
                uVar4 = (undefined2)local_f8;
                if ((char)local_f8 == '\x01') {
LAB_00433cfa:
                  unaff_R15 = local_f0;
LAB_00433f31:
                  if (pppppppuVar5 != (ulonglong *******)0x0) {
                    uVar13 = 1;
                    uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)();
                    auVar25._8_8_ = uVar13;
                    auVar25._0_8_ = uVar7;
                    pppppppuVar18 = pppppppuVar12;
                  }
                  pppppppuVar12 = unaff_R15;
                  ppuVar15 = (undefined **)pppppppuVar5;
                  goto LAB_00433f4b;
                }
                pppppppuVar18 = (ulonglong *******)0x2;
                if (local_f8._1_1_ != '\x01') {
LAB_00433f1b:
                  auVar25 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(pppppppuVar18,&PTR_DAT_00789d60,&DAT_00789c78);
                  unaff_R15 = auVar25._0_8_;
                  goto LAB_00433f31;
                }
                pppppppuVar18 = local_118;
                local_f8._0_2_ = uVar4;
                auVar25 = deserialize_u64::
                          <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    ();
                pppppppuVar10 = auVar25._8_8_;
                unaff_R15 = pppppppuVar10;
                if ((auVar25._0_8_ & 1) != 0) goto LAB_00433f31;
                pppppppuVar18 = (ulonglong *******)&local_f8;
                auVar25 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                          ::next_element_seed::has_next_element::
                          <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar18,&local_118);
                if ((char)local_f8 == '\x01') goto LAB_00433cfa;
                pppppppuVar18 = (ulonglong *******)0x3;
                if (local_f8._1_1_ != '\x01') goto LAB_00433f1b;
                pppppppuVar18 = local_118;
                auVar25 = deserialize_u64::
                          <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    ();
                auVar24._8_8_ = local_80;
                auVar24._0_8_ = pppppppuVar5;
                unaff_R15 = auVar25._8_8_;
                if ((auVar25._0_8_ & 1) != 0) goto LAB_00433f31;
              }
            }
            local_e0 = auVar24._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_f8 = pppppppuVar14;
            local_f0 = pppppppuVar11;
            local_d0 = local_e8;
            local_e8 = auVar24._8_8_;
            local_d8 = pppppppuVar12;
            uStack_c8 = pppppppuVar10;
            local_c0 = unaff_R15;
            pppppppuVar10 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_seq(param_2);
            goto LAB_00433fac;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppppuVar11 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_invalid_type(param_2,&local_b1,&DAT_0078a640);
            goto LAB_0043414b;
          }
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar6;
            local_38 = 1;
            local_70 = 0;
            local_90 = (ulonglong *******)&DAT_0019463c;
            local_128 = (ulonglong *******)0xffffffffffffffff;
            local_78 = 0;
            pppppppuVar14 = (ulonglong *******)0xffffffffffffffff;
            local_40 = param_2;
            goto LAB_004336de;
          }
        }
        local_f8 = (ulonglong *******)0x18;
        goto LAB_0043364e;
      }
      param_2[5] = ppppppuVar6;
    } while (ppppppuVar6 != ppppppuVar2);
  }
  local_f8 = (ulonglong *******)0x5;
LAB_0043364e:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_f8);
  goto LAB_0043365b;
LAB_004336de:
LAB_004336f0:
  puVar17 = (undefined1 *)&local_f8;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_f8,&local_40);
  puVar16 = (undefined1 *)local_40;
  auVar22._8_8_ = local_48;
  auVar22._0_8_ = local_a0;
  auVar23._8_8_ = extraout_RDX;
  auVar23._0_8_ = local_f0;
  if ((char)local_f8 == '\x01') {
  }
  else {
    if (local_f8._1_1_ != '\x01') {
      if (pppppppuVar14 == (ulonglong *******)0xffffffffffffffff) {
        local_118 = (ulonglong *******)&DAT_00194632;
        pppppppuStack_110 = (ulonglong *******)0xa;
        local_f8 = (ulonglong *******)&local_118;
        local_f0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar16 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        auVar26 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_f8);
        goto LAB_00433d4e;
      }
      bVar19 = local_128 == (ulonglong *******)0xffffffffffffffff;
      if (bVar19) {
        local_118 = (ulonglong *******)&DAT_00194648;
        pppppppuStack_110 = (ulonglong *******)&DAT_0000000f;
        local_f8 = (ulonglong *******)&local_118;
        local_f0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar17 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        auVar27 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_f8);
      }
      else {
        if ((local_70 & 1) == 0) {
          local_118 = (ulonglong *******)0x185218;
          pppppppuStack_110 = (ulonglong *******)&DAT_00000008;
          local_f8 = (ulonglong *******)&local_118;
          local_f0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          puVar17 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
          auVar27 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                               &local_f8);
        }
        else {
          if ((local_78 & 1) != 0) {
            pppppppuVar12 = local_b0;
            uStack_c8 = local_98;
            local_c0 = local_a0;
            pppppppuVar11 = local_a8;
            local_e8 = local_80;
            goto LAB_00433bf2;
          }
          local_118 = (ulonglong *******)&DAT_0019463c;
          pppppppuStack_110 = (ulonglong *******)0xc;
          local_f8 = (ulonglong *******)&local_118;
          local_f0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          puVar17 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
          auVar27 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                               &local_f8);
        }
        pppppppuVar10 = local_b0;
        uVar7 = auVar27._0_8_;
        if (local_128 != (ulonglong *******)0x0) {
          uVar13 = 1;
          (*(code *)PTR___rust_dealloc_00798fc8)();
          auVar27._8_8_ = uVar13;
          auVar27._0_8_ = uVar7;
          puVar17 = (undefined1 *)pppppppuVar10;
        }
      }
      pppppppuVar10 = local_a8;
      auVar22._8_8_ = auVar27._8_8_;
      auVar22._0_8_ = local_a0;
      bVar3 = true;
      pppppppuVar11 = auVar27._0_8_;
      if (pppppppuVar14 == (ulonglong *******)0x0) {
        pppppppuVar14 = (ulonglong *******)0x0;
      }
      else {
        uVar7 = 1;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        auVar22._8_8_ = uVar7;
        auVar22._0_8_ = local_a0;
        puVar17 = (undefined1 *)pppppppuVar10;
      }
      goto LAB_00433ba2;
    }
    pppppppuVar10 = local_40 + 3;
    local_40[5] = (ulonglong ******)((longlong)local_40[5] + 1);
    local_40[2] = (ulonglong ******)0x0;
    pppppppuVar11 = local_40;
    (*(code *)PTR_parse_str_007998f8)();
    auVar23._8_8_ = pppppppuVar11;
    auVar23._0_8_ = local_f0;
    puVar17 = (undefined1 *)&local_f8;
    if ((int)local_f8 == 2) goto LAB_00433b98;
    pppppppuVar11 = local_e8 + -1;
    pppppppuVar12 = pppppppuVar11;
    pppppppuVar9 = pppppppuVar10;
    if (&DAT_00000007 < pppppppuVar11) goto switchD_0043376e_caseD_1;
    pppppppuVar12 =
         (ulonglong *******)
         ((longlong)&switchD_0043376e::switchdataD_00194100 +
         (longlong)(int)(&switchD_0043376e::switchdataD_00194100)[(longlong)pppppppuVar11]);
    switch(pppppppuVar11) {
    case (ulonglong *******)0x0:
      pppppppuVar12 = (ulonglong *******)0x7165735f6e727574;
      if (*local_f0 == (ulonglong ******)0x7165735f6e727574) {
        if (local_70 != 0) {
          local_90 = (ulonglong *******)0x185218;
          goto LAB_0043417c;
        }
        pppppppuVar11 = *(ulonglong ********)((longlong)puVar16 + 0x20);
        pppppppuVar9 = *(ulonglong ********)((longlong)puVar16 + 0x28);
        pppppppuVar12 = pppppppuVar11;
        if (pppppppuVar9 < pppppppuVar11) {
          ppppppuVar2 = *pppppppuVar10;
          pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar11;
          do {
            pppppppuVar9 = (ulonglong *******)((longlong)pppppppuVar9 + 1);
            uVar8 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar9);
            if (0x3a < uVar8) {
LAB_00433a45:
              local_f8 = (ulonglong *******)&DAT_00000006;
              auVar21 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar16,&local_f8);
              goto LAB_004337fd;
            }
            if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
              if (uVar8 != 0x3a) goto LAB_00433a45;
              *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
              auVar24 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  ();
              auVar21._8_8_ = auVar24._8_8_;
              auVar21._0_8_ = auVar24._8_8_;
              uVar8 = auVar24._0_8_;
              goto LAB_00433a0a;
            }
            *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
          } while (pppppppuVar9 != pppppppuVar11);
        }
        local_f8 = (ulonglong *******)0x3;
        auVar21 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar16,&local_f8);
LAB_004337fd:
        uVar8 = 1;
LAB_00433a0a:
        auVar22._8_8_ = auVar21._8_8_;
        auVar22._0_8_ = local_a0;
        local_98 = auVar21._0_8_;
        if ((uVar8 & 1) != 0) {
          bVar19 = true;
          bVar3 = false;
          puVar17 = puVar16;
          pppppppuVar11 = local_98;
          goto LAB_00433ba2;
        }
        local_70 = 1;
        goto LAB_004336f0;
      }
      break;
    case (ulonglong *******)0x2:
      pppppppuVar12 = (ulonglong *******)((ulonglong)*local_f0 ^ 0x5f746e756f636361);
      if (*(short *)(local_f0 + 1) == 0x6469 && pppppppuVar12 == (ulonglong *******)0x0)
      goto LAB_00433a66;
      break;
    case (ulonglong *******)0x4:
      pppppppuVar12 = (ulonglong *******)((ulonglong)*local_f0 ^ 0x6573755f7473616c);
      if (*(int *)(local_f0 + 1) == 0x736d5f64 && pppppppuVar12 == (ulonglong *******)0x0) {
        if (local_78 != 0) goto LAB_0043417c;
        pppppppuVar11 = *(ulonglong ********)((longlong)puVar16 + 0x20);
        pppppppuVar9 = *(ulonglong ********)((longlong)puVar16 + 0x28);
        pppppppuVar12 = pppppppuVar11;
        if (pppppppuVar9 < pppppppuVar11) {
          ppppppuVar2 = *pppppppuVar10;
          pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar11;
          do {
            pppppppuVar9 = (ulonglong *******)((longlong)pppppppuVar9 + 1);
            uVar8 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar9);
            if (0x3a < uVar8) {
LAB_00433a24:
              local_f8 = (ulonglong *******)&DAT_00000006;
              auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar16,&local_f8);
              goto LAB_004338a6;
            }
            if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
              if (uVar8 != 0x3a) goto LAB_00433a24;
              *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
              auVar24 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  ();
              auVar22._8_8_ = auVar24._8_8_;
              auVar22._0_8_ = auVar24._8_8_;
              uVar8 = auVar24._0_8_;
              goto LAB_004339d6;
            }
            *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
          } while (pppppppuVar9 != pppppppuVar11);
        }
        local_f8 = (ulonglong *******)0x3;
        auVar22 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar16,&local_f8);
LAB_004338a6:
        uVar8 = 1;
LAB_004339d6:
        local_a0 = auVar22._0_8_;
        if ((uVar8 & 1) != 0) {
          bVar19 = true;
          bVar3 = false;
          puVar17 = puVar16;
          pppppppuVar11 = local_a0;
          goto LAB_00433ba2;
        }
        local_78 = 1;
        goto LAB_004336f0;
      }
      break;
    case (ulonglong *******)0x7:
      pppppppuVar12 = (ulonglong *******)((ulonglong)*local_f0 ^ 0x61737265766e6f63);
      pppppppuVar9 = (ulonglong *******)0x64695f6e6f697461;
      if (*(longlong *)((longlong)local_f0 + 7) != 0x64695f6e6f697461 ||
          pppppppuVar12 != (ulonglong *******)0x0) break;
      if (local_128 == (ulonglong *******)0xffffffffffffffff) {
        pppppppuVar11 = *(ulonglong ********)((longlong)puVar16 + 0x20);
        pppppppuVar9 = *(ulonglong ********)((longlong)puVar16 + 0x28);
        pppppppuVar12 = pppppppuVar11;
        puVar17 = puVar16;
        if (pppppppuVar9 < pppppppuVar11) {
          ppppppuVar2 = *pppppppuVar10;
          pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar11;
          while( true ) {
            pppppppuVar9 = (ulonglong *******)((longlong)pppppppuVar9 + 1);
            uVar8 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar9);
            if (0x3a < uVar8) goto LAB_004341ce;
            if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
            *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
            if (pppppppuVar9 == pppppppuVar11) goto LAB_004340a1;
          }
          if (uVar8 != 0x3a) {
LAB_004341ce:
            local_f8 = (ulonglong *******)&DAT_00000006;
            pppppppuVar10 = (ulonglong *******)&local_f8;
            auVar24 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error();
            puVar16 = (undefined1 *)pppppppuVar10;
            goto LAB_004340c3;
          }
          *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar9;
          puVar17 = (undefined1 *)&local_118;
          deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
          auVar22._8_8_ = extraout_RDX_00;
          auVar22._0_8_ = local_a0;
          local_b0 = pppppppuStack_110;
          if (local_118 != (ulonglong *******)0xffffffffffffffff) goto code_r0x004339a6;
          bVar3 = false;
          pppppppuVar12 = pppppppuStack_110;
          pppppppuVar11 = pppppppuStack_110;
          local_e8 = pppppppuVar14;
        }
        else {
LAB_004340a1:
          local_f8 = (ulonglong *******)0x3;
          pppppppuVar10 = (ulonglong *******)&local_f8;
          auVar24 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error();
          puVar16 = (undefined1 *)pppppppuVar10;
LAB_004340c3:
          auVar22._8_8_ = auVar24._8_8_;
          auVar22._0_8_ = local_a0;
          bVar3 = false;
          pppppppuVar11 = auVar24._0_8_;
          local_e8 = pppppppuVar14;
        }
        goto LAB_00433bc6;
      }
      local_90 = (ulonglong *******)&DAT_00194648;
      goto LAB_0043417c;
    }
switchD_0043376e_caseD_1:
    auVar23 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (puVar16,pppppppuVar9);
    puVar17 = puVar16;
    if (auVar23._0_8_ == 0) goto LAB_004336f0;
  }
LAB_00433b98:
  auVar22._8_8_ = auVar23._8_8_;
  auVar22._0_8_ = local_a0;
  bVar19 = true;
  bVar3 = false;
  pppppppuVar11 = auVar23._0_8_;
  goto LAB_00433ba2;
code_r0x004339a6:
  local_48 = local_108;
  local_128 = local_118;
  pppppppuVar12 = local_108;
  goto LAB_004336f0;
LAB_00433a66:
  if (pppppppuVar14 != (ulonglong *******)0xffffffffffffffff) {
    local_90 = (ulonglong *******)&DAT_00194632;
LAB_0043417c:
    local_118 = local_90;
    pppppppuStack_110 = local_e8;
    local_f8 = (ulonglong *******)&local_118;
    local_f0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar17 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
    pppppppuVar12 = local_90;
    auVar24 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_f8);
    auVar22._8_8_ = auVar24._8_8_;
    auVar22._0_8_ = local_a0;
    bVar19 = true;
    bVar3 = false;
    pppppppuVar11 = auVar24._0_8_;
    goto LAB_00433ba2;
  }
  pppppppuVar14 = *(ulonglong ********)((longlong)puVar16 + 0x20);
  pppppppuVar11 = *(ulonglong ********)((longlong)puVar16 + 0x28);
  pppppppuVar12 = pppppppuVar14;
  if (pppppppuVar11 < pppppppuVar14) {
    ppppppuVar2 = *pppppppuVar10;
    pppppppuVar12 = (ulonglong *******)-(longlong)pppppppuVar14;
    while( true ) {
      pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + 1);
      uVar8 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar11);
      if (0x3a < uVar8) goto LAB_004341f3;
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
      *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar11;
      if (pppppppuVar11 == pppppppuVar14) goto LAB_004340d0;
    }
    if (uVar8 != 0x3a) {
LAB_004341f3:
      local_f8 = (ulonglong *******)&DAT_00000006;
      auVar26 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar16,&local_f8);
      goto LAB_00433d4e;
    }
    *(ulonglong ********)((longlong)puVar16 + 0x28) = pppppppuVar11;
    pppppppuVar10 = (ulonglong *******)&local_118;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (pppppppuVar10,puVar16);
    auVar26._8_8_ = extraout_RDX_01;
    auVar26._0_8_ = pppppppuStack_110;
    puVar16 = (undefined1 *)pppppppuVar10;
    if (local_118 == (ulonglong *******)0xffffffffffffffff) goto LAB_00433d4e;
    local_80 = local_108;
    local_a8 = pppppppuStack_110;
    pppppppuVar14 = local_118;
    goto LAB_004336de;
  }
LAB_004340d0:
  local_f8 = (ulonglong *******)0x3;
  auVar26 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar16,&local_f8);
LAB_00433d4e:
  auVar22._8_8_ = auVar26._8_8_;
  auVar22._0_8_ = local_a0;
  bVar19 = true;
  pppppppuVar14 = (ulonglong *******)0xffffffffffffffff;
  bVar3 = false;
  puVar17 = puVar16;
  pppppppuVar11 = auVar26._0_8_;
LAB_00433ba2:
  pppppppuVar10 = local_b0;
  local_a0 = auVar22._0_8_;
  puVar16 = (undefined1 *)local_128;
  local_e8 = pppppppuVar14;
  if ((bool)((undefined1 *)((longlong)local_128 + -1) < (undefined1 *)0xfffffffffffffffe & bVar19))
  {
    uVar7 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar22._8_8_ = uVar7;
    auVar22._0_8_ = local_a0;
    puVar17 = (undefined1 *)pppppppuVar10;
  }
LAB_00433bc6:
  pppppppuVar10 = local_a8;
  local_a0 = auVar22._0_8_;
  pppppppuVar14 = (ulonglong *******)0xffffffffffffffff;
  uStack_c8 = (ulonglong *******)puVar16;
  local_c0 = (ulonglong *******)puVar17;
  if ((undefined1 *)0x1 < (undefined1 *)((longlong)local_e8 + 1) && !bVar3) {
    uVar7 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar22._8_8_ = uVar7;
    auVar22._0_8_ = local_a0;
    uStack_c8 = local_e8;
    local_c0 = pppppppuVar10;
  }
LAB_00433bf2:
  auVar24._8_8_ = local_e8;
  auVar24._0_8_ = local_128;
  local_d0 = auVar22._8_8_;
  local_a0 = auVar22._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_e0 = local_128;
  local_f8 = pppppppuVar14;
  local_f0 = pppppppuVar11;
  local_d8 = pppppppuVar12;
  pppppppuVar10 =
       (ulonglong *******)
       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
       ::end_map(param_2);
LAB_00433fac:
  local_128 = auVar24._0_8_;
  local_108 = local_c0;
  local_118 = local_d0;
  pppppppuStack_110 = uStack_c8;
  if (pppppppuVar14 == (ulonglong *******)0xffffffffffffffff) {
    if (pppppppuVar10 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pppppppuVar10);
    }
  }
  else if (pppppppuVar10 == (ulonglong *******)0x0) {
    local_58 = local_c0;
    local_68 = (undefined4)local_d0;
    uStack_64 = local_d0._4_4_;
    uStack_5c = uStack_c8._4_4_;
    uStack_60 = (int)uStack_c8;
    if (pppppppuVar14 != (ulonglong *******)0xffffffffffffffff) {
      local_88[2] = auVar24._8_8_;
      local_88[3] = local_128;
      local_88[4] = pppppppuVar12;
      local_88[5] = local_d0;
      local_88[6] = uStack_c8;
      local_88[7] = local_c0;
      *local_88 = pppppppuVar14;
      local_88[1] = pppppppuVar11;
      return local_88;
    }
  }
  else {
    uVar20 = (undefined4)local_d0;
    if (pppppppuVar14 != (ulonglong *******)0x0) {
      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(local_c0,1);
    }
    pppppppuVar11 = pppppppuVar10;
    if (local_128 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
    }
  }
LAB_0043414b:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pppppppuVar11,param_2);
LAB_0043365b:
  local_88[1] = uVar7;
  *local_88 = 0xffffffffffffffff;
  return local_88;
}


