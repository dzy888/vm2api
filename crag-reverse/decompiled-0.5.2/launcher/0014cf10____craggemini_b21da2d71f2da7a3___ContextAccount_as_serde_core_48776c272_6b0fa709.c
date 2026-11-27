// 0014cf10 <<craggemini[b21da2d71f2da7a3]::ContextAccount_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::ContextAccount
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::ContextAccount_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,ulonglong *******param_2,undefined8 param_3,undefined8 param_4,
          ulonglong *******param_5,ulonglong *******param_6)

{
  byte bVar1;
  ulonglong ******ppppppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong ******ppppppuVar5;
  undefined8 uVar6;
  ulonglong *******pppppppuVar7;
  ulonglong *******pppppppuVar8;
  uint uVar9;
  ulonglong *******pppppppuVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulonglong *******extraout_RDX_03;
  ulonglong *******extraout_RDX_04;
  ulonglong *******extraout_RDX_05;
  ulonglong *******extraout_RDX_06;
  ulonglong *******extraout_RDX_07;
  ulonglong *******pppppppuVar11;
  ulonglong *******extraout_RDX_08;
  ulonglong *******unaff_RBX;
  ulonglong *******unaff_RBP;
  ulonglong *******pppppppuVar12;
  ulonglong uVar13;
  ulonglong *******pppppppuVar14;
  ulonglong *******in_R10;
  ulonglong *******unaff_R13;
  ulonglong *******unaff_R15;
  undefined1 auVar15 [16];
  ulonglong *******local_100;
  ulonglong *******local_f8;
  ulonglong *******local_e8;
  ulonglong *******local_e0;
  undefined8 local_d8;
  ulonglong *******local_d0;
  ulonglong *******local_c8;
  ulonglong *******local_c0;
  ulonglong *******local_b8;
  ulonglong *******local_b0;
  ulonglong *******local_a8;
  ulonglong *******local_a0;
  ulonglong *******local_98;
  undefined1 local_89;
  ulonglong *******local_88;
  ulonglong *******local_80;
  ulonglong *******local_78;
  ulonglong *******local_70;
  ulonglong *******local_68;
  ulonglong *******local_60;
  undefined8 *local_58;
  ulonglong *******local_50;
  ulonglong *******local_48;
  ulonglong *******local_40;
  undefined1 local_38;
  
  ppppppuVar2 = param_2[4];
  ppppppuVar5 = param_2[5];
  local_58 = param_1;
  if (ppppppuVar5 < ppppppuVar2) {
    pppppppuVar10 = (ulonglong *******)-(longlong)ppppppuVar2;
    do {
      ppppppuVar5 = (ulonglong ******)((longlong)ppppppuVar5 + 1);
      bVar1 = *(byte *)(((longlong)param_2[3] - 1U) + (longlong)ppppppuVar5);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        local_70 = param_2;
        if (bVar1 == 0x5b) {
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar5;
            local_80 = (ulonglong *******)CONCAT71(local_80._1_7_,1);
            pppppppuVar14 = (ulonglong *******)&local_88;
            local_88 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_d8);
            local_e0 = unaff_R15;
            if ((char)local_d8 == '\x01') {
              local_f8 = pppppppuVar10;
              pppppppuVar11 = extraout_RDX_03;
              local_100 = local_d0;
LAB_0014d382:
              pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
            }
            else {
              if (local_d8._1_1_ == '\x01') {
                pppppppuVar14 = local_88;
                <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (&local_d8);
                local_f8 = pppppppuVar10;
                pppppppuVar11 = extraout_RDX_04;
                local_100 = local_d0;
                if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0014d382;
                unaff_RBX = local_c8;
                pppppppuVar12 = local_d8;
              }
              else {
                pppppppuVar12 = (ulonglong *******)0xffffffffffffffff;
                local_100 = unaff_R13;
              }
              pppppppuVar14 = (ulonglong *******)&local_88;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_d8);
              if ((char)local_d8 == '\x01') {
                pppppppuVar11 = extraout_RDX_05;
              }
              else {
                if (local_d8._1_1_ == '\x01') {
                  pppppppuVar14 = local_88;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (&local_d8);
                  local_f8 = local_d8;
                  pppppppuVar11 = extraout_RDX_06;
                  if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0014d608;
                  local_68 = local_c8;
                  local_e0 = local_d0;
                }
                else {
                  local_f8 = (ulonglong *******)0xffffffffffffffff;
                }
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_d8,&local_88);
                if ((char)local_d8 != '\x01') {
                  if (local_d8._1_1_ == '\x01') {
                    <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>as_serde_core[48776c27239fa21f]::de::Deserialize>
                    ::deserialize::
                    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              (&local_d8,local_88);
                    pppppppuVar11 = extraout_RDX_08;
                    if (local_d8 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0014d5ea;
                    param_5 = local_c8;
                    pppppppuVar11 = local_d0;
                  }
                  else {
                    local_d8 = (ulonglong *******)0xfffffffffffffffe;
                    pppppppuVar11 = local_100;
                  }
                  unaff_RBP = (ulonglong *******)0xffffffffffffffff;
                  if (local_d8 != (ulonglong *******)0xfffffffffffffffe) {
                    unaff_RBP = local_d8;
                  }
                  pppppppuVar14 = local_68;
                  goto LAB_0014d628;
                }
                pppppppuVar11 = extraout_RDX_07;
LAB_0014d5ea:
                if (0 < (longlong)local_f8) {
                  pppppppuVar11 = (ulonglong *******)0x1;
                  (*(code *)PTR___rust_dealloc_00219c40)();
                }
                unaff_RBP = local_100;
                pppppppuVar14 = local_f8;
              }
LAB_0014d608:
              local_100 = local_d0;
              local_f8 = pppppppuVar10;
              if (0 < (longlong)pppppppuVar12) {
                pppppppuVar11 = (ulonglong *******)0x1;
                (*(code *)PTR___rust_dealloc_00219c40)();
                local_f8 = pppppppuVar10;
                pppppppuVar14 = pppppppuVar12;
              }
              pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
              local_e0 = local_100;
            }
LAB_0014d628:
            auVar4._8_8_ = pppppppuVar11;
            auVar4._0_8_ = local_100;
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_d8 = pppppppuVar12;
            local_d0 = local_100;
            local_c8 = unaff_RBX;
            local_c0 = local_f8;
            local_b8 = local_e0;
            local_b0 = pppppppuVar14;
            local_a8 = unaff_RBP;
            local_a0 = pppppppuVar11;
            local_98 = param_5;
            pppppppuVar10 =
                 (ulonglong *******)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_seq(param_2);
            if (pppppppuVar12 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0014d6da;
            if (pppppppuVar10 == (ulonglong *******)0x0) goto LAB_0014d68e;
            param_2 = local_70;
            if (0 < (longlong)pppppppuVar12) {
              (*(code *)PTR___rust_dealloc_00219c40)();
              param_2 = local_70;
            }
            local_100 = pppppppuVar10;
            local_70 = param_2;
            if ((undefined1 *)((longlong)local_f8 + -1) < (undefined1 *)0xfffffffffffffffe) {
              (*(code *)PTR___rust_dealloc_00219c40)((undefined1 *)((longlong)local_f8 + -1),1);
            }
            goto joined_r0x0014d775;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            local_100 = (ulonglong *******)
                        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_invalid_type(param_2,&local_89,&DAT_002150f0);
            goto LAB_0014d85c;
          }
          pppppppuVar14 = param_2 + 7;
          *(char *)pppppppuVar14 = *(char *)pppppppuVar14 + -1;
          if (*(char *)pppppppuVar14 != '\0') {
            param_2[5] = ppppppuVar5;
            local_38 = 1;
            local_60 = (ulonglong *******)0x1144d0;
            local_50 = (ulonglong *******)0x1144d0;
            local_f8 = (ulonglong *******)0xfffffffffffffffe;
            unaff_RBP = (ulonglong *******)0xfffffffffffffffe;
            pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
            local_40 = param_2;
            goto LAB_0014cff0;
          }
        }
        local_d8 = (ulonglong *******)0x18;
        goto LAB_0014cf7b;
      }
      param_2[5] = ppppppuVar5;
    } while (ppppppuVar5 != ppppppuVar2);
  }
  local_d8 = (ulonglong *******)0x5;
