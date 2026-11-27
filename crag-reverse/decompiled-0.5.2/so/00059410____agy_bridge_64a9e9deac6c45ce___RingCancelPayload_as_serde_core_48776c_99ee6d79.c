// 00059410 <<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,byte *param_2)

{
  word *pwVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *unaff_RBX;
  ulonglong uVar9;
  byte *pbVar10;
  undefined8 local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 *local_78;
  undefined1 local_69;
  byte *local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  byte *local_48;
  byte *local_40;
  undefined1 local_38;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pwVar1 = (word *)(param_2 + 0x38);
          *(char *)pwVar1 = (char)*pwVar1 + -1;
          if ((char)*pwVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar5;
            local_58 = (byte *)CONCAT71(local_58._1_7_,1);
            local_60 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_98,&local_60);
            if ((char)local_98 == '\x01') {
              pbVar7 = local_90;
LAB_00059742:
              pbVar10 = (byte *)0xffffffffffffffff;
            }
            else {
              if (local_98._1_1_ != '\x01') {
                pbVar7 = (byte *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                 ::invalid_length(0,&
                                                  PTR_s_struct_RingCancelPayload_with_1_e_000c00d8,
                                                  &DAT_000c00e8);
                goto LAB_00059742;
              }
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_98,local_60);
              pbVar7 = local_90;
              if (local_98 == (byte *)0xffffffffffffffff) goto LAB_00059742;
              unaff_RBX = local_88;
              pbVar10 = local_98;
            }
            param_2[0x38] = (char)*(word *)(param_2 + 0x38) + '\x01';
            pbVar8 = (byte *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            goto LAB_00059755;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pbVar7 = (byte *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_69,&DAT_000c01b8);
            goto LAB_000597ae;
          }
          pwVar1 = (word *)(param_2 + 0x38);
          *(char *)pwVar1 = (char)*pwVar1 + -1;
          if ((char)*pwVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar5;
            unaff_RBX = PTR_parse_str_000c3b10;
            local_38 = 1;
            local_80 = (byte *)0xffffffffffffffff;
            local_78 = param_1;
            local_40 = param_2;
            goto LAB_000594d0;
          }
        }
        local_98 = (byte *)0x18;
        goto LAB_00059472;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  local_98 = (byte *)0x5;
LAB_00059472:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_98);
  goto LAB_000597b9;
  while (pbVar7 = (byte *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                          ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                                    (pbVar10,plVar2), pbVar7 == (byte *)0x0) {
LAB_000594d0:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_98,&local_40);
    pbVar10 = local_40;
    if ((char)local_98 == '\x01') {
      pbVar7 = local_90;
      break;
    }
    if (local_98._1_1_ != '\x01') {
      if (local_80 == (byte *)0xffffffffffffffff) {
        local_60 = (byte *)0xd3e4;
        local_58 = Elf64_Ehdr_00000000.e_ident_pad + 1;
        local_98 = (byte *)&local_60;
        local_90 = (byte *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        unaff_RBX = (byte *)0xffffffffffffffff;
        pbVar7 = (byte *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_9fa032a1d30ceca52b5a2d5222eaa356_12_llvm_10768355879922845107
                                    ,&local_98);
        param_1 = local_78;
        goto LAB_00059712;
      }
      unaff_RBX = local_48;
      param_1 = local_78;
      pbVar10 = local_80;
      pbVar7 = local_68;
      goto LAB_0005971c;
    }
    plVar2 = (longlong *)(local_40 + 0x18);
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    *(undefined8 *)(local_40 + 0x10) = 0;
    (*(code *)unaff_RBX)();
    param_1 = local_78;
    pbVar8 = local_80;
    pbVar7 = local_90;
    if ((int)local_98 == 2) break;
    if ((local_88 == Elf64_Ehdr_00000000.e_ident_pad + 1) &&
       (*(word *)(local_90 + 8) == 0x6469 && *(longlong *)local_90 == 0x5f74736575716572)) {
      if (local_80 != (byte *)0xffffffffffffffff) {
        local_60 = (byte *)0xd3e4;
        local_58 = Elf64_Ehdr_00000000.e_ident_pad + 1;
        local_98 = (byte *)&local_60;
        local_90 = (byte *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pbVar7 = (byte *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_9fa032a1d30ceca52b5a2d5222eaa356_16_llvm_10768355879922845107
                                    ,&local_98);
        goto LAB_0005968b;
      }
      uVar5 = *(ulonglong *)(pbVar10 + 0x28);
      if (*(ulonglong *)(pbVar10 + 0x20) <= uVar5) {
LAB_000597c8:
        local_98 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
        unaff_RBX = (byte *)0xffffffffffffffff;
        pbVar7 = (byte *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pbVar10,&local_98);
        param_1 = local_78;
        goto LAB_00059712;
      }
      lVar4 = *plVar2;
      while( true ) {
        uVar5 = uVar5 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar4 + -1 + uVar5);
        if (0x3a < uVar9) goto LAB_0005985f;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pbVar10 + 0x28) = uVar5;
        if (uVar5 == *(ulonglong *)(pbVar10 + 0x20)) goto LAB_000597c8;
      }
      if (uVar9 != 0x3a) {
LAB_0005985f:
        local_98 = &Elf64_Ehdr_00000000.e_ident_version;
        unaff_RBX = (byte *)0xffffffffffffffff;
        pbVar7 = (byte *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pbVar10,&local_98);
        goto LAB_00059712;
      }
      *(ulonglong *)(pbVar10 + 0x28) = uVar5;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                (&local_60,pbVar10);
      local_68 = local_58;
      if (local_60 == (byte *)0xffffffffffffffff) {
        pbVar7 = local_58;
        goto LAB_00059715;
      }
      local_80 = local_60;
      local_48 = local_50;
      goto LAB_000594d0;
    }
  }
  pbVar8 = unaff_RBX;
  param_1 = local_78;
  if (local_80 == (byte *)0xffffffffffffffff) {
LAB_00059712:
LAB_00059715:
    pbVar10 = (byte *)0xffffffffffffffff;
  }
  else {
LAB_0005968b:
    param_1 = local_78;
    unaff_RBX = pbVar8;
    pbVar10 = (byte *)0xffffffffffffffff;
    if (local_80 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
  }
LAB_0005971c:
  param_2[0x38] = (char)*(word *)(param_2 + 0x38) + '\x01';
  pbVar8 = (byte *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
LAB_00059755:
  if (pbVar10 == (byte *)0xffffffffffffffff) {
    if (pbVar8 != (byte *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pbVar8);
    }
  }
  else {
    if (pbVar8 == (byte *)0x0) {
      *param_1 = pbVar10;
      param_1[1] = pbVar7;
      param_1[2] = unaff_RBX;
      return param_1;
    }
    pbVar7 = pbVar8;
    if (pbVar10 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
  }
LAB_000597ae:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pbVar7,param_2);
LAB_000597b9:
  param_1[1] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


