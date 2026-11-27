// 0015ce10 <<craggemini[b21da2d71f2da7a3]::license::host::Entitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::license::host::Entitlement
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined ** __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::license::host::Entitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,undefined **param_6)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined **ppuVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined **in_R10;
  undefined **ppuVar24;
  undefined **unaff_R15;
  bool bVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_170;
  undefined **local_168;
  undefined **local_160;
  undefined **local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined **ppuStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined8 local_118;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  uint local_c0;
  undefined1 local_b9;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined **local_80;
  undefined4 local_74;
  undefined **local_70;
  undefined **local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined **ppuStack_40;
  undefined *local_38;
  
  pppuVar16 = &local_168;
  puVar6 = param_2[4];
  if (param_2[5] < puVar6) {
    ppuVar13 = (undefined **)-(longlong)puVar6;
    ppuVar11 = (undefined **)0x0;
    puVar12 = param_2[5];
    do {
      puVar5 = puVar12 + 1;
      bVar4 = *(byte *)((longlong)param_2[3] + (longlong)puVar12);
      if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0)) {
        if (bVar4 == 0x5b) {
          ppuVar11 = param_2 + 7;
          *(char *)ppuVar11 = *(char *)ppuVar11 + -1;
          if (*(char *)ppuVar11 != '\0') {
            param_2[5] = puVar5;
            ppuStack_140 = (undefined **)CONCAT71(ppuStack_140._1_7_,1);
            uVar19 = SUB81(&local_118,0);
            ppuVar11 = (undefined **)&local_148;
            uStack_170 = 0x15d4c0;
            local_148 = (char *)param_2;
            auVar31 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_118 == '\x01') goto LAB_0015d507;
            if (local_118._1_1_ == '\x01') {
              uVar19 = SUB81(&local_118,0);
              uStack_170 = 0x15d4e1;
              ppuVar11 = (undefined **)local_148;
              auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<u8>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                        ::deserialize::
                        <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                  ();
              if ((char)local_118 == '\x01') {
LAB_0015d507:
                goto LAB_0015d50c;
              }
              uVar20 = local_118._1_1_;
              uVar19 = SUB81(&local_118,0);
              ppuVar11 = (undefined **)&local_148;
              uStack_170 = 0x15d4fc;
              auVar31 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>();
              if ((char)local_118 == '\x01') goto LAB_0015d507;
              if (local_118._1_1_ != '\x01') {
                uVar19 = 1;
                goto LAB_0015da69;
              }
              uVar19 = SUB81(&local_118,0);
              uStack_170 = 0x15d79e;
              ppuVar11 = (undefined **)local_148;
              auVar31 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              ppuVar10 = local_110;
              ppuVar24 = local_118;
              in_R10 = in_R10;
              if (local_118 == (undefined **)0xffffffffffffffff) goto LAB_0015d50c;
              local_a0 = local_108;
              ppuVar21 = (undefined **)&local_118;
              ppuVar11 = (undefined **)&local_148;
              uStack_170 = 0x15d7ce;
              uVar26 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                       ::next_element_seed::has_next_element::
                       <serde_json[dc3825464c436029]::read::SliceRead>();
              if ((char)local_118 == '\x01') {
LAB_0015e01a:
                local_118 = local_110;
                local_150 = local_110;
LAB_0015e01f:
                local_110._0_4_ = SUB84(local_118,0);
                if (ppuVar24 != (undefined **)0x0) {
                  uStack_170 = 0x15e035;
                  local_110._0_4_ = (*(code *)PTR___rust_dealloc_00219c40)(uVar26,1);
                  ppuVar11 = ppuVar24;
                  ppuVar21 = ppuVar10;
                }
                local_168 = in_R10;
                local_160 = ppuVar13;
                uVar20 = SUB81(ppuVar21,0);
                ppuVar24 = (undefined **)0xffffffffffffffff;
                ppuVar13 = local_150;
                local_f0 = param_5;
                uStack_e8 = param_6;
                ppuVar10 = local_150;
              }
              else {
                if (local_118._1_1_ != '\x01') {
                  ppuVar11 = &PTR_DAT_00214fe0;
                  ppuVar21 = (undefined **)0x2;
                  uStack_170 = 0x15dae8;
                  local_118 = (undefined **)
                              <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                              ::invalid_length(2,&PTR_DAT_00214fe0,&DAT_00214f40);
                  uVar26 = extraout_XMM0_Da;
                  local_150 = local_118;
                  goto LAB_0015e01f;
                }
                ppuVar21 = (undefined **)&local_118;
                uStack_170 = 0x15da06;
                ppuVar11 = (undefined **)local_148;
                uVar26 = deserialize_string::
                         <serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
                local_150 = local_110;
                local_160 = local_118;
                ppuVar13 = local_110;
                if (local_118 == (undefined **)0xffffffffffffffff) goto LAB_0015e01f;
                local_b8 = local_108;
                ppuVar21 = (undefined **)&local_118;
                uStack_170 = 0x15da40;
                uVar26 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                         ::next_element_seed::has_next_element::
                         <serde_json[dc3825464c436029]::read::SliceRead>(ppuVar21,&local_148);
                if ((char)local_118 == '\x01') {
LAB_0015da4b:
                  local_168 = local_110;
LAB_0015dffc:
                  ppuVar3 = local_150;
                  ppuVar11 = local_160;
                  if (local_160 != (undefined **)0x0) {
                    uStack_170 = 0x15e016;
                    uVar26 = (*(code *)PTR___rust_dealloc_00219c40)(uVar26,1);
                    ppuVar21 = ppuVar3;
                  }
                  local_110 = local_168;
                  goto LAB_0015e01a;
                }
                ppuVar21 = (undefined **)0x3;
                if (local_118._1_1_ != '\x01') {
LAB_0015dfe5:
                  uStack_170 = 0x15dff8;
                  local_168 = (undefined **)
                              <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                              ::invalid_length(ppuVar21,&PTR_DAT_00214fe0,&DAT_00214f40);
                  uVar26 = extraout_XMM0_Da_03;
                  goto LAB_0015dffc;
                }
                uStack_170 = 0x15dc7c;
                ppuVar21 = (undefined **)local_148;
                auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<u64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                          ::deserialize::
                          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                    ();
                ppuVar13 = auVar31._8_8_;
                uVar26 = extraout_XMM0_Da_00;
                local_168 = ppuVar13;
                local_158 = ppuVar13;
                if ((auVar31._0_8_ & 1) != 0) goto LAB_0015dffc;
                ppuVar21 = (undefined **)&local_118;
                uStack_170 = 0x15dca1;
                uVar26 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                         ::next_element_seed::has_next_element::
                         <serde_json[dc3825464c436029]::read::SliceRead>(ppuVar21,&local_148);
                if ((char)local_118 == '\x01') goto LAB_0015da4b;
                ppuVar21 = (undefined **)0x4;
                if (local_118._1_1_ != '\x01') goto LAB_0015dfe5;
                uStack_170 = 0x15dcc6;
                ppuVar21 = (undefined **)local_148;
                auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                          ::deserialize::
                          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                    ();
                unaff_R15 = auVar31._8_8_;
                uVar26 = extraout_XMM0_Da_01;
                local_168 = unaff_R15;
                if ((auVar31._0_8_ & 1) != 0) goto LAB_0015dffc;
                ppuVar21 = (undefined **)&local_118;
                uStack_170 = 0x15dce4;
                uVar26 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                         ::next_element_seed::has_next_element::
                         <serde_json[dc3825464c436029]::read::SliceRead>(ppuVar21,&local_148);
                if ((char)local_118 == '\x01') goto LAB_0015da4b;
                ppuVar21 = (undefined **)&DAT_00000005;
                if (local_118._1_1_ != '\x01') goto LAB_0015dfe5;
                uStack_170 = 0x15dd09;
                ppuVar21 = (undefined **)local_148;
                auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                          ::deserialize::
                          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                    ();
                local_168 = auVar31._8_8_;
                uVar26 = extraout_XMM0_Da_02;
                if ((auVar31._0_8_ & 1) != 0) goto LAB_0015dffc;
                ppuVar21 = (undefined **)&local_118;
                uStack_170 = 0x15dd24;
                uVar26 = <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                         ::next_element::<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit>
                                   (ppuVar21,&local_148);
                if ((int)local_118 == 1) goto LAB_0015da4b;
                if (local_118._4_1_ == '\0') {
                  ppuVar21 = (undefined **)0x6;
                  goto LAB_0015dfe5;
                }
                ppuVar13 = local_150;
                ppuVar11 = local_a0;
                local_f0 = local_b8;
                uStack_e8 = local_158;
              }
            }
            else {
              uVar19 = 0;
LAB_0015da69:
              ppuVar11 = &PTR_DAT_00214fe0;
              uStack_170 = 0x15da6e;
              auVar31 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::invalid_length(uVar19,&PTR_DAT_00214fe0,&DAT_00214f40);
              local_110 = auVar31._0_8_;
LAB_0015d50c:
              uVar20 = uVar19;
              local_168 = in_R10;
              local_160 = ppuVar13;
              ppuVar24 = (undefined **)0xffffffffffffffff;
              ppuVar13 = auVar31._8_8_;
              local_f0 = param_5;
              uStack_e8 = param_6;
              ppuVar10 = local_110;
              local_110._0_4_ = auVar31._0_4_;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            uStack_cc = CONCAT31(uStack_cc._1_3_,uVar20);
            uStack_170 = 0x15d573;
            uStack_d8 = local_168;
            local_168 = ppuVar10;
            local_118 = ppuVar24;
            local_d0 = local_110._0_4_;
            local_110 = ppuVar10;
            local_108 = ppuVar11;
            local_100 = local_160;
            local_f8 = ppuVar13;
            local_e0 = unaff_R15;
            ppuVar10 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::end_seq(param_2);
            local_128 = (undefined *)CONCAT44(uStack_cc,local_d0);
            local_138 = (undefined4)local_e0;
            uStack_134 = local_e0._4_4_;
            uStack_130 = (undefined4)uStack_d8;
            uStack_12c = uStack_d8._4_4_;
            local_148 = (char *)local_f0;
            ppuStack_140 = uStack_e8;
            if (ppuVar24 == (undefined **)0xffffffffffffffff) {
              if (ppuVar10 != (undefined **)0x0) {
                uStack_170 = 0x15d67a;
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (ppuVar10);
              }
              goto LAB_0015d9a5;
            }
            if (ppuVar10 == (undefined **)0x0) {
              local_58 = (undefined4)local_f0;
              uStack_54 = local_f0._4_4_;
              uStack_4c = uStack_e8._4_4_;
              uStack_50 = (int)uStack_e8;
              goto joined_r0x0015d6b4;
            }
            uVar26 = (undefined4)local_f0;
            if (ppuVar24 != (undefined **)0x0) {
              uStack_170 = 0x15d5bf;
              uVar26 = (*(code *)PTR___rust_dealloc_00219c40)(local_128,1);
            }
            goto joined_r0x0015d5ce;
          }
        }
        else {
          if (bVar4 != 0x7b) {
            uStack_170 = 0x15dedd;
            ppuVar11 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_invalid_type(param_2,&local_b9,&DAT_00215250);
            goto LAB_0015dee0;
          }
          ppuVar13 = param_2 + 7;
          *(char *)ppuVar13 = *(char *)ppuVar13 + -1;
          if (*(char *)ppuVar13 != '\0') {
            param_2[5] = puVar5;
            local_60 = 1;
            local_98 = 0;
            local_158 = (undefined **)0xffffffffffffffff;
            local_160 = (undefined **)0xffffffffffffffff;
            local_c0 = 0;
            local_90 = 0;
            local_88 = 0;
            uVar18 = 0;
            local_80 = (undefined **)0x7b;
            local_70 = (undefined **)param_2[3];
            local_c8 = param_1;
            local_a8 = param_1;
            local_68 = param_2;
            goto LAB_0015cf17;
          }
        }
        local_118 = (undefined **)0x18;
        goto LAB_0015ce7e;
      }
      param_2[5] = puVar5;
      puVar12 = puVar5;
    } while (puVar5 != puVar6);
  }
  local_118 = (undefined **)0x5;
