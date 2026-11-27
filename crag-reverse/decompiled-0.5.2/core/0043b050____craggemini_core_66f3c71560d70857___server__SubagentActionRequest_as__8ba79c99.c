// 0043b050 <<craggemini_core[66f3c71560d70857]::server::SubagentActionRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::SubagentActionRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::SubagentActionRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2)

{
  char (*pacVar1) [4];
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *unaff_RBP;
  char *unaff_R12;
  char *unaff_R13;
  char *pcVar9;
  char *pcVar10;
  char *unaff_R14;
  char *local_c0;
  char *local_b8;
  undefined8 local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  undefined1 local_71;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined8 *local_50;
  char *local_48;
  char *local_40;
  undefined1 local_38;
  
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  local_50 = param_1;
  if (uVar4 < uVar7) {
    pcVar8 = (char *)-uVar7;
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pacVar1 = (char (*) [4])(param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_68 = (char *)CONCAT71(local_68._1_7_,1);
            local_70 = param_2;
            unaff_R14 = (char *)<serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                                ::next_element_seed::has_next_element::
                                <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8,&local_70)
            ;
            if ((char)local_a8 == '\x01') {
              local_c0 = local_a0;
LAB_0043b629:
              local_b8 = (char *)0xffffffffffffffff;
              pcVar10 = unaff_R13;
            }
            else {
              if (local_a8._1_1_ != '\x01') {
                unaff_R14 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                    ::invalid_length(0,&PTR_DAT_00789f60,&DAT_00789c78);
                local_c0 = unaff_R14;
                goto LAB_0043b629;
              }
              unaff_R14 = (char *)deserialize_string::
                                  <serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                            (&local_a8,local_70);
              pcVar10 = local_98;
              local_c0 = local_a0;
              local_b8 = local_a8;
              if (local_a8 == (char *)0xffffffffffffffff) goto LAB_0043b629;
              unaff_R14 = (char *)<serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                                  ::next_element_seed::has_next_element::
                                  <serde_json[dc3825464c436029]::read::SliceRead>
                                            (&local_a8,&local_70);
              if ((char)local_a8 == '\x01') {
                pcVar8 = local_a0;
LAB_0043b3ca:
                local_c0 = pcVar8;
                if (local_b8 != (char *)0x0) {
                  unaff_R14 = (char *)(*(code *)PTR___rust_dealloc_00798fc8)();
                }
                local_b8 = (char *)0xffffffffffffffff;
                unaff_R12 = local_c0;
              }
              else {
                if (local_a8._1_1_ == '\x01') {
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (&local_a8,local_70);
                  unaff_R14 = local_a8;
                  pcVar8 = local_a0;
                  if (local_a8 == (char *)0xfffffffffffffffe) goto LAB_0043b3ca;
                  unaff_R14 = local_98;
                }
                else {
                  local_a8 = (char *)0xfffffffffffffffe;
                  unaff_R14 = pcVar8;
                  local_a0 = unaff_R12;
                }
                unaff_RBP = (char *)0xffffffffffffffff;
                if (local_a8 != (char *)0xfffffffffffffffe) {
                  unaff_RBP = local_a8;
                }
                unaff_R12 = local_a0;
              }
            }
            (*(char (*) [4])(param_2 + 0x38))[0] = (*(char (*) [4])(param_2 + 0x38))[0] + '\x01';
            local_a8 = local_b8;
            local_a0 = local_c0;
            local_98 = pcVar10;
            local_90 = unaff_RBP;
            local_88 = unaff_R12;
            local_80 = unaff_R14;
            pcVar8 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq();
            goto LAB_0043b65e;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_invalid_type(param_2,&local_71,&DAT_0078a760);
            goto LAB_0043b6e8;
          }
          pacVar1 = (char (*) [4])(param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_38 = 1;
            local_b8 = (char *)0xffffffffffffffff;
            pcVar8 = (char *)0xfffffffffffffffe;
            local_40 = param_2;
            goto LAB_0043b113;
          }
        }
        local_a8 = (char *)0x18;
        goto LAB_0043b0b8;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != uVar7);
  }
  local_a8 = (char *)0x5;
LAB_0043b0b8:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a8);
  goto LAB_0043b6f3;
