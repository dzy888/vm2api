// 00436c40 <<craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::PersistedSignatureCache_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,code *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 extraout_RDX;
  code *pcVar11;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined4 unaff_EBP;
  code **ppcVar12;
  undefined1 *puVar13;
  longlong in_FS_OFFSET;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  code *local_3d8;
  code *local_3d0;
  code *local_3c8;
  code *local_3c0;
  code *local_3b8;
  code *local_3b0;
  code *local_3a8;
  code *pcStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  longlong local_388;
  code *pcStack_380;
  uint local_370;
  undefined1 local_369;
  code *local_368;
  undefined8 uStack_360;
  code *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  code *pcStack_340;
  code *local_338;
  code *pcStack_330;
  code *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  longlong local_318;
  code *pcStack_310;
  code *local_308;
  undefined8 *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [48];
  undefined1 local_298 [56];
  code *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  code *local_248;
  code *pcStack_240;
  undefined1 local_238 [16];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [16];
  code *local_1f8;
  code *pcStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  code *pcStack_1e0;
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  code *local_1b8;
  code *pcStack_1b0;
  undefined8 local_1a8;
  code *pcStack_1a0;
  undefined4 local_18c;
  code *local_188;
  undefined1 local_180;
  code *local_178;
  code *pcStack_170;
  longlong local_168;
  code *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  code *local_128;
  code *pcStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  code *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  code *pcStack_c0;
  
  uVar8 = *(ulonglong *)(param_2 + 0x20);
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  local_300 = param_1;
  if (uVar6 < uVar8) {
    puVar10 = (undefined1 *)-uVar8;
    do {
      uVar6 = uVar6 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pcVar9 = param_2 + 0x38;
          *pcVar9 = (code)((char)*pcVar9 + -1);
          if (*pcVar9 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            pcStack_1b0 = (code *)CONCAT71(pcStack_1b0._1_7_,1);
            local_1b8 = param_2;
            local_1d8 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                        ::next_element_seed::has_next_element::
                        <serde_json[dc3825464c436029]::read::SliceRead>(&local_2f8,&local_1b8);
            if ((char)local_2f8 == '\x01') goto LAB_0043719e;
            if (local_2f8._1_1_ == '\x01') {
              local_1d8 = deserialize_u32::
                          <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    (&local_2f8,local_1b8);
              if ((int)local_2f8 == 1) {
LAB_0043719e:
                pcVar9 = uStack_2f0;
                local_1c8 = unaff_EBP;
              }
              else {
                unaff_EBP = local_2f8._4_4_;
                local_1d8 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                            ::next_element_seed::has_next_element::
                            <serde_json[dc3825464c436029]::read::SliceRead>(&local_2f8,&local_1b8);
                pcVar9 = local_1d8._8_8_;
                if ((char)local_2f8 == '\x01') goto LAB_0043719e;
                if (local_2f8._1_1_ == '\x01') {
                  local_1d8 = deserialize_map::
                              <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                        (&local_2f8,local_1b8);
                  if (local_2f8 == (code *)0x0) goto LAB_0043719e;
                  pcStack_380 = (code *)local_2d8._8_8_;
                  uStack_390 = uStack_2e0;
                  local_388 = local_2d8._0_8_;
                  pcStack_3a0 = uStack_2f0;
                  local_398 = (undefined4)local_2e8;
                  uStack_394 = local_2e8._4_4_;
                  local_3a8 = local_2f8;
                  puVar10 = (undefined1 *)local_2d8._8_8_;
                  puVar13 = local_2f8;
                }
                else {
                  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
                    local_388 = *(longlong *)(in_FS_OFFSET + -0x38);
                    pcVar9 = *(code **)(in_FS_OFFSET + -0x30);
                  }
                  else {
                    local_388 = (*(code *)PTR_hashmap_random_keys_00799248)();
                    *(longlong *)(in_FS_OFFSET + -0x38) = local_388;
                    *(code **)(in_FS_OFFSET + -0x30) = pcVar9;
                    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
                  }
                  puVar10 = (undefined1 *)(local_388 + 1);
                  *(undefined1 **)(in_FS_OFFSET + -0x38) = puVar10;
                  local_3a8 = (code *)CONCAT44(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                               ._4_4_,
                                                  PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                                  ._0_4_);
                  pcStack_3a0 = (code *)CONCAT44(_UNK_00789ccc,_DAT_00789cc8);
                  local_398 = _DAT_00789cd0;
                  uStack_394 = _UNK_00789cd4;
                  uStack_390 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
                  puVar13 = anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
                  pcStack_380 = pcVar9;
                }
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_2f8,&local_1b8);
                local_1c8 = unaff_EBP;
                if ((char)local_2f8 == '\x01') {
LAB_00437743:
                  pcVar9 = uStack_2f0;
                }
                else {
                  if (local_2f8._1_1_ == '\x01') {
                    deserialize_map::
                    <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
                              (&local_2f8,local_1b8);
                    if (local_2f8 == (code *)0x0) goto LAB_00437743;
                    puVar10 = (undefined1 *)&uStack_2f0;
                    pcStack_240 = uStack_2e0;
                    local_238._8_8_ = local_2d8._8_8_;
                    local_238._0_8_ = local_2d8._0_8_;
                    uStack_250 = uStack_2f0;
                    local_248 = local_2e8;
                    local_258 = local_2f8;
                  }
                  else {
                    local_238 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                                ::with::
                                <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                                          (&PTR_call_once_00789cb8);
                    local_248 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
                    pcStack_240 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
                    local_258 = (code *)CONCAT44(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                                 ._4_4_,
                                                  PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                                  ._0_4_);
                    uStack_250 = (code *)CONCAT44(_UNK_00789ccc,_DAT_00789cc8);
                  }
                  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                  ::next_element_seed::has_next_element::
                  <serde_json[dc3825464c436029]::read::SliceRead>(&local_2f8,&local_1b8);
                  if ((char)local_2f8 != '\x01') {
                    if (local_2f8._1_1_ == '\x01') {
                      deserialize_map::
                      <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                                (&local_2f8,local_1b8);
                      local_1d8._8_8_ = local_2d8._8_8_;
                      local_1d8._0_8_ = local_2d8._0_8_;
                      puVar10 = local_2f8;
                      if (local_2f8 == (code *)0x0) goto LAB_00437972;
                      local_328 = uStack_2e0;
                      local_338 = uStack_2f0;
                      pcStack_330 = local_2e8;
                      ppcVar12 = &local_338;
                    }
                    else {
                      local_1d8 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                                  ::with::
                                  <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                                            (&PTR_call_once_00789cb8);
                      puVar10 = anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
                      ppcVar12 = (code **)&DAT_00789cc8;
                    }
                    local_358 = ppcVar12[2];
                    local_368 = *ppcVar12;
                    uStack_360 = ppcVar12[1];
                    local_178 = (code *)CONCAT44(uStack_394,local_398);
                    pcStack_170 = uStack_390;
                    local_168 = local_388;
                    pcStack_160 = pcStack_380;
                    local_158 = local_258;
                    uStack_150 = uStack_250;
                    local_148 = local_248;
                    uStack_140 = pcStack_240;
                    uStack_250 = pcStack_3a0;
                    local_138 = local_238;
                    goto LAB_004371a9;
                  }
LAB_00437972:
                  pcVar9 = uStack_2f0;
                  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(&local_258);
                }
                local_1d8 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                            ::drop(&local_3a8);
              }
              puVar13 = (code *)0x0;
              uStack_250 = pcVar9;
            }
            else {
              puVar13 = (code *)0x0;
              local_1d8 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789da0,&DAT_00789c78);
              uStack_250 = local_1d8._0_8_;
              local_1c8 = unaff_EBP;
            }
