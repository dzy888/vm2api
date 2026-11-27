// 00453470 <<craggemini_core[66f3c71560d70857]::license::host::RosterEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::license::host::RosterEntry
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::license::host::RosterEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,code *param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 unaff_EBX;
  code *pcVar8;
  ulonglong uVar9;
  code *unaff_R12;
  undefined8 local_98;
  code *local_90;
  code *local_88;
  undefined4 local_7c;
  uint local_78;
  undefined1 local_71;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  undefined1 local_38;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pcVar6 = param_2 + 0x38;
          *pcVar6 = (code)((char)*pcVar6 + -1);
          if (*pcVar6 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_68 = (code *)CONCAT71(local_68._1_7_,1);
            local_70 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_98,&local_70);
            if ((char)local_98 == '\x01') goto LAB_0045375f;
            if (local_98._1_1_ == '\x01') {
              deserialize_u32::
              <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                        (&local_98,local_70);
              if ((int)local_98 == 1) {
LAB_0045375f:
                pcVar6 = local_90;
                goto LAB_00453764;
              }
              unaff_EBX = local_98._4_4_;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_98,&local_70);
              if ((char)local_98 == '\x01') goto LAB_0045375f;
              if (local_98._1_1_ != '\x01') {
                uVar5 = 1;
                goto LAB_00453982;
              }
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_98,local_70);
              pcVar6 = local_90;
              if (local_98 == (code *)0xffffffffffffffff) goto LAB_00453764;
              pcVar8 = local_98;
              unaff_R12 = local_88;
            }
            else {
              uVar5 = 0;
LAB_00453982:
              pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                               ::invalid_length(uVar5,&PTR_DAT_0078a060,&DAT_00789c78);
LAB_00453764:
              pcVar8 = (code *)0xffffffffffffffff;
            }
            param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
            pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            goto LAB_0045380b;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_71,&DAT_0078a980);
            goto LAB_004538cf;
          }
          pcVar6 = param_2 + 0x38;
          *pcVar6 = (code)((char)*pcVar6 + -1);
          if (*pcVar6 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_38 = 1;
            local_78 = 0;
            pcVar8 = (code *)0xffffffffffffffff;
            local_58 = param_1;
            local_40 = param_2;
            goto LAB_00453523;
          }
        }
        local_98 = (code *)0x18;
        goto LAB_004534d2;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_98 = (code *)0x5;
LAB_004534d2:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_98);
  goto LAB_004538da;
