// 004408b0 <<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **unaff_RBX;
  undefined **unaff_RBP;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined **in_R10;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined **local_120;
  undefined **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined **local_80;
  undefined **local_78;
  undefined1 local_69;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  ppuVar12 = (undefined **)param_2[4];
  ppuVar5 = (undefined **)param_2[5];
  if (ppuVar5 < ppuVar12) {
    ppuVar13 = (undefined **)-(longlong)ppuVar12;
    do {
      ppuVar5 = (undefined **)((longlong)ppuVar5 + 1);
      bVar3 = (param_2[3] + -1)[(longlong)ppuVar5];
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          ppuVar12 = param_2 + 7;
          *(char *)ppuVar12 = *(char *)ppuVar12 + -1;
          if (*(char *)ppuVar12 != '\0') {
            param_2[5] = (undefined *)ppuVar5;
            uStack_100 = (undefined **)CONCAT71(uStack_100._1_7_,1);
            ppuVar5 = (undefined **)&local_d0;
            ppuVar12 = (undefined **)&local_108;
            local_108 = param_2;
            ppuVar9 = (undefined **)
                      <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_d0 == '\x01') {
              local_120 = ppuVar13;
              ppuVar8 = param_5;
              ppuVar7 = in_R10;
LAB_004410a6:
              local_f0 = ppuVar7;
              local_78 = ppuVar8;
              local_80 = ppuVar5;
              uVar4 = SUB81(ppuVar9,0);
              local_118 = (undefined **)0xffffffffffffffff;
              ppuVar10 = local_c8;
            }
            else {
              if (local_d0._1_1_ != '\x01') {
                ppuVar12 = &PTR_DAT_00789fb0;
                ppuVar5 = (undefined **)0x0;
                ppuVar9 = (undefined **)
                          <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789fb0,&DAT_00789c78);
                local_120 = ppuVar13;
                ppuVar8 = param_5;
                ppuVar7 = in_R10;
                local_c8 = ppuVar9;
                goto LAB_004410a6;
              }
              ppuVar5 = (undefined **)&local_d0;
              ppuVar12 = local_108;
              ppuVar9 = (undefined **)
                        deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              ppuVar2 = local_c0;
              ppuVar10 = local_c8;
              local_118 = local_d0;
              local_120 = ppuVar13;
              ppuVar8 = param_5;
              ppuVar7 = in_R10;
              if (local_d0 == (undefined **)0xffffffffffffffff) goto LAB_004410a6;
              ppuVar5 = (undefined **)&local_d0;
              ppuVar12 = (undefined **)&local_108;
              ppuVar9 = (undefined **)
                        <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>();
              if ((char)local_d0 == '\x01') {
                local_d0 = ppuVar9;
                ppuVar9 = local_c8;
                uVar17 = extraout_XMM0_Da;
LAB_004412c5:
                uVar4 = SUB81(local_d0,0);
                local_120 = ppuVar13;
                ppuVar8 = param_5;
                ppuVar7 = in_R10;
                if (local_118 != (undefined **)0x0) {
                  uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
                  local_120 = ppuVar13;
                  ppuVar12 = local_118;
                  ppuVar5 = ppuVar10;
                  ppuVar8 = param_5;
                  ppuVar7 = in_R10;
                }
                local_f0 = ppuVar7;
                local_78 = ppuVar8;
                local_80 = ppuVar5;
                local_118 = (undefined **)0xffffffffffffffff;
                unaff_RBX = ppuVar9;
                ppuVar10 = ppuVar9;
              }
              else {
                if (local_d0._1_1_ != '\x01') {
                  ppuVar12 = &PTR_DAT_00789fb0;
                  ppuVar5 = (undefined **)0x1;
                  local_d0 = (undefined **)
                             <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                             ::invalid_length(1,&PTR_DAT_00789fb0,&DAT_00789c78);
                  ppuVar9 = local_d0;
                  uVar17 = extraout_XMM0_Da_02;
                  goto LAB_004412c5;
                }
                ppuVar5 = (undefined **)&local_d0;
                ppuVar12 = local_108;
                uVar17 = deserialize_string::
                         <serde_core[48776c27239fa21f]::de::impls::StringVisitor>();
                unaff_RBX = local_c8;
                local_120 = local_d0;
                local_78 = ppuVar2;
                ppuVar9 = local_c8;
                if (local_d0 == (undefined **)0xffffffffffffffff) goto LAB_004412c5;
                local_80 = local_c0;
                ppuVar5 = (undefined **)&local_d0;
                ppuVar12 = (undefined **)
                           <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                           ::next_element_seed::has_next_element::
                           <serde_json[dc3825464c436029]::read::SliceRead>(ppuVar5,&local_108);
                if ((char)local_d0 == '\x01') {
                  local_d0 = ppuVar12;
                  ppuVar9 = local_c8;
                  uVar17 = extraout_XMM0_Da_01;
LAB_004412aa:
                  if (local_120 != (undefined **)0x0) {
                    local_d0 = (undefined **)(*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
                    ppuVar5 = unaff_RBX;
                    uVar17 = extraout_XMM0_Da_09;
                  }
                  ppuVar12 = local_120;
                  goto LAB_004412c5;
                }
                if (local_d0._1_1_ == '\x01') {
                  ppuVar5 = (undefined **)&local_d0;
                  uVar17 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                           ::deserialize::
                           <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                     (ppuVar5,local_108);
                  local_e0 = local_d0;
                  ppuVar9 = local_c8;
                  if (local_d0 == (undefined **)0xfffffffffffffffe) goto LAB_004412aa;
                  local_f0 = local_c0;
                  ppuVar12 = local_c8;
                }
                else {
                  local_e0 = (undefined **)0xffffffffffffffff;
                  ppuVar12 = unaff_RBP;
                }
                ppuVar5 = (undefined **)&local_d0;
                uVar17 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                         ::next_element_seed::has_next_element::
                         <serde_json[dc3825464c436029]::read::SliceRead>(ppuVar5,&local_108);
                if ((char)local_d0 == '\x01') {
LAB_00441235:
                  ppuVar9 = local_c8;
                  if ((longlong)local_e0 < 1) {
                    local_d0 = local_c8;
                  }
                  else {
                    local_d0 = (undefined **)(*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
                    ppuVar5 = ppuVar12;
                    uVar17 = extraout_XMM0_Da_08;
                  }
                  goto LAB_004412aa;
                }
                uVar4 = 1;
                if (local_d0._1_1_ == '\x01') {
                  ppuVar5 = (undefined **)&local_d0;
                  uVar17 = deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
                                     (ppuVar5,local_108);
                  if ((char)local_d0 == '\x01') goto LAB_00441235;
                  uVar4 = local_d0._1_1_;
                }
                param_6 = local_e0;
              }
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            uStack_88 = CONCAT31(uStack_88._1_3_,uVar4);
            ppuVar5 = local_120;
            local_90 = local_f0;
            local_f0 = ppuVar12;
            local_d8 = unaff_RBX;
            local_d0 = local_118;
            local_c8 = ppuVar10;
            local_c0 = local_78;
            local_b8 = local_120;
            local_b0 = unaff_RBX;
            local_a8 = local_80;
            local_a0 = param_6;
            local_98 = ppuVar12;
            auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::end_seq(param_2);
            lVar11 = auVar18._0_8_;
            auVar19._8_8_ = auVar18._8_8_;
            auVar19._0_8_ = &local_90;
            local_108 = local_90;
            uStack_100 = (undefined **)CONCAT44(uStack_84,uStack_88);
            ppuVar12 = ppuVar10;
            if (local_118 != (undefined **)0xffffffffffffffff) {
              if (lVar11 != 0) {
                if (local_118 != (undefined **)0x0) {
                  uVar6 = 1;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar18._8_8_ = uVar6;
                  auVar18._0_8_ = lVar11;
                }
                goto joined_r0x00441392;
              }
              uStack_44 = local_90._4_4_;
              uStack_3c = uStack_84;
              local_48 = (int)local_90;
              goto LAB_004413f9;
            }
            if (lVar11 != 0) {
              auVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::error::Error>(lVar11);
            }
            local_118 = (undefined **)0xffffffffffffffff;
            goto LAB_00441413;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            ppuVar12 = (undefined **)
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_invalid_type(param_2,&local_69,&DAT_0078a820);
            goto LAB_00441514;
          }
          ppuVar12 = param_2 + 7;
          *(char *)ppuVar12 = *(char *)ppuVar12 + -1;
          if (*(char *)ppuVar12 != '\0') {
            param_2[5] = (undefined *)ppuVar5;
            local_50 = 1;
            local_e0 = (undefined **)CONCAT71(local_e0._1_7_,2);
            local_e8 = (undefined **)0xfffffffffffffffe;
            local_118 = (undefined **)0xffffffffffffffff;
            local_120 = (undefined **)0xffffffffffffffff;
            local_60 = ppuVar5;
            local_58 = param_2;
            goto LAB_00440994;
          }
        }
        local_d0 = (undefined **)0x18;
        goto LAB_0044091e;
      }
      param_2[5] = (undefined *)ppuVar5;
    } while (ppuVar5 != ppuVar12);
  }
  local_d0 = (undefined **)0x5;