LAB_004371a9:
            param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
            local_248 = local_178;
            pcStack_240 = pcStack_170;
            local_238._0_8_ = local_168;
            local_238._8_8_ = pcStack_160;
            local_228 = (undefined4)local_158;
            uStack_224 = local_158._4_4_;
            uStack_220 = (undefined4)uStack_150;
            uStack_21c = uStack_150._4_4_;
            local_218 = (undefined4)local_148;
            uStack_214 = local_148._4_4_;
            uStack_210 = (undefined4)uStack_140;
            uStack_20c = uStack_140._4_4_;
            pcStack_1f0 = local_368;
            local_1e8 = (undefined4)uStack_360;
            uStack_1e4 = uStack_360._4_4_;
            pcStack_1e0 = local_358;
            local_258 = (code *)puVar13;
            local_1f8 = (code *)puVar10;
            local_208 = local_138;
            pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            uVar14 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x98);
            local_260 = pcVar9;
            if (local_2f8 == (code *)0x0) goto LAB_004375f6;
            if (pcVar9 == (code *)0x0) goto LAB_00437618;
            <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_2f8,&local_258);
            <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(local_2c8);
            goto LAB_004375d9;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_369,&DAT_0078a6c0);
            goto LAB_00437db1;
          }
          pcVar9 = param_2 + 0x38;
          *pcVar9 = (code)((char)*pcVar9 + -1);
          if (*pcVar9 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            local_180 = 1;
            local_368 = (code *)0x0;
            local_3c8 = (code *)0x0;
            local_308 = (code *)&DAT_001945d5;
            local_3d8 = (code *)0x0;
            local_3d0 = (code *)0x0;
            local_370 = 0;
            local_188 = param_2;
            goto LAB_00436d50;
          }
        }
        local_2f8 = (code *)0x18;
        goto LAB_00436cb1;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6;
    } while (uVar6 != uVar8);
  }
  local_2f8 = (code *)0x5;
