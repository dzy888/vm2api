// 0014dbc0 <<craggemini[b21da2d71f2da7a3]::Context_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::Context
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::Context_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,code *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  code **ppcVar9;
  code *pcVar10;
  code *pcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code *pcVar14;
  ulonglong uVar15;
  code *unaff_R12;
  code *unaff_R15;
  code *pcVar16;
  undefined8 extraout_XMM0_Qa;
  code *pcVar17;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar18 [16];
  code *local_270;
  code *local_268;
  code *local_260;
  code *local_258;
  code *local_250;
  code *local_248;
  code *local_240;
  code *local_238;
  code *local_230;
  code *local_228;
  code *local_218;
  code *local_210;
  code *local_208;
  code *local_200;
  code *local_1f8;
  code *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined8 local_1d8;
  code *pcStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *local_170;
  undefined1 local_161;
  undefined8 local_160;
  code *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  code *local_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *local_100;
  undefined8 *local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 local_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code *local_48;
  code *pcStack_40;
  code *local_38;
  
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  local_f8 = param_1;
  if (uVar6 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar6 = uVar6 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 != 0x5b) {
          if (bVar1 != 0x7b) {
            pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_invalid_type(param_2,&local_161,&DAT_00215110);
            goto LAB_0014f157;
          }
          pcVar11 = param_2 + 0x38;
          *pcVar11 = (code)((char)*pcVar11 + -1);
          if (*pcVar11 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            local_e0 = 1;
            local_210 = (code *)0xffffffffffffffff;
            local_1f8 = (code *)0xffffffffffffffff;
            local_268 = (code *)0xffffffffffffffff;
            local_170 = (code *)&DAT_00114300;
            local_270 = (code *)0xffffffffffffffff;
            local_218 = (code *)0xffffffffffffffff;
            pcVar11 = (code *)0xffffffffffffffff;
            local_e8 = param_2;
            goto LAB_0014dcd0;
          }
LAB_0014f12c:
          local_1d8 = (code *)0x18;
          goto LAB_0014dc31;
        }
        pcVar11 = param_2 + 0x38;
        *pcVar11 = (code)((char)*pcVar11 + -1);
        if (*pcVar11 == (code)0x0) goto LAB_0014f12c;
        *(ulonglong *)(param_2 + 0x28) = uVar6;
        local_228 = (code *)CONCAT71(local_228._1_7_,1);
        local_230 = param_2;
        <craggemini[b21da2d71f2da7a3]::Context_as_core[c0acaeba6ab4c2e0]::default::Default>::default
                  (&local_1d8);
        uVar7 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_160,&local_230);
        if (local_160._0_1_ == (code)0x1) {
          pcVar10 = pcStack_158;
LAB_0014e11a:
          bVar3 = true;
          if (local_1d8 != (code *)0x0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
          }
LAB_0014e3a7:
          if (CONCAT44(uStack_1bc,uStack_1c0) != 0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
          }
        }
        else {
          bVar1 = local_160._1_1_;
          unaff_R12 = (code *)(ulonglong)local_160._1_1_;
          if (local_160._1_1_ == 1) {
            uVar7 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                              (&local_160,local_230);
            pcVar10 = pcStack_158;
            if (local_160 == (code *)0xffffffffffffffff) goto LAB_0014e11a;
            pcVar11 = local_150;
            local_270 = local_160;
          }
          else {
            pcVar11 = (code *)CONCAT44(uStack_1c4,local_1c8);
            pcVar10 = pcStack_1d0;
            local_270 = local_1d8;
          }
          uVar7 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                  ::next_element_seed::has_next_element::
                  <serde_json[dc3825464c436029]::read::SliceRead>(&local_160,&local_230);
          if (local_160._0_1_ == (code)0x1) {
joined_r0x0014ebe1:
            bVar4 = true;
            bVar3 = true;
            pcVar10 = pcStack_158;
          }
          else {
            local_1e0 = (code *)CONCAT71(local_1e0._1_7_,bVar1);
            if (local_160._1_1_ == '\x01') {
              uVar7 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
                                (&local_160,local_230);
              if (local_160 == (code *)0xffffffffffffffff) {
                unaff_R12 = (code *)((ulonglong)local_1e0 & 0xff);
                goto joined_r0x0014ebe1;
              }
              local_218 = local_150;
              bVar4 = true;
              local_250 = pcStack_158;
              pcVar14 = local_160;
            }
            else {
              pcVar14 = (code *)CONCAT44(uStack_1bc,uStack_1c0);
              local_250 = (code *)CONCAT44(uStack_1b4,local_1b8);
              local_218 = (code *)CONCAT44(uStack_1ac,uStack_1b0);
              bVar4 = false;
            }
            uVar7 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                    ::next_element_seed::has_next_element::
                    <serde_json[dc3825464c436029]::read::SliceRead>(&local_160,&local_230);
            if (local_160._0_1_ == (code)0x1) {
LAB_0014ead2:
              bVar3 = true;
              pcVar11 = local_238;
              pcVar10 = pcStack_158;
            }
            else {
              if (local_160._1_1_ == '\x01') {
                uVar7 = deserialize_string::
                        <serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
                                  (&local_160,local_230);
                local_268 = local_160;
                if (local_160 == (code *)0xffffffffffffffff) goto LAB_0014ead2;
                local_240 = local_150;
                bVar3 = true;
                pcVar8 = pcStack_158;
              }
              else {
                local_268 = (code *)CONCAT44(uStack_1a4,local_1a8);
                pcVar8 = (code *)CONCAT44(uStack_19c,uStack_1a0);
                local_240 = local_198;
                bVar3 = false;
              }
              uVar7 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                      ::next_element_seed::has_next_element::
                      <serde_json[dc3825464c436029]::read::SliceRead>(&local_160,&local_230);
              if (local_160._0_1_ != (code)0x1) {
                local_248 = pcVar14;
                if (local_160._1_1_ == '\x01') {
                  uVar7 = deserialize_seq::
                          <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::ContextAccount>>
                                    (&local_160,local_230);
                  local_258 = local_160;
                  if (local_160 == (code *)0xffffffffffffffff) {
                    pcVar10 = pcStack_158;
                    goto joined_r0x0014efad;
                  }
                  unaff_R12 = pcStack_158;
                  pcVar14 = local_150;
                }
                else {
                  local_258 = (code *)0xffffffffffffffff;
                  unaff_R12 = pcVar14;
                  pcVar14 = pcVar8;
                }
                local_100 = pcStack_190;
                local_f0 = pcStack_180;
                local_170 = pcVar10;
                if (((char)local_1e0 != '\0') && (local_1d8 != (code *)0x0)) {
                  uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
                }
                if ((bVar4) && (CONCAT44(uStack_1bc,uStack_1c0) != 0)) {
                  uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
                }
                if ((bVar3) && (CONCAT44(uStack_1a4,local_1a8) != 0)) {
                  (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
                }
                local_238 = pcVar11;
                if (local_258 != (code *)0xffffffffffffffff) {
                  uVar7 = <alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::ContextAccount>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                          ::drop(&pcStack_190);
                  pcVar10 = local_170;
                  goto joined_r0x0014ed27;
                }
                local_258 = local_100;
                pcStack_108 = local_f0;
                pcStack_158 = local_170;
                goto LAB_0014e4a4;
              }
              pcVar10 = pcStack_158;
joined_r0x0014efad:
              if (local_268 != (code *)0x0) {
                uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
              }
            }
            if (pcVar14 != (code *)0x0) {
              uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
            }
            unaff_R12 = (code *)((ulonglong)local_1e0 & 0xff);
            local_238 = pcVar11;
          }
          if (local_270 != (code *)0x0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
          }
          if (((char)unaff_R12 != '\0') && (local_1d8 != (code *)0x0)) {
            uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
          }
          if (bVar4) goto LAB_0014e3a7;
        }
        if ((bVar3) && (CONCAT44(uStack_1a4,local_1a8) != 0)) {
          uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
        }
        puVar5 = PTR___rust_dealloc_00219c40;
        local_270 = (code *)0xffffffffffffffff;
        pcVar14 = pcVar10;
        if (pcStack_180 != (code *)0x0) {
          unaff_R12 = local_188 + 0x38;
          pcVar11 = pcStack_180;
          do {
            if ((*(longlong *)(unaff_R12 + -0x38) != -1) && (*(longlong *)(unaff_R12 + -0x38) != 0))
            {
              uVar7 = (*(code *)puVar5)(uVar7,1);
            }
            if ((*(longlong *)(unaff_R12 + -0x20) != -1) && (*(longlong *)(unaff_R12 + -0x20) != 0))
            {
              uVar7 = (*(code *)puVar5)(uVar7,1);
            }
            if ((*(longlong *)(unaff_R12 + -8) != -1) && (*(longlong *)(unaff_R12 + -8) != 0)) {
              uVar7 = (*(code *)puVar5)(uVar7,1);
            }
            unaff_R12 = unaff_R12 + 0x48;
            pcVar11 = pcVar11 + -1;
            pcVar14 = (code *)puVar5;
          } while (pcVar11 != (code *)0x0);
        }
        pcVar8 = (code *)0x0;
joined_r0x0014ed27:
        local_188 = unaff_R12;
        pcStack_108 = pcVar14;
        pcStack_158 = pcVar10;
        if (pcStack_190 != (code *)0x0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar7,8);
        }