LAB_0044091e:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_d0);
  goto LAB_0044092b;
LAB_00440994:
  local_68 = ppuVar13;
LAB_004409a9:
  do {
    puVar16 = (undefined1 *)&local_d0;
    uVar17 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
             ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                       (&local_d0,&local_58);
    ppuVar12 = local_58;
    ppuVar5 = local_120;
    if ((char)local_d0 == '\x01') {
      ppuVar10 = local_c8;
      goto LAB_00440e98;
    }
    if (local_d0._1_1_ != '\x01') {
      if (local_118 == (undefined **)0xffffffffffffffff) {
        local_108 = (undefined **)&anon_63b06cc94833867f683611f039574387_41_llvm_6903579140370050947
        ;
        uStack_100 = (undefined **)&DAT_00000008;
        local_d0 = (undefined **)&local_108;
        local_c8 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar16 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        ppuVar10 = (undefined **)
                   <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                   ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                             (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                              &local_d0);
        local_118 = (undefined **)0xffffffffffffffff;
        bVar3 = 0;
        uVar17 = extraout_XMM0_Da_03;
        goto LAB_00440e9d;
      }
      if (local_120 == (undefined **)0xffffffffffffffff) {
        local_108 = (undefined **)&DAT_00194dcc;
        uStack_100 = (undefined **)&DAT_00000009;
        local_d0 = (undefined **)&local_108;
        local_c8 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        puVar16 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
        ppuVar10 = (undefined **)
                   <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                   ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                             (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                              &local_d0);
        ppuVar12 = local_68;
        bVar3 = 1;
        ppuVar5 = (undefined **)0xffffffffffffffff;
        if (local_118 == (undefined **)0x0) {
          local_118 = (undefined **)0x0;
          uVar17 = extraout_XMM0_Da_04;
        }
        else {
          uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
          puVar16 = (undefined1 *)ppuVar12;
        }
        goto LAB_00440e9d;
      }
      param_6 = (undefined **)0xffffffffffffffff;
      if (local_e8 != (undefined **)0xfffffffffffffffe) {
        param_6 = local_e8;
      }
      bVar3 = 1;
      if ((byte)local_e0 != 2) {
        bVar3 = (byte)local_e0 & 1;
      }
      ppuVar10 = local_68;
      local_90 = local_60;
      goto LAB_00440f09;
    }
    ppuVar9 = local_58 + 3;
    local_58[5] = local_58[5] + 1;
    local_58[2] = (undefined *)0x0;
    uVar17 = (*(code *)PTR_parse_str_007998f8)(uVar17,local_58);
    ppuVar10 = local_c8;
    puVar16 = (undefined1 *)&local_d0;
    if ((int)local_d0 == 2) {
LAB_00440e8c:
      goto LAB_00440e98;
    }
    puVar16 = (undefined1 *)&local_108;
    uVar17 = <<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
             ::visit_str::<serde_json[dc3825464c436029]::error::Error>(puVar16,local_c8,local_c0);
    if ((char)local_108 == '\x01') {
      ppuVar10 = uStack_100;
      goto LAB_00440e8c;
    }
    if (local_108._1_1_ == '\x03') {
      if ((byte)local_e0 != '\x02') {
        uStack_100 = (undefined **)&DAT_0000000e;
        ppuVar13 = (undefined **)&DAT_0019466f;
        goto LAB_00441486;
      }
      ppuVar8 = (undefined **)ppuVar12[4];
      ppuVar7 = (undefined **)ppuVar12[5];
      ppuVar13 = ppuVar8;
      if (ppuVar7 < ppuVar8) {
        puVar1 = *ppuVar9;
        ppuVar13 = (undefined **)-(longlong)ppuVar8;
        while( true ) {
          ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
          uVar15 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar7];
          if (0x3a < uVar15) goto LAB_004414cc;
          if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
          ppuVar12[5] = (undefined *)ppuVar7;
          if (ppuVar7 == ppuVar8) goto LAB_00440d5c;
        }
        if (uVar15 != 0x3a) {
LAB_004414cc:
          local_d0 = (undefined **)&DAT_00000006;
          ppuVar10 = (undefined **)
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(ppuVar12,&local_d0);
          puVar16 = (undefined1 *)ppuVar12;
          uVar17 = extraout_XMM0_Da_11;
          goto LAB_00440d77;
        }
        ppuVar12[5] = (undefined *)ppuVar7;
        puVar16 = (undefined1 *)&local_108;
        uVar17 = deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>
                           (puVar16,ppuVar12);
        if ((char)local_108 != '\x01') {
          local_e0 = (undefined **)CONCAT71(local_e0._1_7_,local_108._1_1_);
          goto LAB_004409a9;
        }
        ppuVar10 = uStack_100;
      }
      else {
LAB_00440d5c:
        local_d0 = (undefined **)0x3;
        ppuVar10 = (undefined **)
                   <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(ppuVar12,&local_d0);
        puVar16 = (undefined1 *)ppuVar12;
        uVar17 = extraout_XMM0_Da_00;
LAB_00440d77:
      }
      goto LAB_00440d7f;
    }
    if (local_108._1_1_ == '\0') break;
    if (local_108._1_1_ == '\x01') {
      if (local_120 != (undefined **)0xffffffffffffffff) {
        uStack_100 = (undefined **)&DAT_00000009;
        ppuVar13 = (undefined **)&DAT_00194dcc;
        goto LAB_00441486;
      }
      ppuVar5 = (undefined **)ppuVar12[4];
      ppuVar8 = (undefined **)ppuVar12[5];
      ppuVar13 = ppuVar5;
      if (ppuVar8 < ppuVar5) {
        puVar1 = *ppuVar9;
        ppuVar13 = (undefined **)-(longlong)ppuVar5;
        while( true ) {
          ppuVar8 = (undefined **)((longlong)ppuVar8 + 1);
          uVar15 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar8];
          if (0x3a < uVar15) goto LAB_00441557;
          if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
          ppuVar12[5] = (undefined *)ppuVar8;
          if (ppuVar8 == ppuVar5) goto LAB_00441198;
        }
        if (uVar15 != 0x3a) {
LAB_00441557:
          local_d0 = (undefined **)&DAT_00000006;
          ppuVar10 = (undefined **)
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(ppuVar12,&local_d0);
          puVar16 = (undefined1 *)ppuVar12;
          uVar17 = extraout_XMM0_Da_12;
          goto LAB_004411ba;
        }
        ppuVar12[5] = (undefined *)ppuVar8;
        puVar16 = (undefined1 *)&local_108;
        uVar17 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                           (puVar16,ppuVar12);
        ppuVar10 = uStack_100;
        if (local_108 != (undefined **)0xffffffffffffffff) {
          local_80 = local_f8;
          local_120 = local_108;
          local_d8 = uStack_100;
          goto LAB_004409a9;
        }
      }
      else {
LAB_00441198:
        local_d0 = (undefined **)0x3;
        ppuVar10 = (undefined **)
                   <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(ppuVar12,&local_d0);
        puVar16 = (undefined1 *)ppuVar12;
        uVar17 = extraout_XMM0_Da_06;
LAB_004411ba:
      }
      ppuVar5 = (undefined **)0xffffffffffffffff;
      goto LAB_004411c4;
    }
    if (local_e8 != (undefined **)0xfffffffffffffffe) {
      uStack_100 = (undefined **)0xc;
      ppuVar13 = (undefined **)&DAT_00194dd5;
      goto LAB_00441486;
    }
    ppuVar8 = (undefined **)ppuVar12[4];
    ppuVar7 = (undefined **)ppuVar12[5];
    ppuVar13 = ppuVar8;
    puVar16 = (undefined1 *)ppuVar12;
    if (ppuVar8 <= ppuVar7) {
LAB_004411cb:
      local_d0 = (undefined **)0x3;
      local_e8 = (undefined **)0xfffffffffffffffe;
      ppuVar12 = (undefined **)&local_d0;
      ppuVar10 = (undefined **)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error();
      uVar17 = extraout_XMM0_Da_07;
LAB_004411f4:
LAB_004411f7:
      bVar3 = 0;
      ppuVar9 = local_d8;
      goto joined_r0x0044120b;
    }
    puVar1 = *ppuVar9;
    ppuVar13 = (undefined **)-(longlong)ppuVar8;
    while( true ) {
      ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
      uVar15 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar7];
      if (0x3a < uVar15) goto LAB_00441579;
      if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
      ppuVar12[5] = (undefined *)ppuVar7;
      if (ppuVar7 == ppuVar8) goto LAB_004411cb;
    }
    if (uVar15 != 0x3a) {
LAB_00441579:
      local_d0 = (undefined **)&DAT_00000006;
      local_e8 = (undefined **)0xfffffffffffffffe;
      ppuVar12 = (undefined **)&local_d0;
      ppuVar10 = (undefined **)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error();
      uVar17 = extraout_XMM0_Da_13;
      goto LAB_004411f4;
    }
    ppuVar12[5] = (undefined *)ppuVar7;
    puVar16 = (undefined1 *)&local_108;
    uVar17 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
             ::deserialize::
             <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ();
    local_f0 = uStack_100;
    if (local_108 == (undefined **)0xfffffffffffffffe) {
      ppuVar10 = uStack_100;
      goto LAB_004411f7;
    }
    local_60 = local_f8;
    local_e8 = local_108;
  } while( true );
  if (local_118 != (undefined **)0xffffffffffffffff) {
    uStack_100 = (undefined **)&DAT_00000008;
    ppuVar13 = (undefined **)&anon_63b06cc94833867f683611f039574387_41_llvm_6903579140370050947;
LAB_00441486:
    local_d0 = (undefined **)&local_108;
    local_c8 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar16 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
    local_108 = ppuVar13;
    ppuVar10 = (undefined **)
               <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
               ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                         (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                          &local_d0);
    uVar17 = extraout_XMM0_Da_10;
LAB_004411c4:
LAB_00440e98:
    bVar3 = 0;
    goto LAB_00440e9d;
  }
  ppuVar8 = (undefined **)ppuVar12[4];
  ppuVar7 = (undefined **)ppuVar12[5];
  ppuVar13 = ppuVar8;
  if (ppuVar7 < ppuVar8) {
    puVar1 = *ppuVar9;
    ppuVar13 = (undefined **)-(longlong)ppuVar8;
    while( true ) {
      ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
      uVar15 = (ulonglong)(byte)(puVar1 + -1)[(longlong)ppuVar7];
      if (0x3a < uVar15) goto LAB_004415a7;
      if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
      ppuVar12[5] = (undefined *)ppuVar7;
      if (ppuVar7 == ppuVar8) goto LAB_00441160;
    }
    if (uVar15 == 0x3a) {
      ppuVar12[5] = (undefined *)ppuVar7;
      puVar16 = (undefined1 *)&local_108;
      uVar17 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                         (puVar16,ppuVar12);
      local_118 = local_108;
      if (local_108 == (undefined **)0xffffffffffffffff) goto LAB_00441464;
      local_78 = local_f8;
      ppuVar13 = uStack_100;
      goto LAB_00440994;
    }
LAB_004415a7:
    local_d0 = (undefined **)&DAT_00000006;
    ppuVar10 = (undefined **)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(ppuVar12,&local_d0);
    puVar16 = (undefined1 *)ppuVar12;
    uVar17 = extraout_XMM0_Da_14;
  }
  else {
LAB_00441160:
    local_d0 = (undefined **)0x3;
    ppuVar10 = (undefined **)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(ppuVar12,&local_d0);
    puVar16 = (undefined1 *)ppuVar12;
    uVar17 = extraout_XMM0_Da_05;
  }
  local_118 = (undefined **)0xffffffffffffffff;
  goto LAB_00440d7f;