LAB_00453523:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_98,&local_40);
  pcVar7 = local_40;
  pcVar6 = local_90;
  if ((char)local_98 == '\x01') goto joined_r0x004537e1;
  if (local_98._1_1_ == '\x01') {
    pcVar1 = local_40 + 0x18;
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    *(longlong *)(local_40 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f8)();
    pcVar6 = local_90;
    if ((int)local_98 == 2) goto joined_r0x004537e1;
    if (local_88 == (code *)&DAT_00000004) {
      if (*(int *)local_90 != anon_30b5cef53457a6ea696e8d7e9f6273d6_31_llvm_8436237269785592069)
      goto LAB_00453928;
      if (local_78 != 0) {
        local_70 = (code *)&anon_30b5cef53457a6ea696e8d7e9f6273d6_31_llvm_8436237269785592069;
        goto LAB_00453a06;
      }
      uVar4 = *(ulonglong *)(pcVar7 + 0x28);
      if (*(ulonglong *)(pcVar7 + 0x20) <= uVar4) {
LAB_004537a2:
        local_98 = (code *)0x3;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar7,&local_98);
        goto joined_r0x004537e1;
      }
      lVar3 = *(longlong *)pcVar1;
      while( true ) {
        uVar4 = uVar4 + 1;
        uVar9 = (ulonglong)*(byte *)(lVar3 + -1 + uVar4);
        if (0x3a < uVar9) goto LAB_00453a58;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar7 + 0x28) = uVar4;
        if (uVar4 == *(ulonglong *)(pcVar7 + 0x20)) goto LAB_004537a2;
      }
      if (uVar9 != 0x3a) {
LAB_00453a58:
        local_98 = (code *)&DAT_00000006;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar7,&local_98);
        goto joined_r0x004537e1;
      }
      *(ulonglong *)(pcVar7 + 0x28) = uVar4;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (&local_70,pcVar7);
      pcVar6 = local_68;
      if ((int)local_70 == 1) goto joined_r0x004537e1;
      local_7c = local_70._4_4_;
      local_78 = 1;
      goto LAB_00453523;
    }
    if ((local_88 != (code *)&DAT_0000000d) ||
       (*(longlong *)(local_90 + 5) !=
        CONCAT53(anon_30b5cef53457a6ea696e8d7e9f6273d6_32_llvm_8436237269785592069._8_5_,
                 anon_30b5cef53457a6ea696e8d7e9f6273d6_32_llvm_8436237269785592069._5_3_) ||
        *(longlong *)local_90 !=
        CONCAT35(anon_30b5cef53457a6ea696e8d7e9f6273d6_32_llvm_8436237269785592069._5_3_,
                 anon_30b5cef53457a6ea696e8d7e9f6273d6_32_llvm_8436237269785592069._0_5_))) {
LAB_00453928:
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::unknown_field(local_90,local_88,
                                       &
                                       anon_30b5cef53457a6ea696e8d7e9f6273d6_33_llvm_8436237269785592069
                                       ,2);
      goto joined_r0x004537e1;
    }
    if (pcVar8 != (code *)0xffffffffffffffff) {
      local_70 = (code *)&DAT_001952af;
LAB_00453a06:
      local_68 = local_88;
      local_98 = (code *)&local_70;
      local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                  ,&local_98);
      goto joined_r0x004537e1;
    }
    uVar4 = *(ulonglong *)(pcVar7 + 0x28);
    if (*(ulonglong *)(pcVar7 + 0x20) <= uVar4) {
LAB_0045377c:
      local_98 = (code *)0x3;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(pcVar7,&local_98);
      goto LAB_00453796;
    }
    lVar3 = *(longlong *)pcVar1;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar3 + -1 + uVar4);
      if (0x3a < uVar9) goto LAB_00453a39;
      if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar7 + 0x28) = uVar4;
      if (uVar4 == *(ulonglong *)(pcVar7 + 0x20)) goto LAB_0045377c;
    }
    if (uVar9 == 0x3a) {
      *(ulonglong *)(pcVar7 + 0x28) = uVar4;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_70,pcVar7)
      ;
      local_50 = local_68;
      if (local_70 == (code *)0xffffffffffffffff) {
        unaff_R12 = local_70;
        pcVar6 = local_68;
        goto LAB_004537f6;
      }
      local_48 = local_60;
      pcVar8 = local_70;
      goto LAB_00453523;
    }
LAB_00453a39:
    local_98 = (code *)&DAT_00000006;
    pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pcVar7,&local_98);
  }
  else {
    if ((local_78 & 1) == 0) {
      local_70 = (code *)&anon_30b5cef53457a6ea696e8d7e9f6273d6_31_llvm_8436237269785592069;
      local_68 = (code *)&DAT_00000004;
      local_98 = (code *)&local_70;
      local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_98);
      goto joined_r0x004537e1;
    }
    if (pcVar8 != (code *)0xffffffffffffffff) {
      unaff_R12 = local_48;
      pcVar6 = local_50;
      goto LAB_004537ff;
    }
    local_70 = (code *)&DAT_001952af;
    local_68 = (code *)&DAT_0000000d;
    local_98 = (code *)&local_70;
    local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                     ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                               (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                                &local_98);
  }
LAB_00453796:
  unaff_R12 = (code *)0xffffffffffffffff;
  goto LAB_004537f6;
joined_r0x004537e1:
  unaff_R12 = pcVar8;
  if (pcVar8 + -1 < (code *)0xfffffffffffffffe) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_004537f6:
  pcVar8 = (code *)0xffffffffffffffff;
LAB_004537ff:
  param_1 = local_58;
  unaff_EBX = local_7c;
  param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
  pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
LAB_0045380b:
  if (pcVar8 == (code *)0xffffffffffffffff) {
    if (pcVar7 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar7);
    }
  }
  else {
    if (pcVar7 == (code *)0x0) {
      param_1[2] = unaff_R12;
      *(undefined4 *)(param_1 + 3) = unaff_EBX;
      *param_1 = pcVar8;
      param_1[1] = pcVar6;
      return param_1;
    }
    pcVar6 = pcVar7;
    if (pcVar8 != (code *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_004538cf:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar6,param_2);
LAB_004538da:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