LAB_00436cb1:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_2f8);
  goto LAB_00436cc1;
LAB_00436d50:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
            (&local_2f8,&local_188);
  pcVar5 = local_188;
  auVar17._8_8_ = extraout_RDX;
  auVar17._0_8_ = uStack_2f0;
  local_338 = local_3d0;
  pcStack_330 = local_3b8;
  local_3a8 = local_3d8;
  pcStack_3a0 = local_3c0;
  pcVar11 = local_3c8;
  uStack_360 = local_3b0;
  pcVar9 = uStack_2f0;
  if ((char)local_2f8 == '\x01') goto joined_r0x00437cf3;
  if (local_2f8._1_1_ != '\x01') {
    local_368 = local_3c8;
    if ((local_370 & 1) == 0) {
      local_258 = (code *)&DAT_001945d5;
      uStack_250 = (code *)&DAT_00000007;
      local_2f8 = (code *)&local_258;
      uStack_2f0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                           &local_2f8);
      goto LAB_0043749e;
    }
    if (local_3c8 == (code *)0x0) {
      local_238 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                  ::with::
                  <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                            (&PTR_call_once_00789cb8);
      local_248 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
      pcStack_240 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
      local_258 = (code *)CONCAT44(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                   ._4_4_,PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                          ._0_4_);
      uStack_250 = (code *)CONCAT44(_UNK_00789ccc,_DAT_00789cc8);
      auVar15 = local_238;
      if (local_3d0 != (code *)0x0) goto LAB_004373ec;
LAB_00437805:
      local_238 = auVar15;
      local_2d8 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                  ::with::
                  <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                            (&PTR_call_once_00789cb8);
      local_2e8 = (code *)CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
      uStack_2e0 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
      local_2f8 = (code *)CONCAT44(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                   ._4_4_,PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                          ._0_4_);
      uStack_2f0 = (code *)CONCAT44(_UNK_00789ccc,_DAT_00789cc8);
      auVar3 = local_2d8;
      if (local_3d8 != (code *)0x0) goto LAB_00437427;
LAB_0043784a:
      local_2d8 = auVar3;
      local_1d8 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                  ::with::
                  <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                            (&PTR_call_once_00789cb8);
      local_1a8 = CONCAT44(_UNK_00789cd4,_DAT_00789cd0);
      pcStack_1a0 = (code *)CONCAT44(DAT_00789cd8._4_4_,(undefined4)DAT_00789cd8);
      local_1b8 = (code *)CONCAT44(PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                   ._4_4_,PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00789cc0
                                          ._0_4_);
      pcStack_1b0 = (code *)CONCAT44(_UNK_00789ccc,_DAT_00789cc8);
    }
    else {
      pcStack_240 = (code *)CONCAT44(uStack_34c,uStack_350);
      auVar15._8_8_ = pcStack_340;
      auVar15._0_8_ = local_348;
      local_238._8_8_ = pcStack_340;
      local_238._0_8_ = local_348;
      local_248 = local_358;
      local_258 = local_3c8;
      uStack_250 = local_3b0;
      if (local_3d0 == (code *)0x0) goto LAB_00437805;
LAB_004373ec:
      uStack_2e0 = (code *)CONCAT44(uStack_31c,uStack_320);
      auVar3._8_8_ = pcStack_310;
      auVar3._0_8_ = local_318;
      local_2d8._8_8_ = pcStack_310;
      local_2d8._0_8_ = local_318;
      local_2e8 = local_328;
      local_2f8 = local_338;
      uStack_2f0 = pcStack_330;
      if (local_3d8 == (code *)0x0) goto LAB_0043784a;
LAB_00437427:
      local_1d8._8_8_ = pcStack_380;
      local_1d8._0_8_ = local_388;
      local_1a8 = CONCAT44(uStack_394,local_398);
      pcStack_1a0 = uStack_390;
      local_1b8 = local_3a8;
      pcStack_1b0 = pcStack_3a0;
    }
    local_128 = local_248;
    pcStack_120 = pcStack_240;
    local_108 = local_2f8;
    uStack_100 = uStack_2f0;
    local_f8 = local_2e8;
    uStack_f0 = uStack_2e0;
    local_d8 = local_1b8;
    pcStack_d0 = pcStack_1b0;
    local_c8 = local_1a8;
    pcStack_c0 = pcStack_1a0;
    local_e8 = local_2d8;
    goto LAB_004374dd;
  }
  pcVar9 = local_188 + 0x18;
  *(longlong *)(local_188 + 0x28) = *(longlong *)(local_188 + 0x28) + 1;
  *(longlong *)(local_188 + 0x10) = 0;
  pcVar11 = local_188;
  (*(code *)PTR_parse_str_007998f8)();
  auVar17._8_8_ = pcVar11;
  auVar17._0_8_ = uStack_2f0;
  if (local_2f8 == (code *)0x2) goto LAB_004372b0;
  if (local_2e8 == (code *)&DAT_00000004) {
    if (*(int *)uStack_2f0 == 0x6c6f6f74) {
      if (local_3c8 == (code *)0x0) {
        uVar8 = *(ulonglong *)(pcVar5 + 0x28);
        if (uVar8 < *(ulonglong *)(pcVar5 + 0x20)) {
          lVar2 = *(longlong *)pcVar9;
          while( true ) {
            uVar8 = uVar8 + 1;
            uVar6 = (ulonglong)*(byte *)(lVar2 + -1 + uVar8);
            if (0x3a < uVar6) goto LAB_00437f6e;
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(pcVar5 + 0x28) = uVar8;
            if (uVar8 == *(ulonglong *)(pcVar5 + 0x20)) goto LAB_00437a7d;
          }
          if (uVar6 == 0x3a) {
            *(ulonglong *)(pcVar5 + 0x28) = uVar8;
            deserialize_map::
            <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                      (&local_2f8,pcVar5);
            auVar17._8_8_ = extraout_RDX_01;
            auVar17._0_8_ = uStack_2f0;
            local_3c8 = local_2f8;
            if (local_2f8 == (code *)0x0) {
              local_368 = (code *)0x0;
              local_3c8 = (code *)0x0;
              pcVar11 = local_368;
              pcVar9 = uStack_2f0;
              goto joined_r0x00437cf3;
            }
            local_348 = local_2d8._0_8_;
            pcStack_340 = (code *)local_2d8._8_8_;
            local_358 = local_2e8;
            uStack_350 = (undefined4)uStack_2e0;
            uStack_34c = uStack_2e0._4_4_;
            local_3b0 = uStack_2f0;
            goto LAB_00436d50;
          }
LAB_00437f6e:
          local_368 = (code *)0x0;
          local_258 = (code *)&DAT_00000006;
          auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar5,&local_258);
        }
        else {
LAB_00437a7d:
          local_368 = (code *)0x0;
          local_258 = (code *)0x3;
          auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar5,&local_258);
        }
        local_3b0 = auVar17._0_8_;
        local_3c8 = (code *)0x0;
        pcVar11 = local_368;
        pcVar9 = local_3b0;
        goto joined_r0x00437cf3;
      }
      uStack_250 = (code *)&DAT_00000004;
      local_308 = (code *)&anon_ec7f14c74815bf4c93b295cfd0665412_119_llvm_7806621557641746444;
    }
    else {
      if (*(int *)uStack_2f0 != 0x74786574) goto LAB_00436ee2;
      if (local_3d8 == (code *)0x0) {
        uVar8 = *(ulonglong *)(pcVar5 + 0x28);
        if (uVar8 < *(ulonglong *)(pcVar5 + 0x20)) {
          lVar2 = *(longlong *)pcVar9;
          while( true ) {
            uVar8 = uVar8 + 1;
            uVar6 = (ulonglong)*(byte *)(lVar2 + -1 + uVar8);
            if (0x3a < uVar6) goto LAB_00437fd2;
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(pcVar5 + 0x28) = uVar8;
            if (uVar8 == *(ulonglong *)(pcVar5 + 0x20)) goto LAB_00437bdf;
          }
          if (uVar6 == 0x3a) {
            *(ulonglong *)(pcVar5 + 0x28) = uVar8;
            deserialize_map::
            <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                      (&local_2f8,pcVar5);
            auVar17._8_8_ = extraout_RDX_03;
            auVar17._0_8_ = uStack_2f0;
            local_3d8 = local_2f8;
            if (local_2f8 == (code *)0x0) {
              local_3a8 = (code *)0x0;
              local_368 = local_3c8;
              goto LAB_004374b4;
            }
            local_388 = local_2d8._0_8_;
            pcStack_380 = (code *)local_2d8._8_8_;
            local_398 = (undefined4)local_2e8;
            uStack_394 = local_2e8._4_4_;
            uStack_390 = uStack_2e0;
            local_3c0 = uStack_2f0;
            goto LAB_00436d50;
          }
LAB_00437fd2:
          local_3a8 = (code *)0x0;
          local_368 = local_3c8;
          local_258 = (code *)&DAT_00000006;
          auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar5,&local_258);
        }
        else {
LAB_00437bdf:
          local_3a8 = (code *)0x0;
          local_368 = local_3c8;
          local_258 = (code *)0x3;
          auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar5,&local_258);
        }
        local_3b0 = auVar17._0_8_;
        goto LAB_004374b4;
      }
      uStack_250 = (code *)&DAT_00000004;
      local_308 = (code *)0x18dfdc;
    }