LAB_0015ce7e:
  uStack_170 = 0x15ce8b;
  puVar6 = (undefined *)
           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
           ::peek_error(param_2,&local_118);
  goto LAB_0015ce8b;
LAB_0015cf17:
  ppuVar13 = local_80;
LAB_0015cf1f:
  ppuVar24 = local_c8;
  local_80 = ppuVar13;
LAB_0015cf27:
  local_c8 = ppuVar24;
  do {
    while( true ) {
      ppuVar13 = (undefined **)&local_118;
      uStack_170 = 0x15cf41;
      <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
      ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                (ppuVar13,&local_68);
      puVar22 = (undefined1 *)local_68;
      ppuVar24 = local_160;
      if ((char)local_118 == '\x01') {
        auVar31._8_8_ = extraout_RDX;
        auVar31._0_8_ = local_110;
        puVar22 = (undefined1 *)ppuVar13;
        goto LAB_0015d84f;
      }
      if (local_118._1_1_ != '\x01') {
        if ((uVar18 & 1) == 0) {
          local_148 = "version";
          ppuStack_140 = (undefined **)&DAT_00000007;
          local_118 = (undefined **)&local_148;
          local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
          uStack_170 = 0x15d848;
          auVar31 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                               &local_118);
          goto LAB_0015d84f;
        }
        if (local_158 == (undefined **)0xffffffffffffffff) {
          local_148 = "product";
          ppuStack_140 = (undefined **)&DAT_00000007;
          local_118 = (undefined **)&local_148;
          local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          local_158 = (undefined **)0xffffffffffffffff;
          puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
          uStack_170 = 0x15dabb;
          auVar31 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                               &local_118);
          local_158 = (undefined **)0xffffffffffffffff;
          goto LAB_0015d84f;
        }
        bVar25 = local_160 == (undefined **)0xffffffffffffffff;
        if (bVar25) {
          local_148 = "host_id";
          ppuStack_140 = (undefined **)&DAT_00000007;
          local_118 = (undefined **)&local_148;
          local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
          uStack_170 = 0x15db2e;
          auVar29 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                               &local_118);
        }
        else {
          if ((local_88 & 1) == 0) {
            local_148 = "revision";
            ppuStack_140 = (undefined **)&DAT_00000008;
            local_118 = (undefined **)&local_148;
            local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
            uStack_170 = 0x15dbfc;
            auVar29 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_118);
          }
          else if ((local_90 & 1) == 0) {
            local_148 = "issued_at";
            ppuStack_140 = (undefined **)&DAT_00000009;
            local_118 = (undefined **)&local_148;
            local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
            uStack_170 = 0x15dc59;
            auVar29 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_118);
          }
          else if ((local_98 & 1) == 0) {
            local_148 = "expires_at";
            ppuStack_140 = (undefined **)0xa;
            local_118 = (undefined **)&local_148;
            local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
            uStack_170 = 0x15ddb3;
            auVar29 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_118);
          }
          else {
            if ((local_c0 & 1) != 0) {
              auVar29._8_8_ = local_150;
              auVar29._0_8_ = local_b0;
              uVar19 = SUB81(local_b8,0);
              uStack_e8 = local_168;
              ppuVar11 = local_a0;
              local_f0 = local_70;
              uStack_d8 = local_80;
              local_e0 = local_c8;
              ppuVar24 = local_158;
              goto LAB_0015d8b2;
            }
            local_148 = "slot_limit";
            ppuStack_140 = (undefined **)0xa;
            local_118 = (undefined **)&local_148;
            local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            puVar22 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
            uStack_170 = 0x15ddff;
            auVar29 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171,
                                 &local_118);
          }
          ppuVar11 = local_150;
          local_168 = auVar29._0_8_;
          if (ppuVar24 != (undefined **)0x0) {
            uVar14 = 1;
            uStack_170 = 0x15de1b;
            (*(code *)PTR___rust_dealloc_00219c40)();
            auVar29._8_8_ = uVar14;
            auVar29._0_8_ = local_168;
            puVar22 = (undefined1 *)ppuVar11;
          }
        }
        ppuVar11 = local_b0;
        local_168 = auVar29._0_8_;
        bVar4 = 1;
        if (local_158 == (undefined **)0x0) {
          local_158 = (undefined **)0x0;
        }
        else {
          uVar14 = 1;
          uStack_170 = 0x15de3b;
          (*(code *)PTR___rust_dealloc_00219c40)();
          auVar29._8_8_ = uVar14;
          auVar29._0_8_ = local_168;
          puVar22 = (undefined1 *)ppuVar11;
        }
        goto LAB_0015d857;
      }
      ppuVar13 = local_68 + 3;
      local_68[5] = local_68[5] + 1;
      local_68[2] = (undefined *)0x0;
      uStack_170 = 0x15cf80;
      ppuVar24 = local_68;
      (*(code *)PTR_parse_str_00219c90)();
      auVar28._8_8_ = ppuVar24;
      auVar28._0_8_ = local_110;
      ppuVar10 = (undefined **)&local_118;
      if ((int)local_118 == 2) goto LAB_0015d7e8;
      ppuVar10 = (undefined **)&local_148;
      uStack_170 = 0x15cf9f;
      uVar26 = <<craggemini[b21da2d71f2da7a3]::license::host::Entitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
               ::visit_str::<serde_json[dc3825464c436029]::error::Error>
                         (ppuVar10,local_110,local_108);
      ppuVar24 = local_160;
      auVar28._8_8_ = extraout_RDX_00;
      auVar28._0_8_ = ppuStack_140;
      if ((char)local_148 == '\x01') {
        goto LAB_0015d7e8;
      }
      if (local_148._1_1_ != 0) break;
      if ((uVar18 & 1) != 0) {
        ppuStack_140 = (undefined **)&DAT_00000007;
        local_148 = "version";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (*(undefined **)((longlong)puVar22 + 0x20) <= puVar6) {
LAB_0015d641:
        local_118 = (undefined **)0x3;
        uStack_170 = 0x15d657;
        auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar22,&local_118);
        goto LAB_0015d65b;
      }
      puVar12 = *ppuVar13;
      while( true ) {
        puVar6 = puVar6 + 1;
        uVar18 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
        if (0x3a < uVar18) goto LAB_0015de99;
        if ((0x100002600U >> (uVar18 & 0x3f) & 1) == 0) break;
        *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
        if (puVar6 == *(undefined **)((longlong)puVar22 + 0x20)) goto LAB_0015d641;
      }
      if (uVar18 != 0x3a) {
LAB_0015de99:
        local_118 = (undefined **)0x6;
        uStack_170 = 0x15deaf;
        auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(puVar22,&local_118);
        goto LAB_0015d65b;
      }
      *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
      ppuVar13 = (undefined **)&local_148;
      uStack_170 = 0x15d02b;
      <core[c0acaeba6ab4c2e0]::marker::PhantomData<u8>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
      ::deserialize::
      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                (ppuVar13,puVar22);
      uVar14 = extraout_RDX_01;
      puVar22 = (undefined1 *)ppuVar13;
      if ((char)local_148 == '\x01') goto LAB_0015d7f4;
      local_b8 = (undefined **)CONCAT71(local_b8._1_7_,local_148._1_1_);
      uVar18 = CONCAT71((int7)((ulonglong)ppuVar24 >> 8),1);
    }
    lVar7 = (longlong)(int)(&switchD_0015d05a::caseD_28)[local_148._1_1_ - 1];
    pcVar8 = (char *)((longlong)&switchD_0015d05a::caseD_28 + lVar7);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_148._1_1_) {
    case 1:
      if (local_158 != (undefined **)0xffffffffffffffff) {
        ppuStack_140 = (undefined **)&DAT_00000007;
        local_148 = "product";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (*(undefined **)((longlong)puVar22 + 0x20) <= puVar6) goto LAB_0015db84;
      puVar12 = *ppuVar13;
      goto LAB_0015d35d;
    case 2:
      if (local_160 != (undefined **)0xffffffffffffffff) {
        ppuStack_140 = (undefined **)&DAT_00000007;
        local_148 = "host_id";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (*(undefined **)((longlong)puVar22 + 0x20) <= puVar6) goto LAB_0015db5b;
      puVar12 = *ppuVar13;
      goto LAB_0015d3b2;
    case 3:
      if (local_88 != 0) {
        ppuStack_140 = (undefined **)&DAT_00000008;
        local_148 = "revision";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (puVar6 < *(undefined **)((longlong)puVar22 + 0x20)) {
        puVar12 = *ppuVar13;
        do {
          puVar6 = puVar6 + 1;
          uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
          if (0x3a < uVar9) {
LAB_0015d0f8:
            local_118 = (undefined **)0x6;
            uStack_170 = 0x15d10e;
            auVar31 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(puVar22,&local_118);
            goto LAB_0015d0c1;
          }
          if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) {
            if (uVar9 != 0x3a) goto LAB_0015d0f8;
            *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
            uStack_170 = 0x15d0da;
            auVar29 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<u64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                ();
            auVar31._8_8_ = auVar29._8_8_;
            auVar31._0_8_ = auVar29._8_8_;
            uVar9 = auVar29._0_8_;
            goto LAB_0015d0de;
          }
          *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
        } while (puVar6 != *(undefined **)((longlong)puVar22 + 0x20));
      }
      local_118 = (undefined **)0x3;
      uStack_170 = 0x15d0bd;
      auVar31 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar22,&local_118);
LAB_0015d0c1:
      uVar9 = 1;
LAB_0015d0de:
      local_168 = auVar31._0_8_;
      if ((uVar9 & 1) != 0) goto LAB_0015d84f;
      local_88 = 1;
      break;
    case 4:
      goto switchD_0015d05a_caseD_4;
    case 5:
      if (local_98 != 0) {
        ppuStack_140 = (undefined **)0xa;
        local_148 = "expires_at";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (*(undefined **)((longlong)puVar22 + 0x20) <= puVar6) goto LAB_0015d2bf;
      puVar12 = *ppuVar13;
      goto LAB_0015d29a;
    case 6:
      if (local_c0 != 0) {
        ppuStack_140 = (undefined **)0xa;
        local_148 = "slot_limit";
        goto LAB_0015de5f;
      }
      puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
      if (*(undefined **)((longlong)puVar22 + 0x20) <= puVar6) goto LAB_0015db37;
      puVar12 = *ppuVar13;
      goto LAB_0015d1b3;
    case 7:
    case 0x27:
      goto switchD_0015d05a_caseD_7;
    default:
      pppuVar16 = (undefined ***)&uStack_170;
      uStack_170 = 2;
      *pcVar8 = *pcVar8 + (char)pcVar8;
      goto LAB_0015e77d;
    case 0x12:
      bVar25 = false;
      puVar6 = param_1[4];
      puVar12 = param_1[5];
      pppuVar16 = &local_168;
      pppuVar15 = &local_168;
      ppuVar11 = param_2;
      if (puVar12 < puVar6) goto LAB_0015e800;
      goto LAB_0015e9ad;
    case 0x1a:
      param_1[5] = &UNK_0011421f + lVar7;
      local_168 = (undefined **)0x9;
      uStack_170 = 0x15e9ab;
      ppuVar11 = (undefined **)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::error(param_1,&local_168);
      return ppuVar11;
    case 0x20:
      pcVar8 = (char *)((longlong)&UINT_00114258 + lVar7 + 1);
      *pcVar8 = *pcVar8 + ' ';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
switchD_0015d05a_caseD_7:
  uVar17 = (int)param_2 - 0x5b;
  if (uVar17 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x0015e5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar11 = (undefined **)
               (*(code *)((longlong)*(int *)(uVar18 + (ulonglong)uVar17 * 4) + uVar18))();
    return ppuVar11;
  }
  if ((byte)((char)param_2 - 0x30U) < 10) {
LAB_0015e79d:
    *(undefined8 *)((longlong)pppuVar16 + -8) = 0x15e7a5;
    ppuVar24 = (undefined **)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::ignore_integer(param_1);
    uVar26 = extraout_XMM0_Da_05;
LAB_0015e7a5:
    if (ppuVar24 != (undefined **)0x0) {
      return ppuVar24;
    }
    bVar25 = true;
    pppuVar15 = pppuVar16;
    if (((ulonglong)ppuVar13 & 1) == 0) {
      puVar6 = param_1[2];
      if (puVar6 == (undefined *)0x0) {
        return (undefined **)0x0;
      }
      param_1[2] = puVar6 + -1;
      param_2 = (undefined **)(ulonglong)(byte)(param_1[1] + -1)[(longlong)puVar6];
      puVar6 = param_1[4];
      puVar12 = param_1[5];
      ppuVar11 = param_2;
      if (puVar6 <= puVar12) goto LAB_0015e9ad;
    }
    else {
      puVar6 = param_1[4];
      puVar12 = param_1[5];
      param_2 = ppuVar11;
      if (puVar6 <= puVar12) goto LAB_0015e9ad;
    }
LAB_0015e800:
    puVar5 = param_1[3];
    ppuVar11 = (undefined **)((ulonglong)param_2 & 0xffffffff);
    puVar23 = param_1[2];
LAB_0015e810:
    do {
      bVar1 = puVar5[(longlong)puVar12];
      uVar9 = (ulonglong)bVar1;
      bVar4 = (byte)ppuVar11;
      if (uVar9 < 0x2d) {
        if (((ulonglong)puVar22 >> (uVar9 & 0x3f) & 1) != 0) {
          puVar12 = puVar12 + 1;
          param_1[5] = puVar12;
          if (puVar6 == puVar12) goto LAB_0015e9b0;
          goto LAB_0015e810;
        }
        if (uVar9 == 0x2c) {
          if (bVar25) {
            puVar12 = puVar12 + 1;
            param_1[5] = puVar12;
          }
          goto LAB_0015e89d;
        }
      }
      if (bVar1 == 0x5d) {
        if (bVar4 != 0x5b) goto LAB_0015e880;
      }
      else if ((bVar1 != 0x7d) || (bVar4 != 0x7b)) goto LAB_0015e880;
      puVar12 = puVar12 + 1;
      param_1[5] = puVar12;
      if (puVar23 == (undefined *)0x0) {
        return (undefined **)0x0;
      }
      param_1[2] = puVar23 + -1;
      bVar4 = (param_1[1] + -1)[(longlong)puVar23];
      ppuVar11 = (undefined **)(ulonglong)bVar4;
      bVar25 = true;
      puVar23 = puVar23 + -1;
      if (puVar6 <= puVar12) goto LAB_0015e9b0;
    } while( true );
  }
  *pppuVar16 = (undefined **)0xa;
  goto LAB_0015e9cd;
LAB_0015e880:
  if (bVar25) {
    uVar14 = 7;
    if (bVar4 == 0x5b) goto LAB_0015e9c9;
    if (((uint)ppuVar11 & 0xff) != 0x7b) goto LAB_0015ea43;
    uVar14 = 8;
    goto LAB_0015e9c9;
  }
LAB_0015e89d:
  if (bVar4 != 0x7b) {
LAB_0015e55e:
    ppuVar13 = (undefined **)0x1;
    if (puVar6 <= puVar12) {
LAB_0015e98a:
      *pppuVar16 = (undefined **)0x5;
      goto LAB_0015e9cd;
    }
    pcVar8 = puVar12 + 5;
    while( true ) {
      param_2 = (undefined **)(ulonglong)(byte)pcVar8[(longlong)(puVar5 + -5)];
      if ((undefined **)0x2d < param_2) goto switchD_0015d05a_caseD_7;
      if (((ulonglong)puVar22 >> ((ulonglong)param_2 & 0x3f) & 1) == 0) break;
      param_1[5] = pcVar8 + -4;
      lVar7 = (longlong)pcVar8 - (longlong)puVar6;
      pcVar8 = pcVar8 + 1;
      if (lVar7 == 4) goto LAB_0015e98a;
    }
    if (param_2 != (undefined **)0x22) goto code_r0x0015e5ba;
LAB_0015e77d:
    param_1[5] = pcVar8 + -4;
    *(undefined8 *)((longlong)pppuVar16 + -8) = 0x15e78f;
    ppuVar24 = (undefined **)(*(code *)PTR_ignore_str_00219ca0)();
    uVar26 = extraout_XMM0_Da_04;
    goto LAB_0015e7a5;
  }
  if (puVar12 < puVar6) {
    while( true ) {
      puVar12 = puVar12 + 1;
      uVar9 = (ulonglong)(byte)(puVar5 + -1)[(longlong)puVar12];
      if (0x22 < uVar9) goto LAB_0015ea16;
      if (((ulonglong)puVar22 >> (uVar9 & 0x3f) & 1) == 0) break;
      param_1[5] = puVar12;
      if (puVar12 == puVar6) goto LAB_0015e50e;
    }
    if (uVar9 != 0x22) {
LAB_0015ea16:
      *pppuVar16 = (undefined **)0x11;
      goto LAB_0015e9cd;
    }
    param_1[5] = puVar12;
    pppuVar16[-1] = (undefined **)0x15e908;
    ppuVar13 = (undefined **)(*(code *)PTR_ignore_str_00219ca0)();
    if (ppuVar13 != (undefined **)0x0) {
      return ppuVar13;
    }
    puVar6 = param_1[4];
    puVar12 = param_1[5];
    if (puVar12 < puVar6) {
      puVar5 = param_1[3];
      while( true ) {
        puVar12 = puVar12 + 1;
        uVar9 = (ulonglong)(byte)(puVar5 + -1)[(longlong)puVar12];
        if (0x3a < uVar9) goto LAB_0015e9f1;
        if (((ulonglong)puVar22 >> (uVar9 & 0x3f) & 1) == 0) break;
        param_1[5] = puVar12;
        if (puVar12 == puVar6) goto LAB_0015e50e;
      }
      if (uVar9 != 0x3a) {
LAB_0015e9f1:
        *pppuVar16 = (undefined **)0x6;
        goto LAB_0015e9cd;
      }
      param_1[5] = puVar12;
      goto LAB_0015e55e;
    }
  }
LAB_0015e50e:
  *pppuVar16 = (undefined **)0x3;
  goto LAB_0015e9cd;
code_r0x0015e5ba:
  if (param_2 != (undefined **)0x2d) goto switchD_0015d05a_caseD_7;
  param_1[5] = pcVar8 + -4;
  goto LAB_0015e79d;
LAB_0015d1b3:
  puVar6 = puVar6 + 1;
  uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
  if (0x3a < uVar9) goto LAB_0015dfbc;
  if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) goto LAB_0015d1e1;
  *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
  if (puVar6 == *(undefined **)((longlong)puVar22 + 0x20)) goto LAB_0015db37;
  goto LAB_0015d1b3;
LAB_0015d1e1:
  if (uVar9 == 0x3a) {
    *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
    uStack_170 = 0x15d1fc;
    <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_148,puVar22);
    uVar14 = extraout_RDX_02;
    puVar22 = (undefined1 *)local_c8;
    if ((int)local_148 != 1) {
      local_74 = local_148._4_4_;
      local_c0 = 1;
      ppuVar24 = local_c8;
      goto LAB_0015cf27;
    }
LAB_0015d7f4:
    auVar29._8_8_ = uVar14;
    auVar29._0_8_ = ppuStack_140;
    ppuVar24 = local_160;
  }
  else {
LAB_0015dfbc:
    local_118 = (undefined **)0x6;
    uStack_170 = 0x15dfd7;
    auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar22,&local_118);
  }
