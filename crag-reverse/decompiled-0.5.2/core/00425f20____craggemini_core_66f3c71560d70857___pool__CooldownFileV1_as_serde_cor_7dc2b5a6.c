// 00425f20 <<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  code *unaff_R15;
  undefined4 uVar12;
  undefined8 local_158;
  code *pcStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  code *local_120;
  undefined8 *local_110;
  uint local_108;
  undefined1 local_101;
  undefined8 *local_100;
  code *pcStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a4;
  char *local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar6 = param_2[5];
  if (uVar6 < (ulonglong)param_2[4]) {
    uVar12 = 0x2600;
    do {
      uVar6 = uVar6 + 1;
      bVar3 = *(byte *)(param_2[3] + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar6;
            pcStack_f8 = (code *)CONCAT71(pcStack_f8._1_7_,1);
            local_100 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_158,&local_100);
            if ((char)local_158 == '\x01') {
LAB_00426285:
              puVar11 = (undefined8 *)0x0;
              local_d0 = uVar12;
            }
            else {
              if (local_158._1_1_ == '\x01') {
                deserialize_u32::
                <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                          (&local_158,local_100);
                if ((int)local_158 != 1) {
                  uVar12 = local_158._4_4_;
                  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                  ::next_element_seed::has_next_element::
                  <serde_json[dc3825464c436029]::read::SliceRead>(&local_158,&local_100);
                  if ((char)local_158 != '\x01') {
                    if (local_158._1_1_ == '\x01') {
                      deserialize_map::
                      <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                (&local_158,local_100);
                      if (local_158 != (undefined8 *)0x0) {
                        local_c8 = (char *)CONCAT44(uStack_144,local_148);
                        uStack_c0 = (code *)CONCAT44(uStack_13c,uStack_140);
                        local_b8 = CONCAT44(uStack_134,local_138);
                        uStack_b0 = CONCAT44(uStack_12c,uStack_130);
                        puVar11 = local_158;
                        local_d0 = uVar12;
                        goto LAB_00426288;
                      }
                    }
                    else {
                      pcStack_150 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                            ::invalid_length(1,&PTR_DAT_00789ce0,&DAT_00789c78);
                    }
                  }
                }
                goto LAB_00426285;
              }
              puVar11 = (undefined8 *)0x0;
              pcStack_150 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                    ::invalid_length(0,&PTR_DAT_00789ce0,&DAT_00789c78);
              local_d0 = uVar12;
            }
LAB_00426288:
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            local_f0 = (int)local_c8;
            uStack_ec = local_c8._4_4_;
            uStack_e8 = (undefined4)uStack_c0;
            uStack_e4 = uStack_c0._4_4_;
            local_e0 = local_b8;
            uStack_d8 = uStack_b0;
            local_100 = puVar11;
            pcStack_f8 = pcStack_150;
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            goto LAB_004263e8;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_101,&DAT_0078a540);
            goto LAB_0042666f;
          }
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar6;
            local_90 = 1;
            local_a0 = &DAT_001945d5;
            local_108 = 0;
            local_110 = param_1;
            local_98 = param_2;
            puVar11 = (undefined8 *)0x0;
            goto LAB_00426000;
          }
        }
        local_158 = (undefined8 *)0x18;
        goto LAB_00425f8e;
      }
      param_2[5] = uVar6;
    } while (uVar6 != param_2[4]);
  }
  local_158 = (undefined8 *)0x5;