LAB_0043b113:
  unaff_RBP = pcVar8;
  pcVar6 = (char *)<serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
                   ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                             (&local_a8,&local_40);
  pcVar10 = local_40;
  pcVar9 = local_48;
  pcVar8 = local_a0;
  if ((char)local_a8 == '\x01') goto joined_r0x0043b52f;
  if (local_a8._1_1_ != '\x01') {
    if (local_b8 == (char *)0xffffffffffffffff) {
      local_70 = &DAT_00194e92;
      local_68 = &DAT_00000006;
      local_a8 = (char *)&local_70;
      local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar8 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_a8);
      goto LAB_0043b443;
    }
    pcVar10 = local_48;
    if (unaff_RBP == (char *)0xfffffffffffffffe) {
      unaff_RBP = (char *)0xffffffffffffffff;
      unaff_R14 = pcVar6;
    }
    else {
      unaff_R12 = local_58;
    }
    goto LAB_0043b566;
  }
  pacVar1 = (char (*) [4])(local_40 + 0x18);
  *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
  *(longlong *)(local_40 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f8)();
  pcVar8 = local_a0;
  unaff_R12 = unaff_RBP;
  unaff_R13 = pcVar10;
  if ((int)local_a8 == 2) goto joined_r0x0043b52f;
  if (local_98 != &DAT_00000006) {
    if ((local_98 != (char *)0xb) ||
       (*(longlong *)(local_a0 + 3) != CONCAT35(s_agent_id_0019fc37._5_3_,s_agent_id_0019fc37._0_5_)
        || *(longlong *)local_a0 !=
           CONCAT53(s_agent_id_0019fc37._0_5_,
                    anon_1b4a85c95499e1b671cf4fa96a1b6d0f_30_llvm_10049508496007902178))) {
LAB_0043b503:
      pcVar8 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::unknown_field(local_a0,local_98,
                                       &
                                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_31_llvm_10049508496007902178
                                       ,2);
      goto joined_r0x0043b52f;
    }
    if (unaff_RBP != (char *)0xfffffffffffffffe) {
      local_70 = &DAT_0019469a;
LAB_0043b73b:
      local_68 = local_98;
      local_a8 = (char *)&local_70;
      local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar8 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                  ,&local_a8);
      goto joined_r0x0043b52f;
    }
    uVar7 = *(ulonglong *)(pcVar10 + 0x28);
    if (uVar7 < *(ulonglong *)(pcVar10 + 0x20)) {
      lVar3 = *(longlong *)pacVar1;
      while( true ) {
        uVar7 = uVar7 + 1;
        uVar4 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
        if (0x3a < uVar4) goto LAB_0043b785;
        if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar10 + 0x28) = uVar7;
        if (uVar7 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0043b3ef;
      }
      if (uVar4 == 0x3a) {
        *(ulonglong *)(pcVar10 + 0x28) = uVar7;
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
        ::deserialize::
        <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  (&local_70,pcVar10);
        local_58 = local_68;
        if (local_70 == (char *)0xfffffffffffffffe) {
          local_c0 = local_68;
          pcVar8 = local_70;
          goto LAB_0043b544;
        }
        pcVar8 = local_70;
        unaff_R14 = local_60;
        goto LAB_0043b113;
      }
LAB_0043b785:
      local_a8 = &DAT_00000006;
      local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar10,&local_a8);
    }
    else {
LAB_0043b3ef:
      local_a8 = (char *)0x3;
      local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar10,&local_a8);
    }
    pcVar8 = (char *)0xfffffffffffffffe;
    goto LAB_0043b544;
  }
  if (*(char (*) [2])*(char (*) [4])(local_a0 + 4) != s_on_0019fc0e ||
      *(char (*) [4])local_a0 != anon_1b4a85c95499e1b671cf4fa96a1b6d0f_16_llvm_10049508496007902178)
  goto LAB_0043b503;
  if (local_b8 != (char *)0xffffffffffffffff) {
    local_70 = &DAT_00194e92;
    goto LAB_0043b73b;
  }
  uVar7 = *(ulonglong *)(pcVar10 + 0x28);
  pcVar9 = pcVar10;
  if (*(ulonglong *)(pcVar10 + 0x20) <= uVar7) {
LAB_0043b41e:
    local_a8 = (char *)0x3;
    pcVar8 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pcVar10,&local_a8);
LAB_0043b443:
    pcVar10 = pcVar9;
LAB_0043b446:
    local_b8 = (char *)0xffffffffffffffff;
    unaff_R13 = pcVar10;
    goto joined_r0x0043b52f;
  }
  lVar3 = *(longlong *)pacVar1;
  while( true ) {
    uVar7 = uVar7 + 1;
    uVar4 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
    if (0x3a < uVar4) goto LAB_0043b7b1;
    if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(pcVar10 + 0x28) = uVar7;
    if (uVar7 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0043b41e;
  }
  if (uVar4 != 0x3a) {
LAB_0043b7b1:
    local_a8 = &DAT_00000006;
    pcVar8 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pcVar10,&local_a8);
    goto LAB_0043b443;
  }
  *(ulonglong *)(pcVar10 + 0x28) = uVar7;
  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_70,pcVar10);
  local_b8 = local_70;
  if (local_70 == (char *)0xffffffffffffffff) {
    pcVar8 = local_68;
    goto LAB_0043b446;
  }
  local_48 = local_60;
  local_c0 = local_68;
  pcVar8 = unaff_RBP;
  goto LAB_0043b113;
joined_r0x0043b52f:
  pcVar10 = unaff_R13;
  local_c0 = pcVar8;
  pcVar8 = unaff_RBP;
  if (unaff_RBP + -1 < (char *)0xfffffffffffffffd) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_0043b544:
  unaff_R14 = local_b8 + -1;
  if (unaff_R14 < (char *)0xfffffffffffffffe) {
    unaff_R14 = (char *)(*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_b8 = (char *)0xffffffffffffffff;
  unaff_RBP = pcVar8;
LAB_0043b566:
  (*(char (*) [4])(param_2 + 0x38))[0] = (*(char (*) [4])(param_2 + 0x38))[0] + '\x01';
  local_a8 = local_b8;
  local_a0 = local_c0;
  local_98 = pcVar10;
  local_90 = unaff_RBP;
  local_88 = unaff_R12;
  local_80 = unaff_R14;
  pcVar8 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map();
LAB_0043b65e:
  if (local_b8 == (char *)0xffffffffffffffff) {
    if (pcVar8 != (char *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar8);
    }
  }
  else {
    if (pcVar8 == (char *)0x0) {
      local_50[2] = pcVar10;
      local_50[3] = unaff_RBP;
      local_50[4] = unaff_R12;
      local_50[5] = unaff_R14;
      *local_50 = local_b8;
      local_50[1] = local_c0;
      return local_50;
    }
    if (local_b8 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    local_c0 = pcVar8;
    if (unaff_RBP + -1 < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(unaff_RBP + -1,1);
    }
  }
LAB_0043b6e8:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_c0,param_2);
LAB_0043b6f3:
  local_50[1] = uVar5;
  *local_50 = 0xffffffffffffffff;
  return local_50;
}