LAB_0015d65b:
  bVar25 = true;
  bVar4 = 0;
  goto LAB_0015d857;
LAB_0015db37:
  local_118 = (undefined **)0x3;
  uStack_170 = 0x15db52;
  auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar22,&local_118);
  goto LAB_0015d65b;
  while( true ) {
    if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) {
      if (uVar9 != 0x3a) goto LAB_0015d31e;
      *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
      uStack_170 = 0x15d2f9;
      auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (puVar22);
      auVar28._8_8_ = auVar31._8_8_;
      auVar28._0_8_ = auVar31._8_8_;
      uVar9 = auVar31._0_8_;
      goto LAB_0015d304;
    }
    *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
    if (puVar6 == *(undefined **)((longlong)puVar22 + 0x20)) break;
LAB_0015d29a:
    puVar6 = puVar6 + 1;
    uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
    if (0x3a < uVar9) {
LAB_0015d31e:
      local_118 = (undefined **)0x6;
      uStack_170 = 0x15d334;
      auVar28 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(puVar22,&local_118);
      goto LAB_0015d2d5;
    }
  }
LAB_0015d2bf:
  local_118 = (undefined **)0x3;
  uStack_170 = 0x15d2d5;
  auVar28 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar22,&local_118);
LAB_0015d2d5:
  uVar9 = 1;
