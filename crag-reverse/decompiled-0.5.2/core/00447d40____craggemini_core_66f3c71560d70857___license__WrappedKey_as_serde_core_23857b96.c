// 00447d40 <<craggemini_core[66f3c71560d70857]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::license::WrappedKey
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
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
    ppuVar7 = (undefined **)-(longlong)puVar1;
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
              local_110 = ppuVar7;
              ppuVar11 = param_6;
              ppuVar15 = local_c0;
LAB_0044846c:
              local_c0 = ppuVar10;
              local_120 = unaff_RBP;
              local_108 = (undefined **)0xffffffffffffffff;
              local_100 = unaff_R14;
            }
            else {
              if (local_c8._1_1_ != '\x01') {
                ppuVar10 = &PTR_DAT_00789fe0;
                auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789fe0,&DAT_00789c78);
                ppuVar15 = auVar18._0_8_;
                local_110 = ppuVar7;
                ppuVar10 = ppuVar10;
                ppuVar11 = param_6;
                goto LAB_0044846c;
              }
              ppuVar10 = local_f8;
              auVar18 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  (&local_c8);
              local_100 = local_b8;
              ppuVar15 = local_c0;
              unaff_R13 = local_c8;
              local_110 = ppuVar7;
              ppuVar11 = param_6;
              if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_0044846c;
              ppuVar10 = (undefined **)&local_f8;
              auVar18 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8);
              ppuVar11 = param_6;
              ppuVar9 = local_c0;
              ppuVar13 = unaff_RBP;
              if ((char)local_c8 == '\x01') {
joined_r0x00448b09:
                local_120 = ppuVar13;
                local_c0 = ppuVar10;
                local_110 = ppuVar7;
                if (unaff_R13 != (undefined **)0x0) {
                  uVar8 = 1;
                  uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar18._8_8_ = uVar8;
                  auVar18._0_8_ = uVar4;
                  local_c0 = unaff_R13;
                }
                local_108 = (undefined **)0xffffffffffffffff;
                ppuVar15 = ppuVar9;
              }
              else {
                if (local_c8._1_1_ != '\x01') {
                  ppuVar10 = &PTR_DAT_00789fe0;
                  auVar18 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(1,&PTR_DAT_00789fe0,&DAT_00789c78);
                  ppuVar9 = auVar18._0_8_;
                  ppuVar10 = ppuVar10;
                  ppuVar11 = param_6;
                  ppuVar13 = unaff_RBP;
                  goto joined_r0x00448b09;
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
                if (local_c8 == (undefined **)0xffffffffffffffff) goto joined_r0x00448b09;
                local_50 = local_b8;
                ppuVar10 = (undefined **)&local_f8;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8);
                auVar19._8_8_ = extraout_RDX_00;
                auVar19._0_8_ = local_c0;
                if ((char)local_c8 == '\x01') {
LAB_004482dd:
                  local_110 = auVar19._0_8_;
                  ppuVar13 = ppuVar10;
LAB_00448aeb:
                  ppuVar10 = ppuVar13;
                  ppuVar11 = param_6;
                  ppuVar9 = local_110;
                  ppuVar13 = local_120;
                  auVar18 = auVar19;
                  if (local_120 != (undefined **)0x0) {
                    uVar8 = 1;
                    uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)();
                    auVar18._8_8_ = uVar8;
                    auVar18._0_8_ = uVar4;
                    ppuVar10 = local_120;
                    ppuVar11 = param_6;
                  }
                  goto joined_r0x00448b09;
                }
                if (local_c8._1_1_ != '\x01') {
                  ppuVar13 = &PTR_DAT_00789fe0;
                  auVar19 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(2,&PTR_DAT_00789fe0,&DAT_00789c78);
                  local_110 = auVar19._0_8_;
                  goto LAB_00448aeb;
                }
                ppuVar13 = local_f8;
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_c8);
                ppuVar11 = local_b8;
                local_110 = local_c0;
                ppuVar10 = local_c8;
                auVar19._8_8_ = extraout_RDX_01;
                auVar19._0_8_ = local_c8;
                ppuVar7 = local_c0;
                if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_00448aeb;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_c8,&local_f8);
                auVar19._8_8_ = extraout_RDX_02;
                auVar19._0_8_ = local_c0;
                if ((char)local_c8 == '\x01') {
LAB_00448ac0:
                  local_110 = auVar19._0_8_;
                  if (ppuVar10 == (undefined **)0x0) goto LAB_004482dd;
                  uVar8 = 1;
                  uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar19._8_8_ = uVar8;
                  auVar19._0_8_ = uVar4;
                  ppuVar13 = ppuVar10;
                  local_100 = local_110;
                  goto LAB_00448aeb;
                }
                if (local_c8._1_1_ != '\x01') {
                  auVar19 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::invalid_length(3,&PTR_DAT_00789fe0,&DAT_00789c78);
                  goto LAB_00448ac0;
                }
                deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                          (&local_c8,local_f8);
                auVar19._8_8_ = local_c8;
                auVar19._0_8_ = local_c0;
                auVar18._8_8_ = local_c8;
                auVar18._0_8_ = ppuVar10;
                if (local_c8 == (undefined **)0xffffffffffffffff) goto LAB_00448ac0;
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
            ppuVar7 = (undefined **)
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::end_seq();
            if (local_108 == (undefined **)0xffffffffffffffff) goto LAB_00448976;
            if (ppuVar7 == (undefined **)0x0) goto LAB_00448908;
            local_d8 = ppuVar9;
            goto LAB_00448992;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            ppuVar7 = (undefined **)
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_invalid_type(param_2,&local_61,&DAT_0078a880);
            goto LAB_00448a38;
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
            goto LAB_00447e1a;
          }
        }
        local_c8 = (undefined **)0x18;
        goto LAB_00447da6;
      }
      param_2[5] = puVar3;
    } while (puVar3 != puVar1);
  }
  local_c8 = (undefined **)0x5;
