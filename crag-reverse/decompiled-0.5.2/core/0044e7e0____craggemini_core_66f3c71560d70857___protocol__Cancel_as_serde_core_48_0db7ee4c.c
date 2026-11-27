// 0044e7e0 <<craggemini_core[66f3c71560d70857]::protocol::Cancel_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::protocol::Cancel
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

char (*) [8] __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::protocol::Cancel_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (char (*param_1) [8],char param_2 [8])

{
  char (*pacVar1) [8];
  byte bVar2;
  char acVar3 [8];
  char acVar4 [8];
  char acVar5 [8];
  char acVar6 [8];
  char acVar7 [8];
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar8;
  undefined8 extraout_RDX_01;
  undefined8 uVar9;
  undefined8 extraout_RDX_02;
  char unaff_RBX [8];
  ulonglong uVar10;
  undefined **ppuVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char local_d0 [8];
  char local_c8 [8];
  char local_c0 [8];
  char local_b8 [8];
  char local_b0 [8];
  char local_a8 [8];
  char local_a0 [8];
  char local_98 [8];
  char local_90 [8];
  char local_88 [8];
  char (*local_80) [8];
  undefined1 local_71;
  char local_70 [8];
  char local_68 [8];
  char local_60 [8];
  char local_58 [8];
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  undefined1 local_38;
  
  acVar5 = *(char (*) [8])((longlong)param_2 + 0x20);
  acVar4 = *(char (*) [8])((longlong)param_2 + 0x28);
  if ((ulonglong)acVar4 < (ulonglong)acVar5) {
    acVar7 = (char  [8])-(longlong)acVar5;
    do {
      acVar4 = (char  [8])((longlong)acVar4 + 1);
      bVar2 = *(byte *)((longlong)*(char (*) [8])((longlong)param_2 + 0x18) + -1 + (longlong)acVar4)
      ;
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        local_80 = param_1;
        if (bVar2 == 0x5b) {
          pacVar1 = (char (*) [8])((longlong)param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(char (*) [8])((longlong)param_2 + 0x28) = acVar4;
            local_68[0] = '\x01';
            ppuVar11 = (undefined **)local_70;
            local_70 = param_2;
            auVar12 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>(local_b8);
            if (local_b8[0] == '\x01') {
LAB_0044ed13:
              acVar5 = acVar7;
              local_c0[0] = -1;
              local_c0[1] = -1;
              local_c0[2] = -1;
              local_c0[3] = -1;
              local_c0[4] = -1;
              local_c0[5] = -1;
              local_c0[6] = -1;
              local_c0[7] = -1;
              local_c8 = local_b0;
            }
            else {
              if (local_b8[1] != '\x01') {
                ppuVar11 = &PTR_DAT_0078a020;
                auVar12 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_0078a020,&DAT_00789c78);
                local_b0 = auVar12._0_8_;
                goto LAB_0044ed13;
              }
              ppuVar11 = (undefined **)local_70;
              auVar12 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                                  (local_b8);
              acVar5 = local_a8;
              local_c8 = local_b0;
              local_c0 = local_b8;
              if (local_b8 == (char  [8])0xffffffffffffffff) goto LAB_0044ed13;
              ppuVar11 = (undefined **)local_70;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (local_b8);
              if (local_b8[0] == '\x01') {
                acVar5 = acVar7;
                uVar9 = extraout_RDX_01;
LAB_0044ec0b:
                if (local_c0 != (char  [8])0x0) {
                  uVar9 = 1;
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                  ppuVar11 = (undefined **)local_c0;
                }
                auVar12._8_8_ = uVar9;
                auVar12[0] = local_b0[0];
                auVar12[1] = local_b0[1];
                auVar12[2] = local_b0[2];
                auVar12[3] = local_b0[3];
                auVar12[4] = local_b0[4];
                auVar12[5] = local_b0[5];
                auVar12[6] = local_b0[6];
                auVar12[7] = local_b0[7];
                local_c0[0] = -1;
                local_c0[1] = -1;
                local_c0[2] = -1;
                local_c0[3] = -1;
                local_c0[4] = -1;
                local_c0[5] = -1;
                local_c0[6] = -1;
                local_c0[7] = -1;
                local_c8 = local_b0;
              }
              else {
                if (local_b8[1] == '\x01') {
                  ppuVar11 = (undefined **)local_70;
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                  ::deserialize::
                  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            (local_b8);
                  uVar9 = extraout_RDX_02;
                  if (local_b8 == (char  [8])0xfffffffffffffffe) goto LAB_0044ec0b;
                  ppuVar11 = (undefined **)local_a8;
                }
                else {
                  local_b8[0] = -2;
                  local_b8[1] = -1;
                  local_b8[2] = -1;
                  local_b8[3] = -1;
                  local_b8[4] = -1;
                  local_b8[5] = -1;
                  local_b8[6] = -1;
                  local_b8[7] = -1;
                  local_b0 = acVar5;
                }
                acVar4[0] = -1;
                acVar4[1] = -1;
                acVar4[2] = -1;
                acVar4[3] = -1;
                acVar4[4] = -1;
                acVar4[5] = -1;
                acVar4[6] = -1;
                acVar4[7] = -1;
                if (local_b8 != (char  [8])0xfffffffffffffffe) {
                  acVar4 = local_b8;
                }
                auVar12[8] = acVar4[0];
                auVar12[9] = acVar4[1];
                auVar12[10] = acVar4[2];
                auVar12[0xb] = acVar4[3];
                auVar12[0xc] = acVar4[4];
                auVar12[0xd] = acVar4[5];
                auVar12[0xe] = acVar4[6];
                auVar12[0xf] = acVar4[7];
                auVar12[0] = local_b0[0];
                auVar12[1] = local_b0[1];
                auVar12[2] = local_b0[2];
                auVar12[3] = local_b0[3];
                auVar12[4] = local_b0[4];
                auVar12[5] = local_b0[5];
                auVar12[6] = local_b0[6];
                auVar12[7] = local_b0[7];
              }
            }
            local_d0 = auVar12._8_8_;
            local_98 = auVar12._0_8_;
            (*(char (*) [8])((longlong)param_2 + 0x38))[0] =
                 (*(char (*) [8])((longlong)param_2 + 0x38))[0] + '\x01';
            local_b8 = local_c0;
            local_b0 = local_c8;
            local_a8 = acVar5;
            local_a0 = local_d0;
            local_90 = (char  [8])ppuVar11;
            local_88 = local_98;
            acVar4 = (char  [8])
                     <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::end_seq(param_2);
            goto LAB_0044ed55;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            local_c8 = (char  [8])
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_invalid_type(param_2,&local_71,&DAT_0078a900);
            goto LAB_0044edf5;
          }
          pacVar1 = (char (*) [8])((longlong)param_2 + 0x38);
          (*pacVar1)[0] = (*pacVar1)[0] + -1;
          if ((*pacVar1)[0] != '\0') {
            *(char (*) [8])((longlong)param_2 + 0x28) = acVar4;
            local_38 = 1;
            local_d0[0] = -2;
            local_d0[1] = -1;
            local_d0[2] = -1;
            local_d0[3] = -1;
            local_d0[4] = -1;
            local_d0[5] = -1;
            local_d0[6] = -1;
            local_d0[7] = -1;
            local_c0[0] = -1;
            local_c0[1] = -1;
            local_c0[2] = -1;
            local_c0[3] = -1;
            local_c0[4] = -1;
            local_c0[5] = -1;
            local_c0[6] = -1;
            local_c0[7] = -1;
            local_50 = (char  [8])&DAT_00194632;
            local_40 = param_2;
            goto LAB_0044e8bb;
          }
        }
        local_b8[0] = '\x18';
        local_b8[1] = '\0';
        local_b8[2] = '\0';
        local_b8[3] = '\0';
        local_b8[4] = '\0';
        local_b8[5] = '\0';
        local_b8[6] = '\0';
        local_b8[7] = '\0';
        goto LAB_0044e846;
      }
      *(char (*) [8])((longlong)param_2 + 0x28) = acVar4;
    } while (acVar4 != acVar5);
  }
  local_b8[0] = '\x05';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