LAB_0015d304:
  ppuVar13 = auVar28._0_8_;
  ppuVar10 = local_c8;
  if ((uVar9 & 1) != 0) {
LAB_0015d7e8:
    auVar27._8_8_ = auVar28._8_8_;
    auVar27._0_8_ = ppuVar10;
    local_168 = auVar28._0_8_;
    goto LAB_0015d852;
  }
  local_98 = 1;
  goto LAB_0015cf1f;
switchD_0015d05a_caseD_4:
  if (local_90 == 0) {
    puVar6 = *(undefined **)((longlong)puVar22 + 0x28);
    if (puVar6 < *(undefined **)((longlong)puVar22 + 0x20)) {
      puVar12 = *ppuVar13;
      do {
        puVar6 = puVar6 + 1;
        uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
        if (0x3a < uVar9) {
LAB_0015d259:
          local_118 = (undefined **)0x6;
          uStack_170 = 0x15d26f;
          auVar27 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(puVar22,&local_118);
          goto LAB_0015d17d;
        }
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) {
          if (uVar9 != 0x3a) goto LAB_0015d259;
          *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
          uStack_170 = 0x15d23c;
          auVar31 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                    ::deserialize::
                    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              (puVar22);
          auVar27._8_8_ = auVar31._8_8_;
          auVar27._0_8_ = auVar31._8_8_;
          uVar9 = auVar31._0_8_;
          goto LAB_0015d23f;
        }
        *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
      } while (puVar6 != *(undefined **)((longlong)puVar22 + 0x20));
    }
    local_118 = (undefined **)0x3;
    uStack_170 = 0x15d17d;
    auVar27 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar22,&local_118);
