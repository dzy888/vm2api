// 00150ff0 <<craggemini[b21da2d71f2da7a3]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::license::WrappedKey
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar8;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined **ppuVar9;
  undefined **unaff_RBP;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  undefined **ppuVar13;
  undefined **in_R10;
  undefined **unaff_R13;
  undefined **ppuVar14;
  undefined **unaff_R14;
  undefined **ppuVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_130;
  undefined **local_128;
  undefined **local_120;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  undefined1 local_61;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined8 *local_48;
  undefined **local_40;
  undefined1 local_38;
  
  puVar1 = param_2[4];
  puVar3 = param_2[5];
  if (puVar3 < puVar1) {
    pcVar7 = (char *)-(longlong)puVar1;
    ppuVar9 = (undefined **)0x100002600;
    do {
      puVar3 = puVar3 + 1;
      bVar2 = (param_2[3] + -1)[(longlong)puVar3];
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          ppuVar10 = param_2 + 7;
          *(char *)ppuVar10 = *(char *)ppuVar10 + -1;
          if (*(char *)ppuVar10 != '\0') {
            param_2[5] = puVar3;
            local_f0 = (undefined **)CONCAT71(local_f0._1_7_,1);
            ppuVar10 = (undefined **)&local_f8;
            local_f8 = param_2;
            auVar18 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8);
            if ((char)local_c8 == '\x01') {
              local_110 = (undefined **)pcVar7;
              ppuVar11 = param_6;
              ppuVar15 = local_c0;
LAB_0015171c:
              local_c0 = ppuVar10;
              local_120 = unaff_RBP;
              local_108 = (undefined **)0xffffffffffffffff;
              local_100 = unaff_R14;
            }
            else {
              if (local_c8._1_1_ != '\x01') {
                ppuVar10 = &PTR_s_struct_WrappedKey_with_4_element_00214f60;
                auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_s_struct_WrappedKey_with_4_element_00214f60,
                                           &DAT_00214f40);
                ppuVar15 = auVar18._0_8_;
                local_110 = (undefined **)pcVar7;
                ppuVar10 = ppuVar10;
                ppuVar11 = param_6;
                goto LAB_0015171c;
              }
              ppuVar10 = local_f8;
              auVar18 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  (&local_c8);
              local_100 = local_b8;
              ppuVar15 = local_c0;
              unaff_R13 = local_c8;
              local_110 = (undefined **)pcVar7;
              ppuVar11 = param_6;
              if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_0015171c;
              ppuVar10 = (undefined **)&local_f8;
              auVar18 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8);
              ppuVar11 = param_6;
              ppuVar9 = local_c0;
              ppuVar13 = unaff_RBP;
              if ((char)local_c8 == '\x01') {
joined_r0x00151db9:
                local_120 = ppuVar13;
                local_c0 = ppuVar10;
                local_110 = (undefined **)pcVar7;
                if (unaff_R13 != (undefined **)0x0) {
                  uVar8 = 1;
                  uVar4 = (*(code *)PTR___rust_dealloc_00219c40)();
                  auVar18._8_8_ = uVar8;
                  auVar18._0_8_ = uVar4;
                  local_c0 = unaff_R13;
                }
                local_108 = (undefined **)0xffffffffffffffff;
                ppuVar15 = ppuVar9;
              }
              else {
                if (local_c8._1_1_ != '\x01') {
                  ppuVar10 = &PTR_s_struct_WrappedKey_with_4_element_00214f60;
                  auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_s_struct_WrappedKey_with_4_element_00214f60,
                                             &DAT_00214f40);
                  ppuVar9 = auVar18._0_8_;
                  ppuVar10 = ppuVar10;
                  ppuVar11 = param_6;
                  ppuVar13 = unaff_RBP;
                  goto joined_r0x00151db9;
                }
                ppuVar10 = local_f8;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_c8);
                ppuVar9 = local_c0;
                local_120 = local_c8;
                auVar18._8_8_ = extraout_RDX;
                auVar18._0_8_ = local_c8;
                ppuVar11 = param_6;
                ppuVar13 = unaff_RBP;
                if (local_c8 == (undefined **)0xffffffffffffffff) goto joined_r0x00151db9;
                local_50 = local_b8;
                ppuVar10 = (undefined **)&local_f8;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8);
                auVar19._8_8_ = extraout_RDX_00;
                auVar19._0_8_ = local_c0;
                if ((char)local_c8 == '\x01') {
LAB_0015158d:
                  local_110 = auVar19._0_8_;
                  ppuVar13 = ppuVar10;
LAB_00151d9b:
                  ppuVar10 = ppuVar13;
                  ppuVar11 = param_6;
                  ppuVar9 = local_110;
                  ppuVar13 = local_120;
                  auVar18 = auVar19;
                  if (local_120 != (undefined **)0x0) {
                    uVar8 = 1;
                    uVar4 = (*(code *)PTR___rust_dealloc_00219c40)();
                    auVar18._8_8_ = uVar8;
                    auVar18._0_8_ = uVar4;
                    ppuVar10 = local_120;
                    ppuVar11 = param_6;
                  }
                  goto joined_r0x00151db9;
                }
                if (local_c8._1_1_ != '\x01') {
                  ppuVar13 = &PTR_s_struct_WrappedKey_with_4_element_00214f60;
                  auVar19 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(2,&PTR_s_struct_WrappedKey_with_4_element_00214f60,
                                             &DAT_00214f40);
                  local_110 = auVar19._0_8_;
                  goto LAB_00151d9b;
                }
                ppuVar13 = local_f8;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_c8);
                ppuVar11 = local_b8;
                local_110 = local_c0;
                ppuVar10 = local_c8;
                auVar19._8_8_ = extraout_RDX_01;
                auVar19._0_8_ = local_c8;
                pcVar7 = (char *)local_c0;
                if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_00151d9b;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8,&local_f8);
                auVar19._8_8_ = extraout_RDX_02;
                auVar19._0_8_ = local_c0;
                if ((char)local_c8 == '\x01') {
LAB_00151d70:
                  local_110 = auVar19._0_8_;
                  if (ppuVar10 == (undefined **)0x0) goto LAB_0015158d;
                  uVar8 = 1;
                  uVar4 = (*(code *)PTR___rust_dealloc_00219c40)();
                  auVar19._8_8_ = uVar8;
                  auVar19._0_8_ = uVar4;
                  ppuVar13 = ppuVar10;
                  local_100 = local_110;
                  goto LAB_00151d9b;
                }
                if (local_c8._1_1_ != '\x01') {
                  auVar19 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(3,&PTR_s_struct_WrappedKey_with_4_element_00214f60,
                                             &DAT_00214f40);
                  goto LAB_00151d70;
                }
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_c8,local_f8);
                auVar19._8_8_ = local_c8;
                auVar19._0_8_ = local_c0;
                auVar18._8_8_ = local_c8;
                auVar18._0_8_ = ppuVar10;
                if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_00151d70;
                param_5 = local_50;
                local_108 = unaff_R13;
                unaff_R13 = local_b8;
              }
            }
            local_80 = auVar18._8_8_;
            local_98 = auVar18._0_8_;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_e0 = ppuVar15;
            local_d0 = local_c0;
            local_c8 = local_108;
            local_78 = local_c0;
            local_c0 = ppuVar15;
            local_b8 = local_100;
            local_b0 = local_120;
            local_a8 = ppuVar9;
            local_a0 = param_5;
            local_90 = local_110;
            local_88 = ppuVar11;
            local_70 = unaff_R13;
            ppuVar10 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::end_seq();
            if (local_108 == (undefined **)0xffffffffffffffff) goto LAB_00151c26;
            if (ppuVar10 == (undefined **)0x0) goto LAB_00151bb8;
            local_d8 = ppuVar9;
            goto LAB_00151c42;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            ppuVar10 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_invalid_type(param_2,&local_61,&DAT_00215150);
            goto LAB_00151ce8;
          }
          ppuVar10 = param_2 + 7;
          *(char *)ppuVar10 = *(char *)ppuVar10 + -1;
          if (*(char *)ppuVar10 != '\0') {
            param_2[5] = puVar3;
            local_38 = 1;
            local_108 = (undefined **)0xffffffffffffffff;
            local_120 = (undefined **)0xffffffffffffffff;
            local_128 = (undefined **)0xffffffffffffffff;
            ppuVar10 = (undefined **)0xffffffffffffffff;
            local_48 = param_1;
            local_40 = param_2;
            goto LAB_001510ca;
          }
        }
        local_c8 = (undefined **)0x18;
        goto LAB_00151056;
      }
      param_2[5] = puVar3;
    } while (puVar3 != puVar1);
  }
  local_c8 = (undefined **)0x5;
