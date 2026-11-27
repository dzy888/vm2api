// 0043a3d0 <<craggemini_core[66f3c71560d70857]::server::LiveControlRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::LiveControlRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::LiveControlRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,char *param_5,
          char *param_6)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char (*pacVar8) [4];
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar9;
  char *pcVar10;
  char *unaff_RBP;
  ulonglong uVar11;
  char *pcVar12;
  char *unaff_R12;
  undefined **unaff_R13;
  char *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined1 local_59;
  undefined8 *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined1 local_38;
  
  uVar11 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < uVar11) {
    pcVar7 = (char *)-uVar11;
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          plVar1 = (longlong *)(param_2 + 0x38);
          *(char *)plVar1 = (char)*plVar1 + -1;
          if ((char)*plVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_b8 = (char *)CONCAT71(local_b8._1_7_,1);
            unaff_R13 = &local_c0;
            local_c0 = param_2;
            auVar14 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8);
            if ((char)local_a8 == '\x01') {
LAB_0043ac7c:
              local_d8 = (char *)0xffffffffffffffff;
              pcVar10 = unaff_R12;
              pcVar12 = local_a0;
            }
            else {
              if (local_a8._1_1_ != '\x01') {
                unaff_R13 = &PTR_DAT_00789f50;
                auVar14 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789f50,&DAT_00789c78);
                local_a0 = auVar14._0_8_;
                goto LAB_0043ac7c;
              }
              unaff_R13 = (undefined **)local_c0;
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_a8);
              pcVar10 = local_98;
              pcVar12 = local_a0;
              local_d8 = local_a8;
              auVar14._8_8_ = extraout_RDX_03;
              auVar14._0_8_ = local_a8;
              if (local_a8 == (char *)0xffffffffffffffff) goto LAB_0043ac7c;
              unaff_R13 = &local_c0;
              auVar15 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8);
              if ((char)local_a8 == '\x01') {
                unaff_RBP = local_a0;
LAB_0043a9fa:
                if (local_d8 != (char *)0x0) {
                  uVar9 = 1;
                  uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)();
                  auVar15._8_8_ = uVar9;
                  auVar15._0_8_ = uVar5;
                  unaff_R13 = (undefined **)local_d8;
                }
                local_d8 = (char *)0xffffffffffffffff;
                pcVar12 = unaff_RBP;
                auVar14 = auVar15;
              }
              else {
                if (local_a8._1_1_ == '\x01') {
                  unaff_R13 = (undefined **)local_c0;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (&local_a8);
                  auVar15._8_8_ = extraout_RDX_04;
                  auVar15._0_8_ = local_a8;
                  local_e8 = local_a8;
                  unaff_RBP = local_a0;
                  if (local_a8 == (char *)0xfffffffffffffffe) goto LAB_0043a9fa;
                  pcVar6 = local_98;
                }
                else {
                  local_e8 = (char *)0xffffffffffffffff;
                  pcVar6 = pcVar12;
                }
                auVar14._8_8_ = pcVar6;
                auVar14._0_8_ = local_e8;
                unaff_R13 = &local_c0;
                auVar15 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                          ::next_element_seed::has_next_element::
                          <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8);
                if ((char)local_a8 == '\x01') {
                  pcVar6 = local_a0;
LAB_0043a9d7:
                  unaff_RBP = pcVar6;
                  if (0 < (longlong)local_e8) {
                    uVar9 = 1;
                    uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)();
                    auVar15._8_8_ = uVar9;
                    auVar15._0_8_ = uVar5;
                  }
                  unaff_R13 = (undefined **)local_e8;
                  goto LAB_0043a9fa;
                }
                if (local_a8._1_1_ == '\x01') {
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (&local_a8,local_c0);
                  auVar15._8_8_ = pcVar6;
                  auVar15._0_8_ = local_a8;
                  pcVar6 = local_a0;
                  if (local_a8 == (char *)0xfffffffffffffffe) goto LAB_0043a9d7;
                  pcVar7 = local_a0;
                  unaff_R13 = (undefined **)local_98;
                }
                else {
                  local_a8 = (char *)0xfffffffffffffffe;
                }
                param_5 = (char *)0xffffffffffffffff;
                if (local_a8 != (char *)0xfffffffffffffffe) {
                  param_5 = local_a8;
                }
              }
            }
            local_80 = auVar14._8_8_;
            param_2[0x38] = (char)*(longlong *)(param_2 + 0x38) + '\x01';
            local_a8 = local_d8;
            local_a0 = pcVar12;
            local_98 = pcVar10;
            local_90 = auVar14._0_8_;
            local_88 = unaff_RBP;
            local_78 = param_5;
            local_70 = pcVar7;
            local_68 = (char *)unaff_R13;
            local_f0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::end_seq(param_2);
            pcVar6 = local_f0;
            if (local_d8 == (char *)0xffffffffffffffff) goto LAB_0043ad3f;
            pcVar13 = param_5;
            local_e0 = unaff_RBP;
            local_c8 = pcVar7;
            if (local_f0 == (char *)0x0) goto LAB_0043acf3;
            if (local_d8 != (char *)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            pcVar7 = auVar14._0_8_ + -1;
            if (pcVar7 < (char *)0xfffffffffffffffe) {
              (*(code *)PTR___rust_dealloc_00798fc8)(pcVar7,1);
            }
            pacVar8 = (char (*) [4])(param_5 + -1);
            if (pacVar8 < (char (*) [4])0xfffffffffffffffe) goto LAB_0043adb7;
            goto LAB_0043adc0;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            local_f0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_invalid_type(param_2,&local_59,&DAT_0078a740);
            goto LAB_0043adc0;
          }
          plVar1 = (longlong *)(param_2 + 0x38);
          *(char *)plVar1 = (char)*plVar1 + -1;
          if ((char)*plVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar4;
            local_38 = 1;
            local_e8 = (char *)0xfffffffffffffffe;
            local_d8 = (char *)0xffffffffffffffff;
            pcVar13 = (char *)0xfffffffffffffffe;
            local_58 = param_1;
            local_40 = param_2;
            goto LAB_0043a4a3;
          }
        }
        local_a8 = (char *)0x18;
        goto LAB_0043a436;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != uVar11);
  }
  local_a8 = (char *)0x5;