LAB_0044e846:
  acVar5 = (char  [8])
           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
           ::peek_error(param_2,local_b8);
  goto LAB_0044ee00;
LAB_0044e8bb:
  local_58 = unaff_RBX;
  do {
    ppuVar11 = (undefined **)local_40;
    auVar12 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
              ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                        (local_b8);
    acVar5 = local_40;
    acVar4 = auVar12._8_8_;
    if (local_b8[0] == '\x01') {
LAB_0044ecb5:
      auVar13[8] = acVar4[0];
      auVar13[9] = acVar4[1];
      auVar13[10] = acVar4[2];
      auVar13[0xb] = acVar4[3];
      auVar13[0xc] = acVar4[4];
      auVar13[0xd] = acVar4[5];
      auVar13[0xe] = acVar4[6];
      auVar13[0xf] = acVar4[7];
      auVar13[0] = local_b0[0];
      auVar13[1] = local_b0[1];
      auVar13[2] = local_b0[2];
      auVar13[3] = local_b0[3];
      auVar13[4] = local_b0[4];
      auVar13[5] = local_b0[5];
      auVar13[6] = local_b0[6];
      auVar13[7] = local_b0[7];
      goto LAB_0044eb40;
    }
    if (local_b8[1] != '\x01') {
      if (local_c0 == (char  [8])0xffffffffffffffff) {
        local_70 = (char  [8])&DAT_00194686;
        local_68[0] = '\n';
        local_68[1] = '\0';
        local_68[2] = '\0';
        local_68[3] = '\0';
        local_68[4] = '\0';
        local_68[5] = '\0';
        local_68[6] = '\0';
        local_68[7] = '\0';
        local_b8 = (char  [8])local_70;
        local_b0 = (char  [8])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        acVar7 = local_48;
        auVar13 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                             local_b8);
        local_c0[0] = -1;
        local_c0[1] = -1;
        local_c0[2] = -1;
        local_c0[3] = -1;
        local_c0[4] = -1;
        local_c0[5] = -1;
        local_c0[6] = -1;
        local_c0[7] = -1;
        goto LAB_0044eb40;
      }
      acVar5 = local_48;
      if (local_d0 == (char  [8])0xfffffffffffffffe) {
        local_d0[0] = -1;
        local_d0[1] = -1;
        local_d0[2] = -1;
        local_d0[3] = -1;
        local_d0[4] = -1;
        local_d0[5] = -1;
        local_d0[6] = -1;
        local_d0[7] = -1;
        local_88 = auVar12._0_8_;
      }
      else {
        ppuVar11 = (undefined **)local_58;
      }
      goto LAB_0044eb7d;
    }
    pacVar1 = (char (*) [8])((longlong)local_40 + 0x18);
    *(char (*) [8])((longlong)local_40 + 0x28) =
         (char  [8])((longlong)*(char (*) [8])((longlong)local_40 + 0x28) + 1);
    *(char (*) [8])((longlong)local_40 + 0x10) = (char  [8])0x0;
    acVar4 = local_40;
    (*(code *)PTR_parse_str_007998f8)();
    unaff_RBX = local_58;
    if (local_b8._0_4_ == 2) goto LAB_0044ecb5;
    if (local_a8 != (char  [8])0xa) {
LAB_0044eb1a:
      acVar7[0] = '\x02';
      acVar7[1] = '\0';
      acVar7[2] = '\0';
      acVar7[3] = '\0';
      acVar7[4] = '\0';
      acVar7[5] = '\0';
      acVar7[6] = '\0';
      acVar7[7] = '\0';
      auVar13 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::unknown_field(local_b0,local_a8,
                                &anon_2c3f00c6db51fc4e52b1607637b553f4_43_llvm_6489901693990513673);
      goto LAB_0044eb40;
    }
    if (*(short *)((longlong)local_b0 + 8) == s_idgrpc_statusgrpc_message_00199533._0_2_ &&
        *(char (*) [8])local_b0 == anon_2c3f00c6db51fc4e52b1607637b553f4_10_llvm_6489901693990513673
       ) break;
    if (*(short *)((longlong)local_b0 + 8) != s_idenv_id_001995f0._0_2_ ||
        *(char (*) [8])local_b0 != anon_2c3f00c6db51fc4e52b1607637b553f4_37_llvm_6489901693990513673
       ) goto LAB_0044eb1a;
    if (local_d0 != (char  [8])0xfffffffffffffffe) {
      acVar7[0] = '\0';
      acVar7[1] = '\0';
      acVar7[2] = '\0';
      acVar7[3] = '\0';
      acVar7[4] = '\0';
      acVar7[5] = '\0';
      acVar7[6] = '\0';
      acVar7[7] = '\0';
      goto LAB_0044ef11;
    }
    acVar4 = *(char (*) [8])((longlong)acVar5 + 0x20);
    acVar6 = *(char (*) [8])((longlong)acVar5 + 0x28);
    acVar7 = acVar4;
    if ((ulonglong)acVar4 <= (ulonglong)acVar6) {
LAB_0044ec63:
      local_b8[0] = '\x03';
      local_b8[1] = '\0';
      local_b8[2] = '\0';
      local_b8[3] = '\0';
      local_b8[4] = '\0';
      local_b8[5] = '\0';
      local_b8[6] = '\0';
      local_b8[7] = '\0';
      acVar4 = (char  [8])local_b8;
      auVar13 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(acVar5);
LAB_0044ec8a:
      acVar5 = acVar4;
      goto LAB_0044eb5a;
    }
    acVar3 = *pacVar1;
    acVar7 = (char  [8])-(longlong)acVar4;
    while( true ) {
      acVar6 = (char  [8])((longlong)acVar6 + 1);
      uVar10 = (ulonglong)*(byte *)((longlong)acVar3 + -1 + (longlong)acVar6);
      if (0x3a < uVar10) goto LAB_0044ef5b;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      *(char (*) [8])((longlong)acVar5 + 0x28) = acVar6;
      if (acVar6 == acVar4) goto LAB_0044ec63;
    }
    if (uVar10 != 0x3a) {
LAB_0044ef5b:
      local_b8[0] = '\x06';
      local_b8[1] = '\0';
      local_b8[2] = '\0';
      local_b8[3] = '\0';
      local_b8[4] = '\0';
      local_b8[5] = '\0';
      local_b8[6] = '\0';
      local_b8[7] = '\0';
      acVar4 = (char  [8])local_b8;
      auVar13 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(acVar5);
      goto LAB_0044ec8a;
    }
    *(char (*) [8])((longlong)acVar5 + 0x28) = acVar6;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (local_70);
    auVar13._8_8_ = extraout_RDX;
    auVar13[0] = local_68[0];
    auVar13[1] = local_68[1];
    auVar13[2] = local_68[2];
    auVar13[3] = local_68[3];
    auVar13[4] = local_68[4];
    auVar13[5] = local_68[5];
    auVar13[6] = local_68[6];
    auVar13[7] = local_68[7];
    local_d0[0] = local_70[0];
    local_d0[1] = local_70[1];
    local_d0[2] = local_70[2];
    local_d0[3] = local_70[3];
    local_d0[4] = local_70[4];
    local_d0[5] = local_70[5];
    local_d0[6] = local_70[6];
    local_d0[7] = local_70[7];
    if (local_70 == (char  [8])0xfffffffffffffffe) {
      goto LAB_0044eb5a;
    }
    local_88[0] = local_68[0];
    local_88[1] = local_68[1];
    local_88[2] = local_68[2];
    local_88[3] = local_68[3];
    local_88[4] = local_68[4];
    local_88[5] = local_68[5];
    local_88[6] = local_68[6];
    local_88[7] = local_68[7];
    local_58[0] = local_60[0];
    local_58[1] = local_60[1];
    local_58[2] = local_60[2];
    local_58[3] = local_60[3];
    local_58[4] = local_60[4];
    local_58[5] = local_60[5];
    local_58[6] = local_60[6];
    local_58[7] = local_60[7];
  } while( true );
  if (local_c0 != (char  [8])0xffffffffffffffff) {
    acVar7 = (char  [8])&DAT_00194686;
    local_50 = (char  [8])&DAT_00194686;
LAB_0044ef11:
    local_70[0] = local_50[0];
    local_70[1] = local_50[1];
    local_70[2] = local_50[2];
    local_70[3] = local_50[3];
    local_70[4] = local_50[4];
    local_70[5] = local_50[5];
    local_70[6] = local_50[6];
    local_70[7] = local_50[7];
    local_68[0] = '\n';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_b8 = (char  [8])local_70;
    local_b0 = (char  [8])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    auVar13 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         local_b8);
    goto LAB_0044eb40;
  }
  acVar4 = *(char (*) [8])((longlong)acVar5 + 0x20);
  acVar6 = *(char (*) [8])((longlong)acVar5 + 0x28);
  acVar7 = acVar4;
  if ((ulonglong)acVar6 < (ulonglong)acVar4) {
    acVar3 = *pacVar1;
    acVar7 = (char  [8])-(longlong)acVar4;
    while( true ) {
      acVar6 = (char  [8])((longlong)acVar6 + 1);
      uVar10 = (ulonglong)*(byte *)((longlong)acVar3 + -1 + (longlong)acVar6);
      if (0x3a < uVar10) goto LAB_0044efa3;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      *(char (*) [8])((longlong)acVar5 + 0x28) = acVar6;
      if (acVar6 == acVar4) goto LAB_0044ee91;
    }
    if (uVar10 == 0x3a) {
      *(char (*) [8])((longlong)acVar5 + 0x28) = acVar6;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(local_70,acVar5);
      auVar13._8_8_ = extraout_RDX_00;
      auVar13[0] = local_68[0];
      auVar13[1] = local_68[1];
      auVar13[2] = local_68[2];
      auVar13[3] = local_68[3];
      auVar13[4] = local_68[4];
      auVar13[5] = local_68[5];
      auVar13[6] = local_68[6];
      auVar13[7] = local_68[7];
      local_c0[0] = local_70[0];
      local_c0[1] = local_70[1];
      local_c0[2] = local_70[2];
      local_c0[3] = local_70[3];
      local_c0[4] = local_70[4];
      local_c0[5] = local_70[5];
      local_c0[6] = local_70[6];
      local_c0[7] = local_70[7];
      if (local_70 == (char  [8])0xffffffffffffffff) goto LAB_0044eed8;
      local_48[0] = local_60[0];
      local_48[1] = local_60[1];
      local_48[2] = local_60[2];
      local_48[3] = local_60[3];
      local_48[4] = local_60[4];
      local_48[5] = local_60[5];
      local_48[6] = local_60[6];
      local_48[7] = local_60[7];
      local_c8[0] = local_68[0];
      local_c8[1] = local_68[1];
      local_c8[2] = local_68[2];
      local_c8[3] = local_68[3];
      local_c8[4] = local_68[4];
      local_c8[5] = local_68[5];
      local_c8[6] = local_68[6];
      local_c8[7] = local_68[7];
      goto LAB_0044e8bb;
    }
LAB_0044efa3:
    local_b8[0] = '\x06';
    local_b8[1] = '\0';
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\0';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    auVar13 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(acVar5,local_b8);
  }
  else {
LAB_0044ee91:
    local_b8[0] = '\x03';
    local_b8[1] = '\0';
    local_b8[2] = '\0';
    local_b8[3] = '\0';
    local_b8[4] = '\0';
    local_b8[5] = '\0';
    local_b8[6] = '\0';
    local_b8[7] = '\0';
    auVar13 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(acVar5,local_b8);
  }
  local_c0[0] = -1;
  local_c0[1] = -1;
  local_c0[2] = -1;
  local_c0[3] = -1;
  local_c0[4] = -1;
  local_c0[5] = -1;
  local_c0[6] = -1;
  local_c0[7] = -1;
  goto LAB_0044eb40;