LAB_00437e11:
    local_368 = local_3c8;
    local_258 = local_308;
    local_2f8 = (code *)&local_258;
    uStack_2f0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    auVar17 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_2f8);
  }
  else {
    if (local_2e8 == (code *)&DAT_00000008) {
      if (*(longlong *)uStack_2f0 != 0x676e696b6e696874) goto LAB_00436ee2;
      if (local_3d0 != (code *)0x0) {
        uStack_250 = (code *)&DAT_00000008;
        local_308 = (code *)&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_182_llvm_10049508496007902178;
        goto LAB_00437e11;
      }
      uVar8 = *(ulonglong *)(pcVar5 + 0x28);
      if (uVar8 < *(ulonglong *)(pcVar5 + 0x20)) {
        lVar2 = *(longlong *)pcVar9;
        while( true ) {
          uVar8 = uVar8 + 1;
          uVar6 = (ulonglong)*(byte *)(lVar2 + -1 + uVar8);
          if (0x3a < uVar6) goto LAB_00437ea2;
          if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar5 + 0x28) = uVar8;
          if (uVar8 == *(ulonglong *)(pcVar5 + 0x20)) goto LAB_00437afa;
        }
        if (uVar6 != 0x3a) {
LAB_00437ea2:
          local_338 = (code *)0x0;
          local_368 = local_3c8;
          local_258 = (code *)&DAT_00000006;
          auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar5,&local_258);
          goto LAB_00437b5f;
        }
        *(ulonglong *)(pcVar5 + 0x28) = uVar8;
        deserialize_map::
        <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
                  (&local_2f8,pcVar5);
        auVar16._8_8_ = extraout_RDX_00;
        auVar16._0_8_ = local_3b0;
        local_3d0 = local_2f8;
        if (local_2f8 != (code *)0x0) {
          local_318 = local_2d8._0_8_;
          pcStack_310 = (code *)local_2d8._8_8_;
          local_328 = local_2e8;
          uStack_320 = (undefined4)uStack_2e0;
          uStack_31c = uStack_2e0._4_4_;
          local_3b8 = uStack_2f0;
          goto LAB_00436d50;
        }
        local_338 = (code *)0x0;
        local_368 = local_3c8;
        pcVar9 = uStack_2f0;
      }
      else {
LAB_00437afa:
        local_338 = (code *)0x0;
        local_368 = local_3c8;
        local_258 = (code *)0x3;
        auVar16 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(pcVar5,&local_258);
LAB_00437b5f:
        pcVar9 = auVar16._0_8_;
      }
      local_3b0 = auVar16._0_8_;
      auVar17._8_8_ = auVar16._8_8_;
      auVar17._0_8_ = pcVar9;
      local_3d0 = (code *)0x0;
      pcVar11 = local_368;
      goto joined_r0x00437cf3;
    }
    if ((local_2e8 != (code *)&DAT_00000007) ||
       (*(int *)(uStack_2f0 + 3) != 0x6e6f6973 || *(int *)uStack_2f0 != 0x73726576)) {
LAB_00436ee2:
      auVar17 = <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                          (pcVar5,pcVar9);
      if (auVar17._0_8_ != 0) goto LAB_004372b0;
      goto LAB_00436d50;
    }
    if (local_370 != 0) {
      uStack_250 = (code *)&DAT_00000007;
      goto LAB_00437e11;
    }
    uVar8 = *(ulonglong *)(pcVar5 + 0x28);
    if (*(ulonglong *)(pcVar5 + 0x20) <= uVar8) {
LAB_00437b7d:
      local_368 = local_3c8;
      local_2f8 = (code *)0x3;
      auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(pcVar5,&local_2f8);
      goto LAB_0043749e;
    }
    lVar2 = *(longlong *)pcVar9;
    while( true ) {
      uVar8 = uVar8 + 1;
      uVar6 = (ulonglong)*(byte *)(lVar2 + -1 + uVar8);
      if (0x3a < uVar6) goto LAB_00437f0c;
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar5 + 0x28) = uVar8;
      if (uVar8 == *(ulonglong *)(pcVar5 + 0x20)) goto LAB_00437b7d;
    }
    if (uVar6 == 0x3a) {
      *(ulonglong *)(pcVar5 + 0x28) = uVar8;
      deserialize_u32::
      <<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                (&local_258,pcVar5);
      auVar17._8_8_ = extraout_RDX_02;
      auVar17._0_8_ = uStack_250;
      pcVar11 = local_3c8;
      pcVar9 = uStack_250;
      if ((int)local_258 == 1) goto joined_r0x00437cf3;
      local_18c = local_258._4_4_;
      local_370 = 1;
      goto LAB_00436d50;
    }