LAB_00447da6:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_c8);
  goto LAB_00448a43;
LAB_00447e1a:
  do {
    local_58 = unaff_R13;
LAB_00447e27:
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
        goto LAB_00448440;
      }
      if (local_c8._1_1_ != '\x01') {
        ppuVar7 = local_108;
        if (local_108 == (undefined **)0xffffffffffffffff) {
          local_f8 = (undefined **)&DAT_001950c5;
          local_f0 = (undefined **)0x14;
          local_c8 = (undefined **)&local_f8;
          local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                               &local_c8);
          local_108 = (undefined **)0xffffffffffffffff;
          goto LAB_00448440;
        }
        bVar16 = local_120 == (undefined **)0xffffffffffffffff;
        if (bVar16) {
          local_f8 = (undefined **)&DAT_001950d9;
          local_f0 = (undefined **)&DAT_00000005;
          local_c8 = (undefined **)&local_f8;
          local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                               &local_c8);
          bVar17 = true;
        }
        else {
          bVar17 = local_128 == (undefined **)0xffffffffffffffff;
          if (bVar17) {
            local_f8 = (undefined **)&DAT_001950de;
            local_f0 = (undefined **)0xa;
            local_c8 = (undefined **)&local_f8;
            local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            ppuVar6 = (undefined **)
                      <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                 ,&local_c8);
          }
          else {
            if (ppuVar10 != (undefined **)0xffffffffffffffff) {
              param_5 = local_50;
              ppuVar11 = local_58;
              unaff_R13 = local_e0;
              local_e0 = local_60;
              goto LAB_00448852;
            }
            local_f8 = (undefined **)&DAT_001950e8;
            local_f0 = (undefined **)0x3;
            local_c8 = (undefined **)&local_f8;
            local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            ppuVar6 = (undefined **)
                      <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                 ,&local_c8);
            if (local_128 != (undefined **)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
          }
          ppuVar9 = ppuVar11;
          if (local_120 != (undefined **)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        ppuVar9 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar9 >> 8),1);
        if (local_108 == (undefined **)0x0) {
          local_108 = (undefined **)0x0;
        }
        else {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        goto LAB_004487b6;
      }
      ppuVar11 = local_40 + 3;
      local_40[5] = local_40[5] + 1;
      local_40[2] = (undefined *)0x0;
      (*(code *)PTR_parse_str_007998f8)();
      ppuVar6 = local_c0;
      if ((int)local_c8 == 2) goto LAB_00448388;
      <<craggemini_core[66f3c71560d70857]::license::WrappedKey_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_f8,local_c0,local_b8);
      unaff_R13 = local_58;
      if ((char)local_f8 == '\x01') {
        ppuVar6 = local_f0;
        goto LAB_00448388;
      }
      param_5 = ppuVar10;
      if (local_f8._1_1_ != '\x03') break;
      if (ppuVar10 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0x3;
        ppuVar7 = (undefined **)&DAT_001950e8;
        goto LAB_00448b20;
      }
      ppuVar6 = (undefined **)ppuVar15[4];
      ppuVar5 = (undefined **)ppuVar15[5];
      ppuVar7 = ppuVar6;
      if (ppuVar6 <= ppuVar5) {
LAB_0044823c:
        local_c8 = (undefined **)0x3;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
LAB_00448263:
LAB_00448266:
        bVar16 = true;
        ppuVar9 = (undefined **)0x0;
        bVar17 = true;
        goto LAB_004487d0;
      }
      puVar1 = *ppuVar11;
      ppuVar7 = (undefined **)-(longlong)ppuVar6;
      while( true ) {
        ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
        uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
        if (0x3a < uVar12) goto LAB_00448b66;
        if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
        ppuVar15[5] = (undefined *)ppuVar5;
        if (ppuVar5 == ppuVar6) goto LAB_0044823c;
      }
      if (uVar12 != 0x3a) {
LAB_00448b66:
        local_c8 = (undefined **)&DAT_00000006;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
        goto LAB_00448263;
      }
      ppuVar15[5] = (undefined *)ppuVar5;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                (&local_f8,ppuVar15);
      local_d0 = local_f0;
      if (local_f8 == (undefined **)0xffffffffffffffff) {
        ppuVar7 = local_f0;
        ppuVar6 = local_f0;
        goto LAB_00448266;
      }
      local_e0 = local_e8;
      ppuVar7 = local_e8;
      ppuVar10 = local_f8;
    }
    if (local_f8._1_1_ == '\0') {
      if (local_108 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0x14;
        ppuVar7 = (undefined **)&DAT_001950c5;
        goto LAB_00448b20;
      }
      ppuVar6 = (undefined **)ppuVar15[4];
      ppuVar5 = (undefined **)ppuVar15[5];
      ppuVar7 = ppuVar6;
      if (ppuVar6 <= ppuVar5) goto LAB_004486a2;
      puVar1 = *ppuVar11;
      ppuVar7 = (undefined **)-(longlong)ppuVar6;
      break;
    }
    if (local_f8._1_1_ != '\x01') {
      if (local_128 != (undefined **)0xffffffffffffffff) {
        local_f0 = (undefined **)0xa;
        ppuVar7 = (undefined **)&DAT_001950de;
        goto LAB_00448b20;
      }
      ppuVar14 = (undefined **)ppuVar15[4];
      ppuVar6 = (undefined **)ppuVar15[5];
      ppuVar7 = ppuVar14;
      if (ppuVar6 < ppuVar14) {
        puVar1 = *ppuVar11;
        ppuVar7 = (undefined **)-(longlong)ppuVar14;
        while( true ) {
          ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
          uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar6];
          if (0x3a < uVar12) goto LAB_00448c19;
          if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
          ppuVar15[5] = (undefined *)ppuVar6;
          if (ppuVar6 == ppuVar14) goto LAB_0044865c;
        }
        if (uVar12 != 0x3a) {
LAB_00448c19:
          local_c8 = (undefined **)&DAT_00000006;
          ppuVar6 = (undefined **)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(ppuVar15,&local_c8);
          goto LAB_00448681;
        }
        ppuVar15[5] = (undefined *)ppuVar6;
        deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                  (&local_f8,ppuVar15);
        ppuVar6 = local_f0;
        if (local_f8 != (undefined **)0xffffffffffffffff) {
          local_58 = local_e8;
          local_128 = local_f8;
          local_110 = local_f0;
          ppuVar7 = local_e8;
          goto LAB_00447e27;
        }
      }
      else {
LAB_0044865c:
        local_c8 = (undefined **)0x3;
        ppuVar6 = (undefined **)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(ppuVar15,&local_c8);
LAB_00448681:
      }
      bVar17 = true;
      ppuVar9 = (undefined **)0x0;
      bVar16 = true;
      ppuVar14 = (undefined **)0xffffffffffffffff;
      goto LAB_004487b6;
    }
    if (local_120 != (undefined **)0xffffffffffffffff) goto LAB_00448bbc;
    ppuVar13 = (undefined **)ppuVar15[4];
    ppuVar6 = (undefined **)ppuVar15[5];
    ppuVar7 = ppuVar13;
    if (ppuVar13 <= ppuVar6) {
LAB_00448620:
      local_c8 = (undefined **)0x3;
      ppuVar6 = (undefined **)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(ppuVar15,&local_c8);
LAB_00448645:
LAB_00448648:
      ppuVar13 = (undefined **)0xffffffffffffffff;
      goto LAB_004486e7;
    }
    puVar1 = *ppuVar11;
    ppuVar7 = (undefined **)-(longlong)ppuVar13;
    while( true ) {
      ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
      uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar6];
      if (0x3a < uVar12) goto LAB_00448bef;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      ppuVar15[5] = (undefined *)ppuVar6;
      if (ppuVar6 == ppuVar13) goto LAB_00448620;
    }
    if (uVar12 != 0x3a) {
LAB_00448bef:
      local_c8 = (undefined **)&DAT_00000006;
      ppuVar6 = (undefined **)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(ppuVar15,&local_c8);
      goto LAB_00448645;
    }
    ppuVar15[5] = (undefined *)ppuVar6;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_f8,ppuVar15)
    ;
    ppuVar6 = local_f0;
    if (local_f8 == (undefined **)0xffffffffffffffff) goto LAB_00448648;
    local_50 = local_e8;
    local_120 = local_f8;
    local_d8 = local_f0;
    ppuVar7 = local_e8;
  } while( true );