LAB_00151056:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_c8);
  goto LAB_00151cf3;
LAB_001510ca:
  do {
    local_58 = unaff_R13;
LAB_001510d7:
    while( true ) {
      auVar18._8_8_ = ppuVar10;
      auVar18._0_8_ = local_128;
      <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
      ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                (&local_c8,&local_40);
      ppuVar15 = local_40;
      ppuVar11 = local_d8;
      ppuVar13 = local_120;
      ppuVar14 = local_128;
      if ((char)local_c8 == '\x01') {
        ppuVar6 = local_c0;
        goto LAB_001516f0;
      }
      if (local_c8._1_1_ != '\x01') {
        pcVar7 = (char *)local_108;
        if (local_108 == (undefined **)0xffffffffffffffff) {
          local_f8 = (undefined **)0x114562;
          local_f0 = (undefined **)0x14;
          local_c8 = (undefined **)&local_f8;
          local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                               &local_c8);
          local_108 = (undefined **)0xffffffffffffffff;
          goto LAB_001516f0;
        }
        bVar16 = local_120 == (undefined **)0xffffffffffffffff;
        if (bVar16) {
          local_f8 = (undefined **)0x114576;
          local_f0 = (undefined **)&DAT_00000005;
          local_c8 = (undefined **)&local_f8;
          local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                               &local_c8);
          bVar17 = true;
        }
        else {
          bVar17 = local_128 == (undefined **)0xffffffffffffffff;
          if (bVar17) {
            local_f8 = (undefined **)0x11457b;
            local_f0 = (undefined **)0xa;
            local_c8 = (undefined **)&local_f8;
            local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            ppuVar6 = (undefined **)
                      <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_c8);
          }
          else {
            if (ppuVar10 != (undefined **)0xffffffffffffffff) {
              param_5 = local_50;
              ppuVar11 = local_58;
              unaff_R13 = local_e0;
              local_e0 = local_60;
              goto LAB_00151b02;
            }
            local_f8 = (undefined **)0x114585;
            local_f0 = (undefined **)0x3;
            local_c8 = (undefined **)&local_f8;
            local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            ppuVar6 = (undefined **)
                      <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_c8);
            if (local_128 != (undefined **)0x0) {
              (*(code *)PTR___rust_dealloc_00219c40)();
            }
          }
          ppuVar9 = ppuVar11;
          if (local_120 != (undefined **)0x0) {
            (*(code *)PTR___rust_dealloc_00219c40)();
          }
        }
        ppuVar9 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar9 >> 8),1);
        if (local_108 == (undefined **)0x0) {
          local_108 = (undefined **)0x0;
        }
        else {
          (*(code *)PTR___rust_dealloc_00219c40)();
        }
        goto LAB_00151a66;
      }
      ppuVar11 = local_40 + 3;
      local_40[5] = local_40[5] + 1;
      local_40[2] = (undefined *)0x0;
      (*(code *)PTR_parse_str_00219c90)();
      ppuVar6 = local_c0;
      if ((int)local_c8 == 2) goto LAB_00151638;
      <<craggemini[b21da2d71f2da7a3]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_f8,local_c0,local_b8);
      unaff_R13 = local_58;
      if ((char)local_f8 == '\x01') {
        ppuVar6 = local_f0;
        goto LAB_00151638;
      }
      param_5 = ppuVar10;
      if (local_f8._1_1_ != '\x03') break;
      if (ppuVar10 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0x3;
        pcVar7 = "tag";
        goto LAB_00151dd0;
      }
      ppuVar6 = (undefined **)ppuVar15[4];
      ppuVar5 = (undefined **)ppuVar15[5];
      pcVar7 = (char *)ppuVar6;
      if (ppuVar6 <= ppuVar5) {
LAB_001514ec:
        local_c8 = (undefined **)0x3;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
LAB_00151513:
LAB_00151516:
        bVar16 = true;
        ppuVar9 = (undefined **)0x0;
        bVar17 = true;
        goto LAB_00151a80;
      }
      puVar1 = *ppuVar11;
      pcVar7 = (char *)-(longlong)ppuVar6;
      while( true ) {
        ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
        uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
        if (0x3a < uVar12) goto LAB_00151e16;
        if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
        ppuVar15[5] = (undefined *)ppuVar5;
        if (ppuVar5 == ppuVar6) goto LAB_001514ec;
      }
      if (uVar12 != 0x3a) {
LAB_00151e16:
        local_c8 = (undefined **)0x6;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
        goto LAB_00151513;
      }
      ppuVar15[5] = (undefined *)ppuVar5;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                (&local_f8,ppuVar15);
      local_d0 = local_f0;
      if (local_f8 == (undefined **)0xffffffffffffffff) {
        pcVar7 = (char *)local_f0;
        ppuVar6 = local_f0;
        goto LAB_00151516;
      }
      local_e0 = local_e8;
      pcVar7 = (char *)local_e8;
      ppuVar10 = local_f8;
    }
    if (local_f8._1_1_ == '\0') {
      if (local_108 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0x14;
        pcVar7 = "ephemeral_public_key";
        goto LAB_00151dd0;
      }
      ppuVar6 = (undefined **)ppuVar15[4];
      ppuVar5 = (undefined **)ppuVar15[5];
      pcVar7 = (char *)ppuVar6;
      if (ppuVar6 <= ppuVar5) goto LAB_00151952;
      puVar1 = *ppuVar11;
      pcVar7 = (char *)-(longlong)ppuVar6;
      break;
    }
    if (local_f8._1_1_ != '\x01') {
      if (local_128 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0xa;
        pcVar7 = "ciphertext";
        goto LAB_00151dd0;
      }
      ppuVar14 = (undefined **)ppuVar15[4];
      ppuVar6 = (undefined **)ppuVar15[5];
      pcVar7 = (char *)ppuVar14;
      if (ppuVar6 < ppuVar14) {
        puVar1 = *ppuVar11;
        pcVar7 = (char *)-(longlong)ppuVar14;
        while( true ) {
          ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
          uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar6];
          if (0x3a < uVar12) goto LAB_00151ec9;
          if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
          ppuVar15[5] = (undefined *)ppuVar6;
          if (ppuVar6 == ppuVar14) goto LAB_0015190c;
        }
        if (uVar12 != 0x3a) {
LAB_00151ec9:
          local_c8 = (undefined **)0x6;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(ppuVar15,&local_c8);
          goto LAB_00151931;
        }
        ppuVar15[5] = (undefined *)ppuVar6;
        deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                  (&local_f8,ppuVar15);
        ppuVar6 = local_f0;
        if (local_f8 != (undefined **)0xffffffffffffffff) {
          local_58 = local_e8;
          local_128 = local_f8;
          local_110 = local_f0;
          pcVar7 = (char *)local_e8;
          goto LAB_001510d7;
        }
      }
      else {
LAB_0015190c:
        local_c8 = (undefined **)0x3;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
LAB_00151931:
      }
      bVar17 = true;
      ppuVar9 = (undefined **)0x0;
      bVar16 = true;
      ppuVar14 = (undefined **)0xffffffffffffffff;
      goto LAB_00151a66;
    }
    if (local_120 != (undefined **)0xffffffffffffffff) goto LAB_00151e6c;
    ppuVar13 = (undefined **)ppuVar15[4];
    ppuVar6 = (undefined **)ppuVar15[5];
    pcVar7 = (char *)ppuVar13;
    if (ppuVar13 <= ppuVar6) {
LAB_001518d0:
      local_c8 = (undefined **)0x3;
      ppuVar6 = (undefined **)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(ppuVar15,&local_c8);
LAB_001518f5:
LAB_001518f8:
      ppuVar13 = (undefined **)0xffffffffffffffff;
      goto LAB_00151997;
    }
    puVar1 = *ppuVar11;
    pcVar7 = (char *)-(longlong)ppuVar13;
    while( true ) {
      ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
      uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar6];
      if (0x3a < uVar12) goto LAB_00151e9f;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      ppuVar15[5] = (undefined *)ppuVar6;
      if (ppuVar6 == ppuVar13) goto LAB_001518d0;
    }
    if (uVar12 != 0x3a) {
LAB_00151e9f:
      local_c8 = (undefined **)0x6;
      ppuVar6 = (undefined **)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(ppuVar15,&local_c8);
      goto LAB_001518f5;
    }
    ppuVar15[5] = (undefined *)ppuVar6;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_f8,ppuVar15)
    ;
    ppuVar6 = local_f0;
    if (local_f8 == (undefined **)0xffffffffffffffff) goto LAB_001518f8;
    local_50 = local_e8;
    local_120 = local_f8;
    local_d8 = local_f0;
    pcVar7 = (char *)local_e8;
  } while( true );
