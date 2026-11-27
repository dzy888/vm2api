// 005ce960 stage_with_workspace

/* <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>::stage_with_workspace */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>::stage_with_workspace
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
          longlong *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar16 [16];
  undefined4 local_1d4;
  char **local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  int local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  code *local_130;
  char **ppcStack_128;
  code *local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined2 local_108;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  char **ppcStack_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  longlong local_38;
  
  if (param_9 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    param_1[3] = 0xffffffffffffffff;
    return param_1;
  }
  local_1c8 = param_1;
  if ((param_2 == 0) || (cVar4 = (*(code *)PTR_is_dir_00799b80)(), cVar4 == '\0')) {
    puVar8 = &DAT_0019e4bc;
    uVar10 = 5;
  }
  else {
    puVar8 = &DAT_0019e4ab;
    uVar10 = 0x11;
    param_5 = param_3;
  }
  uVar15 = (*(code *)PTR__join_00799210)(puVar8,param_5,uVar10);
  uVar15 = (*(code *)PTR_metadata_00799308)(uVar15,local_88);
  puVar12 = local_1c8;
  if ((int)local_148 == 2) {
    if ((1 < ((uint)uStack_140 & 3) - 2) && (((ulonglong)uStack_140 & 3) != 0)) {
      uStack_140 = uStack_140 + -1;
      local_148 = (longlong *)CONCAT71(local_148._1_7_,3);
      uVar15 = (*(code *)PTR_drop_00799040)();
    }
    local_148 = (longlong *)CONCAT35(local_148._5_3_,0x1ff);
    lVar5 = (*(code *)PTR__create_00799410)(uVar15,local_88);
    uVar15 = extraout_XMM0_Da;
    if ((lVar5 != 0) ||
       (lVar5 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da,0x1c0),
       uVar15 = extraout_XMM0_Da_00, lVar5 != 0)) {
      puVar12[1] = lVar5;
      *puVar12 = 0xffffffffffffffff;
      goto LAB_005ceb6e;
    }
  }
  uVar15 = (*(code *)PTR__join_00799210)(param_6,local_88,param_7);
  pcVar11 = local_70;
  ppcVar3 = ppcStack_78;
  local_148 = (longlong *)CONCAT35(local_148._5_3_,0x1000001ff);
  lVar5 = (*(code *)PTR__create_00799410)(uVar15,local_70);
  uVar15 = extraout_XMM0_Da_01;
  if ((lVar5 == 0) &&
     (lVar5 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_01,0x1c0),
     uVar15 = extraout_XMM0_Da_02, lVar5 == 0)) {
    local_60 = pcVar11;
    local_1d0 = ppcVar3;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uStack_1a0 = (undefined *)(*(code *)PTR___rust_alloc_00799000)();
    if (uStack_1a0 == (undefined *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    local_1a8 = param_9;
    local_198 = (longlong *)0x0;
    local_68 = (longlong)param_9 * 0x48;
    lVar5 = 0;
    lVar13 = 0;
    local_1c0 = local_90;
    pcVar11 = (code *)PTR___rust_dealloc_00798fc8;
    do {
      plVar9 = *(longlong **)(param_8 + 8 + lVar13);
      uStack_140 = *(undefined **)(param_8 + 0x10 + lVar13);
      local_148 = (longlong *)0x0;
      ppcStack_128 = (char **)0x0;
      local_118 = 0x3b0000003b;
      local_110 = 1;
      local_108 = 1;
      local_150 = lVar5;
      local_138 = plVar9;
      local_130 = (code *)uStack_140;
      local_120 = (code *)uStack_140;
      local_58 = lVar5;
      <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(&local_190,&local_138);
      if (local_190 == 1) {
        lVar5 = (longlong)plVar9 + (longlong)local_148;
      }
      else if ((local_108._1_1_ == '\0') &&
              (((longlong *)uStack_140 != local_148 | (byte)local_108) == 1)) {
        lVar5 = (longlong)local_148 + (longlong)local_138;
      }
      else {
        lVar5 = 0;
      }
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      auVar16 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar5);
      lVar5 = auVar16._8_8_;
      plVar9 = auVar16._0_8_;
      if (lVar5 == 0xf) {
        bVar14 = *(longlong *)((longlong)plVar9 + 7) == 0x6664702f6e6f6974 &&
                 *plVar9 == 0x746163696c707061;
        pcVar6 = &DAT_0019ece7;
LAB_005cee81:
        local_40 = &DAT_0019ece4;
        if (bVar14) {
          local_40 = pcVar6;
        }
        lVar5 = *(longlong *)(param_8 + 0x30 + lVar13);
joined_r0x005ceefc:
        local_38 = 3;
        if (lVar5 == -1) goto LAB_005ceea1;
LAB_005cef2c:
        craggemini_core[66f3c71560d70857]::schema::sanitize_tool_name
                  (&local_148,*(undefined8 *)(param_8 + 0x38 + lVar13),
                   *(undefined8 *)(param_8 + 0x40 + lVar13));
        local_158 = local_138;
        local_168 = (int)local_148;
        uStack_164 = local_148._4_4_;
        uStack_160 = (undefined4)uStack_140;
        uStack_15c = uStack_140._4_4_;
      }
      else {
        if (lVar5 == 10) {
          local_40 = &DAT_0019eced;
          if ((short)plVar9[1] == 0x6765 && *plVar9 == 0x706a2f6567616d69) {
LAB_005cef10:
            lVar5 = *(longlong *)(param_8 + 0x30 + lVar13);
            goto joined_r0x005ceefc;
          }
          bVar14 = (short)plVar9[1] == 0x7062;
          local_40 = &DAT_0019ece4;
          if (bVar14 && *plVar9 == 0x65772f6567616d69) {
            local_40 = "webp";
          }
          local_38 = (ulonglong)(bVar14 && *plVar9 == 0x65772f6567616d69) + 3;
          lVar5 = *(longlong *)(param_8 + 0x30 + lVar13);
        }
        else {
          if (lVar5 != 9) {
            local_40 = &DAT_0019ece4;
            lVar5 = *(longlong *)(param_8 + 0x30 + lVar13);
            goto joined_r0x005ceefc;
          }
          if ((char)plVar9[1] == 'g' && *plVar9 == 0x6e702f6567616d69) {
            local_40 = &DAT_0019ecf0;
            goto LAB_005cef10;
          }
          if ((char)plVar9[1] != 'g' || *plVar9 != 0x706a2f6567616d69) {
            bVar14 = (char)plVar9[1] == 'f' && *plVar9 == 0x69672f6567616d69;
            pcVar6 = &DAT_0019ecea;
            goto LAB_005cee81;
          }
          local_40 = &DAT_0019eced;
          local_38 = 3;
          lVar5 = *(longlong *)(param_8 + 0x30 + lVar13);
        }
        if (lVar5 != -1) goto LAB_005cef2c;
LAB_005ceea1:
        local_148 = &local_150;
        uStack_140 = PTR_fmt_007991f0;
        local_148._0_4_ = (*(code *)PTR_format_inner_00799048)(local_38,&local_148);
      }
      uStack_140 = PTR_fmt_007991f0;
      local_138 = (longlong *)&local_168;
      local_130 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                  fmt;
      ppcStack_128 = &local_40;
      local_120 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      uVar15 = (int)local_148;
      local_148 = &local_150;
      (*(code *)PTR_format_inner_00799048)(uVar15,&local_148);
      lVar5 = CONCAT44(uStack_18c,local_190);
      local_178 = local_188;
      local_170 = lVar5;
      (*(code *)PTR__join_00799210)(local_188,local_60,local_180);
      auVar16 = ::<str>::trim_matches::<<char>::is_whitespace>
                          (*(undefined8 *)(param_8 + 0x20 + lVar13),
                           *(undefined8 *)(param_8 + 0x28 + lVar13));
      uVar15 = base64[729f3f786a952ed7]::engine::Engine::decode::inner::
               <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                         (&local_148,&DAT_0019e4cf,auVar16._0_8_,auVar16._8_8_);
      plVar9 = local_138;
      uVar2 = local_180;
      uVar10 = local_188;
      if (local_148 == (longlong *)0xffffffffffffffff) {
        uVar10 = (*(code *)PTR_<&str>_007991e8)(uVar15,0x14);
        local_1c8[1] = uVar10;
        *local_1c8 = 0xffffffffffffffff;
        uVar15 = extraout_XMM0_Da_03;
LAB_005cf245:
        if (CONCAT44(uStack_18c,local_190) != 0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        if (lVar5 != 0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        if (CONCAT44(uStack_164,local_168) != 0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        puVar12 = local_1c8;
        if (local_198 != (longlong *)0x0) {
          puVar8 = uStack_1a0 + 8;
          plVar9 = local_198;
          do {
            if (*(longlong *)(puVar8 + -8) != 0) {
              uVar15 = (*pcVar11)(uVar15,1);
            }
            puVar8 = puVar8 + 0x18;
            plVar9 = (longlong *)((longlong)plVar9 + -1);
          } while (plVar9 != (longlong *)0x0);
        }
        if (local_1a8 != (longlong *)0x0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
        }
        goto joined_r0x005ceb5e;
      }
      local_1b8 = local_148;
      local_1b0 = uStack_140;
      uStack_140 = (undefined *)CONCAT26((short)((ulonglong)uStack_140 >> 0x30),0x10000000100);
      local_148 = (longlong *)0x180000a0000;
      uVar15 = (*(code *)PTR__open_00799768)(local_180,local_188);
      if (local_50 == 1) {
        local_1c8[1] = local_48;
        *local_1c8 = 0xffffffffffffffff;
LAB_005cf21a:
        pcVar11 = (code *)PTR___rust_dealloc_00798fc8;
        if (local_1b8 != (longlong *)0x0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        goto LAB_005cf245;
      }
      local_1d4 = local_4c;
      lVar7 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                        (&local_1d4,local_1b0,plVar9);
      plVar9 = local_198;
      if (lVar7 != 0) {
        local_1c8[1] = lVar7;
        *local_1c8 = 0xffffffffffffffff;
        uVar15 = (*(code *)PTR_close_00799030)();
        goto LAB_005cf21a;
      }
      uVar1 = CONCAT44(uStack_18c,local_190);
      if (local_198 == local_1a8) {
        <alloc[12e961f32105355]::raw_vec::RawVec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
        ::grow_one(&local_1a8);
      }
      *(undefined8 *)(uStack_1a0 + (longlong)plVar9 * 0x18) = uVar1;
      *(undefined8 *)(uStack_1a0 + (longlong)plVar9 * 0x18 + 8) = uVar10;
      *(undefined8 *)(uStack_1a0 + (longlong)plVar9 * 0x18 + 0x10) = uVar2;
      local_198 = (longlong *)((longlong)plVar9 + 1);
      uVar15 = (*(code *)PTR_close_00799030)();
      pcVar11 = (code *)PTR___rust_dealloc_00798fc8;
      if (local_1b8 != (longlong *)0x0) {
        uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
      }
      if (local_170 != 0) {
        uVar15 = (*pcVar11)(uVar15,1);
      }
      puVar12 = local_1c8;
      if (CONCAT44(uStack_164,local_168) != 0) {
        (*pcVar11)(uVar15,1);
      }
      lVar13 = lVar13 + 0x48;
      lVar5 = local_58 + 1;
    } while (local_68 != lVar13);
    local_120 = local_70;
    local_130 = local_80;
    ppcStack_128 = ppcStack_78;
    local_138 = local_198;
    local_148 = local_1a8;
    uStack_140 = uStack_1a0;
    *(undefined4 *)puVar12 = (undefined4)local_1a8;
    *(undefined4 *)((longlong)puVar12 + 4) = local_1a8._4_4_;
    *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_1a0._4_4_;
    puVar12[2] = local_198;
    puVar12[3] = local_80;
    puVar12[4] = ppcStack_78;
    puVar12[5] = local_70;
    uVar15 = (undefined4)local_1a8;
  }
  else {
    puVar12[1] = lVar5;
    *puVar12 = 0xffffffffffffffff;
joined_r0x005ceb5e:
    if (local_80 != (code *)0x0) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
    }
  }
LAB_005ceb6e:
  if (local_98 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
  }
  return puVar12;
}