LAB_00448115:
  ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
  uVar12 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar5];
  if (0x3a < uVar12) goto LAB_00448c43;
  if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) goto LAB_0044814c;
  ppuVar15[5] = (undefined *)ppuVar5;
  if (ppuVar5 == ppuVar6) goto LAB_004486a2;
  goto LAB_00448115;
LAB_004486a2:
  local_c8 = (undefined **)0x3;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(ppuVar15,&local_c8);
  goto LAB_004486ce;
LAB_00448bbc:
  local_f0 = (undefined **)&DAT_00000005;
  ppuVar7 = (undefined **)&DAT_001950d9;
LAB_00448b20:
  local_c8 = (undefined **)&local_f8;
  local_c0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_f8 = ppuVar7;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                      (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,&local_c8
                      );
LAB_00448440:
  bVar17 = true;
  ppuVar9 = (undefined **)0x0;
  bVar16 = true;
  goto LAB_004487b6;
LAB_0044814c:
  if (uVar12 == 0x3a) {
    ppuVar15[5] = (undefined *)ppuVar5;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_f8,ppuVar15)
    ;
    local_108 = local_f8;
    ppuVar7 = local_f8;
    ppuVar6 = local_f0;
    if (local_f8 == (undefined **)0xffffffffffffffff) goto LAB_004486d6;
    local_100 = local_e8;
    local_60 = local_f0;
    goto LAB_00447e1a;
  }