LAB_0043a436:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a8);
  goto LAB_0043adcb;
LAB_0043a4a3:
  local_e0 = unaff_RBP;
LAB_0043a4a8:
  do {
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_a8,&local_40);
    pcVar12 = local_40;
    auVar16._8_8_ = extraout_RDX;
    auVar16._0_8_ = local_a0;
    if ((char)local_a8 == '\x01') goto LAB_0043aab1;
    if (local_a8._1_1_ != '\x01') {
      if (local_d8 == (char *)0xffffffffffffffff) {
        local_c0 = &DAT_00194e92;
        local_b8 = &DAT_00000006;
        local_a8 = (char *)&local_c0;
        local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             &local_a8);
        goto LAB_0043aaaa;
      }
      if (local_e8 == (char *)0xfffffffffffffffe) {
        local_e8 = (char *)0xffffffffffffffff;
      }
      if (pcVar13 == (char *)0xfffffffffffffffe) {
        local_c8 = pcVar7;
        unaff_R13 = (undefined **)param_5;
        pcVar13 = (char *)0xffffffffffffffff;
      }
      pcVar10 = local_48;
      local_80 = local_50;
      pcVar12 = local_f0;
      param_1 = local_58;
      goto LAB_0043ab1d;
    }
    plVar1 = (longlong *)(local_40 + 0x18);
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    *(longlong *)(local_40 + 0x10) = 0;
    pcVar10 = local_40;
    (*(code *)PTR_parse_str_007998f8)();
    auVar16._8_8_ = pcVar10;
    auVar16._0_8_ = local_a0;
    if ((int)local_a8 == 2) goto LAB_0043aab1;
    if (local_98 == &DAT_00000006) break;
    if (local_98 == &DAT_00000009) {
      if ((char)*(longlong *)(local_a0 + 8) != s_d_0019fc33[0] ||
          *(char (*) [8])local_a0 !=
          anon_1b4a85c95499e1b671cf4fa96a1b6d0f_26_llvm_10049508496007902178) goto LAB_0043a980;
      if (local_e8 != (char *)0xfffffffffffffffe) {
        pcVar7 = &DAT_00194ee9;
        goto LAB_0043ae46;
      }
      pcVar10 = *(char **)(pcVar12 + 0x20);
      pcVar6 = *(char **)(pcVar12 + 0x28);
      pcVar7 = pcVar10;
      if (pcVar6 < pcVar10) {
        lVar3 = *plVar1;
        pcVar7 = (char *)-(longlong)pcVar10;
        while( true ) {
          pcVar6 = pcVar6 + 1;
          uVar11 = (ulonglong)(byte)pcVar6[lVar3 + -1];
          if (0x3a < uVar11) goto LAB_0043aefd;
          if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
          *(char **)(pcVar12 + 0x28) = pcVar6;
          if (pcVar6 == pcVar10) goto LAB_0043a876;
        }
        if (uVar11 == 0x3a) {
          *(char **)(pcVar12 + 0x28) = pcVar6;
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_c0,pcVar12);
          auVar16._8_8_ = extraout_RDX_01;
          auVar16._0_8_ = local_b8;
          local_e8 = local_c0;
          if (local_c0 == (char *)0xfffffffffffffffe) {
            local_e8 = (char *)0xfffffffffffffffe;
            goto LAB_0043aab1;
          }
          local_50 = local_b0;
          local_e0 = local_b8;
          goto LAB_0043a4a8;
        }
LAB_0043aefd:
        local_a8 = &DAT_00000006;
        auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pcVar12,&local_a8);
      }
      else {
LAB_0043a876:
        local_a8 = (char *)0x3;
        auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pcVar12,&local_a8);
      }
      local_e8 = (char *)0xfffffffffffffffe;
      goto LAB_0043aab1;
    }
    if ((local_98 != &DAT_00000008) ||
       (*(longlong *)local_a0 !=
        anon_1b4a85c95499e1b671cf4fa96a1b6d0f_27_llvm_10049508496007902178._0_8_))
    goto LAB_0043a980;
    if (pcVar13 != (char *)0xfffffffffffffffe) {
      pcVar7 = "argumentEnvelope";
      goto LAB_0043ae46;
    }
    pcVar10 = *(char **)(pcVar12 + 0x20);
    pcVar6 = *(char **)(pcVar12 + 0x28);
    pcVar7 = pcVar10;
    if (pcVar10 <= pcVar6) {
LAB_0043a842:
      local_a8 = (char *)0x3;
      auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar12,&local_a8);
      goto LAB_0043aace;
    }
    lVar3 = *plVar1;
    pcVar7 = (char *)-(longlong)pcVar10;
    while( true ) {
      pcVar6 = pcVar6 + 1;
      uVar11 = (ulonglong)(byte)pcVar6[lVar3 + -1];
      if (0x3a < uVar11) goto LAB_0043ae84;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
      *(char **)(pcVar12 + 0x28) = pcVar6;
      if (pcVar6 == pcVar10) goto LAB_0043a842;
    }
    if (uVar11 != 0x3a) {
LAB_0043ae84:
      local_a8 = &DAT_00000006;
      auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar12,&local_a8);
      goto LAB_0043aace;
    }
    *(char **)(pcVar12 + 0x28) = pcVar6;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_c0,pcVar12);
    auVar16._8_8_ = extraout_RDX_00;
    auVar16._0_8_ = local_b8;
    local_c8 = local_b8;
    if (local_c0 == (char *)0xfffffffffffffffe) goto LAB_0043aace;
    unaff_R13 = (undefined **)local_b0;
    pcVar13 = local_c0;
  } while( true );
  if (*(char (*) [2])(local_a0 + 4) != s_on_0019fc0e ||
      *(char (*) [4])local_a0 != anon_1b4a85c95499e1b671cf4fa96a1b6d0f_16_llvm_10049508496007902178)
  {
LAB_0043a980:
    pcVar7 = (char *)0x3;
    auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::unknown_field(local_a0,local_98,
                              &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_28_llvm_10049508496007902178);
    goto LAB_0043aab1;
  }
  if (local_d8 != (char *)0xffffffffffffffff) {
    pcVar7 = &DAT_00194e92;
LAB_0043ae46:
    local_b8 = local_98;
    local_a8 = (char *)&local_c0;
    local_a0 = (char *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_c0 = pcVar7;
    auVar16 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_a8);
    goto LAB_0043aab1;
  }
  pcVar10 = *(char **)(pcVar12 + 0x20);
  pcVar6 = *(char **)(pcVar12 + 0x28);
  pcVar7 = pcVar10;
  if (pcVar6 < pcVar10) {
    lVar3 = *plVar1;
    pcVar7 = (char *)-(longlong)pcVar10;
    while( true ) {
      pcVar6 = pcVar6 + 1;
      uVar11 = (ulonglong)(byte)pcVar6[lVar3 + -1];
      if (0x3a < uVar11) goto LAB_0043aed1;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
      *(char **)(pcVar12 + 0x28) = pcVar6;
      if (pcVar6 == pcVar10) goto LAB_0043a8b5;
    }
    if (uVar11 != 0x3a) {
LAB_0043aed1:
      local_a8 = &DAT_00000006;
      auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar12,&local_a8);
      goto LAB_0043aaaa;
    }
    *(char **)(pcVar12 + 0x28) = pcVar6;
    deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_c0,pcVar12);
    auVar16._8_8_ = extraout_RDX_02;
    auVar16._0_8_ = local_b8;
    local_d8 = local_c0;
    if (local_c0 == (char *)0xffffffffffffffff) goto LAB_0043aaaa;
    local_48 = local_b0;
    local_f0 = local_b8;
    unaff_RBP = local_e0;
    goto LAB_0043a4a3;
  }