LAB_00441464:
  local_118 = (undefined **)0xffffffffffffffff;
  ppuVar13 = (undefined **)0xffffffffffffffff;
  ppuVar10 = uStack_100;
LAB_00440d7f:
  bVar3 = 0;
LAB_00440e9d:
  ppuVar12 = local_e8;
  ppuVar8 = local_f0;
  ppuVar9 = local_d8;
  if ((undefined1 *)((longlong)local_e8 + -1) < (undefined1 *)0xfffffffffffffffd) {
    uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
    puVar16 = (undefined1 *)ppuVar8;
    ppuVar9 = local_d8;
  }
joined_r0x0044120b:
  local_d8 = ppuVar9;
  if ((undefined1 *)((longlong)ppuVar5 + -1) < (undefined1 *)0xfffffffffffffffe) {
    uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
    ppuVar12 = ppuVar5;
    puVar16 = (undefined1 *)ppuVar9;
  }
  ppuVar5 = local_68;
  bVar3 = (undefined1 *)((longlong)local_118 + 1) < (undefined1 *)0x2 | bVar3;
  if (bVar3 == 0) {
    bVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
    ppuVar12 = local_118;
    puVar16 = (undefined1 *)ppuVar5;
  }
  local_80 = param_5;
  local_f0 = (undefined **)puVar16;
  local_d8 = ppuVar12;
  local_78 = ppuVar13;
  local_118 = (undefined **)0xffffffffffffffff;
  local_90 = in_R10;