LAB_001513c5:
  ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
  uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
  if (0x3a < uVar12) goto LAB_00151ef3;
  if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) goto LAB_001513fc;
  ppuVar15[5] = (undefined *)ppuVar5;
  if (ppuVar5 == ppuVar6) goto LAB_00151952;
  goto LAB_001513c5;
LAB_00151952:
  local_c8 = (undefined **)0x3;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(ppuVar15,&local_c8);
  goto LAB_0015197e;
LAB_00151e6c:
  local_f0 = (undefined **)&DAT_00000005;
  pcVar7 = "nonce";
LAB_00151dd0:
  local_c8 = (undefined **)&local_f8;
  local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_f8 = (undefined **)pcVar7;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                      (anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171,&local_c8);
LAB_001516f0:
  bVar17 = true;
  ppuVar9 = (undefined **)0x0;
  bVar16 = true;
  goto LAB_00151a66;
LAB_001513fc:
  if (uVar12 == 0x3a) {
    ppuVar15[5] = (undefined *)ppuVar5;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_f8,ppuVar15)
    ;
    local_108 = local_f8;
    pcVar7 = (char *)local_f8;
    ppuVar6 = local_f0;
    if (local_f8 == (undefined **)0xffffffffffffffff) goto LAB_00151986;
    local_100 = local_e8;
    local_60 = local_f0;
    goto LAB_001510ca;
  }
