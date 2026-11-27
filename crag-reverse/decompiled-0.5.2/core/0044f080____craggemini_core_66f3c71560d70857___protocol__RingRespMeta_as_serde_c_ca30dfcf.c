// 0044f080 <<craggemini_core[66f3c71560d70857]::protocol::RingRespMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::protocol::RingRespMeta
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::protocol::RingRespMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,ulonglong *******param_2,undefined8 param_3,undefined8 param_4,
          ulonglong *******param_5,ulonglong *******param_6)

{
  byte bVar1;
  ulonglong ******ppppppuVar2;
  undefined1 auVar3 [16];
  ulonglong ******ppppppuVar4;
  undefined8 uVar5;
  ulonglong *******pppppppuVar6;
  ulonglong *******pppppppuVar7;
  longlong lVar8;
  ulonglong *******pppppppuVar9;
  ulonglong *******pppppppuVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 uVar11;
  undefined8 extraout_RDX_07;
  ulonglong *******unaff_RBX;
  ulonglong uVar12;
  undefined **ppuVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *******in_R10;
  ulonglong *******in_R11;
  ulonglong *******pppppppuVar15;
  ulonglong *******unaff_R12;
  ulonglong *******unaff_R13;
  ulonglong *******unaff_R15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong local_138;
  ulonglong *******local_130;
  ulonglong *******local_128;
  ulonglong *******local_120;
  ulonglong *******local_118;
  ulonglong *******local_110;
  ulonglong *******local_108;
  ulonglong *******local_100;
  ulonglong *******local_f8;
  ulonglong *******local_f0;
  ulonglong *******local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  ulonglong *******local_d0;
  ulonglong *******local_c8;
  ulonglong *******local_c0;
  ulonglong *******local_b8;
  ulonglong *******local_b0;
  ulonglong *******local_a8;
  ulonglong *******local_a0;
  ulonglong *******local_98;
  ulonglong *******local_90;
  ulonglong *******local_88;
  ulonglong *******local_80;
  ulonglong *******local_78;
  ulonglong *******local_70;
  ulonglong *******local_68;
  ulonglong *******local_60;
  ulonglong *******local_58;
  ulonglong *******local_50;
  undefined8 *local_48;
  ulonglong *******local_40;
  undefined1 local_38;
  
  ppppppuVar2 = param_2[4];
  ppppppuVar4 = param_2[5];
  local_48 = param_1;
  if (ppppppuVar4 < ppppppuVar2) {
    pppppppuVar9 = (ulonglong *******)-(longlong)ppppppuVar2;
    do {
      ppppppuVar4 = (ulonglong ******)((longlong)ppppppuVar4 + 1);
      bVar1 = *(byte *)(((longlong)param_2[3] - 1U) + (longlong)ppppppuVar4);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        local_78 = param_2;
        if (bVar1 == 0x5b) {
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar4;
            local_100 = (ulonglong *******)CONCAT71(local_100._1_7_,1);
            pppppppuVar14 = (ulonglong *******)&local_d8;
            ppuVar13 = (undefined **)&local_108;
            local_108 = param_2;
            auVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>();
            if ((char)local_d8 == '\x01') {
              pppppppuVar10 = pppppppuVar9;
LAB_0044f92c:
              pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
              pppppppuVar7 = local_d0;
            }
            else {
              if (local_d8._1_1_ != '\x01') {
                ppuVar13 = &PTR_DAT_0078a030;
                pppppppuVar14 = (ulonglong *******)0x0;
                auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_0078a030,&DAT_00789c78);
                local_d0 = auVar16._0_8_;
                pppppppuVar10 = pppppppuVar9;
                goto LAB_0044f92c;
              }
              pppppppuVar14 = (ulonglong *******)&local_d8;
              ppuVar13 = (undefined **)local_108;
              auVar16 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  ();
              pppppppuVar7 = local_d0;
              pppppppuVar15 = local_d8;
              pppppppuVar10 = pppppppuVar9;
              if (local_d8 == (ulonglong *******)0xffffffffffffffff) goto LAB_0044f92c;
              local_58 = local_c8;
              pppppppuVar14 = (ulonglong *******)&local_d8;
              ppuVar13 = (undefined **)&local_108;
              auVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>();
              if ((char)local_d8 == '\x01') {
                param_6 = local_d0;
LAB_0044f999:
                pppppppuVar10 = pppppppuVar9;
                if (pppppppuVar15 != (ulonglong *******)0x0) {
                  uVar11 = 1;
                  uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar16._8_8_ = uVar11;
                  auVar16._0_8_ = uVar5;
                  pppppppuVar10 = pppppppuVar9;
                  ppuVar13 = (undefined **)pppppppuVar15;
                  pppppppuVar14 = pppppppuVar7;
                }
                pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
                pppppppuVar7 = param_6;
              }
              else {
                if (local_d8._1_1_ == '\x01') {
                  pppppppuVar14 = (ulonglong *******)&local_d8;
                  ppuVar13 = (undefined **)local_108;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ();
                  auVar16._8_8_ = extraout_RDX_04;
                  auVar16._0_8_ = local_d8;
                  local_128 = local_d8;
                  param_6 = local_d0;
                  if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0044f999;
                  local_68 = local_c8;
                  param_6 = local_d0;
                }
                else {
                  local_128 = (ulonglong *******)0xffffffffffffffff;
                  param_6 = unaff_R12;
                }
                pppppppuVar14 = (ulonglong *******)&local_d8;
                auVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                          ::next_element_seed::has_next_element::
                          <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar14,&local_108);
                if ((char)local_d8 == '\x01') {
                  pppppppuVar10 = local_d0;
LAB_0044f97e:
                  if (0 < (longlong)local_128) {
                    uVar11 = 1;
                    uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)();
                    auVar16._8_8_ = uVar11;
                    auVar16._0_8_ = uVar5;
                    pppppppuVar14 = param_6;
                  }
                  ppuVar13 = (undefined **)local_128;
                  param_6 = pppppppuVar10;
                  goto LAB_0044f999;
                }
                if (local_d8._1_1_ == '\x01') {
                  pppppppuVar14 = (ulonglong *******)&local_d8;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (pppppppuVar14,local_108);
                  auVar16._8_8_ = extraout_RDX_05;
                  auVar16._0_8_ = local_d8;
                  pppppppuVar10 = local_d0;
                  if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0044f97e;
                  local_70 = local_c8;
                  unaff_R13 = local_d8;
                }
                else {
                  unaff_R13 = (ulonglong *******)0xffffffffffffffff;
                  pppppppuVar10 = unaff_R15;
                }
                pppppppuVar14 = (ulonglong *******)&local_d8;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(pppppppuVar14,&local_108);
                if ((char)local_d8 == '\x01') {
                  local_118 = local_d0;
                  local_d8 = local_d0;
                  uVar5 = extraout_RDX_06;
LAB_0044f963:
                  if (0 < (longlong)unaff_R13) {
                    uVar5 = 1;
                    local_d8 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00798fc8)();
                    pppppppuVar14 = pppppppuVar10;
                  }
                  auVar16._8_8_ = uVar5;
                  auVar16._0_8_ = local_d8;
                  pppppppuVar10 = local_118;
                  goto LAB_0044f97e;
                }
                if (local_d8._1_1_ == '\x01') {
                  pppppppuVar14 = (ulonglong *******)&local_d8;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (pppppppuVar14,local_108);
                  local_118 = local_d0;
                  pppppppuVar9 = local_d0;
                  uVar5 = extraout_RDX_07;
                  if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0044f963;
                  param_5 = local_c8;
                }
                else {
                  local_d8 = (ulonglong *******)0xfffffffffffffffe;
                }
                auVar16._8_8_ = local_118;
                auVar16._0_8_ = local_128;
                in_R10 = (ulonglong *******)0xffffffffffffffff;
                if (local_d8 != (ulonglong *******)0xfffffffffffffffe) {
                  in_R10 = local_d8;
                }
                ppuVar13 = (undefined **)local_68;
                pppppppuVar14 = local_70;
                in_R11 = local_58;
              }
            }
            local_88 = auVar16._8_8_;
            local_c0 = auVar16._0_8_;
            auVar17._8_8_ = unaff_R13;
            auVar17._0_8_ = pppppppuVar7;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_e8 = pppppppuVar10;
            local_d8 = pppppppuVar15;
            local_d0 = pppppppuVar7;
            local_c8 = in_R11;
            local_b8 = param_6;
            local_b0 = (ulonglong *******)ppuVar13;
            local_a8 = unaff_R13;
            local_a0 = pppppppuVar10;
            local_98 = pppppppuVar14;
            local_90 = in_R10;
            local_80 = param_5;
            lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::end_seq(param_2);
            local_110 = param_6;
            local_130 = in_R10;
            goto LAB_0044fa48;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            local_138 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_invalid_type(param_2,&local_d9,&DAT_0078a920);
            goto LAB_0044fb6e;
          }
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar4;
            local_38 = 1;
            local_128 = (ulonglong *******)0xfffffffffffffffe;
            local_60 = (ulonglong *******)&DAT_00194686;
            local_50 = (ulonglong *******)&DAT_00194686;
            local_120 = (ulonglong *******)0xfffffffffffffffe;
            local_f0 = (ulonglong *******)0xfffffffffffffffe;
            pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
            local_40 = param_2;
            goto LAB_0044f16b;
          }
        }
        local_d8 = (ulonglong *******)0x18;
        goto LAB_0044f0eb;
      }
      param_2[5] = ppppppuVar4;
    } while (ppppppuVar4 != ppppppuVar2);
  }
  local_d8 = (ulonglong *******)0x5;
