// 00434380 <<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  code *extraout_RDX;
  longlong *plVar9;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  code *pcVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong in_FS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  code *local_270;
  code *local_268;
  code *local_260;
  undefined1 local_249;
  undefined8 local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  code *pcStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  code *pcStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  code *local_1e0;
  undefined8 local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  code *pcStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  code *pcStack_140;
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  code *local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  
  uVar7 = param_2[4];
  uVar5 = param_2[5];
  if (uVar5 < uVar7) {
    pcVar8 = (code *)-uVar7;
    uVar11 = 0x2600;
    do {
      uVar5 = uVar5 + 1;
      bVar2 = *(byte *)(param_2[3] + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          plVar12 = param_2 + 7;
          *(char *)plVar12 = (char)*plVar12 + -1;
          if ((char)*plVar12 != '\0') {
            param_2[5] = uVar5;
            local_108 = 1;
            local_110 = param_2;
            local_138 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_248,&local_110);
            if ((char)local_248 == '\x01') goto LAB_00434818;
            if (local_248._1_1_ == '\x01') {
              local_138 = deserialize_u32::
                          <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    (&local_248,local_110);
              if ((int)local_248 == 1) {
LAB_00434818:
                pcStack_180 = pcStack_240;
              }
              else {
                uVar11 = local_248._4_4_;
                local_138 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                            ::next_element_seed::has_next_element::
                            <serde_json[dc3825464c436029]::read::SliceRead>(&local_248,&local_110);
                pcStack_160 = local_138._8_8_;
                if ((char)local_248 == '\x01') goto LAB_00434818;
                if (local_248._1_1_ == '\x01') {
                  local_138 = deserialize_map::
                              <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                        (&local_248,local_110);
                  if (local_248 == (code *)0x0) goto LAB_00434818;
                  pcStack_160 = pcStack_220;
                  uStack_170 = uStack_230;
                  local_168 = local_228;
                  pcStack_180 = pcStack_240;
                  local_178 = local_238;
                  local_188 = local_248;
                  pcVar8 = pcStack_220;
                  puVar13 = local_248;
                }
                else {
                  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
                    local_168 = *(code **)(in_FS_OFFSET + -0x38);
                    pcStack_160 = *(code **)(in_FS_OFFSET + -0x30);
                  }
                  else {
                    local_168 = (code *)(*(code *)PTR_hashmap_random_keys_00799248)();
                    *(code **)(in_FS_OFFSET + -0x38) = local_168;
                    *(code **)(in_FS_OFFSET + -0x30) = pcStack_160;
                    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
                  }
                  pcVar8 = local_168 + 1;
                  *(code **)(in_FS_OFFSET + -0x38) = pcVar8;
                  local_188 = (code *)
                              PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                  ;
                  pcStack_180 = _DAT_00789cc8;
                  local_178 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
                  uStack_170 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
                  puVar13 = anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
                }
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_248,&local_110);
                if ((char)local_248 != '\x01') {
                  if (local_248._1_1_ == '\x01') {
                    deserialize_map::
                    <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                              (&local_248,local_110);
                    local_138._8_8_ = pcStack_220;
                    local_138._0_8_ = local_228;
                    pcVar8 = local_248;
                    if (local_248 == (code *)0x0) goto LAB_00434daa;
                    local_1c8 = uStack_230;
                    local_1d8 = pcStack_240;
                    pcStack_1d0 = local_238;
                    plVar12 = &local_1d8;
                  }
                  else {
                    local_138 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                                ::with::
                                <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                                          (&PTR_call_once_00789cb8);
                    local_248 = (code *)
                                anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
                    plVar12 = (longlong *)&DAT_00789cc8;
                  }
                  local_e8 = (code *)plVar12[2];
                  local_f8 = (longlong *)*plVar12;
                  uStack_f0 = plVar12[1];
                  local_1b8 = local_178;
                  pcStack_1b0 = uStack_170;
                  local_1a8 = local_168;
                  pcStack_1a0 = pcStack_160;
                  pcVar8 = local_248;
                  local_128 = uVar11;
                  goto LAB_00434820;
                }
LAB_00434daa:
                local_138 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                            ::drop(&local_188);
                pcStack_180 = pcStack_240;
              }
              puVar13 = (code *)0x0;
              local_128 = uVar11;
            }
            else {
              puVar13 = (code *)0x0;
              local_138 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789d70,&DAT_00789c78);
              pcStack_180 = local_138._0_8_;
              local_128 = uVar11;
            }