LAB_00425f8e:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_158);
  goto LAB_00425f9b;
  while( true ) {
    pcVar8 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                     ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                               (puVar5,plVar2);
    if (pcVar8 != (code *)0x0) break;
LAB_00426000:
    uVar12 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
             ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                       (&local_158,&local_98);
    puVar5 = local_98;
    pcVar8 = pcStack_150;
    local_100 = puVar11;
    if ((char)local_158 == '\x01') break;
    if (local_158._1_1_ != '\x01') {
      if ((local_108 & 1) != 0) {
        if (puVar11 == (undefined8 *)0x0) {
          local_c8 = "accounts";
          uStack_c0 = (code *)&DAT_00000008;
          local_158 = &local_c8;
          pcStack_150 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          pcVar8 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                           ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                     (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                      ,&local_158);
          goto LAB_0042639f;
        }
        local_58 = CONCAT44(uStack_ec,local_f0);
        uStack_50 = CONCAT44(uStack_e4,uStack_e8);
        local_48 = local_e0;
        uStack_40 = uStack_d8;
        param_1 = local_110;
        goto LAB_004263a7;
      }
      local_c8 = &DAT_001945d5;
      uStack_c0 = (code *)&DAT_00000007;
      local_158 = &local_c8;
      pcStack_150 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar8 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_158);
      break;
    }
    plVar2 = local_98 + 3;
    local_98[5] = local_98[5] + 1;
    local_98[2] = 0;
    (*(code *)PTR_parse_str_007998f8)(uVar12,local_98);
    param_1 = local_110;
    pcVar8 = pcStack_150;
    if (local_158 == (undefined8 *)0x2) break;
    if (CONCAT44(uStack_144,local_148) == 8) {
      if (*(longlong *)pcStack_150 == 0x73746e756f636361) {
        if (puVar11 != (undefined8 *)0x0) {
          uStack_c0 = (code *)&DAT_00000008;
          local_a0 = "accounts";
          goto LAB_0042669a;
        }
        uVar6 = puVar5[5];
        if (uVar6 < (ulonglong)puVar5[4]) {
          lVar4 = *plVar2;
          while( true ) {
            uVar6 = uVar6 + 1;
            uVar10 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
            if (0x3a < uVar10) goto LAB_0042671a;
            if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
            puVar5[5] = uVar6;
            if (uVar6 == puVar5[4]) goto LAB_004265bd;
          }
          if (uVar10 == 0x3a) {
            puVar5[5] = uVar6;
            deserialize_map::
            <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
                      (&local_158,puVar5);
            unaff_R15 = pcStack_150;
            if (local_158 == (undefined8 *)0x0) {
              puVar11 = (undefined8 *)0x0;
              goto LAB_004263a7;
            }
            local_e0 = CONCAT44(uStack_134,local_138);
            uStack_d8 = CONCAT44(uStack_12c,uStack_130);
            local_f0 = local_148;
            uStack_ec = uStack_144;
            uStack_e8 = uStack_140;
            uStack_e4 = uStack_13c;
            puVar11 = local_158;
            goto LAB_00426000;
          }
LAB_0042671a:
          local_c8 = (char *)0x6;
          unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_error(puVar5,&local_c8);
        }
        else {
LAB_004265bd:
          local_c8 = (char *)0x3;
          unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_error(puVar5,&local_c8);
        }
        puVar11 = (undefined8 *)0x0;
        param_1 = local_110;
        goto LAB_004263a7;
      }
    }
    else if ((CONCAT44(uStack_144,local_148) == 7) &&
            (*(int *)(pcStack_150 + 3) == 0x6e6f6973 && *(int *)pcStack_150 == 0x73726576)) {
      if (local_108 != 0) {
        uStack_c0 = (code *)&DAT_00000007;
LAB_0042669a:
        local_c8 = local_a0;
        local_158 = &local_c8;
        pcStack_150 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pcVar8 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                    ,&local_158);
        break;
      }
      uVar6 = puVar5[5];
      if ((ulonglong)puVar5[4] <= uVar6) {
LAB_00426593:
        local_158 = (undefined8 *)0x3;
        pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(puVar5,&local_158);
        break;
      }
      lVar4 = *plVar2;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar10 = (ulonglong)*(byte *)(lVar4 + -1 + uVar6);
        if (0x3a < uVar10) goto LAB_004266f0;
        if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
        puVar5[5] = uVar6;
        if (uVar6 == puVar5[4]) goto LAB_00426593;
      }
      if (uVar10 != 0x3a) {
LAB_004266f0:
        local_158 = (undefined8 *)&DAT_00000006;
        pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(puVar5,&local_158);
        break;
      }
      puVar5[5] = uVar6;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (&local_c8,puVar5);
      pcVar8 = uStack_c0;
      if ((int)local_c8 == 1) break;
      local_a4 = local_c8._4_4_;
      local_108 = 1;
      goto LAB_00426000;
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_100);
  }
LAB_0042639f:
  puVar11 = (undefined8 *)0x0;
  param_1 = local_110;
  unaff_R15 = pcVar8;
LAB_004263a7:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  local_f0 = (undefined4)local_58;
  uStack_ec = local_58._4_4_;
  uStack_e8 = (undefined4)uStack_50;
  uStack_e4 = uStack_50._4_4_;
  local_e0 = local_48;
  uStack_d8 = uStack_40;
  local_d0 = local_a4;
  local_100 = puVar11;
  pcStack_f8 = unaff_R15;
  pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
LAB_004263e8:
  pcVar9 = pcStack_f8;
  local_128 = CONCAT44(uStack_cc,local_d0);
  local_138 = (undefined4)local_e0;
  uStack_134 = local_e0._4_4_;
  uStack_130 = (undefined4)uStack_d8;
  uStack_12c = uStack_d8._4_4_;
  local_148 = local_f0;
  uStack_144 = uStack_ec;
  uStack_140 = uStack_e8;
  uStack_13c = uStack_e4;
  local_158 = local_100;
  pcStack_150 = pcStack_f8;
  local_120 = pcVar8;
  if (local_100 == (undefined8 *)0x0) {
    if (pcVar8 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar8);
    }
  }
  else if (pcVar8 == (code *)0x0) {
    local_88 = CONCAT44(uStack_ec,local_f0);
    uStack_80 = CONCAT44(uStack_e4,uStack_e8);
    local_78 = (undefined4)local_e0;
    uStack_74 = local_e0._4_4_;
    uStack_70 = (undefined4)uStack_d8;
    uStack_6c = uStack_d8._4_4_;
    local_68 = local_128;
    if (local_100 != (undefined8 *)0x0) {
      param_1[6] = local_128;
      param_1[4] = local_e0;
      param_1[5] = uStack_d8;
      param_1[2] = local_88;
      param_1[3] = uStack_80;
      *param_1 = local_100;
      param_1[1] = pcStack_f8;
      return param_1;
    }
  }
  else {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_158);
    pcVar9 = pcVar8;
  }
LAB_0042666f:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar9,param_2);
LAB_00425f9b:
  param_1[1] = uVar7;
  *param_1 = 0;
  return param_1;
}