LAB_0044f0eb:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_d8);
  goto LAB_0044fb79;
LAB_0044f16b:
LAB_0044f180:
  while( true ) {
    pppppppuVar10 = (ulonglong *******)&local_40;
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_d8);
    pppppppuVar14 = local_40;
    auVar17._8_8_ = extraout_RDX;
    auVar17._0_8_ = local_d0;
    if ((char)local_d8 == '\x01') goto LAB_0044f62c;
    if (local_d8._1_1_ != '\x01') {
      if (pppppppuVar15 == (ulonglong *******)0xffffffffffffffff) {
        local_108 = (ulonglong *******)&DAT_00194686;
        local_100 = (ulonglong *******)0xa;
        local_d8 = (ulonglong *******)&local_108;
        local_d0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_d8);
        goto LAB_0044f873;
      }
      if (local_128 == (ulonglong *******)0xfffffffffffffffe) {
        local_128 = (ulonglong *******)0xffffffffffffffff;
      }
      if (local_120 == (ulonglong *******)0xfffffffffffffffe) {
        local_120 = (ulonglong *******)0xffffffffffffffff;
      }
      auVar17._8_8_ = local_120;
      auVar17._0_8_ = unaff_RBX;
      auVar3._8_8_ = local_120;
      auVar3._0_8_ = unaff_RBX;
      ppuVar13 = (undefined **)local_68;
      pppppppuVar14 = local_70;
      in_R11 = local_58;
      if (local_f0 == (ulonglong *******)0xfffffffffffffffe) {
        local_130 = (ulonglong *******)0xffffffffffffffff;
        local_118 = pppppppuVar10;
        auVar17 = auVar3;
      }
      else {
        in_R10 = local_60;
        local_130 = local_f0;
      }
      goto LAB_0044f6db;
    }
    pppppppuVar10 = local_40 + 3;
    local_40[5] = (ulonglong ******)((longlong)local_40[5] + 1);
    local_40[2] = (ulonglong ******)0x0;
    pppppppuVar9 = local_40;
    (*(code *)PTR_parse_str_007998f8)();
    auVar17._8_8_ = pppppppuVar9;
    auVar17._0_8_ = local_d0;
    pppppppuVar9 = local_d8;
    if (local_d8 == (ulonglong *******)0x2) goto LAB_0044f62c;
    if (local_c8 != (ulonglong *******)&DAT_00000004) break;
    if (*(int *)local_d0 != 0x6c6f6f74) goto LAB_0044f287;
    if (local_120 != (ulonglong *******)0xfffffffffffffffe) {
      local_100 = (ulonglong *******)&DAT_00000004;
      local_50 = (ulonglong *******)
                 &anon_ec7f14c74815bf4c93b295cfd0665412_119_llvm_7806621557641746444;
      goto LAB_0044fd94;
    }
    pppppppuVar7 = (ulonglong *******)pppppppuVar14[4];
    pppppppuVar6 = (ulonglong *******)pppppppuVar14[5];
    pppppppuVar9 = pppppppuVar7;
    if (pppppppuVar7 <= pppppppuVar6) {
LAB_0044fc60:
      local_d8 = (ulonglong *******)0x3;
      auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar14,&local_d8);