LAB_00440f09:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_b8 = local_120;
  uStack_88 = CONCAT31(uStack_88._1_3_,bVar3);
  ppuVar5 = local_120;
  local_d0 = local_118;
  local_c8 = ppuVar10;
  local_c0 = local_78;
  local_b0 = local_d8;
  local_a8 = local_80;
  local_a0 = param_6;
  local_98 = local_f0;
  auVar18 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map(param_2);
  lVar11 = auVar18._0_8_;
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_8_ = &local_90;
  local_108 = local_90;
  uStack_100 = (undefined **)CONCAT44(uStack_84,uStack_88);
  ppuVar12 = ppuVar10;
  if (local_118 == (undefined **)0xffffffffffffffff) {
    local_118 = (undefined **)0xffffffffffffffff;
    if (lVar11 != 0) {
      auVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (lVar11);
    }
  }
  else if (lVar11 == 0) {
    uStack_44 = local_90._4_4_;
    uStack_3c = uStack_84;
    local_48 = (int)local_90;
LAB_004413f9:
    auVar19._8_8_ = local_80;
    auVar19._0_8_ = local_78;
    ppuVar5 = local_f0;
    ppuVar10 = local_d8;
    local_108 = local_90;
    uStack_40 = uStack_88;
  }
  else {
    if (local_118 != (undefined **)0x0) {
      uVar6 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
      auVar18._8_8_ = uVar6;
      auVar18._0_8_ = lVar11;
    }
joined_r0x00441392:
    uVar6 = auVar18._8_8_;
    ppuVar12 = auVar18._0_8_;
    if (local_120 != (undefined **)0x0) {
      uVar6 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    auVar19._8_8_ = uVar6;
    auVar19._0_8_ = (undefined1 *)((longlong)param_6 + -1);
    local_118 = (undefined **)0xffffffffffffffff;
    if ((undefined1 *)((longlong)param_6 + -1) < (undefined1 *)0xfffffffffffffffe) {
      uVar14 = 1;
      uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)();
      auVar19._8_8_ = uVar14;
      auVar19._0_8_ = uVar6;
    }
  }
LAB_00441413:
  if (local_118 != (undefined **)0xffffffffffffffff) {
    param_1[2] = auVar19._0_8_;
    param_1[3] = local_120;
    param_1[4] = ppuVar10;
    param_1[5] = auVar19._8_8_;
    param_1[6] = param_6;
    param_1[7] = ppuVar5;
    param_1[8] = CONCAT44(uStack_44,local_48);
    param_1[9] = CONCAT44(uStack_3c,uStack_40);
    *param_1 = local_118;
    param_1[1] = ppuVar12;
    return param_1;
  }
LAB_00441514:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (ppuVar12,param_2);
LAB_0044092b:
  param_1[1] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


