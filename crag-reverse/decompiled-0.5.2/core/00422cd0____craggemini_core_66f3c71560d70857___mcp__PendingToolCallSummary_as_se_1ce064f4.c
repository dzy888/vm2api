// 00422cd0 <<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

ulonglong ******* __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (ulonglong *******param_1,ulonglong *******param_2)

{
  byte bVar1;
  ulonglong ******ppppppuVar2;
  ulonglong ******ppppppuVar3;
  ulonglong *******pppppppuVar4;
  ulonglong *******pppppppuVar5;
  ulonglong *******pppppppuVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong *******pppppppuVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  ulonglong *******pppppppuVar12;
  ulonglong uVar13;
  ulonglong *******unaff_R13;
  ulonglong *******pppppppuVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong *******local_108;
  ulonglong *******local_100;
  ulonglong *******local_f8;
  ulonglong *******local_f0;
  ulonglong *******local_e8;
  ulonglong *******local_e0;
  ulonglong *******local_d8;
  ulonglong *******local_d0;
  ulonglong *******local_c8;
  undefined8 local_c0;
  ulonglong *******local_b8;
  ulonglong *******local_b0;
  ulonglong *******local_a8;
  ulonglong *******local_a0;
  ulonglong *******local_98;
  ulonglong *******local_90;
  ulonglong *******local_88;
  ulonglong *******local_80;
  ulonglong *******local_78;
  undefined1 local_69;
  ulonglong *******local_68;
  ulonglong *******local_60;
  ulonglong *******local_58;
  ulonglong *******local_50;
  ulonglong *******local_48;
  ulonglong *******local_40;
  undefined1 local_38;
  
  ppppppuVar3 = param_2[4];
  ppppppuVar2 = param_2[5];
  if (ppppppuVar2 < ppppppuVar3) {
    pppppppuVar9 = (ulonglong *******)-(longlong)ppppppuVar3;
    do {
      ppppppuVar2 = (ulonglong ******)((longlong)ppppppuVar2 + 1);
      bVar1 = *(byte *)(((longlong)param_2[3] - 1U) + (longlong)ppppppuVar2);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        local_c8 = param_2;
        local_78 = param_1;
        if (bVar1 == 0x5b) {
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar2;
            local_e8 = (ulonglong *******)CONCAT71(local_e8._1_7_,1);
            local_108 = (ulonglong *******)&local_c0;
            ppuVar11 = (undefined **)&local_f0;
            local_f0 = param_2;
            auVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_c0 == '\x01') {
              pppppppuVar14 = local_b8;
LAB_004234a9:
              local_b8 = pppppppuVar9;
              pppppppuVar12 = (ulonglong *******)0xffffffffffffffff;
              pppppppuVar5 = (ulonglong *******)0x100002600;
            }
            else {
              if (local_c0._1_1_ != '\x01') {
                ppuVar11 = &PTR_DAT_00789c98;
                local_108 = (ulonglong *******)0x0;
                auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789c98,&DAT_00789c78);
                pppppppuVar14 = auVar16._0_8_;
                goto LAB_004234a9;
              }
              local_108 = (ulonglong *******)&local_c0;
              ppuVar11 = (undefined **)local_f0;
              auVar16 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              pppppppuVar5 = local_b0;
              pppppppuVar14 = local_b8;
              pppppppuVar12 = local_c0;
              if (local_c0 == (ulonglong *******)0xffffffffffffffff) goto LAB_004234a9;
              pppppppuVar6 = (ulonglong *******)&local_c0;
              ppuVar11 = (undefined **)&local_f0;
              auVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>();
              unaff_R13 = local_b8;
              if ((char)local_c0 == '\x01') {
joined_r0x004233a8:
                local_108 = pppppppuVar6;
                local_b8 = pppppppuVar9;
                if (pppppppuVar12 != (ulonglong *******)0x0) {
                  uVar10 = 1;
                  uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar16._8_8_ = uVar10;
                  auVar16._0_8_ = uVar7;
                  local_b8 = pppppppuVar9;
                  ppuVar11 = (undefined **)pppppppuVar12;
                  local_108 = pppppppuVar14;
                }
                pppppppuVar12 = (ulonglong *******)0xffffffffffffffff;
                pppppppuVar14 = unaff_R13;
              }
              else {
                if (local_c0._1_1_ != '\x01') {
                  local_108 = (ulonglong *******)&PTR_DAT_00789c98;
                  pppppppuVar6 = (ulonglong *******)0x1;
                  auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_DAT_00789c98,&DAT_00789c78);
LAB_004233a2:
                  ppuVar11 = (undefined **)local_108;
                  unaff_R13 = auVar17._0_8_;
                  auVar16 = auVar17;
                  goto joined_r0x004233a8;
                }
                pppppppuVar6 = (ulonglong *******)&local_c0;
                ppuVar11 = (undefined **)local_f0;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
                unaff_R13 = local_b8;
                local_108 = local_c0;
                auVar16._8_8_ = extraout_RDX_03;
                auVar16._0_8_ = local_c0;
                if (local_c0 == (ulonglong *******)0xffffffffffffffff) goto joined_r0x004233a8;
                local_60 = local_b0;
                pppppppuVar6 = (ulonglong *******)&local_c0;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar6,&local_f0);
                auVar17._8_8_ = extraout_RDX_04;
                auVar17._0_8_ = local_b8;
                if ((char)local_c0 == '\x01') {
LAB_004237b0:
                  if (local_108 != (ulonglong *******)0x0) {
                    uVar10 = 1;
                    uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)();
                    auVar16._8_8_ = uVar10;
                    auVar16._0_8_ = uVar7;
                    ppuVar11 = (undefined **)local_108;
                    pppppppuVar6 = unaff_R13;
                    unaff_R13 = auVar17._0_8_;
                    goto joined_r0x004233a8;
                  }
                  goto LAB_004233a2;
                }
                if (local_c0._1_1_ != '\x01') {
                  pppppppuVar6 = (ulonglong *******)0x2;
                  auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(2,&PTR_DAT_00789c98,&DAT_00789c78);
                  goto LAB_004237b0;
                }
                pppppppuVar6 = (ulonglong *******)&local_c0;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (pppppppuVar6,local_f0);
                auVar17._8_8_ = local_b8;
                auVar17._0_8_ = local_b8;
                auVar16._8_8_ = local_60;
                auVar16._0_8_ = local_c0;
                if (local_c0 == (ulonglong *******)0xffffffffffffffff) {
                  pppppppuVar9 = (ulonglong *******)0xffffffffffffffff;
                  goto LAB_004237b0;
                }
                ppuVar11 = (undefined **)local_b0;
              }
            }
            local_98 = auVar16._8_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_d0 = local_b8;
            local_c0 = pppppppuVar12;
            local_88 = local_b8;
            local_b8 = pppppppuVar14;
            local_b0 = pppppppuVar5;
            local_a8 = local_108;
            local_a0 = unaff_R13;
            local_90 = auVar16._0_8_;
            local_80 = (ulonglong *******)ppuVar11;
            pppppppuVar6 = (ulonglong *******)
                           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::end_seq(param_2);
            pppppppuVar9 = pppppppuVar6;
            if (pppppppuVar12 == (ulonglong *******)0xffffffffffffffff) goto LAB_00423574;
            if (pppppppuVar6 == (ulonglong *******)0x0) goto LAB_0042351b;
            local_d8 = unaff_R13;
            param_1 = local_78;
            if (pppppppuVar12 != (ulonglong *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
              param_1 = local_78;
            }
            local_78 = param_1;
            if (local_108 != (ulonglong *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            if (auVar16._0_8_ != (ulonglong *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            goto LAB_0042358c;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppppuVar6 = (ulonglong *******)
                           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::peek_invalid_type(param_2,&local_69,&DAT_0078a4c0);
            goto LAB_00423591;
          }
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar2;
            local_38 = 1;
            local_100 = (ulonglong *******)0xffffffffffffffff;
            local_58 = (ulonglong *******)&DAT_00194568;
            local_f8 = (ulonglong *******)0xffffffffffffffff;
            local_108 = (ulonglong *******)0xffffffffffffffff;
            local_40 = param_2;
            goto LAB_00422db2;
          }
        }
        local_c0 = (ulonglong *******)0x18;
        goto LAB_00422d36;
      }
      param_2[5] = ppppppuVar2;
    } while (ppppppuVar2 != ppppppuVar3);
  }
  local_c0 = (ulonglong *******)0x5;