LAB_0015d17d:
    uVar9 = 1;
LAB_0015d23f:
    ppuVar24 = auVar27._0_8_;
    if ((uVar9 & 1) != 0) {
      local_168 = ppuVar24;
      goto LAB_0015d852;
    }
    local_90 = 1;
    goto LAB_0015cf27;
  }
  ppuStack_140 = (undefined **)&DAT_00000009;
  local_148 = "issued_at";
LAB_0015de5f:
  local_118 = (undefined **)&local_148;
  local_110 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  puVar22 = anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171;
  uStack_170 = 0x15de90;
  auVar31 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                      (anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171,&local_118)
  ;
LAB_0015d84f:
  auVar27._8_8_ = auVar31._8_8_;
  auVar27._0_8_ = puVar22;
  local_168 = auVar31._0_8_;
  goto LAB_0015d852;
LAB_0015d3b2:
  puVar6 = puVar6 + 1;
  uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
  if (0x3a < uVar9) goto LAB_0015df71;
  if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) goto LAB_0015d446;
  *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
  if (puVar6 == *(undefined **)((longlong)puVar22 + 0x20)) goto LAB_0015db5b;
  goto LAB_0015d3b2;
LAB_0015d446:
  if (uVar9 != 0x3a) {
LAB_0015df71:
    local_118 = (undefined **)0x6;
    uStack_170 = 0x15df8e;
    auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar22,&local_118);
    goto LAB_0015db78;
  }
  *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
  uStack_170 = 0x15d461;
  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_148,puVar22);
  auVar29._8_8_ = extraout_RDX_03;
  auVar29._0_8_ = ppuStack_140;
  local_150 = ppuStack_140;
  puVar22 = (undefined1 *)local_c8;
  if ((undefined **)local_148 == (undefined **)0xffffffffffffffff) goto LAB_0015db78;
  local_70 = (undefined **)CONCAT44(uStack_134,local_138);
  local_160 = (undefined **)local_148;
  goto LAB_0015cf17;