LAB_0014e4a4:
        param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
        local_160 = local_270;
        local_150 = local_238;
        uStack_148 = local_248;
        uStack_140 = local_250;
        uStack_138 = local_218;
        local_130 = local_268;
        local_120 = local_240;
        pcStack_118 = local_258;
        uStack_128 = pcVar8;
        pcStack_110 = local_188;
        pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          ::end_seq(param_2);
        goto LAB_0014e8fa;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6;
    } while (uVar6 != *(ulonglong *)(param_2 + 0x20));
  }
  local_1d8 = (code *)0x5;
LAB_0014dc31:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_1d8);
  goto LAB_0014dc41;
LAB_0014dcd0:
LAB_0014dce0:
  uVar7 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
          ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                    (&local_1d8,&local_e8);
  pcVar10 = local_e8;
  if ((char)local_1d8 == '\x01') {
    local_230 = local_270;
    local_228 = local_258;
    local_1f0 = local_238;
    local_1e8 = local_260;
    local_210 = local_268;
    local_208 = local_248;
    local_200 = local_240;
    pcVar10 = pcStack_1d0;
    local_1f8 = pcVar11;
    goto LAB_0014e256;
  }
  if (local_1d8._1_1_ != '\x01') {
    local_230 = local_270;
    local_228 = local_258;
    local_1f0 = local_238;
    local_1e8 = local_260;
    local_210 = local_268;
    local_208 = local_248;
    local_200 = local_240;
    local_1f8 = pcVar11;
    <craggemini[b21da2d71f2da7a3]::Context_as_core[c0acaeba6ab4c2e0]::default::Default>::default
              (&local_1d8);
    pcVar14 = local_1d8;
    ppcVar9 = &local_210;
    if (local_268 == (code *)0xffffffffffffffff) {
      ppcVar9 = (code **)&uStack_1c0;
    }
    ppcVar12 = &local_1f8;
    if (pcVar11 == (code *)0xffffffffffffffff) {
      ppcVar12 = (code **)&local_1a8;
    }
    ppcVar13 = &local_230;
    if (local_270 == (code *)0xffffffffffffffff) {
      ppcVar13 = &pcStack_190;
    }
    pcVar8 = local_218;
    pcVar10 = local_1e0;
    if (local_218 == (code *)0xffffffffffffffff) {
      local_100 = (code *)CONCAT44(uStack_1c4,local_1c8);
      pcVar8 = local_1d8;
      pcVar10 = pcStack_1d0;
    }
    local_38 = ppcVar9[2];
    local_48 = *ppcVar9;
    pcStack_40 = ppcVar9[1];
    local_58 = ppcVar12[2];
    local_68 = *ppcVar12;
    pcStack_60 = ppcVar12[1];
    local_78 = ppcVar13[2];
    pcVar17 = *ppcVar13;
    pcStack_80 = ppcVar13[1];
    local_88 = pcVar17;
    if ((local_218 != (code *)0xffffffffffffffff) && (local_1d8 != (code *)0x0)) {
      pcVar17 = (code *)(*(code *)PTR___rust_dealloc_00219c40)(pcVar17,1);
    }
    if ((local_268 != (code *)0xffffffffffffffff) &&
       (pcVar14 = (code *)CONCAT44(uStack_1bc,uStack_1c0), pcVar14 != (code *)0x0)) {
      pcVar17 = (code *)(*(code *)PTR___rust_dealloc_00219c40)(pcVar17,1);
    }
    if ((pcVar11 != (code *)0xffffffffffffffff) &&
       (pcVar14 = (code *)CONCAT44(uStack_1a4,local_1a8), pcVar14 != (code *)0x0)) {
      pcVar17 = (code *)(*(code *)PTR___rust_dealloc_00219c40)(pcVar17,1);
    }
    puVar5 = PTR___rust_dealloc_00219c40;
    if (local_270 != (code *)0xffffffffffffffff) {
      if (pcStack_180 != (code *)0x0) {
        pcVar11 = local_188 + 0x38;
        pcVar16 = pcStack_180;
        do {
          if ((*(longlong *)(pcVar11 + -0x38) != -1) && (*(longlong *)(pcVar11 + -0x38) != 0)) {
            pcVar17 = (code *)(*(code *)puVar5)(pcVar17,1);
          }
          if ((*(longlong *)(pcVar11 + -0x20) != -1) && (*(longlong *)(pcVar11 + -0x20) != 0)) {
            pcVar17 = (code *)(*(code *)puVar5)(pcVar17,1);
          }
          pcVar14 = *(code **)(pcVar11 + -8);
          if ((pcVar14 != (code *)0xffffffffffffffff) && (pcVar14 != (code *)0x0)) {
            pcVar17 = (code *)(*(code *)puVar5)(pcVar17,1);
          }
          pcVar11 = pcVar11 + 0x48;
          pcVar16 = pcVar16 + -1;
        } while (pcVar16 != (code *)0x0);
      }
      if (pcStack_190 != (code *)0x0) {
        pcVar14 = (code *)((longlong)pcStack_190 * 0x48);
        (*(code *)PTR___rust_dealloc_00219c40)(pcVar17,8);
      }
    }
    local_150 = local_100;
    goto LAB_0014e874;
  }
  pcVar14 = local_e8 + 0x18;
  *(longlong *)(local_e8 + 0x28) = *(longlong *)(local_e8 + 0x28) + 1;
  *(longlong *)(local_e8 + 0x10) = 0;
  uVar7 = (*(code *)PTR_parse_str_00219c90)(uVar7,local_e8);
  pcVar8 = pcStack_1d0;
  if ((int)local_1d8 != 2) {
    pcVar8 = pcVar14;
    switch(CONCAT44(uStack_1c4,local_1c8)) {
    case 5:
      if (pcStack_1d0[4] == (code)0x64 && *(int *)pcStack_1d0 == 0x695f6d76) {
        if (local_218 != (code *)0xffffffffffffffff) {
          local_170 = (code *)0x1144d6;
          goto LAB_0014f188;
        }
        uVar6 = *(ulonglong *)(pcVar10 + 0x28);
        if (uVar6 < *(ulonglong *)(pcVar10 + 0x20)) {
          lVar2 = *(longlong *)pcVar14;
          while( true ) {
            uVar6 = uVar6 + 1;
            uVar15 = (ulonglong)*(byte *)(lVar2 + -1 + uVar6);
            if (0x3a < uVar15) goto LAB_0014f2bb;
            if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(pcVar10 + 0x28) = uVar6;
            if (uVar6 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0014ee79;
          }
          if (uVar15 == 0x3a) {
            *(ulonglong *)(pcVar10 + 0x28) = uVar6;
            uVar7 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                              (&local_160,pcVar10);
            local_218 = local_160;
            if (local_160 == (code *)0xffffffffffffffff) {
              local_230 = local_270;
              local_228 = local_258;
              local_1f0 = local_238;
              local_1e8 = local_260;
              local_210 = local_268;
              local_208 = local_248;
              local_200 = local_240;
              local_218 = (code *)0xffffffffffffffff;
              pcVar10 = pcStack_158;
              local_1f8 = pcVar11;
              goto LAB_0014e256;
            }
            local_100 = local_150;
            local_1e0 = pcStack_158;
            goto LAB_0014dce0;
          }
LAB_0014f2bb:
          local_230 = local_270;
          local_228 = local_258;
          local_1f0 = local_238;
          local_1e8 = local_260;
          local_210 = local_268;
          local_208 = local_248;
          local_200 = local_240;
          local_1d8 = (code *)0x6;
          local_218 = (code *)0xffffffffffffffff;
          local_1f8 = pcVar11;
          pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ::peek_error(pcVar10,&local_1d8);
          uVar7 = extraout_XMM0_Qa_06;
        }
        else {
LAB_0014ee79:
          local_230 = local_270;
          local_228 = local_258;
          local_1f0 = local_238;
          local_1e8 = local_260;
          local_210 = local_268;
          local_208 = local_248;
          local_200 = local_240;
          local_1d8 = (code *)0x3;
          local_218 = (code *)0xffffffffffffffff;
          local_1f8 = pcVar11;
          pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ::peek_error(pcVar10,&local_1d8);
          uVar7 = extraout_XMM0_Qa_02;
        }
        local_218 = (code *)0xffffffffffffffff;
        goto LAB_0014e256;
      }
      break;
    case 8:
      if (*(longlong *)pcStack_1d0 != 0x73746e756f636361) break;
      if (local_270 != (code *)0xffffffffffffffff) goto LAB_0014f188;
      uVar6 = *(ulonglong *)(pcVar10 + 0x28);
      if (uVar6 < *(ulonglong *)(pcVar10 + 0x20)) {
        lVar2 = *(longlong *)pcVar14;
        while( true ) {
          uVar6 = uVar6 + 1;
          uVar15 = (ulonglong)*(byte *)(lVar2 + -1 + uVar6);
          if (0x3a < uVar15) goto LAB_0014f344;
          if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar10 + 0x28) = uVar6;
          if (uVar6 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0014ed5a;
        }
        if (uVar15 != 0x3a) {
LAB_0014f344:
          local_230 = (code *)0xffffffffffffffff;
          local_228 = local_258;
          local_1f0 = local_238;
          local_1e8 = local_260;
          local_210 = local_268;
          local_208 = local_248;
          local_200 = local_240;
          local_1d8 = (code *)0x6;
          local_1f8 = pcVar11;
          pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ::peek_error(pcVar10,&local_1d8);
          uVar7 = extraout_XMM0_Qa_07;
          goto LAB_0014eddd;
        }
        *(ulonglong *)(pcVar10 + 0x28) = uVar6;
        uVar7 = deserialize_seq::
                <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::ContextAccount>>
                          (&local_160,pcVar10);
        if (local_160 != (code *)0xffffffffffffffff) goto code_r0x0014df60;
        local_230 = (code *)0xffffffffffffffff;
        local_228 = local_258;
        local_1f0 = local_238;
        local_1e8 = local_260;
        local_210 = local_268;
        local_208 = local_248;
        local_200 = local_240;
        pcVar10 = pcStack_158;
        pcVar8 = local_218;
        local_1f8 = pcVar11;
      }
      else {
LAB_0014ed5a:
        local_230 = (code *)0xffffffffffffffff;
        local_228 = local_258;
        local_1f0 = local_238;
        local_1e8 = local_260;
        local_210 = local_268;
        local_208 = local_248;
        local_200 = local_240;
        local_1d8 = (code *)0x3;
        local_1f8 = pcVar11;
        pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          ::peek_error(pcVar10,&local_1d8);
        uVar7 = extraout_XMM0_Qa_00;
LAB_0014eddd:
        pcVar8 = local_218;
      }
      goto LAB_0014e7d7;
    case 0xb:
      pcVar8 = (code *)0x7269645f65736e65;
      if (*(longlong *)(pcStack_1d0 + 3) == 0x7269645f65736e65 &&
          *(longlong *)pcStack_1d0 == 0x5f65736e6563696c) {
        if (local_268 != (code *)0xffffffffffffffff) {
          local_170 = (code *)0x1144db;
          goto LAB_0014f188;
        }
        uVar6 = *(ulonglong *)(pcVar10 + 0x28);
        if (*(ulonglong *)(pcVar10 + 0x20) <= uVar6) goto LAB_0014ef10;
        lVar2 = *(longlong *)pcVar14;
        goto LAB_0014dff1;
      }
      break;
    case 0x10:
      auVar18[0] = -(*pcStack_1d0 == DAT_00113c40);
      auVar18[1] = -(pcStack_1d0[1] == UNK_00113c41);
      auVar18[2] = -(pcStack_1d0[2] == UNK_00113c42);
      auVar18[3] = -(pcStack_1d0[3] == UNK_00113c43);
      auVar18[4] = -(pcStack_1d0[4] == UNK_00113c44);
      auVar18[5] = -(pcStack_1d0[5] == UNK_00113c45);
      auVar18[6] = -(pcStack_1d0[6] == UNK_00113c46);
      auVar18[7] = -(pcStack_1d0[7] == UNK_00113c47);
      auVar18[8] = -(pcStack_1d0[8] == UNK_00113c48);
      auVar18[9] = -(pcStack_1d0[9] == UNK_00113c49);
      auVar18[10] = -(pcStack_1d0[10] == UNK_00113c4a);
      auVar18[0xb] = -(pcStack_1d0[0xb] == UNK_00113c4b);
      auVar18[0xc] = -(pcStack_1d0[0xc] == UNK_00113c4c);
      auVar18[0xd] = -(pcStack_1d0[0xd] == UNK_00113c4d);
      auVar18[0xe] = -(pcStack_1d0[0xe] == UNK_00113c4e);
      auVar18[0xf] = -(pcStack_1d0[0xf] == UNK_00113c4f);
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) goto LAB_0014df77;
    }
    pcVar8 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                     ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                               (pcVar10,pcVar8);
    uVar7 = extraout_XMM0_Qa;
    if (pcVar8 == (code *)0x0) goto LAB_0014dce0;
  }
  pcStack_158 = pcVar8;
  local_210 = local_268;
  goto LAB_0014e1da;