LAB_00422d36:
  ppppppuVar3 = (ulonglong ******)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(param_2,&local_c0);
  goto LAB_0042359c;
LAB_00422f83:
  pppppppuVar6 = (ulonglong *******)((longlong)pppppppuVar6 + 1);
  uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar3 - 1U) + (longlong)pppppppuVar6);
  if (0x3a < uVar13) goto LAB_00423896;
  if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) goto LAB_0042300b;
  pppppppuVar12[5] = (ulonglong ******)pppppppuVar6;
  if (pppppppuVar6 == pppppppuVar5) goto LAB_004236f9;
  goto LAB_00422f83;
LAB_0042300b:
  if (uVar13 == 0x3a) {
    pppppppuVar12[5] = (ulonglong ******)pppppppuVar6;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (&local_f0,pppppppuVar12);
    auVar18._8_8_ = extraout_RDX_01;
    auVar18._0_8_ = local_e8;
    if (local_f0 != (ulonglong *******)0xffffffffffffffff) {
      local_60 = local_e0;
      local_108 = local_f0;
      pppppppuVar9 = local_e0;
      param_1 = local_e8;
      goto LAB_00422db2;
    }
  }
  else {
LAB_00423896:
    local_c0 = (ulonglong *******)&DAT_00000006;
    auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(pppppppuVar12,&local_c0);
  }