LAB_0044eed8:
  local_c0[0] = -1;
  local_c0[1] = -1;
  local_c0[2] = -1;
  local_c0[3] = -1;
  local_c0[4] = -1;
  local_c0[5] = -1;
  local_c0[6] = -1;
  local_c0[7] = -1;
LAB_0044eb40:
  uVar9 = auVar13._0_8_;
  acVar5 = local_d0;
  if ((char *)((longlong)local_d0 + -1) < (char *)0xfffffffffffffffd) {
    uVar8 = 1;
    (*(code *)PTR___rust_dealloc_00798fc8)();
    auVar13._8_8_ = uVar8;
    auVar13._0_8_ = uVar9;
  }
LAB_0044eb5a:
  local_d0 = auVar13._8_8_;
  local_c8 = auVar13._0_8_;
  acVar4 = (char  [8])((longlong)local_c0 + -1);
  if ((ulonglong)acVar4 < 0xfffffffffffffffe) {
    local_d0[0] = '\x01';
    local_d0[1] = '\0';
    local_d0[2] = '\0';
    local_d0[3] = '\0';
    local_d0[4] = '\0';
    local_d0[5] = '\0';
    local_d0[6] = '\0';
    local_d0[7] = '\0';
    acVar4 = (char  [8])(*(code *)PTR___rust_dealloc_00798fc8)();
    acVar5 = local_c0;
  }
  local_c0[0] = -1;
  local_c0[1] = -1;
  local_c0[2] = -1;
  local_c0[3] = -1;
  local_c0[4] = -1;
  local_c0[5] = -1;
  local_c0[6] = -1;
  local_c0[7] = -1;
  local_88 = acVar4;
  acVar5 = acVar7;
  ppuVar11 = (undefined **)acVar5;