LAB_0014df77:
  if (pcVar11 == (code *)0xffffffffffffffff) {
    uVar6 = *(ulonglong *)(pcVar10 + 0x28);
    if (uVar6 < *(ulonglong *)(pcVar10 + 0x20)) {
      lVar2 = *(longlong *)pcVar14;
      while( true ) {
        uVar6 = uVar6 + 1;
        uVar15 = (ulonglong)*(byte *)(lVar2 + -1 + uVar6);
        if (0x3a < uVar15) goto LAB_0014f236;
        if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar10 + 0x28) = uVar6;
        if (uVar6 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0014edea;
      }
      if (uVar15 == 0x3a) {
        *(ulonglong *)(pcVar10 + 0x28) = uVar6;
        uVar7 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
                          (&local_160,pcVar10);
        if (local_160 == (code *)0xffffffffffffffff) goto LAB_0014f084;
        local_260 = local_150;
        local_238 = pcStack_158;
        pcVar11 = local_160;
        goto LAB_0014dcd0;
      }
LAB_0014f236:
      local_230 = local_270;
      local_228 = local_258;
      local_1f8 = (code *)0xffffffffffffffff;
      local_1f0 = local_238;
      local_1e8 = local_260;
      local_210 = local_268;
      local_208 = local_248;
      local_200 = local_240;
      local_1d8 = (code *)0x6;
      pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(pcVar10,&local_1d8);
      uVar7 = extraout_XMM0_Qa_05;
    }
    else {
LAB_0014edea:
      local_230 = local_270;
      local_228 = local_258;
      local_1f8 = (code *)0xffffffffffffffff;
      local_1f0 = local_238;
      local_1e8 = local_260;
      local_210 = local_268;
      local_208 = local_248;
      local_200 = local_240;
      local_1d8 = (code *)0x3;
      pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(pcVar10,&local_1d8);
      uVar7 = extraout_XMM0_Qa_01;
    }
    pcVar11 = (code *)0xffffffffffffffff;
    goto LAB_0014e256;
  }
  local_170 = DAT_00113c40;