LAB_00423726:
  bVar15 = true;
  unaff_R13 = (ulonglong *******)0x0;
  pppppppuVar5 = (ulonglong *******)0xffffffffffffffff;
  goto LAB_00423148;
LAB_004236f9:
  local_c0 = (ulonglong *******)0x3;
  auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar12,&local_c0);
  goto LAB_00423726;
LAB_00422db2:
  local_d8 = param_1;
LAB_00422dc0:
  while( true ) {
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_c0,&local_40);
    pppppppuVar12 = local_40;
    pppppppuVar14 = local_d8;
    auVar18._8_8_ = extraout_RDX;
    auVar18._0_8_ = local_b8;
    pppppppuVar5 = local_108;
    if ((char)local_c0 == '\x01') goto LAB_00423141;
    if (local_c0._1_1_ != '\x01') {
      if (local_100 == (ulonglong *******)0xffffffffffffffff) {
        local_f0 = (ulonglong *******)&DAT_00194568;
        local_e8 = (ulonglong *******)&DAT_00000007;
        local_c0 = (ulonglong *******)&local_f0;
        local_b8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_c0);
        bVar15 = true;
        local_100 = (ulonglong *******)0xffffffffffffffff;
        unaff_R13 = (ulonglong *******)0x0;
        goto LAB_00423148;
      }
      bVar15 = local_108 == (ulonglong *******)0xffffffffffffffff;
      if (bVar15) {
        local_f0 = (ulonglong *******)
                   &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178;
        local_e8 = (ulonglong *******)&DAT_00000004;
        local_c0 = (ulonglong *******)&local_f0;
        local_b8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_c0);
      }
      else {
        if (local_f8 != (ulonglong *******)0xffffffffffffffff) {
          pppppppuVar5 = local_48;
          ppuVar11 = (undefined **)local_50;
          pppppppuVar12 = local_100;
          local_100 = local_60;
          unaff_R13 = local_d8;
          pppppppuVar14 = local_68;
          goto LAB_004231be;
        }
        local_f0 = (ulonglong *******)&DAT_0019456f;
        local_e8 = (ulonglong *******)&DAT_00000009;
        local_c0 = (ulonglong *******)&local_f0;
        local_b8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_c0);
        uVar7 = auVar18._0_8_;
        if (local_108 != (ulonglong *******)0x0) {
          uVar10 = 1;
          (*(code *)PTR___rust_dealloc_00798fc8)();
          auVar18._8_8_ = uVar10;
          auVar18._0_8_ = uVar7;
        }
      }
      uVar7 = auVar18._0_8_;
      unaff_R13 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar14 >> 8),1);
      if (local_100 == (ulonglong *******)0x0) {
        local_100 = (ulonglong *******)0x0;
      }
      else {
        uVar10 = 1;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        auVar18._8_8_ = uVar10;
        auVar18._0_8_ = uVar7;
      }
      goto LAB_00423148;
    }
    pppppppuVar14 = local_40 + 3;
    local_40[5] = (ulonglong ******)((longlong)local_40[5] + 1);
    local_40[2] = (ulonglong ******)0x0;
    pppppppuVar9 = local_40;
    (*(code *)PTR_parse_str_007998f8)();
    param_1 = local_d8;
    auVar18._8_8_ = pppppppuVar9;
    auVar18._0_8_ = local_b8;
    pppppppuVar9 = local_c0;
    if (local_c0 == (ulonglong *******)0x2) goto LAB_00423141;
    if (local_b0 != (ulonglong *******)&DAT_00000004) break;
    if (*(uint *)local_b8 == 0x656d616e) {
      if (local_108 != (ulonglong *******)0xffffffffffffffff) {
        local_e8 = (ulonglong *******)&DAT_00000004;
        local_58 = (ulonglong *******)
                   &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178;
        goto LAB_0042383e;
      }
      pppppppuVar5 = (ulonglong *******)pppppppuVar12[4];
      pppppppuVar6 = (ulonglong *******)pppppppuVar12[5];
      pppppppuVar9 = pppppppuVar5;
      if (pppppppuVar5 <= pppppppuVar6) goto LAB_004236f9;
      ppppppuVar3 = *pppppppuVar14;
      pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar5;
      goto LAB_00422f83;
    }