LAB_00151ef3:
  local_c8 = (undefined **)0x6;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(ppuVar15,&local_c8);
LAB_0015197e:
LAB_00151986:
  local_108 = (undefined **)0xffffffffffffffff;
LAB_00151997:
LAB_00151638:
  bVar17 = true;
  ppuVar9 = (undefined **)0x0;
  bVar16 = true;
LAB_00151a66:
  if ((char *)((longlong)ppuVar10 + -1) < (char *)0xfffffffffffffffe) {
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
LAB_00151a80:
  local_110 = (undefined **)pcVar7;
  if ((bool)((char *)((longlong)ppuVar14 + -1) < (char *)0xfffffffffffffffe & bVar17)) {
    (*(code *)PTR___rust_dealloc_00219c40)();
    local_110 = (undefined **)pcVar7;
  }
  if ((bool)((char *)((longlong)ppuVar13 + -1) < (char *)0xfffffffffffffffe & bVar16)) {
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
  bVar2 = (char *)((longlong)local_108 + 1) < (char *)0x2 | (byte)ppuVar9;
  local_100 = (undefined **)CONCAT71((int7)((ulonglong)((longlong)local_108 + 1) >> 8),bVar2);
  if (bVar2 == 0) {
    local_100 = (undefined **)(*(code *)PTR___rust_dealloc_00219c40)();
  }
  local_d8 = ppuVar9;
  local_d0 = local_108;
  ppuVar11 = param_6;
  unaff_R13 = in_R10;
  local_108 = (undefined **)0xffffffffffffffff;
  local_e0 = ppuVar6;
LAB_00151b02:
  param_1 = local_48;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_b0 = local_120;
  local_98 = local_128;
  local_c8 = local_108;
  local_c0 = local_e0;
  local_b8 = local_100;
  local_a8 = local_d8;
  local_a0 = param_5;
  local_90 = local_110;
  local_88 = ppuVar11;
  local_80 = ppuVar10;
  local_78 = local_d0;
  local_70 = unaff_R13;
  ppuVar10 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::end_map();
  if (local_108 == (undefined **)0xffffffffffffffff) {
LAB_00151c26:
    if (ppuVar10 != (undefined **)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(ppuVar10)
      ;
    }
    ppuVar10 = local_e0;
  }
  else {
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar9 = local_d8;
LAB_00151bb8:
      local_128 = auVar18._0_8_;
      param_1[2] = local_100;
      param_1[3] = local_120;
      param_1[4] = ppuVar9;
      param_1[5] = param_5;
      param_1[6] = local_128;
      param_1[7] = local_110;
      param_1[8] = ppuVar11;
      param_1[9] = auVar18._8_8_;
      param_1[10] = local_d0;
      param_1[0xb] = unaff_R13;
      *param_1 = local_108;
      param_1[1] = local_e0;
      return param_1;
    }
LAB_00151c42:
    local_130 = auVar18._8_8_;
    local_128 = auVar18._0_8_;
    if (local_108 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    if (local_120 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    if (local_128 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
    if (local_130 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
  }
LAB_00151ce8:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (ppuVar10,param_2);
LAB_00151cf3:
  param_1[1] = uVar4;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