LAB_0044fc88:
      local_120 = (ulonglong *******)0xfffffffffffffffe;
      goto LAB_0044f62c;
    }
    ppppppuVar2 = *pppppppuVar10;
    pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
    while( true ) {
      pppppppuVar6 = (ulonglong *******)((longlong)pppppppuVar6 + 1);
      uVar12 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar6);
      if (0x3a < uVar12) goto LAB_0044fe0b;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
      if (pppppppuVar6 == pppppppuVar7) goto LAB_0044fc60;
    }
    if (uVar12 != 0x3a) {
LAB_0044fe0b:
      local_d8 = (ulonglong *******)&DAT_00000006;
      auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar14,&local_d8);
      goto LAB_0044fc88;
    }
    pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_108,pppppppuVar14);
    auVar17._8_8_ = extraout_RDX_01;
    auVar17._0_8_ = local_100;
    local_120 = local_108;
    if (local_108 == (ulonglong *******)0xfffffffffffffffe) {
      local_120 = (ulonglong *******)0xfffffffffffffffe;
      goto LAB_0044f62c;
    }
    local_70 = local_f8;
    local_e8 = local_100;
  }
  if (local_c8 == (ulonglong *******)0xb) {
    pppppppuVar9 = (ulonglong *******)
                   (*(ulonglong *)((longlong)local_d0 + 3) ^ 0x64695f746e656761 |
                   (ulonglong)*local_d0 ^ 0x746e656761627573);
    if (pppppppuVar9 == (ulonglong *******)0x0) {
      if (local_f0 != (ulonglong *******)0xfffffffffffffffe) {
        local_100 = (ulonglong *******)0xb;
        local_50 = (ulonglong *******)&DAT_0019469a;
        goto LAB_0044fd94;
      }
      pppppppuVar7 = (ulonglong *******)pppppppuVar14[4];
      pppppppuVar6 = (ulonglong *******)pppppppuVar14[5];
      pppppppuVar9 = pppppppuVar7;
      if (pppppppuVar6 < pppppppuVar7) {
        ppppppuVar2 = *pppppppuVar10;
        pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
        while( true ) {
          pppppppuVar6 = (ulonglong *******)((longlong)pppppppuVar6 + 1);
          uVar12 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar6);
          if (0x3a < uVar12) goto LAB_0044fdde;
          if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
          pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
          if (pppppppuVar6 == pppppppuVar7) goto LAB_0044fc1d;
        }
        if (uVar12 == 0x3a) {
          pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_108,pppppppuVar14);
          auVar17._8_8_ = extraout_RDX_00;
          auVar17._0_8_ = local_100;
          local_118 = local_100;
          local_f0 = local_108;
          pppppppuVar14 = local_100;
          pppppppuVar9 = local_108;
          if (local_108 == (ulonglong *******)0xfffffffffffffffe) goto joined_r0x0044fc55;
          local_60 = local_f8;
          goto LAB_0044f180;
        }
LAB_0044fdde:
        local_d8 = (ulonglong *******)&DAT_00000006;
        local_f0 = (ulonglong *******)0xfffffffffffffffe;
        auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pppppppuVar14,&local_d8);
      }
      else {
LAB_0044fc1d:
        local_d8 = (ulonglong *******)0x3;
        local_f0 = (ulonglong *******)0xfffffffffffffffe;
        auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pppppppuVar14,&local_d8);
      }
      pppppppuVar14 = auVar17._0_8_;
      goto joined_r0x0044fc55;
    }
  }
  else if (local_c8 == (ulonglong *******)0xa) {
    if (*(short *)(local_d0 + 1) == 0x6469 && *local_d0 == (ulonglong ******)0x5f74736575716572)
    goto LAB_0044f4d4;
    pppppppuVar9 = (ulonglong *******)
                   ((ulonglong)*(ushort *)(local_d0 + 1) ^ 0x6469 |
                   (ulonglong)*local_d0 ^ 0x5f74706d65747461);
    if (pppppppuVar9 == (ulonglong *******)0x0) {
      if (local_128 != (ulonglong *******)0xfffffffffffffffe) {
        local_100 = (ulonglong *******)0xa;
        local_50 = (ulonglong *******)&DAT_00194690;
        goto LAB_0044fd94;
      }
      pppppppuVar7 = (ulonglong *******)pppppppuVar14[4];
      pppppppuVar6 = (ulonglong *******)pppppppuVar14[5];
      pppppppuVar9 = pppppppuVar7;
      if (pppppppuVar6 < pppppppuVar7) {
        ppppppuVar2 = *pppppppuVar10;
        pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar7;
        while( true ) {
          pppppppuVar6 = (ulonglong *******)((longlong)pppppppuVar6 + 1);
          uVar12 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar6);
          if (0x3a < uVar12) goto LAB_0044fe5e;
          if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
          pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
          if (pppppppuVar6 == pppppppuVar7) goto LAB_0044fcbf;
        }
        if (uVar12 == 0x3a) {
          pppppppuVar14[5] = (ulonglong ******)pppppppuVar6;
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_108,pppppppuVar14);
          auVar17._8_8_ = extraout_RDX_02;
          auVar17._0_8_ = local_100;
          local_128 = local_108;
          if (local_108 == (ulonglong *******)0xfffffffffffffffe) {
            local_128 = (ulonglong *******)0xfffffffffffffffe;
            goto LAB_0044f62c;
          }
          local_68 = local_f8;
          local_110 = local_100;
          goto LAB_0044f180;
        }
LAB_0044fe5e:
        local_d8 = (ulonglong *******)&DAT_00000006;
        auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pppppppuVar14,&local_d8);
      }
      else {
LAB_0044fcbf:
        local_d8 = (ulonglong *******)0x3;
        auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pppppppuVar14,&local_d8);
      }
      local_128 = (ulonglong *******)0xfffffffffffffffe;
      goto LAB_0044f62c;
    }
  }