LAB_00422ef9:
    auVar18 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (pppppppuVar12,pppppppuVar14);
    if (auVar18._0_8_ != 0) goto LAB_00423141;
  }
  if (local_b0 == (ulonglong *******)&DAT_00000009) {
    pppppppuVar9 = (ulonglong *******)
                   ((ulonglong)*(byte *)(local_b8 + 1) ^ 0x65 |
                   (ulonglong)*local_b8 ^ 0x6d616e5f65666173);
    if (pppppppuVar9 != (ulonglong *******)0x0) goto LAB_00422ef9;
    if (local_f8 != (ulonglong *******)0xffffffffffffffff) {
      local_e8 = (ulonglong *******)&DAT_00000009;
      local_58 = (ulonglong *******)&DAT_0019456f;
      goto LAB_0042383e;
    }
    pppppppuVar6 = (ulonglong *******)pppppppuVar12[4];
    pppppppuVar4 = (ulonglong *******)pppppppuVar12[5];
    pppppppuVar9 = pppppppuVar6;
    if (pppppppuVar6 <= pppppppuVar4) {
LAB_00423775:
      local_c0 = (ulonglong *******)0x3;
      auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar12,&local_c0);
LAB_0042379e:
      bVar15 = true;
      unaff_R13 = (ulonglong *******)0x0;
      goto LAB_00423167;
    }
    ppppppuVar3 = *pppppppuVar14;
    pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar6;
    while( true ) {
      pppppppuVar4 = (ulonglong *******)((longlong)pppppppuVar4 + 1);
      uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar3 - 1U) + (longlong)pppppppuVar4);
      if (0x3a < uVar13) goto LAB_004238f3;
      if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) break;
      pppppppuVar12[5] = (ulonglong ******)pppppppuVar4;
      if (pppppppuVar4 == pppppppuVar6) goto LAB_00423775;
    }
    if (uVar13 != 0x3a) {
LAB_004238f3:
      local_c0 = (ulonglong *******)&DAT_00000006;
      auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar12,&local_c0);
      goto LAB_0042379e;
    }
    pppppppuVar12[5] = (ulonglong ******)pppppppuVar4;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (&local_f0,pppppppuVar12);
    auVar18._8_8_ = extraout_RDX_00;
    auVar18._0_8_ = local_e8;
    local_d0 = local_e8;
    pppppppuVar9 = local_e8;
    if (local_f0 == (ulonglong *******)0xffffffffffffffff) goto LAB_0042379e;
    local_50 = local_e0;
    local_f8 = local_f0;
    pppppppuVar9 = local_e0;
    goto LAB_00422dc0;
  }
  if ((local_b0 != (ulonglong *******)&DAT_00000007) ||
     (uVar8 = *(uint *)((longlong)local_b8 + 3) ^ 0x64695f6c | *(uint *)local_b8 ^ 0x6c6c6163,
     pppppppuVar9 = (ulonglong *******)(ulonglong)uVar8, uVar8 != 0)) goto LAB_00422ef9;
  if (local_100 != (ulonglong *******)0xffffffffffffffff) {
    local_e8 = (ulonglong *******)&DAT_00000007;
LAB_0042383e:
    local_f0 = local_58;
    local_c0 = (ulonglong *******)&local_f0;
    local_b8 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pppppppuVar9 = local_58;
    auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_c0);
    bVar15 = true;
    unaff_R13 = (ulonglong *******)0x0;
    goto LAB_00423148;
  }
  pppppppuVar6 = (ulonglong *******)pppppppuVar12[4];
  pppppppuVar4 = (ulonglong *******)pppppppuVar12[5];
  pppppppuVar9 = pppppppuVar6;
  if (pppppppuVar4 < pppppppuVar6) {
    ppppppuVar3 = *pppppppuVar14;
    pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar6;
    while( true ) {
      pppppppuVar4 = (ulonglong *******)((longlong)pppppppuVar4 + 1);
      uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar3 - 1U) + (longlong)pppppppuVar4);
      if (0x3a < uVar13) goto LAB_004238c5;
      if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) break;
      pppppppuVar12[5] = (ulonglong ******)pppppppuVar4;
      if (pppppppuVar4 == pppppppuVar6) goto LAB_00423738;
    }
    if (uVar13 != 0x3a) {
LAB_004238c5:
      local_c0 = (ulonglong *******)&DAT_00000006;
      auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar12,&local_c0);
      goto LAB_00423761;
    }
    pppppppuVar12[5] = (ulonglong ******)pppppppuVar4;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (&local_f0,pppppppuVar12);
    auVar18._8_8_ = extraout_RDX_02;
    auVar18._0_8_ = local_e8;
    local_100 = local_f0;
    pppppppuVar9 = local_f0;
    if (local_f0 == (ulonglong *******)0xffffffffffffffff) goto LAB_00423764;
    local_48 = local_e0;
    local_68 = local_e8;
    pppppppuVar9 = local_e0;
    goto LAB_00422db2;
  }