LAB_0015d35d:
  puVar6 = puVar6 + 1;
  uVar9 = (ulonglong)(byte)(puVar12 + -1)[(longlong)puVar6];
  if (0x3a < uVar9) goto LAB_0015df93;
  if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) goto LAB_0015d3e0;
  *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
  if (puVar6 == *(undefined **)((longlong)puVar22 + 0x20)) goto LAB_0015db84;
  goto LAB_0015d35d;
LAB_0015d3e0:
  if (uVar9 == 0x3a) {
    *(undefined **)((longlong)puVar22 + 0x28) = puVar6;
    uStack_170 = 0x15d3fb;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_148,puVar22)
    ;
    auVar30._8_8_ = local_70;
    auVar30._0_8_ = ppuStack_140;
    local_158 = (undefined **)local_148;
    puVar22 = (undefined1 *)local_c8;
    if ((undefined **)local_148 != (undefined **)0xffffffffffffffff) {
      local_a0 = (undefined **)CONCAT44(uStack_134,local_138);
      local_b0 = ppuStack_140;
      goto LAB_0015cf17;
    }
  }
  else {
LAB_0015df93:
    local_118 = (undefined **)0x6;
    local_158 = (undefined **)0xffffffffffffffff;
    uStack_170 = 0x15dfb7;
    auVar30 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(puVar22,&local_118);
  }