LAB_00434820:
            *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
            local_178 = local_1b8;
            uStack_170 = pcStack_1b0;
            local_168 = local_1a8;
            pcStack_160 = pcStack_1a0;
            uStack_150 = (undefined4)local_f8;
            uStack_14c = local_f8._4_4_;
            local_148 = (undefined4)uStack_f0;
            uStack_144 = uStack_f0._4_4_;
            pcStack_140 = local_e8;
            local_188 = (code *)puVar13;
            local_158 = pcVar8;
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            local_1e8 = CONCAT44(uStack_124,local_128);
            local_208 = CONCAT44(uStack_144,local_148);
            pcStack_200 = pcStack_140;
            local_218 = (undefined4)local_158;
            uStack_214 = local_158._4_4_;
            uStack_210 = uStack_150;
            uStack_20c = uStack_14c;
            local_228 = local_168;
            pcStack_220 = pcStack_160;
            local_238 = local_178;
            uStack_230 = uStack_170;
            local_248 = local_188;
            pcStack_240 = pcStack_180;
            local_1e0 = pcVar8;
            if (local_188 == (code *)0x0) goto LAB_00434bf5;
            if (pcVar8 == (code *)0x0) goto LAB_00434c13;
            local_1f8 = local_138;
            <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_248);
            goto LAB_00434bd8;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_249,&DAT_0078a660);
            goto LAB_00435164;
          }
          plVar12 = param_2 + 7;
          *(char *)plVar12 = (char)*plVar12 + -1;
          if ((char)*plVar12 != '\0') {
            param_2[5] = uVar5;
            uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
            local_270 = (code *)0x0;
            local_118 = (code *)&DAT_001945d5;
            bVar4 = false;
            local_f8 = param_2;
            pcVar8 = (code *)0x0;
            goto LAB_00434470;
          }
        }
        local_248 = (code *)0x18;
        goto LAB_004343ee;
      }
      param_2[5] = uVar5;
    } while (uVar5 != uVar7);
  }
  local_248 = (code *)0x5;
LAB_004343ee:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_248);
  goto LAB_004343fb;
LAB_00434470:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_248,&local_f8)
  ;
  plVar12 = local_f8;
  auVar15._8_8_ = extraout_RDX;
  auVar15._0_8_ = pcStack_240;
  local_188 = pcVar8;
  if ((char)local_248 == '\x01') {
    pcStack_180 = local_268;
    local_1b8 = local_270;
    pcStack_1b0 = local_260;
    goto LAB_00434ab0;
  }
  if (local_248._1_1_ != '\x01') {
    pcStack_180 = local_268;
    local_1b8 = local_270;
    pcStack_1b0 = local_260;
    if (bVar4) {
      pcVar10 = extraout_RDX;
      if (local_270 == (code *)0x0) {
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_228 = *(code **)(in_FS_OFFSET + -0x38);
          pcVar10 = *(code **)(in_FS_OFFSET + -0x30);
        }
        else {
          local_228 = (code *)(*(code *)PTR_hashmap_random_keys_00799248)();
          *(code **)(in_FS_OFFSET + -0x38) = local_228;
          *(code **)(in_FS_OFFSET + -0x30) = pcVar10;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(code **)(in_FS_OFFSET + -0x38) = local_228 + 1;
        local_248 = (code *)
                    PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0;
        pcStack_240 = _DAT_00789cc8;
        local_238 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
        uStack_230 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
        pcStack_220 = pcVar10;
        if (pcVar8 == (code *)0x0) goto LAB_00434e6b;
LAB_00434a2a:
        local_1c8 = local_178;
        pcStack_1c0 = uStack_170;
        local_1d8 = local_188;
        pcStack_1d0 = pcStack_180;
        pcVar10 = pcStack_160;
      }
      else {
        local_228 = local_198;
        pcStack_220 = pcStack_190;
        local_238 = local_1a8;
        uStack_230 = pcStack_1a0;
        local_248 = local_270;
        pcStack_240 = local_260;
        if (pcVar8 != (code *)0x0) goto LAB_00434a2a;
LAB_00434e6b:
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_168 = *(code **)(in_FS_OFFSET + -0x38);
          pcVar10 = *(code **)(in_FS_OFFSET + -0x30);
        }
        else {
          local_168 = (code *)(*(code *)PTR_hashmap_random_keys_00799248)();
          *(code **)(in_FS_OFFSET + -0x38) = local_168;
          *(code **)(in_FS_OFFSET + -0x30) = pcVar10;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(code **)(in_FS_OFFSET + -0x38) = local_168 + 1;
        local_1d8 = (code *)
                    PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0;
        pcStack_1d0 = _DAT_00789cc8;
        local_1c8 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
        pcStack_1c0 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
      }
      local_138._8_8_ = pcVar10;
      local_138._0_8_ = local_168;
      local_78 = local_238;
      pcStack_70 = uStack_230;
      local_68 = local_228;
      pcStack_60 = pcStack_220;
      local_58 = local_1d8;
      uStack_50 = pcStack_1d0;
      local_48 = local_1c8;
      pcStack_40 = pcStack_1c0;
      local_188 = local_248;
      pcStack_180 = pcStack_240;
      goto LAB_00434ad9;
    }
    local_1d8 = (code *)&DAT_001945d5;
    pcStack_1d0 = (code *)&DAT_00000007;
    local_248 = (code *)&local_1d8;
    pcStack_240 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    auVar15 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                         &local_248);