LAB_00437f0c:
    local_368 = local_3c8;
    local_2f8 = (code *)&DAT_00000006;
    auVar17 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(pcVar5,&local_2f8);
  }
LAB_0043749e:
  local_3b0 = auVar17._0_8_;
  pcVar11 = local_368;
  pcVar9 = local_3b0;
  goto joined_r0x00437cf3;
LAB_004372b0:
  pcVar9 = auVar17._0_8_;
  pcVar11 = local_3c8;
joined_r0x00437cf3:
  local_368 = pcVar11;
  if (local_3d8 != (code *)0x0) {
    auVar15 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_3a8);
    auVar17._8_8_ = auVar15._8_8_;
    auVar17._0_8_ = pcVar9;
    local_3b0 = auVar15._0_8_;
  }
LAB_004374b4:
  local_1d8._8_8_ = auVar17._8_8_;
  local_1d8._0_8_ = local_3b0;
  if (local_3d0 != (code *)0x0) {
    local_1d8 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(&local_338);
  }
  if (local_3c8 != (code *)0x0) {
    local_1d8 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(&local_368);
  }
  local_238._8_8_ = local_118._8_8_;
  local_238._0_8_ = local_118._0_8_;
  local_258 = (code *)0x0;
  uStack_250 = auVar17._0_8_;
