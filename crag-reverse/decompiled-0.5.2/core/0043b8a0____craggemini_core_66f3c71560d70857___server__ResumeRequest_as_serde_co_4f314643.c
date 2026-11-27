// 0043b8a0 <<craggemini_core[66f3c71560d70857]::server::ResumeRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::ResumeRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::ResumeRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2)

{
  char (*pacVar1) [8];
  byte bVar2;
  char acVar3 [8];
  undefined8 uVar4;
  char *pcVar5;
  char acVar6 [8];
  char *pcVar7;
  char *unaff_RBP;
  ulonglong uVar8;
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
  
  acVar6 = *(char (*) [8])(param_2 + 0x20);
  acVar3 = *(char (*) [8])(param_2 + 0x28);
  local_50 = param_1;
  if ((ulonglong)acVar3 < (ulonglong)acVar6) {
    pcVar7 = (char *)-(longlong)acVar6;
    do {
      acVar3 = (char  [8])((longlong)acVar3 + 1);
      bVar2 = *(byte *)((longlong)*(char (*) [8])(param_2 + 0x18) + -1 + (longlong)acVar3);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pacVar1 = (char (*) [8])(param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(char (*) [8])(param_2 + 0x28) = acVar3;
            local_68 = (char *)CONCAT71(local_68._1_7_,1);
            local_70 = param_2;
            unaff_R14 = (char *)<serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                                ::next_element_seed::has_next_element::
                                <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8,&local_70)
            ;
            if ((char)local_a8 == '\x01') {
              local_c0 = local_a0;
LAB_0043be79:
              local_b8 = (char *)0xffffffffffffffff;
              pcVar10 = unaff_R13;
            }
            else {
              if (local_a8._1_1_ != '\x01') {
                unaff_R14 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                    ::invalid_length(0,&PTR_DAT_00789f70,&DAT_00789c78);
                local_c0 = unaff_R14;
                goto LAB_0043be79;
              }
              unaff_R14 = (char *)deserialize_string::
                                  <serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                            (&local_a8,local_70);
              pcVar10 = local_98;
              local_c0 = local_a0;
              local_b8 = local_a8;
              if (local_a8 == (char *)0xffffffffffffffff) goto LAB_0043be79;
              unaff_R14 = (char *)<serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                                  ::next_element_seed::has_next_element::
                                  <serde_json[dc3825464c436029]::read::SliceRead>
                                            (&local_a8,&local_70);
              if ((char)local_a8 == '\x01') {
                pcVar7 = local_a0;
LAB_0043bc1a:
                local_c0 = pcVar7;
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
                  pcVar7 = local_a0;
                  if (local_a8 == (char *)0xfffffffffffffffe) goto LAB_0043bc1a;
                  unaff_R14 = local_98;
                }
                else {
                  local_a8 = (char *)0xfffffffffffffffe;
                  unaff_R14 = pcVar7;
                  local_a0 = unaff_R12;
                }
                unaff_RBP = (char *)0xffffffffffffffff;
                if (local_a8 != (char *)0xfffffffffffffffe) {
                  unaff_RBP = local_a8;
                }
                unaff_R12 = local_a0;
              }
            }
            (*(char (*) [8])(param_2 + 0x38))[0] = (*(char (*) [8])(param_2 + 0x38))[0] + '\x01';
            local_a8 = local_b8;
            local_a0 = local_c0;
            local_98 = pcVar10;
            local_90 = unaff_RBP;
            local_88 = unaff_R12;
            local_80 = unaff_R14;
            pcVar7 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq();
            goto LAB_0043beae;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_invalid_type(param_2,&local_71,&DAT_0078a780);
            goto LAB_0043bf38;
          }
          pacVar1 = (char (*) [8])(param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(char (*) [8])(param_2 + 0x28) = acVar3;
            local_38 = 1;
            local_b8 = (char *)0xffffffffffffffff;
            pcVar7 = (char *)0xfffffffffffffffe;
            local_40 = param_2;
            goto LAB_0043b963;
          }
        }
        local_a8 = (char *)0x18;
        goto LAB_0043b908;
      }
      *(char (*) [8])(param_2 + 0x28) = acVar3;
    } while (acVar3 != acVar6);
  }
  local_a8 = (char *)0x5;