LAB_0014f188:
  local_230 = local_270;
  local_228 = local_258;
  local_1f0 = local_238;
  local_1e8 = local_260;
  local_210 = local_268;
  local_208 = local_248;
  local_200 = local_240;
  local_160 = local_170;
  local_1d8 = (code *)&local_160;
  pcStack_1d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_1f8 = pcVar11;
  pcVar10 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                              (anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171,
                               &local_1d8);
  uVar7 = extraout_XMM0_Qa_04;
LAB_0014ef93:
  goto LAB_0014e256;
LAB_0014dff1:
  uVar6 = uVar6 + 1;
  uVar15 = (ulonglong)*(byte *)(lVar2 + -1 + uVar6);
  if (0x3a < uVar15) goto LAB_0014f3cc;
  if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) goto LAB_0014e073;
  *(ulonglong *)(pcVar10 + 0x28) = uVar6;
  if (uVar6 == *(ulonglong *)(pcVar10 + 0x20)) goto LAB_0014ef10;
  goto LAB_0014dff1;
LAB_0014e073:
  if (uVar15 == 0x3a) {
    *(ulonglong *)(pcVar10 + 0x28) = uVar6;
    uVar7 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::PathBufVisitor>
                      (&local_160,pcVar10);
    local_268 = local_160;
    if (local_160 == (code *)0xffffffffffffffff) {
      local_210 = (code *)0xffffffffffffffff;
LAB_0014e1da:
      local_1e8 = local_260;
      local_1f0 = local_238;
      local_228 = local_258;
      local_230 = local_270;
      local_208 = local_248;
      local_200 = local_240;
      pcVar10 = pcStack_158;
      local_1f8 = pcVar11;
      goto LAB_0014e256;
    }
    local_240 = local_150;
    local_248 = pcStack_158;
    goto LAB_0014dcd0;
  }
