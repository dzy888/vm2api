// 00432460 <<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  longlong lVar7;
  ulonglong uVar8;
  char *local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  char *local_90;
  code *local_88;
  undefined8 *local_78;
  uint local_70;
  undefined1 local_69;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined4 local_4c;
  char *local_48;
  char *local_40;
  undefined1 local_38;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        local_78 = param_1;
        if (bVar3 != 0x5b) {
          if (bVar3 != 0x7b) {
            local_b8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_invalid_type(param_2,&local_69,&DAT_0078a600);
            goto LAB_00432a9c;
          }
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_38 = 1;
            local_70 = 0;
            local_c0 = (char *)0xffffffffffffffff;
            local_48 = &DAT_001945d5;
            local_40 = param_2;
            goto LAB_00432540;
          }
LAB_00432ba2:
          local_b0 = (char *)0x18;
          goto LAB_004324c6;
        }
        pcVar1 = param_2 + 0x38;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') goto LAB_00432ba2;
        *(ulonglong *)(param_2 + 0x28) = uVar4;
        local_60 = (code *)CONCAT71(local_60._1_7_,1);
        local_68 = param_2;
        <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
        ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                  (&local_b0,&local_68);
        if ((char)local_b0 == '\x01') {
LAB_004327bb:
          local_c0 = (char *)0xffffffffffffffff;
          local_b8 = local_a8;
        }
        else {
          if (local_b0._1_1_ != '\x01') {
            uVar5 = 0;
LAB_00432ac4:
            local_a8 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                               ::invalid_length(uVar5,&PTR_DAT_00789d40,&DAT_00789c78);
            goto LAB_004327bb;
          }
          deserialize_u32::
          <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                    (&local_b0,local_68);
          if ((int)local_b0 == 1) goto LAB_004327bb;
          unaff_EBX = local_b0._4_4_;
          <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
          ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                    (&local_b0,&local_68);
          if ((char)local_b0 == '\x01') goto LAB_004327bb;
          if (local_b0._1_1_ != '\x01') {
            uVar5 = 1;
            goto LAB_00432ac4;
          }
          deserialize_seq::
          <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>>
                    (&local_b0,local_68);
          if (local_b0 == (char *)0xffffffffffffffff) goto LAB_004327bb;
          local_b8 = local_a8;
          unaff_RBP = local_a0;
          local_c0 = local_b0;
        }
        param_2[0x38] = param_2[0x38] + '\x01';
        local_b0 = local_c0;
        local_a8 = local_b8;
        local_a0 = unaff_RBP;
        local_98 = unaff_EBX;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::end_seq(param_2);
        if (local_c0 == (char *)0xffffffffffffffff) goto LAB_00432a3c;
        if (pcVar6 != (code *)0x0) {
          for (lVar7 = unaff_RBP + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(local_b8);
            local_b8 = local_b8 + 0xd8;
          }
          goto LAB_00432a7a;
        }
        goto LAB_004329d6;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_b0 = (char *)0x5;
LAB_004324c6:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_b0);
  goto LAB_00432aa4;
LAB_00432540:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_b0,&local_40);
  pcVar1 = local_40;
  local_90 = local_c0;
  local_88 = local_b8;
  if ((char)local_b0 == '\x01') {
    pcVar6 = local_a8;
    goto joined_r0x0043284b;
  }
  if (local_b0._1_1_ != '\x01') {
    if ((local_70 & 1) == 0) {
      local_68 = &DAT_001945d5;
      local_60 = (code *)&DAT_00000007;
      local_b0 = (char *)&local_68;
      local_a8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_b0);
      goto joined_r0x0043284b;
    }
    if (local_c0 != (char *)0xffffffffffffffff) goto LAB_004329a2;
    local_68 = "receipts";
    local_60 = (code *)&DAT_00000008;
    local_b0 = (char *)&local_68;
    local_a8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_b8 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_b0);