LAB_0044eb7d:
  (*(char (*) [8])((longlong)param_2 + 0x38))[0] =
       (*(char (*) [8])((longlong)param_2 + 0x38))[0] + '\x01';
  local_b8 = local_c0;
  local_b0 = local_c8;
  local_a8 = acVar5;
  local_a0 = local_d0;
  local_98 = local_88;
  local_90 = (char  [8])ppuVar11;
  acVar4 = (char  [8])
           <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
           ::end_map(param_2);
LAB_0044ed55:
  param_1 = local_80;
  if (local_c0 == (char  [8])0xffffffffffffffff) {
    if (acVar4 != (char  [8])0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(acVar4);
    }
    param_1 = local_80;
  }
  else {
    if (acVar4 == (char  [8])0x0) {
      local_80[2] = acVar5;
      local_80[3] = local_d0;
      local_80[4] = local_88;
      local_80[5] = (char  [8])ppuVar11;
      *local_80 = local_c0;
      local_80[1] = local_c8;
      return local_80;
    }
    if (local_c0 != (char  [8])0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    local_c8 = acVar4;
    if ((char *)((longlong)local_d0 + -1) < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)((char *)((longlong)local_d0 + -1),1);
    }
  }
LAB_0044edf5:
  acVar5 = (char  [8])
           ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
           <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                     (local_c8,param_2);
LAB_0044ee00:
  param_1[1] = acVar5;
  *param_1 = (char  [8])0xffffffffffffffff;
  return param_1;
}