LAB_004374dd:
  param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
  local_248 = local_128;
  pcStack_240 = pcStack_120;
  local_228 = (undefined4)local_108;
  uStack_224 = local_108._4_4_;
  uStack_220 = (undefined4)uStack_100;
  uStack_21c = uStack_100._4_4_;
  local_218 = (undefined4)local_f8;
  uStack_214 = local_f8._4_4_;
  uStack_210 = (undefined4)uStack_f0;
  uStack_20c = uStack_f0._4_4_;
  local_1f8 = local_d8;
  pcStack_1f0 = pcStack_d0;
  local_1e8 = (undefined4)local_c8;
  uStack_1e4 = local_c8._4_4_;
  pcStack_1e0 = pcStack_c0;
  local_1c8 = local_18c;
  local_118 = local_238;
  local_208 = local_e8;
  pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  uVar14 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,0x98);
  local_260 = pcVar9;
  if (local_2f8 == (code *)0x0) {
LAB_004375f6:
    pcVar9 = uStack_2f0;
    if (local_260 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (local_260,&local_258);
    }
  }
  else if (pcVar9 == (code *)0x0) {
LAB_00437618:
    pcVar9 = uStack_2f0;
    pcVar5 = local_2f8;
    uVar14 = (*(code *)PTR_memcpy_00799008)(uVar14,0x88);
    puVar4 = local_300;
    if (pcVar5 != (code *)0x0) {
      (*(code *)PTR_memcpy_00799008)(uVar14,0x88);
      *puVar4 = pcVar5;
      puVar4[1] = pcVar9;
      return puVar4;
    }
  }
  else {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_2f8);
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(local_2c8);
LAB_004375d9:
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(local_298);
  }
LAB_00437db1:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar9,param_2);
LAB_00436cc1:
  local_300[1] = uVar7;
  *local_300 = 0;
  return local_300;
}