LAB_0044f287:
  auVar17 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                      (pppppppuVar14,pppppppuVar10);
  if (auVar17._0_8_ != 0) goto LAB_0044f62c;
  goto LAB_0044f180;
LAB_0044f4d4:
  if (pppppppuVar15 != (ulonglong *******)0xffffffffffffffff) {
    local_100 = (ulonglong *******)0xa;
LAB_0044fd94:
    local_108 = local_50;
    local_d8 = (ulonglong *******)&local_108;
    local_d0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pppppppuVar9 = local_50;
    auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_d8);
    goto LAB_0044f62c;
  }
  pppppppuVar15 = (ulonglong *******)pppppppuVar14[4];
  pppppppuVar7 = (ulonglong *******)pppppppuVar14[5];
  pppppppuVar9 = pppppppuVar15;
  if (pppppppuVar7 < pppppppuVar15) {
    ppppppuVar2 = *pppppppuVar10;
    pppppppuVar9 = (ulonglong *******)-(longlong)pppppppuVar15;
    while( true ) {
      pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
      uVar12 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar7);
      if (0x3a < uVar12) goto LAB_0044fe38;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
      if (pppppppuVar7 == pppppppuVar15) goto LAB_0044fc99;
    }
    if (uVar12 != 0x3a) {
LAB_0044fe38:
      local_d8 = (ulonglong *******)&DAT_00000006;
      auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar14,&local_d8);
      goto LAB_0044f873;
    }
    pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
              (&local_108,pppppppuVar14);
    auVar17._8_8_ = extraout_RDX_03;
    auVar17._0_8_ = local_100;
    if (local_108 == (ulonglong *******)0xffffffffffffffff) goto LAB_0044f873;
    local_58 = local_f8;
    unaff_RBX = local_100;
    pppppppuVar15 = local_108;
    goto LAB_0044f16b;
  }