LAB_00434aac:
    local_260 = auVar15._0_8_;
    goto LAB_00434ab0;
  }
  plVar1 = local_f8 + 3;
  local_f8[5] = local_f8[5] + 1;
  local_f8[2] = 0;
  plVar9 = local_f8;
  (*(code *)PTR_parse_str_007998f8)();
  auVar15._8_8_ = plVar9;
  auVar15._0_8_ = pcStack_240;
  if (local_248 == (code *)0x2) goto LAB_0043492d;
  if (local_238 == (code *)&DAT_0000000d) {
    if (!(*(longlong *)(pcStack_240 + 5) == 0x736e6f6974617372 &&
         *(longlong *)pcStack_240 == 0x61737265766e6f63)) goto LAB_004345da;
    if (local_270 != (code *)0x0) {
      pcStack_1d0 = (code *)&DAT_0000000d;
      local_118 = (code *)&DAT_00194625;
      goto LAB_004351b7;
    }
    uVar7 = plVar12[5];
    if (uVar7 < (ulonglong)plVar12[4]) {
      lVar3 = *plVar1;
      while( true ) {
        uVar7 = uVar7 + 1;
        uVar5 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
        if (0x3a < uVar5) goto LAB_00435292;
        if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
        plVar12[5] = uVar7;
        if (uVar7 == plVar12[4]) goto LAB_00434f73;
      }
      if (uVar5 != 0x3a) {
LAB_00435292:
        pcStack_180 = local_268;
        local_1b8 = (code *)0x0;
        pcStack_1b0 = local_260;
        local_1d8 = (code *)&DAT_00000006;
        auVar14 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(plVar12,&local_1d8);
        goto LAB_00434fc9;
      }
      plVar12[5] = uVar7;
      deserialize_map::
      <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                (&local_248,plVar12);
      auVar14._8_8_ = extraout_RDX_02;
      auVar14._0_8_ = local_260;
      local_270 = local_248;
      if (local_248 != (code *)0x0) {
        local_198 = local_228;
        pcStack_190 = pcStack_220;
        local_1a8 = local_238;
        pcStack_1a0 = uStack_230;
        local_260 = pcStack_240;
        goto LAB_00434470;
      }
      pcStack_180 = local_268;
      local_1b8 = (code *)0x0;
      pcStack_1b0 = local_260;
      pcVar10 = pcStack_240;
    }
    else {
LAB_00434f73:
      pcStack_180 = local_268;
      local_1b8 = (code *)0x0;
      pcStack_1b0 = local_260;
      local_1d8 = (code *)0x3;
      auVar14 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(plVar12,&local_1d8);
LAB_00434fc9:
      pcVar10 = auVar14._0_8_;
    }
    local_260 = auVar14._0_8_;
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = pcVar10;
    local_270 = (code *)0x0;
    goto LAB_00434ab0;
  }
  if (local_238 == (code *)&DAT_00000009) {
    if (pcStack_240[8] == (code)0x73 && *(longlong *)pcStack_240 == 0x65736e6f70736572) {
      if (pcVar8 != (code *)0x0) {
        pcStack_1d0 = (code *)&DAT_00000009;
        local_118 = (code *)&DAT_00194657;
        goto LAB_004351b7;
      }
      uVar7 = plVar12[5];
      if (uVar7 < (ulonglong)plVar12[4]) {
        lVar3 = *plVar1;
        while( true ) {
          uVar7 = uVar7 + 1;
          uVar5 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
          if (0x3a < uVar5) goto LAB_00435236;
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
          plVar12[5] = uVar7;
          if (uVar7 == plVar12[4]) goto LAB_00434fde;
        }
        if (uVar5 == 0x3a) {
          plVar12[5] = uVar7;
          deserialize_map::
          <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                    (&local_248,plVar12);
          auVar15._8_8_ = extraout_RDX_01;
          auVar15._0_8_ = pcStack_240;
          if (local_248 == (code *)0x0) {
            local_188 = (code *)0x0;
            pcStack_180 = local_268;
            local_1b8 = local_270;
            pcStack_1b0 = local_260;
            goto LAB_00434ac2;
          }
          local_168 = local_228;
          pcStack_160 = pcStack_220;
          local_178 = local_238;
          uStack_170 = uStack_230;
          local_268 = pcStack_240;
          pcVar8 = local_248;
          goto LAB_00434470;
        }
LAB_00435236:
        local_188 = (code *)0x0;
        pcStack_180 = local_268;
        local_1b8 = local_270;
        pcStack_1b0 = local_260;
        local_1d8 = (code *)&DAT_00000006;
        auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(plVar12,&local_1d8);
      }
      else {
LAB_00434fde:
        local_188 = (code *)0x0;
        pcStack_180 = local_268;
        local_1b8 = local_270;
        pcStack_1b0 = local_260;
        local_1d8 = (code *)0x3;
        auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(plVar12,&local_1d8);
      }
      local_260 = auVar15._0_8_;
      goto LAB_00434ac2;
    }
  }
  else if ((local_238 == (code *)&DAT_00000007) &&
          (*(int *)(pcStack_240 + 3) == 0x6e6f6973 && *(int *)pcStack_240 == 0x73726576)) {
    if (bVar4) {
      pcStack_1d0 = (code *)&DAT_00000007;
LAB_004351b7:
      pcStack_180 = local_268;
      local_1b8 = local_270;
      pcStack_1b0 = local_260;
      local_1d8 = local_118;
      local_248 = (code *)&local_1d8;
      pcStack_240 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      auVar15 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                           &local_248);
      goto LAB_00434aac;
    }
    uVar7 = plVar12[5];
    if ((ulonglong)plVar12[4] <= uVar7) {
LAB_00435042:
      pcStack_180 = local_268;
      local_1b8 = local_270;
      pcStack_1b0 = local_260;
      local_248 = (code *)0x3;
      auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(plVar12,&local_248);
      goto LAB_00434aac;
    }
    lVar3 = *plVar1;
    while( true ) {
      uVar7 = uVar7 + 1;
      uVar5 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
      if (0x3a < uVar5) goto LAB_004352e8;
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
      plVar12[5] = uVar7;
      if (uVar7 == plVar12[4]) goto LAB_00435042;
    }
    if (uVar5 == 0x3a) {
      plVar12[5] = uVar7;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (&local_1d8,plVar12);
      auVar15._8_8_ = extraout_RDX_00;
      auVar15._0_8_ = pcStack_1d0;
      if ((int)local_1d8 == 1) {
        pcStack_180 = local_268;
        local_1b8 = local_270;
        pcStack_1b0 = local_260;
        goto LAB_00434ab0;
      }
      local_fc = local_1d8._4_4_;
      bVar4 = true;
      goto LAB_00434470;
    }