LAB_0014cf7b:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_d8);
  goto LAB_0014d867;
LAB_0014cff0:
LAB_0014cffa:
  auVar4._8_8_ = local_e8;
  auVar4._0_8_ = unaff_R15;
  do {
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_d8,&local_40);
    pppppppuVar14 = local_40;
    auVar3._8_8_ = extraout_RDX;
    auVar3._0_8_ = unaff_R15;
    auVar15._8_8_ = extraout_RDX;
    auVar15._0_8_ = local_d0;
    if ((char)local_d8 == '\x01') goto LAB_0014d3d4;
    if (local_d8._1_1_ != '\x01') {
      if (pppppppuVar12 == (ulonglong *******)0xfffffffffffffffe) {
        pppppppuVar12 = (ulonglong *******)0xffffffffffffffff;
      }
      if (local_f8 == (ulonglong *******)0xfffffffffffffffe) {
        local_f8 = (ulonglong *******)0xffffffffffffffff;
      }
      unaff_RBX = local_48;
      pppppppuVar14 = local_68;
      if (unaff_RBP == (ulonglong *******)0xfffffffffffffffe) {
        unaff_RBP = (ulonglong *******)0xffffffffffffffff;
        auVar4 = auVar3;
      }
      else {
        param_6 = local_60;
      }
      goto LAB_0014d42a;
    }
    pppppppuVar11 = local_40 + 3;
    local_40[5] = (ulonglong ******)((longlong)local_40[5] + 1);
    local_40[2] = (ulonglong ******)0x0;
    pppppppuVar10 = local_40;
    (*(code *)PTR_parse_str_00219c90)();
    auVar15._8_8_ = pppppppuVar10;
    auVar15._0_8_ = local_d0;
    pppppppuVar10 = local_d8;
    if (local_d8 == (ulonglong *******)0x2) goto LAB_0014d3d4;
    if (local_c8 == (ulonglong *******)&DAT_00000005) {
      uVar9 = *(byte *)((longlong)local_d0 + 4) ^ 100 | *(uint *)local_d0 ^ 0x695f6d76;
      pppppppuVar10 = (ulonglong *******)(ulonglong)uVar9;
      if (uVar9 == 0) {
        if (local_f8 != (ulonglong *******)0xfffffffffffffffe) {
          local_80 = (ulonglong *******)&DAT_00000005;
          local_50 = (ulonglong *******)0x1144d6;
          goto LAB_0014d9de;
        }
        pppppppuVar8 = (ulonglong *******)pppppppuVar14[4];
        pppppppuVar7 = (ulonglong *******)pppppppuVar14[5];
        pppppppuVar10 = pppppppuVar8;
        if (pppppppuVar8 <= pppppppuVar7) goto LAB_0014d8b6;
        ppppppuVar2 = *pppppppuVar11;
        pppppppuVar10 = (ulonglong *******)-(longlong)pppppppuVar8;
        break;
      }
    }
    else if (local_c8 == (ulonglong *******)0xb) {
      pppppppuVar10 =
           (ulonglong *******)
           (*(ulonglong *)((longlong)local_d0 + 3) ^ 0x7269645f65736e65 |
           (ulonglong)*local_d0 ^ 0x5f65736e6563696c);
      if (pppppppuVar10 == (ulonglong *******)0x0) goto LAB_0014d111;
    }
    else if ((local_c8 == (ulonglong *******)0x6) &&
            (uVar9 = *(ushort *)((longlong)local_d0 + 4) ^ 0x6469 | *(uint *)local_d0 ^ 0x5f766e65,
            pppppppuVar10 = (ulonglong *******)(ulonglong)uVar9, uVar9 == 0)) {
      if (pppppppuVar12 != (ulonglong *******)0xfffffffffffffffe) {
        local_80 = (ulonglong *******)0x6;
        goto LAB_0014d9de;
      }
      pppppppuVar12 = (ulonglong *******)pppppppuVar14[4];
      pppppppuVar8 = (ulonglong *******)pppppppuVar14[5];
      pppppppuVar10 = pppppppuVar12;
      if (pppppppuVar12 <= pppppppuVar8) goto LAB_0014d8f0;
      ppppppuVar2 = *pppppppuVar11;
      pppppppuVar10 = (ulonglong *******)-(longlong)pppppppuVar12;
      goto LAB_0014d2b1;
    }
    auVar15 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                        (pppppppuVar14,pppppppuVar11);
    if (auVar15._0_8_ != 0) goto LAB_0014d3d4;
  } while( true );