LAB_0043b908:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a8);
  goto LAB_0043bf43;
LAB_0043b963:
  unaff_RBP = pcVar7;
  pcVar5 = (char *)<serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
                   ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                             (&local_a8,&local_40);
  pcVar10 = local_40;
  pcVar9 = local_48;
  pcVar7 = local_a0;
  if ((char)local_a8 == '\x01') goto joined_r0x0043bd7f;
  if (local_a8._1_1_ != '\x01') {
    if (local_b8 == (char *)0xffffffffffffffff) {
      local_70 = &DAT_00194648;
      local_68 = &DAT_0000000f;
      local_a8 = (char *)&local_70;
      local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar7 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_a8);
      goto LAB_0043bc93;
    }
    pcVar10 = local_48;
    if (unaff_RBP == (char *)0xfffffffffffffffe) {
      unaff_RBP = (char *)0xffffffffffffffff;
      unaff_R14 = pcVar5;
    }
    else {
      unaff_R12 = local_58;
    }
    goto LAB_0043bdb6;
  }
  pacVar1 = (char (*) [8])(local_40 + 0x18);
  *(char (*) [8])(local_40 + 0x28) = (char  [8])((longlong)*(char (*) [8])(local_40 + 0x28) + 1);
  *(char (*) [8])(local_40 + 0x10) = (char  [8])0x0;
  (*(code *)PTR_parse_str_007998f8)();
  pcVar7 = local_a0;
  unaff_R12 = unaff_RBP;
  unaff_R13 = pcVar10;
  if ((int)local_a8 == 2) goto joined_r0x0043bd7f;
  if (local_98 != &DAT_0000000f) {
    if ((local_98 != (char *)0xa) ||
       (*(char (*) [2])*(char (*) [8])(local_a0 + 8) != s_id_0019fc56 ||
        *(char (*) [8])local_a0 !=
        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_34_llvm_10049508496007902178)) {
LAB_0043bd53:
      pcVar7 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::unknown_field(local_a0,local_98,
                                       &
                                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_35_llvm_10049508496007902178
                                       ,2);
      goto joined_r0x0043bd7f;
    }
    if (unaff_RBP != (char *)0xfffffffffffffffe) {
      local_70 = &DAT_00194632;
LAB_0043bf8b:
      local_68 = local_98;
      local_a8 = (char *)&local_70;
      local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar7 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                  ,&local_a8);
      goto joined_r0x0043bd7f;
    }
    acVar6 = *(char (*) [8])(pcVar10 + 0x28);
    if ((ulonglong)acVar6 < (ulonglong)*(char (*) [8])(pcVar10 + 0x20)) {
      acVar3 = *pacVar1;
      while( true ) {
        acVar6 = (char  [8])((longlong)acVar6 + 1);
        uVar8 = (ulonglong)*(byte *)((longlong)acVar3 + -1 + (longlong)acVar6);
        if (0x3a < uVar8) goto LAB_0043bfd5;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        *(char (*) [8])(pcVar10 + 0x28) = acVar6;
        if (acVar6 == *(char (*) [8])(pcVar10 + 0x20)) goto LAB_0043bc3f;
      }
      if (uVar8 == 0x3a) {
        *(char (*) [8])(pcVar10 + 0x28) = acVar6;
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
        ::deserialize::
        <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  (&local_70,pcVar10);
        local_58 = local_68;
        if (local_70 == (char *)0xfffffffffffffffe) {
          local_c0 = local_68;
          pcVar7 = local_70;
          goto LAB_0043bd94;
        }
        pcVar7 = local_70;
        unaff_R14 = local_60;
        goto LAB_0043b963;
      }
LAB_0043bfd5:
      local_a8 = &DAT_00000006;
      local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar10,&local_a8);
    }
    else {
LAB_0043bc3f:
      local_a8 = (char *)0x3;
      local_c0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pcVar10,&local_a8);
    }
    pcVar7 = (char *)0xfffffffffffffffe;
    goto LAB_0043bd94;
  }
  acVar6[7] = s_ation_id_0019fc46[0];
  acVar6[0] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[0];
  acVar6[1] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[1];
  acVar6[2] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[2];
  acVar6[3] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[3];
  acVar6[4] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[4];
  acVar6[5] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[5];
  acVar6[6] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_33_llvm_10049508496007902178[6];
  if (*(longlong *)(local_a0 + 7) != CONCAT71(s_ation_id_0019fc46._1_7_,s_ation_id_0019fc46[0]) ||
      *(char (*) [8])local_a0 != acVar6) goto LAB_0043bd53;
  if (local_b8 != (char *)0xffffffffffffffff) {
    local_70 = &DAT_00194648;
    goto LAB_0043bf8b;
  }
  acVar6 = *(char (*) [8])(pcVar10 + 0x28);
  pcVar9 = pcVar10;
  if ((ulonglong)*(char (*) [8])(pcVar10 + 0x20) <= (ulonglong)acVar6) {
LAB_0043bc6e:
    local_a8 = (char *)0x3;
    pcVar7 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pcVar10,&local_a8);