LAB_004352e8:
    pcStack_180 = local_268;
    local_1b8 = local_270;
    pcStack_1b0 = local_260;
    local_248 = (code *)&DAT_00000006;
    auVar15 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(plVar12,&local_248);
    goto LAB_00434aac;
  }
LAB_004345da:
  auVar15 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                      (plVar12,plVar1);
  if (auVar15._0_8_ != 0) goto LAB_0043492d;
  goto LAB_00434470;
LAB_0043492d:
  pcStack_180 = local_268;
  local_1b8 = local_270;
  pcStack_1b0 = local_260;
LAB_00434ab0:
  uVar6 = auVar15._0_8_;
  if (pcVar8 != (code *)0x0) {
    auVar14 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_188);
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = uVar6;
    local_260 = auVar14._0_8_;
  }
LAB_00434ac2:
  local_138._8_8_ = auVar15._8_8_;
  local_138._0_8_ = local_260;
  if (local_270 != (code *)0x0) {
    local_138 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(&local_1b8);
  }
  local_188 = (code *)0x0;
  pcStack_180 = auVar15._0_8_;
LAB_00434ad9:
  *(char *)(param_2 + 7) = (char)param_2[7] + '\x01';
  local_178 = local_78;
  uStack_170 = pcStack_70;
  local_168 = local_68;
  pcStack_160 = pcStack_60;
  local_158 = local_58;
  uStack_150 = (undefined4)uStack_50;
  uStack_14c = uStack_50._4_4_;
  local_148 = (undefined4)local_48;
  uStack_144 = local_48._4_4_;
  pcStack_140 = pcStack_40;
  local_128 = local_fc;
  pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  local_1e8 = CONCAT44(uStack_124,local_128);
  local_208 = CONCAT44(uStack_144,local_148);
  pcStack_200 = pcStack_140;
  local_218 = (undefined4)local_158;
  uStack_214 = local_158._4_4_;
  uStack_210 = uStack_150;
  uStack_20c = uStack_14c;
  local_228 = local_168;
  pcStack_220 = pcStack_160;
  local_238 = local_178;
  uStack_230 = uStack_170;
  local_248 = local_188;
  pcStack_240 = pcStack_180;
  local_1e0 = pcVar8;
  if (local_188 == (code *)0x0) {
LAB_00434bf5:
    pcVar8 = pcStack_180;
    local_248 = local_188;
    pcStack_240 = pcStack_180;
    local_238 = local_178;
    uStack_230 = uStack_170;
    local_228 = local_168;
    pcStack_220 = pcStack_160;
    uStack_210 = uStack_150;
    uStack_20c = uStack_14c;
    pcStack_200 = pcStack_140;
    local_1f8 = local_138;
    if (local_1e0 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (local_1e0);
    }
  }
  else if (pcVar8 == (code *)0x0) {
LAB_00434c13:
    local_d8 = local_178;
    pcStack_d0 = uStack_170;
    local_c8 = local_168;
    pcStack_c0 = pcStack_160;
    local_b8 = CONCAT44(uStack_214,local_218);
    uStack_b0 = CONCAT44(uStack_14c,uStack_150);
    local_a8 = local_208;
    pcStack_a0 = pcStack_140;
    local_1f8._0_4_ = local_138._0_4_;
    local_1f8._4_4_ = local_138._4_4_;
    local_1f8._8_4_ = local_138._8_4_;
    local_1f8._12_4_ = local_138._12_4_;
    local_98 = local_1f8._0_4_;
    uStack_94 = local_1f8._4_4_;
    uStack_90 = local_1f8._8_4_;
    uStack_8c = local_1f8._12_4_;
    local_88 = local_1e8;
    pcVar8 = pcStack_180;
    local_248 = local_188;
    pcStack_240 = pcStack_180;
    local_238 = local_178;
    uStack_230 = uStack_170;
    local_228 = local_168;
    pcStack_220 = pcStack_160;
    uStack_210 = uStack_150;
    uStack_20c = uStack_14c;
    pcStack_200 = pcStack_140;
    local_1f8 = local_138;
    if (local_188 != (code *)0x0) {
      param_1[0xc] = local_1e8;
      *(undefined1 (*) [16])(param_1 + 10) = local_138;
      param_1[8] = local_208;
      param_1[9] = pcStack_140;
      param_1[6] = local_b8;
      param_1[7] = uStack_b0;
      param_1[4] = local_168;
      param_1[5] = pcStack_160;
      param_1[2] = local_178;
      param_1[3] = uStack_170;
      *param_1 = local_188;
      param_1[1] = pcStack_180;
      return param_1;
    }
  }
  else {
    local_1f8 = local_138;
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_248);
LAB_00434bd8:
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_218);
  }
LAB_00435164:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar8,param_2);
LAB_004343fb:
  param_1[1] = uVar6;
  *param_1 = 0;
  return param_1;
}


