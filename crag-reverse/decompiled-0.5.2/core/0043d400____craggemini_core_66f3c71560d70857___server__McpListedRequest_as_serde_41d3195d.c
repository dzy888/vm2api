// 0043d400 <<craggemini_core[66f3c71560d70857]::server::McpListedRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::McpListedRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined1  [16] __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::McpListedRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (char *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  undefined1 local_59;
  code *local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined1 local_38;
  
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
    do {
      uVar6 = uVar6 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = param_1 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_1 + 0x28) = uVar6;
            local_48 = CONCAT71(local_48._1_7_,1);
            local_50 = param_1;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_78,&local_50);
            if ((char)local_78 == '\x01') {
              pcVar7 = local_70;
LAB_0043d51b:
              auVar13._8_8_ = pcVar7;
              auVar13._0_8_ = 1;
            }
            else {
              if (local_78._1_1_ != '\x01') {
                pcVar7 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                 ::invalid_length(0,&PTR_DAT_00789fa0,&DAT_00789c78);
                goto LAB_0043d51b;
              }
              auVar13 = deserialize_u64::
                        <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                  (local_50);
            }
            pcVar7 = auVar13._8_8_;
            param_1[0x38] = param_1[0x38] + '\x01';
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_1);
            if ((auVar13._0_8_ & 1) == 0) goto LAB_0043d553;
            goto LAB_0043d4ca;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_1,&local_59,&DAT_0078a7e0);
            goto LAB_0043d74b;
          }
          pcVar1 = param_1 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_1 + 0x28) = uVar6;
            local_38 = 1;
            local_40 = param_1;
            <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_78,&local_40);
            if ((char)local_78 != '\0') goto LAB_0043d4a8;
            bVar5 = false;
            goto LAB_0043d580;
          }
        }
        local_78 = (char **)0x18;
        goto LAB_0043d45f;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar6;
    } while (uVar6 != *(ulonglong *)(param_1 + 0x20));
  }
  local_78 = (char **)0x5;
LAB_0043d45f:
  pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(param_1,&local_78);
  goto LAB_0043d4e2;
LAB_0043d580:
  do {
    pcVar1 = local_40;
    if (local_78._1_1_ != '\x01') {
      if (bVar5) {
        bVar5 = false;
        pcVar7 = local_58;
      }
      else {
        puVar11 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
LAB_0043d714:
        local_78 = &local_50;
        local_48 = 8;
        local_50 = "revision";
        local_70 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pcVar7 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>(puVar11,&local_78);
        bVar5 = true;
      }
      goto LAB_0043d4b6;
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
    pcVar7 = local_70;
    if ((int)local_78 == 2) goto LAB_0043d4ad;
    if ((local_68 == 8) && (*(longlong *)local_70 == 0x6e6f697369766572)) {
      if (bVar5) {
        puVar11 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
        goto LAB_0043d714;
      }
      uVar6 = *(ulonglong *)(pcVar1 + 0x28);
      if (uVar6 < *(ulonglong *)(pcVar1 + 0x20)) {
        lVar4 = *plVar2;
        while( true ) {
          uVar6 = uVar6 + 1;
          uVar10 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
          if (0x3a < uVar10) goto LAB_0043d697;
          if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar1 + 0x28) = uVar6;
          if (uVar6 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_0043d643;
        }
        if (uVar10 != 0x3a) {
LAB_0043d697:
          local_78 = (char **)&DAT_00000006;
          goto LAB_0043d64b;
        }
        *(ulonglong *)(pcVar1 + 0x28) = uVar6;
        auVar13 = deserialize_u64::
                  <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                            (pcVar1);
        local_58 = auVar13._8_8_;
        bVar5 = true;
        if ((auVar13._0_8_ & 1) == 0) goto LAB_0043d5e6;
      }
      else {
LAB_0043d643:
        local_78 = (char **)0x3;
LAB_0043d64b:
        local_58 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::peek_error(pcVar1,&local_78);
      }
      bVar5 = true;
      pcVar7 = local_58;
      goto LAB_0043d4b6;
    }
    pcVar7 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                     ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                               (pcVar1,plVar2);
    if (pcVar7 != (code *)0x0) goto LAB_0043d4ad;
LAB_0043d5e6:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_78,&local_40);
  } while ((char)local_78 == '\0');
LAB_0043d4a8:
  pcVar7 = local_70;
LAB_0043d4ad:
  bVar5 = true;
LAB_0043d4b6:
  param_1[0x38] = param_1[0x38] + '\x01';
  pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_1);
  if (bVar5) {
LAB_0043d4ca:
    if (pcVar8 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar8);
    }
  }
  else {
LAB_0043d553:
    if (pcVar8 == (code *)0x0) {
      uVar9 = 0;
      goto LAB_0043d55e;
    }
LAB_0043d74b:
    pcVar7 = pcVar8;
  }
  pcVar7 = (code *)::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                   <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                             (pcVar7,param_1);
LAB_0043d4e2:
  uVar9 = 1;
LAB_0043d55e:
  auVar12._8_8_ = pcVar7;
  auVar12._0_8_ = uVar9;
  return auVar12;
}