LAB_0014d193:
  pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
  uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar7);
  if (0x3a < uVar13) goto LAB_0014da6e;
  if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) goto LAB_0014d222;
  pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
  if (pppppppuVar7 == pppppppuVar8) goto LAB_0014d8b6;
  goto LAB_0014d193;
LAB_0014d222:
  if (uVar13 == 0x3a) {
    pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_88,pppppppuVar14);
    auVar15._8_8_ = extraout_RDX_01;
    auVar15._0_8_ = local_80;
    local_f8 = local_88;
    if (local_88 != (ulonglong *******)0xfffffffffffffffe) {
      local_68 = local_78;
      local_e0 = local_80;
      goto LAB_0014cffa;
    }
  }
  else {
LAB_0014da6e:
    local_d8 = (ulonglong *******)0x6;
    auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(pppppppuVar14,&local_d8);
  }
LAB_0014d8e2:
  local_f8 = (ulonglong *******)0xfffffffffffffffe;
  goto LAB_0014d3d4;
LAB_0014d8b6:
  local_d8 = (ulonglong *******)0x3;
  auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar14,&local_d8);
  goto LAB_0014d8e2;
LAB_0014d111:
  if (unaff_RBP == (ulonglong *******)0xfffffffffffffffe) {
    pppppppuVar8 = (ulonglong *******)pppppppuVar14[4];
    pppppppuVar7 = (ulonglong *******)pppppppuVar14[5];
    pppppppuVar10 = pppppppuVar8;
    if (pppppppuVar7 < pppppppuVar8) {
      ppppppuVar2 = *pppppppuVar11;
      pppppppuVar10 = (ulonglong *******)-(longlong)pppppppuVar8;
      while( true ) {
        pppppppuVar7 = (ulonglong *******)((longlong)pppppppuVar7 + 1);
        uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar7);
        if (0x3a < uVar13) goto LAB_0014da4c;
        if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) break;
        pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
        if (pppppppuVar7 == pppppppuVar8) goto LAB_0014d923;
      }
      if (uVar13 == 0x3a) {
        pppppppuVar14[5] = (ulonglong ******)pppppppuVar7;
        <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>as_serde_core[48776c27239fa21f]::de::Deserialize>
        ::deserialize::
        <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  (&local_88,pppppppuVar14);
        auVar15._8_8_ = extraout_RDX_00;
        auVar15._0_8_ = local_80;
        local_e8 = local_80;
        pppppppuVar14 = local_80;
        pppppppuVar10 = local_88;
        if (local_88 == (ulonglong *******)0xfffffffffffffffe) goto joined_r0x0014d95a;
        local_60 = local_78;
        unaff_RBP = local_88;
        goto LAB_0014cffa;
      }