LAB_0014f3cc:
  local_230 = local_270;
  local_228 = local_258;
  local_1f0 = local_238;
  local_1e8 = local_260;
  local_210 = (code *)0xffffffffffffffff;
  local_208 = local_248;
  local_200 = local_240;
  local_1d8 = (code *)0x6;
  local_1f8 = pcVar11;
  pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar10,&local_1d8);
  uVar7 = extraout_XMM0_Qa_08;
  goto LAB_0014ef93;
LAB_0014ef10:
  local_230 = local_270;
  local_228 = local_258;
  local_1f0 = local_238;
  local_1e8 = local_260;
  local_210 = (code *)0xffffffffffffffff;
  local_208 = local_248;
  local_200 = local_240;
  local_1d8 = (code *)0x3;
  local_1f8 = pcVar11;
  pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::peek_error(pcVar10,&local_1d8);
  uVar7 = extraout_XMM0_Qa_03;
  goto LAB_0014ef93;
code_r0x0014df60:
  local_270 = local_160;
  local_258 = pcStack_158;
  unaff_R15 = local_150;
  goto LAB_0014dce0;
LAB_0014f084:
  local_230 = local_270;
  local_228 = local_258;
  local_1f8 = (code *)0xffffffffffffffff;
  local_1f0 = local_238;
  local_1e8 = local_260;
  local_210 = local_268;
  local_208 = local_248;
  local_200 = local_240;
  pcVar11 = (code *)0xffffffffffffffff;
  pcVar10 = pcStack_158;