LAB_0043a8b5:
  local_a8 = (char *)0x3;
  auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(pcVar12,&local_a8);
LAB_0043aaaa:
  local_d8 = (char *)0xffffffffffffffff;
LAB_0043aab1:
  uVar5 = auVar16._0_8_;
  if ((char (*) [4])(pcVar13 + -1) < (char (*) [4])0xfffffffffffffffd) {
    uVar9 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar16._8_8_ = uVar9;
    auVar16._0_8_ = uVar5;
  }
LAB_0043aace:
  param_1 = local_58;
  pcVar10 = auVar16._8_8_;
  local_c8 = pcVar7;
  unaff_R13 = (undefined **)param_5;
  pcVar13 = param_6;
  if ((char (*) [4])(local_e8 + -1) < (char (*) [4])0xfffffffffffffffd) {
    pcVar10 = (char *)0x1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    local_c8 = pcVar7;
    unaff_R13 = (undefined **)param_5;
    pcVar13 = param_6;
  }
  pcVar7 = local_d8 + -1;
  local_80 = local_e8;
  if (local_d8 + -1 < (char *)0xfffffffffffffffe) {
    pcVar10 = (char *)0x1;
    pcVar7 = (char *)(*(code *)PTR___rust_dealloc_00798fc8)();
    local_80 = local_d8;
  }
  local_e8 = pcVar7;
  local_d8 = (char *)0xffffffffffffffff;
  pcVar12 = auVar16._0_8_;