LAB_004328f7:
    local_c0 = (char *)0xffffffffffffffff;
    goto LAB_004329a2;
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
  pcVar6 = local_a8;
  if (local_b0 == (char *)0x2) goto LAB_0043282e;
  if (local_a0 == 8) {
    if (*(longlong *)local_a8 == 0x7374706965636572) {
      if (local_c0 != (char *)0xffffffffffffffff) {
        local_60 = (code *)&DAT_00000008;
        local_48 = "receipts";
        goto LAB_00432be7;
      }
      uVar4 = *(ulonglong *)(pcVar1 + 0x28);
      if (uVar4 < *(ulonglong *)(pcVar1 + 0x20)) {
        lVar7 = *plVar2;
        while( true ) {
          uVar4 = uVar4 + 1;
          uVar8 = (ulonglong)*(byte *)(lVar7 + -1 + uVar4);
          if (0x3a < uVar8) goto LAB_00432c72;
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar1 + 0x28) = uVar4;
          if (uVar4 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_00432b02;
        }
        if (uVar8 != 0x3a) {
LAB_00432c72:
          local_b0 = (char *)0x6;
          local_b8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_error(pcVar1,&local_b0);
          goto LAB_004328f7;
        }
        *(ulonglong *)(pcVar1 + 0x28) = uVar4;
        deserialize_seq::
        <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>>
                  (&local_68,pcVar1);
        if (local_68 == (char *)0xffffffffffffffff) {
          pcVar6 = local_60;
          goto LAB_0043299b;
        }
        local_b8 = local_60;
        local_c0 = local_68;
        unaff_RBP = local_58;
        goto LAB_00432540;
      }
LAB_00432b02:
      local_b0 = (char *)0x3;
      local_b8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar1,&local_b0);
      goto LAB_004328f7;
    }
  }
  else if ((local_a0 == 7) &&
          (*(int *)(local_a8 + 3) == 0x6e6f6973 && *(int *)local_a8 == 0x73726576)) {
    if (local_70 != 0) {
      local_60 = (code *)&DAT_00000007;
LAB_00432be7:
      local_68 = local_48;
      local_b0 = (char *)&local_68;
      local_a8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                  ,&local_b0);
      goto joined_r0x0043284b;
    }
    uVar4 = *(ulonglong *)(pcVar1 + 0x28);
    if (*(ulonglong *)(pcVar1 + 0x20) <= uVar4) {
LAB_00432ace:
      local_b0 = (char *)0x3;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(pcVar1,&local_b0);
      goto joined_r0x0043284b;
    }
    lVar7 = *plVar2;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar8 = (ulonglong)*(byte *)(lVar7 + -1 + uVar4);
      if (0x3a < uVar8) goto LAB_00432c3e;
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar1 + 0x28) = uVar4;
      if (uVar4 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_00432ace;
    }
    if (uVar8 != 0x3a) {
LAB_00432c3e:
      local_b0 = &DAT_00000006;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(pcVar1,&local_b0);
      goto joined_r0x0043284b;
    }
    *(ulonglong *)(pcVar1 + 0x28) = uVar4;
    deserialize_u32::
    <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
              (&local_68,pcVar1);
    if ((int)local_68 == 1) {
      pcVar6 = local_60;
      goto joined_r0x0043284b;
    }
    local_4c = local_68._4_4_;
    local_70 = 1;
    goto LAB_00432540;
  }
  pcVar6 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                   ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                             (pcVar1,plVar2);
  if (pcVar6 != (code *)0x0) goto LAB_0043282e;
  goto LAB_00432540;
LAB_0043282e:
joined_r0x0043284b:
  if (local_c0 != (char *)0xffffffffffffffff) {
    for (lVar7 = unaff_RBP + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(local_b8);
      local_b8 = local_b8 + 0xd8;
    }
    unaff_RBP = 1;
    if (local_c0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_0043299b:
  local_c0 = (char *)0xffffffffffffffff;
  local_b8 = pcVar6;
LAB_004329a2:
  param_2[0x38] = param_2[0x38] + '\x01';
  local_98 = local_4c;
  local_b0 = local_c0;
  local_a8 = local_b8;
  local_a0 = unaff_RBP;
  pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  if (local_c0 == (char *)0xffffffffffffffff) {
LAB_00432a3c:
    if (pcVar6 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar6);
    }
  }
  else {
    if (pcVar6 == (code *)0x0) {
LAB_004329d6:
      local_78[2] = unaff_RBP;
      local_78[3] = CONCAT44(uStack_94,local_98);
      *local_78 = local_c0;
      local_78[1] = local_b8;
      return local_78;
    }
    for (lVar7 = unaff_RBP + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(local_b8);
      local_b8 = local_b8 + 0xd8;
    }
LAB_00432a7a:
    if (local_c0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    local_b8 = pcVar6;
  }
  param_1 = local_78;
LAB_00432a9c:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_b8,param_2);
LAB_00432aa4:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