LAB_0015dba8:
  local_168 = auVar30._0_8_;
  auVar27._8_8_ = auVar30._8_8_;
  auVar27._0_8_ = puVar22;
  local_158 = (undefined **)0xffffffffffffffff;
LAB_0015d852:
  auVar29._8_8_ = auVar27._8_8_;
  auVar29._0_8_ = local_168;
  bVar25 = true;
  bVar4 = 0;
  puVar22 = (undefined1 *)auVar27._0_8_;
  ppuVar24 = local_160;
LAB_0015d857:
  ppuVar11 = local_150;
  local_168 = auVar29._0_8_;
  if ((bool)((char *)((longlong)ppuVar24 + -1) < (char *)0xfffffffffffffffe & bVar25)) {
    uVar14 = 1;
    uStack_170 = 0x15d87b;
    (*(code *)PTR___rust_dealloc_00219c40)();
    auVar29._8_8_ = uVar14;
    auVar29._0_8_ = local_168;
    puVar22 = (undefined1 *)ppuVar11;
  }
  goto LAB_0015d87b;
LAB_0015db84:
  local_118 = (undefined **)0x3;
  local_158 = (undefined **)0xffffffffffffffff;
  uStack_170 = 0x15dba8;
  auVar30 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar22,&local_118);
  goto LAB_0015dba8;
