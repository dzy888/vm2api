// 004245a0 <<craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 unaff_R13D;
  char cVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  uint local_70;
  undefined1 local_69;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  code *local_50;
  undefined4 local_44;
  char *local_40;
  undefined1 local_38;
  
  uVar7 = *(ulonglong *)(param_2 + 0x28);
  if (uVar7 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar7 = uVar7 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar7);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            local_78 = (code *)CONCAT71(local_78._1_7_,1);
            local_80 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_98,&local_80);
            if ((char)local_98 == '\x01') {
              pcVar10 = local_90;
              cVar13 = -1;
            }
            else if (local_98._1_1_ == '\x01') {
              auVar14 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  (local_80);
              pcVar10 = auVar14._8_8_;
              cVar13 = -1;
              if ((auVar14._0_8_ & 1) == 0) {
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_98,&local_80);
                if ((char)local_98 != '\x01') {
                  if (local_98._1_1_ != '\x01') {
                    uVar8 = 1;
                    goto LAB_00424c9a;
                  }
                  deserialize_u32::
                  <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                            (&local_98,local_80);
                  if ((int)local_98 != 1) {
                    unaff_R13D = local_98._4_4_;
                    <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                    ::next_element_seed::has_next_element::
                    <serde_json[dc3825464c436029]::read::SliceRead>(&local_98,&local_80);
                    if ((char)local_98 != '\x01') {
                      if (local_98._1_1_ != '\x01') {
                        uVar8 = 2;
LAB_00424c9a:
                        pcVar10 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                          ::invalid_length(uVar8,&PTR_DAT_00789ca8,&DAT_00789c78);
                        goto LAB_0042476c;
                      }
                      <craggemini_core[66f3c71560d70857]::pool::CooldownKind_as_serde_core[48776c27239fa21f]::de::Deserialize>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (&local_98,local_80);
                      if ((char)local_98 != '\x01') {
                        cVar6 = local_98._1_1_;
                        <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_98,&local_80);
                        if ((char)local_98 != '\x01') {
                          if (local_98._1_1_ == '\x01') {
                            auVar14 = deserialize_u64::
                                      <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                                (local_80);
                            local_50 = auVar14._8_8_;
                            if ((auVar14._0_8_ & 1) == 0) {
                              cVar13 = cVar6;
                            }
                            else {
                              pcVar10 = local_50;
                            }
                            goto LAB_0042476c;
                          }
                          uVar8 = 3;
                          goto LAB_00424c9a;
                        }
                      }
                    }
                  }
                }
                pcVar10 = local_90;
              }
            }
            else {
              pcVar10 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                ::invalid_length(0,&PTR_DAT_00789ca8,&DAT_00789c78);
              cVar13 = -1;
            }
LAB_0042476c:
            param_2[0x38] = param_2[0x38] + '\x01';
            pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            pcVar5 = pcVar10;
            if (cVar13 != -1) goto joined_r0x00424785;
            if (pcVar9 != (code *)0x0) goto LAB_00424bf6;
            goto LAB_00424bfe;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_invalid_type(param_2,&local_69,&DAT_0078a500);
            goto LAB_00424bfe;
          }
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            local_38 = 1;
            local_40 = param_2;
            <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_98,&local_40);
            if ((char)local_98 != '\0') goto LAB_0042464f;
            cVar13 = -1;
            local_58 = 0;
            local_70 = 0;
            local_60 = 0;
            goto LAB_00424828;
          }
        }
        local_98 = (undefined8 *)0x18;
        goto LAB_00424602;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar7;
    } while (uVar7 != *(ulonglong *)(param_2 + 0x20));
  }
  local_98 = (undefined8 *)0x5;
LAB_00424602:
  uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_98);
  goto LAB_00424c09;