LAB_0044fc99:
  local_d8 = (ulonglong *******)0x3;
  auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar14,&local_d8);
LAB_0044f873:
  pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
LAB_0044f62c:
  pppppppuVar14 = auVar17._0_8_;
  if ((undefined1 *)((longlong)local_f0 + -1) < (undefined1 *)0xfffffffffffffffd) {
    uVar5 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = pppppppuVar14;
joined_r0x0044fc55:
    if ((undefined1 *)((longlong)local_120 + -1) < (undefined1 *)0xfffffffffffffffd)
    goto LAB_0044f697;
LAB_0044f65a:
    pppppppuVar14 = auVar17._0_8_;
    if ((undefined1 *)0xfffffffffffffffc < (undefined1 *)((longlong)local_128 + -1))
    goto LAB_0044f6b6;
LAB_0044f669:
    uVar5 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = pppppppuVar14;
    local_110 = pppppppuVar15;
    local_118 = local_128;
    pppppppuVar10 = local_e8;
  }
  else {
    if ((undefined1 *)0xfffffffffffffffc < (undefined1 *)((longlong)local_120 + -1))
    goto LAB_0044f65a;
LAB_0044f697:
    uVar5 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = pppppppuVar14;
    if ((undefined1 *)((longlong)local_128 + -1) < (undefined1 *)0xfffffffffffffffd)
    goto LAB_0044f669;
LAB_0044f6b6:
    pppppppuVar14 = auVar17._0_8_;
    local_110 = pppppppuVar15;
    local_118 = local_128;
    pppppppuVar10 = local_e8;
  }
  local_128 = (ulonglong *******)((longlong)local_110 + -1);
  local_e8 = pppppppuVar9;
  if (local_128 < (ulonglong *******)0xfffffffffffffffe) {
    uVar5 = 1;
    local_e8 = pppppppuVar10;
    local_128 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00798fc8)();
    auVar17._8_8_ = uVar5;
    auVar17._0_8_ = pppppppuVar14;
    local_e8 = pppppppuVar9;
    local_118 = local_110;
  }
  pppppppuVar15 = (ulonglong *******)0xffffffffffffffff;
  ppuVar13 = (undefined **)param_5;
  pppppppuVar14 = param_6;
  local_130 = param_2;
  in_R11 = (ulonglong *******)&local_d8;