LAB_0014e256:
  puVar5 = PTR___rust_dealloc_00219c40;
  if (local_270 == (code *)0xffffffffffffffff) {
    pcVar8 = local_218;
  }
  else {
    if (unaff_R15 != (code *)0x0) {
      pcVar14 = local_258 + 0x38;
      do {
        if ((*(longlong *)(pcVar14 + -0x38) != -1) && (*(longlong *)(pcVar14 + -0x38) != 0)) {
          uVar7 = (*(code *)puVar5)(uVar7,1);
        }
        if ((*(longlong *)(pcVar14 + -0x20) != -1) && (*(longlong *)(pcVar14 + -0x20) != 0)) {
          uVar7 = (*(code *)puVar5)(uVar7,1);
        }
        if ((*(longlong *)(pcVar14 + -8) != -1) && (*(longlong *)(pcVar14 + -8) != 0)) {
          uVar7 = (*(code *)puVar5)(uVar7,1);
        }
        pcVar14 = pcVar14 + 0x48;
        unaff_R15 = unaff_R15 + -1;
      } while (unaff_R15 != (code *)0x0);
    }
    pcVar8 = local_218;
    if (local_270 == (code *)0x0) {
    }
    else {
      uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,8);
      pcVar11 = local_1f8;
    }
  }