LAB_0043ab1d:
  auVar14._8_8_ = local_80;
  auVar14._0_8_ = local_e8;
  param_2[0x38] = (char)*(longlong *)(param_2 + 0x38) + '\x01';
  local_a8 = local_d8;
  local_a0 = pcVar12;
  local_98 = pcVar10;
  local_90 = local_e8;
  local_88 = local_e0;
  local_78 = pcVar13;
  local_70 = local_c8;
  local_68 = (char *)unaff_R13;
  local_f0 = (char *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::end_map(param_2);
  pcVar6 = local_f0;
  if (local_d8 == (char *)0xffffffffffffffff) {
LAB_0043ad3f:
    local_f0 = pcVar12;
    if (pcVar6 != (char *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar6);
    }
  }
  else {
    if (local_f0 == (char *)0x0) {
LAB_0043acf3:
      local_e8 = pcVar13;
      local_f0 = pcVar12;
      param_1[2] = pcVar10;
      param_1[3] = auVar14._0_8_;
      param_1[4] = local_e0;
      param_1[5] = auVar14._8_8_;
      param_1[6] = local_e8;
      param_1[7] = local_c8;
      param_1[8] = unaff_R13;
      *param_1 = local_d8;
      param_1[1] = local_f0;
      return param_1;
    }
    if (local_d8 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_e8 + -1 < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(local_e8 + -1,1);
    }
    pacVar8 = (char (*) [4])(pcVar13 + -1);
    if (pacVar8 < (char (*) [4])0xfffffffffffffffe) {
LAB_0043adb7:
      (*(code *)PTR___rust_dealloc_00798fc8)(pacVar8,1);
    }
  }
LAB_0043adc0:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (local_f0,param_2);
LAB_0043adcb:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