LAB_00424828:
  do {
    pcVar1 = local_40;
    if (local_98._1_1_ != '\x01') {
      if ((local_58 & 1) == 0) {
        local_80 = &DAT_00194578;
        local_78 = (code *)&DAT_0000000e;
      }
      else if ((local_70 & 1) == 0) {
        local_80 = &DAT_00194586;
        local_78 = (code *)0xb;
      }
      else {
        if (cVar13 != -1) {
          pcVar10 = local_68;
          if ((local_60 & 1) == 0) {
            local_80 = &DAT_00194591;
            local_78 = (code *)&DAT_0000000f;
            local_98 = &local_80;
            local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_50 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                               ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                         (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                          ,&local_98);
            cVar13 = -1;
            pcVar10 = local_50;
          }
          goto LAB_0042465a;
        }
        local_80 = "kind";
        local_78 = (code *)&DAT_00000004;
      }
      puVar12 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
LAB_00424cd8:
      local_98 = &local_80;
      local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar10 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>(puVar12,&local_98);
LAB_00424d17:
      cVar13 = -1;
      goto LAB_0042465a;
    }
    plVar2 = (longlong *)(local_40 + 0x18);
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    (*(code *)PTR_parse_str_007998f8)();
    pcVar10 = local_90;
    if ((int)local_98 == 2) goto LAB_00424654;
    switch(local_88) {
    case 4:
      if (*(int *)local_90 == 0x646e696b) {
        if (cVar13 != -1) {
          local_80 = "kind";
          local_78 = (code *)&DAT_00000004;
LAB_00424de4:
          puVar12 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
          goto LAB_00424cd8;
        }
        uVar7 = *(ulonglong *)(pcVar1 + 0x28);
        if (uVar7 < *(ulonglong *)(pcVar1 + 0x20)) {
          lVar4 = *plVar2;
          while( true ) {
            uVar7 = uVar7 + 1;
            uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
            if (0x3a < uVar11) goto LAB_00424d80;
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(pcVar1 + 0x28) = uVar7;
            if (uVar7 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_00424d04;
          }
          if (uVar11 == 0x3a) {
            *(ulonglong *)(pcVar1 + 0x28) = uVar7;
            <craggemini_core[66f3c71560d70857]::pool::CooldownKind_as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      (&local_80,pcVar1);
            if ((char)local_80 != '\x01') {
              cVar13 = local_80._1_1_;
              goto LAB_00424811;
            }
LAB_00424c34:
            cVar13 = -1;
            pcVar10 = local_78;
            goto LAB_0042465a;
          }
LAB_00424d80:
          local_98 = (undefined8 *)&DAT_00000006;
        }
        else {
LAB_00424d04:
          local_98 = (undefined8 *)0x3;
        }
        pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          ::peek_error(pcVar1,&local_98);
        goto LAB_00424d17;
      }
      break;
    case 0xb:
      if (*(longlong *)(local_90 + 3) != 0x6576697475636573 ||
          *(longlong *)local_90 != 0x74756365736e6f63) break;
      if (local_70 == 1) {
        local_80 = &DAT_00194586;
        local_78 = (code *)0xb;
        goto LAB_00424de4;
      }
      uVar7 = *(ulonglong *)(pcVar1 + 0x28);
      if (*(ulonglong *)(pcVar1 + 0x20) <= uVar7) goto LAB_00424d04;
      lVar4 = *plVar2;
      while( true ) {
        uVar7 = uVar7 + 1;
        uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
        if (0x3a < uVar11) goto LAB_00424d80;
        if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar1 + 0x28) = uVar7;
        if (uVar7 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_00424d04;
      }
      if (uVar11 != 0x3a) goto LAB_00424d80;
      *(ulonglong *)(pcVar1 + 0x28) = uVar7;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (&local_80,pcVar1);
      if ((int)local_80 == 1) goto LAB_00424c34;
      local_44 = local_80._4_4_;
      local_70 = 1;
      goto LAB_00424811;
    case 0xe:
      if (*(longlong *)(local_90 + 6) == 0x736d5f68636f7065 &&
          *(longlong *)local_90 == 0x70655f6c69746e75) {
        if (local_58 == 1) {
          local_80 = &DAT_00194578;
          local_78 = (code *)&DAT_0000000e;
          goto LAB_00424de4;
        }
        uVar7 = *(ulonglong *)(pcVar1 + 0x28);
        if (uVar7 < *(ulonglong *)(pcVar1 + 0x20)) {
          lVar4 = *plVar2;
          do {
            uVar7 = uVar7 + 1;
            uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
            if (0x3a < uVar11) {
LAB_00424b51:
              local_98 = (undefined8 *)&DAT_00000006;
              goto LAB_00424a6b;
            }
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) {
              if (uVar11 != 0x3a) goto LAB_00424b51;
              *(ulonglong *)(pcVar1 + 0x28) = uVar7;
              auVar15 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  (pcVar1);
              goto LAB_00424b0b;
            }
            *(ulonglong *)(pcVar1 + 0x28) = uVar7;
          } while (uVar7 != *(ulonglong *)(pcVar1 + 0x20));
        }
        local_98 = (undefined8 *)0x3;
LAB_00424a6b:
        uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar1,&local_98);
        auVar15._8_8_ = uVar8;
        auVar15._0_8_ = 1;
LAB_00424b0b:
        local_68 = auVar15._8_8_;
        local_58 = 1;
        if ((auVar15._0_8_ & 1) == 0) goto LAB_00424811;
        cVar13 = -1;
        pcVar10 = local_68;
        goto LAB_0042465a;
      }
      break;
    case 0xf:
      if (*(longlong *)(local_90 + 7) == 0x736d5f6465746164 &&
          *(longlong *)local_90 == 0x6470755f7473616c) {
        if (local_60 == 1) {
          local_80 = &DAT_00194591;
          local_78 = (code *)&DAT_0000000f;
          goto LAB_00424de4;
        }
        uVar7 = *(ulonglong *)(pcVar1 + 0x28);
        if (uVar7 < *(ulonglong *)(pcVar1 + 0x20)) {
          lVar4 = *plVar2;
          do {
            uVar7 = uVar7 + 1;
            uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
            if (0x3a < uVar11) {
LAB_00424b5e:
              local_98 = (undefined8 *)&DAT_00000006;
              goto LAB_004249f8;
            }
            if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) {
              if (uVar11 != 0x3a) goto LAB_00424b5e;
              *(ulonglong *)(pcVar1 + 0x28) = uVar7;
              auVar14 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  (pcVar1);
              goto LAB_00424b35;
            }
            *(ulonglong *)(pcVar1 + 0x28) = uVar7;
          } while (uVar7 != *(ulonglong *)(pcVar1 + 0x20));
        }
        local_98 = (undefined8 *)0x3;
LAB_004249f8:
        uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar1,&local_98);
        auVar14._8_8_ = uVar8;
        auVar14._0_8_ = 1;