LAB_0015e9ad:
  bVar4 = (byte)ppuVar11;
  pppuVar16 = pppuVar15;
LAB_0015e9b0:
  uVar14 = 2;
  if (bVar4 != 0x5b) {
    if (bVar4 != 0x7b) {
      *(undefined8 *)((longlong)pppuVar16 + -8) = 0x15ea43;
      uVar26 = (*(code *)PTR_panic_00219ca8)
                         (puVar6,&PTR_s__vendor_serde_json_1_0_154_src_d_00215270);
LAB_0015ea43:
      *(undefined8 *)((longlong)pppuVar16 + -8) = 0x15ea5c;
      (*(code *)PTR_panic_00219ca8)(uVar26,&PTR_s__vendor_serde_json_1_0_154_src_d_00215288);
      pcVar2 = (code *)swi(3);
      ppuVar11 = (undefined **)(*pcVar2)();
      return ppuVar11;
    }
    uVar14 = 3;
  }
LAB_0015e9c9:
  *pppuVar16 = (undefined **)uVar14;
LAB_0015e9cd:
  *(undefined8 *)((longlong)pppuVar16 + -8) = 0x15e9d8;
  ppuVar11 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(param_1,pppuVar16);
  return ppuVar11;
LAB_0015db5b:
  local_118 = (undefined **)0x3;
  uStack_170 = 0x15db78;
  auVar29 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(puVar22,&local_118);
LAB_0015db78:
  bVar4 = 0;
LAB_0015d87b:
  ppuVar13 = local_b0;
  ppuVar11 = local_158;
  local_168 = auVar29._0_8_;
  uVar19 = SUB81(local_b8,0);
  bVar4 = (char *)((longlong)local_158 + 1) < (char *)0x2 | bVar4;
  uStack_e8 = (undefined **)CONCAT71((int7)((ulonglong)((longlong)local_158 + 1) >> 8),bVar4);
  local_f0 = (undefined **)puVar22;
  uStack_d8 = param_5;
  local_e0 = param_6;
  ppuVar24 = (undefined **)0xffffffffffffffff;
  if (bVar4 == 0) {
    uVar14 = 1;
    uStack_170 = 0x15d8b2;
    uStack_e8 = (undefined **)(*(code *)PTR___rust_dealloc_00219c40)();
    auVar29._8_8_ = uVar14;
    auVar29._0_8_ = local_168;
    local_f0 = ppuVar13;
    uStack_d8 = param_5;
    local_e0 = param_6;
  }
LAB_0015d8b2:
  ppuVar13 = auVar29._8_8_;
  local_168 = auVar29._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_110 = local_168;
  local_100 = local_160;
  local_d0 = local_74;
  uStack_cc = CONCAT31(uStack_cc._1_3_,uVar19);
  uStack_170 = 0x15d919;
  local_118 = ppuVar24;
  local_108 = ppuVar11;
  local_f8 = ppuVar13;
  ppuVar10 = (undefined **)
             <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::end_map(param_2);
  local_128 = (undefined *)CONCAT44(uStack_cc,local_d0);
  local_138 = (undefined4)local_e0;
  uStack_134 = local_e0._4_4_;
  uStack_130 = (undefined4)uStack_d8;
  uStack_12c = uStack_d8._4_4_;
  local_148 = (char *)local_f0;
  ppuStack_140 = uStack_e8;
  if (ppuVar24 == (undefined **)0xffffffffffffffff) {
    if (ppuVar10 != (undefined **)0x0) {
      uStack_170 = 0x15d993;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(ppuVar10)
      ;
    }
    param_1 = local_a8;
  }
  else {
    param_1 = local_a8;
    if (ppuVar10 == (undefined **)0x0) {
      local_58 = (undefined4)local_f0;
      uStack_54 = local_f0._4_4_;
      uStack_4c = uStack_e8._4_4_;
      uStack_50 = (int)uStack_e8;
joined_r0x0015d6b4:
      local_f0 = (undefined **)local_148;
      uStack_e8 = ppuStack_140;
      local_48 = local_e0;
      ppuStack_40 = uStack_d8;
      local_38 = local_128;
      if (ppuVar24 != (undefined **)0xffffffffffffffff) {
        param_1[2] = (undefined *)ppuVar11;
        param_1[3] = (undefined *)local_160;
        param_1[4] = (undefined *)ppuVar13;
        param_1[5] = (undefined *)CONCAT44(uStack_54,local_58);
        param_1[6] = (undefined *)CONCAT44(uStack_4c,uStack_50);
        param_1[7] = (undefined *)local_e0;
        param_1[8] = (undefined *)uStack_d8;
        param_1[9] = local_128;
        *param_1 = (undefined *)ppuVar24;
        param_1[1] = (undefined *)local_168;
        return param_1;
      }
    }
    else {
      uVar26 = (undefined4)local_f0;
      if (ppuVar24 != (undefined **)0x0) {
        uStack_170 = 0x15d95d;
        uVar26 = (*(code *)PTR___rust_dealloc_00219c40)(local_128,1);
        param_1 = local_a8;
      }
joined_r0x0015d5ce:
      if (local_160 != (undefined **)0x0) {
        uStack_170 = 0x15d5de;
        (*(code *)PTR___rust_dealloc_00219c40)(uVar26,1);
      }
      local_168 = ppuVar10;
    }
  }
LAB_0015d9a5:
  ppuVar11 = local_168;
LAB_0015dee0:
  uStack_170 = 0x15dee8;
  puVar6 = (undefined *)
           ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
           <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                     (ppuVar11,param_2);
LAB_0015ce8b:
  param_1[1] = puVar6;
  *param_1 = (undefined *)0xffffffffffffffff;
  return param_1;
}