LAB_00423738:
  local_c0 = (ulonglong *******)0x3;
  auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar12,&local_c0);
LAB_00423761:
LAB_00423764:
  local_100 = (ulonglong *******)0xffffffffffffffff;
LAB_00423141:
  bVar15 = true;
  unaff_R13 = (ulonglong *******)0x0;
LAB_00423148:
  uVar7 = auVar18._0_8_;
  if ((undefined1 *)((longlong)local_f8 + -1) < (undefined1 *)0xfffffffffffffffe) {
    uVar10 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar18._8_8_ = uVar10;
    auVar18._0_8_ = uVar7;
  }
LAB_00423167:
  ppuVar11 = auVar18._8_8_;
  if ((bool)((undefined1 *)((longlong)pppppppuVar5 + -1) < (undefined1 *)0xfffffffffffffffe & bVar15
            )) {
    ppuVar11 = (undefined **)0x1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  bVar1 = (undefined1 *)((longlong)local_100 + 1) < (undefined1 *)0x2 | (byte)unaff_R13;
  pppppppuVar5 = (ulonglong *******)
                 CONCAT71((int7)((ulonglong)((longlong)local_100 + 1) >> 8),bVar1);
  if (bVar1 == 0) {
    ppuVar11 = (undefined **)0x1;
    pppppppuVar5 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_d0 = pppppppuVar9;
  pppppppuVar12 = (ulonglong *******)0xffffffffffffffff;
  pppppppuVar14 = auVar18._0_8_;
LAB_004231be:
  auVar16._8_8_ = local_100;
  auVar16._0_8_ = local_f8;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_90 = local_f8;
  local_c0 = pppppppuVar12;
  local_b8 = pppppppuVar14;
  local_b0 = pppppppuVar5;
  local_a8 = local_108;
  local_a0 = unaff_R13;
  local_98 = local_100;
  local_88 = local_d0;
  local_80 = (ulonglong *******)ppuVar11;
  pppppppuVar6 = (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_map(param_2);
  pppppppuVar9 = pppppppuVar6;
  if (pppppppuVar12 == (ulonglong *******)0xffffffffffffffff) {
LAB_00423574:
    pppppppuVar6 = pppppppuVar14;
    if (pppppppuVar9 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pppppppuVar9);
    }
    param_1 = local_78;
  }
  else {
    if (pppppppuVar6 == (ulonglong *******)0x0) {
LAB_0042351b:
      local_f8 = auVar16._0_8_;
      local_78[2] = (ulonglong ******)pppppppuVar5;
      local_78[3] = (ulonglong ******)local_108;
      local_78[4] = (ulonglong ******)unaff_R13;
      local_78[5] = auVar16._8_8_;
      local_78[6] = (ulonglong ******)local_f8;
      local_78[7] = (ulonglong ******)local_d0;
      local_78[8] = (ulonglong ******)ppuVar11;
      *local_78 = (ulonglong ******)pppppppuVar12;
      local_78[1] = (ulonglong ******)pppppppuVar14;
      return local_78;
    }
    local_d8 = unaff_R13;
    param_1 = local_78;
    if (pppppppuVar12 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
      param_1 = local_78;
    }
    local_78 = param_1;
    if (local_108 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_f8 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_0042358c:
  param_2 = local_c8;
LAB_00423591:
  ppppppuVar3 = (ulonglong ******)
                ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (pppppppuVar6,param_2);
LAB_0042359c:
  param_1[1] = ppppppuVar3;
  *param_1 = (ulonglong ******)0xffffffffffffffff;
  return param_1;
}