LAB_0044f6db:
  auVar16._8_8_ = local_118;
  auVar16._0_8_ = local_128;
  local_a8 = auVar17._8_8_;
  local_d0 = auVar17._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_d8 = pppppppuVar15;
  local_c8 = in_R11;
  local_c0 = local_128;
  local_b8 = local_110;
  local_b0 = (ulonglong *******)ppuVar13;
  local_a0 = local_e8;
  local_98 = pppppppuVar14;
  local_90 = local_130;
  local_88 = local_118;
  local_80 = in_R10;
  lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  param_5 = in_R10;
LAB_0044fa48:
  local_118 = auVar16._8_8_;
  local_128 = auVar16._0_8_;
  local_120 = auVar17._8_8_;
  local_138 = auVar17._0_8_;
  if (pppppppuVar15 == (ulonglong *******)0xffffffffffffffff) {
    if (lVar8 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar8);
    }
    param_2 = local_78;
  }
  else {
    if (lVar8 == 0) {
      local_48[2] = in_R11;
      local_48[3] = local_128;
      local_48[4] = local_110;
      local_48[5] = ppuVar13;
      local_48[6] = local_120;
      local_48[7] = local_e8;
      local_48[8] = pppppppuVar14;
      local_48[9] = local_130;
      local_48[10] = local_118;
      local_48[0xb] = param_5;
      *local_48 = pppppppuVar15;
      local_48[1] = local_138;
      return local_48;
    }
    if (pppppppuVar15 != (ulonglong *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((longlong)local_128 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)((longlong)local_128 - 1U,1);
    }
    if ((longlong)local_120 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)((longlong)local_120 - 1U,1);
    }
    param_2 = local_78;
    local_138 = lVar8;
    if ((undefined1 *)((longlong)local_130 + -1) < (undefined1 *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)((undefined1 *)((longlong)local_130 + -1),1);
    }
  }
LAB_0044fb6e:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_138,param_2);
LAB_0044fb79:
  local_48[1] = uVar5;
  *local_48 = 0xffffffffffffffff;
  return local_48;
}