LAB_0014e7d7:
  if ((pcVar11 != (code *)0xffffffffffffffff) && (pcVar11 != (code *)0x0)) {
    uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
  }
  pcVar14 = local_210;
  if ((local_210 != (code *)0xffffffffffffffff) && (local_210 != (code *)0x0)) {
    uVar7 = (*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
  }
  local_150 = pcVar8 + -1;
  if (local_150 < (code *)0xfffffffffffffffe) {
    local_150 = (code *)(*(code *)PTR___rust_dealloc_00219c40)(uVar7,1);
    pcVar14 = pcVar8;
  }
  pcVar8 = (code *)0xffffffffffffffff;
LAB_0014e874:
  param_2[0x38] = (code)((char)param_2[0x38] + '\x01');
  uStack_148 = local_48;
  uStack_140 = pcStack_40;
  uStack_138 = local_38;
  local_130 = local_68;
  uStack_128 = pcStack_60;
  local_120 = local_58;
  pcStack_118 = local_88;
  pcStack_110 = pcStack_80;
  pcStack_108 = local_78;
  local_160 = pcVar8;
  pcStack_158 = pcVar10;
  pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::end_map(param_2,pcVar14);
LAB_0014e8fa:
  pcVar11 = pcStack_158;
  local_188 = pcStack_110;
  pcStack_180 = pcStack_108;
  local_198 = local_120;
  pcStack_190 = pcStack_118;
  local_1a8 = (undefined4)local_130;
  uStack_1a4 = local_130._4_4_;
  uStack_1a0 = (undefined4)uStack_128;
  uStack_19c = uStack_128._4_4_;
  local_1b8 = (undefined4)uStack_140;
  uStack_1b4 = uStack_140._4_4_;
  uStack_1b0 = (undefined4)uStack_138;
  uStack_1ac = uStack_138._4_4_;
  local_1c8 = (undefined4)local_150;
  uStack_1c4 = local_150._4_4_;
  uStack_1c0 = (undefined4)uStack_148;
  uStack_1bc = uStack_148._4_4_;
  local_1d8 = local_160;
  pcStack_1d0 = pcStack_158;
  local_178 = pcVar10;
  if (local_160 == (code *)0xffffffffffffffff) {
    if (pcVar10 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar10);
    }
  }
  else if (pcVar10 == (code *)0x0) {
    local_d8 = local_150;
    pcStack_d0 = uStack_148;
    local_c8 = uStack_140;
    pcStack_c0 = uStack_138;
    local_b8 = local_130;
    pcStack_b0 = uStack_128;
    local_a8 = local_120;
    pcStack_a0 = pcStack_118;
    local_98 = pcStack_110;
    pcStack_90 = pcStack_108;
    if (local_160 != (code *)0xffffffffffffffff) {
      local_f8[10] = pcStack_110;
      local_f8[0xb] = pcStack_108;
      local_f8[8] = local_120;
      local_f8[9] = pcStack_118;
      local_f8[6] = local_130;
      local_f8[7] = uStack_128;
      local_f8[4] = uStack_140;
      local_f8[5] = uStack_138;
      local_f8[2] = local_150;
      local_f8[3] = uStack_148;
      *local_f8 = local_160;
      local_f8[1] = pcStack_158;
      return local_f8;
    }
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::Context>(&local_1d8);
    pcVar11 = pcVar10;
  }
LAB_0014f157:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar11,param_2);
LAB_0014dc41:
  local_f8[1] = uVar7;
  *local_f8 = 0xffffffffffffffff;
  return local_f8;
}