LAB_00448c43:
  local_c8 = (undefined **)&DAT_00000006;
  ppuVar6 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(ppuVar15,&local_c8);
LAB_004486ce:
LAB_004486d6:
  local_108 = (undefined **)0xffffffffffffffff;
LAB_004486e7:
LAB_00448388:
  bVar17 = true;
  ppuVar9 = (undefined **)0x0;
  bVar16 = true;
LAB_004487b6:
  if ((undefined1 *)((longlong)ppuVar10 + -1) < (undefined1 *)0xfffffffffffffffe) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_004487d0:
  local_110 = ppuVar7;
  if ((bool)((undefined1 *)((longlong)ppuVar14 + -1) < (undefined1 *)0xfffffffffffffffe & bVar17)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
    local_110 = ppuVar7;
  }
  if ((bool)((undefined1 *)((longlong)ppuVar13 + -1) < (undefined1 *)0xfffffffffffffffe & bVar16)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  bVar2 = (undefined1 *)((longlong)local_108 + 1) < (undefined1 *)0x2 | (byte)ppuVar9;
  local_100 = (undefined **)CONCAT71((int7)((ulonglong)((longlong)local_108 + 1) >> 8),bVar2);
  if (bVar2 == 0) {
    local_100 = (undefined **)(*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_d8 = ppuVar9;
  local_d0 = local_108;
  ppuVar11 = param_6;
  unaff_R13 = in_R10;
  local_108 = (undefined **)0xffffffffffffffff;
  local_e0 = ppuVar6;
LAB_00448852:
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
  ppuVar7 = (undefined **)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map();
  if (local_108 == (undefined **)0xffffffffffffffff) {
LAB_00448976:
    if (ppuVar7 != (undefined **)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(ppuVar7);
    }
    ppuVar7 = local_e0;
  }
  else {
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar9 = local_d8;
LAB_00448908:
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
LAB_00448992:
    local_130 = auVar18._8_8_;
    local_128 = auVar18._0_8_;
    if (local_108 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_120 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_128 != (undefined **)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_130 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_00448a38:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (ppuVar7,param_2);
LAB_00448a43:
  param_1[1] = uVar4;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