LAB_00424b35:
        local_60 = 1;
        if ((auVar14._0_8_ & 1) == 0) {
          local_50 = auVar14._8_8_;
          goto LAB_00424811;
        }
        cVar13 = -1;
        pcVar10 = auVar14._8_8_;
        goto LAB_0042465a;
      }
    }
    pcVar10 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                      ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                                (pcVar1,plVar2);
    if (pcVar10 != (code *)0x0) goto LAB_00424654;
LAB_00424811:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_98,&local_40);
  } while ((char)local_98 == '\0');
LAB_0042464f:
  pcVar10 = local_90;
LAB_00424654:
  cVar13 = -1;
LAB_0042465a:
  param_2[0x38] = param_2[0x38] + '\x01';
  pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  pcVar5 = pcVar10;
  unaff_R13D = local_44;
  if (cVar13 == -1) {
    if (pcVar9 != (code *)0x0) {
LAB_00424bf6:
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar9);
    }
  }
  else {
joined_r0x00424785:
    pcVar10 = pcVar9;
    if (pcVar10 == (code *)0x0) {
      *param_1 = pcVar5;
      param_1[1] = local_50;
      *(undefined4 *)(param_1 + 2) = unaff_R13D;
      goto LAB_0042479b;
    }
  }
LAB_00424bfe:
  uVar8 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar10,param_2);
LAB_00424c09:
  *param_1 = uVar8;
  cVar13 = -1;
LAB_0042479b:
  *(char *)((longlong)param_1 + 0x14) = cVar13;
  return param_1;
}