LAB_0014da4c:
      local_d8 = (ulonglong *******)0x6;
      auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar14,&local_d8);
    }
    else {
LAB_0014d923:
      local_d8 = (ulonglong *******)0x3;
      auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pppppppuVar14,&local_d8);
    }
    pppppppuVar14 = auVar15._0_8_;
    goto joined_r0x0014d95a;
  }
  local_80 = (ulonglong *******)0xb;
  local_50 = (ulonglong *******)0x1144db;
LAB_0014d9de:
  local_88 = local_50;
  local_d8 = (ulonglong *******)&local_88;
  local_d0 = (ulonglong *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  pppppppuVar10 = local_50;
  auVar15 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                      (anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171,&local_d8);
  goto LAB_0014d3d4;
LAB_0014d2b1:
  pppppppuVar8 = (ulonglong *******)((longlong)pppppppuVar8 + 1);
  uVar13 = (ulonglong)*(byte *)(((longlong)ppppppuVar2 - 1U) + (longlong)pppppppuVar8);
  if (0x3a < uVar13) goto LAB_0014da28;
  if ((0x100002600U >> (uVar13 & 0x3f) & 1) == 0) goto LAB_0014d2e9;
  pppppppuVar14[5] = (ulonglong ******)pppppppuVar8;
  if (pppppppuVar8 == pppppppuVar12) goto LAB_0014d8f0;
  goto LAB_0014d2b1;
LAB_0014d2e9:
  if (uVar13 == 0x3a) {
    pppppppuVar14[5] = (ulonglong ******)pppppppuVar8;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_88,pppppppuVar14);
    auVar15._8_8_ = extraout_RDX_02;
    auVar15._0_8_ = local_80;
    if (local_88 == (ulonglong *******)0xfffffffffffffffe) goto LAB_0014d965;
    local_48 = local_78;
    pppppppuVar12 = local_88;
    unaff_R15 = local_80;
    goto LAB_0014cff0;
  }