LAB_0043bc93:
    pcVar10 = pcVar9;
LAB_0043bc96:
    local_b8 = (char *)0xffffffffffffffff;
    unaff_R13 = pcVar10;
    goto joined_r0x0043bd7f;
  }
  acVar3 = *pacVar1;
  while( true ) {
    acVar6 = (char  [8])((longlong)acVar6 + 1);
    uVar8 = (ulonglong)*(byte *)((longlong)acVar3 + -1 + (longlong)acVar6);
    if (0x3a < uVar8) goto LAB_0043c001;
    if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
    *(char (*) [8])(pcVar10 + 0x28) = acVar6;
    if (acVar6 == *(char (*) [8])(pcVar10 + 0x20)) goto LAB_0043bc6e;
  }
  if (uVar8 != 0x3a) {
LAB_0043c001:
    local_a8 = &DAT_00000006;
    pcVar7 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pcVar10,&local_a8);
    goto LAB_0043bc93;
  }
  *(char (*) [8])(pcVar10 + 0x28) = acVar6;
  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_70,pcVar10);
  local_b8 = local_70;
  if (local_70 == (char *)0xffffffffffffffff) {
    pcVar7 = local_68;
    goto LAB_0043bc96;
  }
  local_48 = local_60;
  local_c0 = local_68;
  pcVar7 = unaff_RBP;
  goto LAB_0043b963;
joined_r0x0043bd7f:
  pcVar10 = unaff_R13;
  local_c0 = pcVar7;
  pcVar7 = unaff_RBP;
  if (unaff_RBP + -1 < (char *)0xfffffffffffffffd) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_0043bd94:
  unaff_R14 = local_b8 + -1;
  if (unaff_R14 < (char *)0xfffffffffffffffe) {
    unaff_R14 = (char *)(*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_b8 = (char *)0xffffffffffffffff;
  unaff_RBP = pcVar7;
LAB_0043bdb6:
  (*(char (*) [8])(param_2 + 0x38))[0] = (*(char (*) [8])(param_2 + 0x38))[0] + '\x01';
  local_a8 = local_b8;
  local_a0 = local_c0;
  local_98 = pcVar10;
  local_90 = unaff_RBP;
  local_88 = unaff_R12;
  local_80 = unaff_R14;
  pcVar7 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map();
LAB_0043beae:
  if (local_b8 == (char *)0xffffffffffffffff) {
    if (pcVar7 != (char *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar7);
    }
  }
  else {
    if (pcVar7 == (char *)0x0) {
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
    local_c0 = pcVar7;
    if (unaff_RBP + -1 < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(unaff_RBP + -1,1);
    }
  }
LAB_0043bf38:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_c0,param_2);
LAB_0043bf43:
  local_50[1] = uVar4;
  *local_50 = 0xffffffffffffffff;
  return local_50;
}