LAB_0014da28:
  local_d8 = (ulonglong *******)0x6;
  auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar14,&local_d8);
LAB_0014d90f:
  pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
  goto LAB_0014d3d4;
LAB_0014d8f0:
  local_d8 = (ulonglong *******)0x3;
  auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pppppppuVar14,&local_d8);
  goto LAB_0014d90f;
LAB_0014d965:
  pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
LAB_0014d3d4:
  pppppppuVar14 = auVar15._0_8_;
  if ((undefined1 *)((longlong)unaff_RBP + -1) < (undefined1 *)0xfffffffffffffffd) {
    uVar6 = 1;
    (*(code *)PTR___rust_dealloc_00219c40)();
    auVar15._8_8_ = uVar6;
    auVar15._0_8_ = pppppppuVar14;
joined_r0x0014d95a:
    if ((ulonglong)((longlong)local_f8 + -1) < (undefined1 *)0xfffffffffffffffd) goto LAB_0014d4b2;
LAB_0014d408:
    pppppppuVar14 = auVar15._0_8_;
    unaff_RBX = local_f8;
    unaff_RBP = in_R10;
  }
  else {
    if ((undefined1 *)0xfffffffffffffffc < (undefined1 *)((longlong)local_f8 + -1))
    goto LAB_0014d408;
LAB_0014d4b2:
    uVar6 = 1;
    (*(code *)PTR___rust_dealloc_00219c40)();
    auVar15._8_8_ = uVar6;
    auVar15._0_8_ = pppppppuVar14;
    unaff_RBX = local_f8;
    unaff_RBP = in_R10;
  }
  local_f8 = pppppppuVar10;
  local_e0 = (ulonglong *******)((longlong)pppppppuVar12 + -1);
  if (local_e0 < (ulonglong *******)0xfffffffffffffffd) {
    uVar6 = 1;
    local_e0 = (ulonglong *******)(*(code *)PTR___rust_dealloc_00219c40)();
    auVar15._8_8_ = uVar6;
    auVar15._0_8_ = pppppppuVar14;
    unaff_RBX = pppppppuVar12;
  }
  pppppppuVar12 = (ulonglong *******)0xfffffffffffffffe;
  pppppppuVar14 = param_5;
  auVar4 = auVar15;
LAB_0014d42a:
  local_a0 = auVar4._8_8_;
  local_100 = auVar4._0_8_;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_d8 = pppppppuVar12;
  local_d0 = local_100;
  local_c8 = unaff_RBX;
  local_c0 = local_f8;
  local_b8 = local_e0;
  local_b0 = pppppppuVar14;
  local_a8 = unaff_RBP;
  local_98 = param_6;
  pppppppuVar10 =
       (ulonglong *******)
       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
       ::end_map(param_2);
  if (pppppppuVar12 == (ulonglong *******)0xfffffffffffffffe) {
LAB_0014d6da:
    if (pppppppuVar10 != (ulonglong *******)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pppppppuVar10);
    }
    param_2 = local_70;
  }
  else {
    if (pppppppuVar10 == (ulonglong *******)0x0) {
      param_5 = param_6;
LAB_0014d68e:
      local_e8 = auVar4._8_8_;
      local_100 = auVar4._0_8_;
      local_58[2] = unaff_RBX;
      local_58[3] = local_f8;
      local_58[4] = local_e0;
      local_58[5] = pppppppuVar14;
      local_58[6] = unaff_RBP;
      local_58[7] = local_e8;
      local_58[8] = param_5;
      *local_58 = pppppppuVar12;
      local_58[1] = local_100;
      return local_58;
    }
    param_2 = local_70;
    if ((undefined1 *)((longlong)pppppppuVar12 + -1) < (undefined1 *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00219c40)((undefined1 *)((longlong)pppppppuVar12 + -1),1);
      param_2 = local_70;
    }
    local_100 = pppppppuVar10;
    local_70 = param_2;
    if ((ulonglong)((longlong)local_f8 + -1) < (undefined1 *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00219c40)((undefined1 *)((longlong)local_f8 + -1),1);
    }
joined_r0x0014d775:
    if ((ulonglong)((longlong)unaff_RBP + -1) < (undefined1 *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00219c40)((undefined1 *)((longlong)unaff_RBP + -1),1);
    }
  }
LAB_0014d85c:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_100,param_2);
LAB_0014d867:
  local_58[1] = uVar6;
  *local_58 = 0xfffffffffffffffe;
  return local_58;
}


