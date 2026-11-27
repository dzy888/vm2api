// 00632b10 sweep_stale_temp_dirs

/* craggemini_core[66f3c71560d70857]::admission::sweep_stale_temp_dirs */

longlong __rustcall
craggemini_core[66f3c71560d70857]::admission::sweep_stale_temp_dirs
          (undefined8 param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_2f0;
  longlong local_2d0;
  undefined8 local_2c0;
  longlong *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  longlong **local_278;
  longlong *plStack_270;
  longlong **local_268;
  undefined8 local_260;
  ulonglong local_258;
  longlong local_250;
  undefined8 local_240;
  uint local_238;
  undefined4 uStack_234;
  longlong *local_230;
  uint local_228;
  int iStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  longlong **local_210;
  longlong *local_188;
  undefined8 local_180 [6];
  undefined8 local_150;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  ulonglong local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong **local_d8;
  uint local_b0;
  
  plVar5 = param_3;
  local_108 = (*(code *)PTR_now_007993f0)();
  local_100 = SUB84(plVar5,0);
  local_278 = (longlong **)0x1a1444;
  plStack_270 = (longlong *)&DAT_00000005;
  local_268 = (longlong **)0x1a1449;
  local_260 = 0x11;
  lVar8 = 0;
  lVar12 = 0;
  pcVar14 = (code *)PTR___rust_dealloc_00798fc8;
  local_188 = param_3;
  do {
    uVar15 = (*(code *)PTR__join_00799210)
                       ((&local_278)[lVar12 * 2],param_2,(&plStack_270)[lVar12 * 2]);
    uVar15 = (*(code *)PTR_read_dir_00799ad0)(uVar15,local_2c0);
    lVar13 = lVar12 + 1;
    plVar5 = (longlong *)CONCAT44(uStack_234,local_238);
    if ((char)local_230 == '\x02') {
      if ((1 < (local_238 & 3) - 2) && ((local_238 & 3) != 0)) {
        local_230 = (longlong *)((longlong)plVar5 + -1);
        local_238 = CONCAT31(local_238._1_3_,3);
        uVar15 = (*(code *)PTR_drop_00799040)();
      }
      if (local_2d0 != 0) {
        uVar15 = (*pcVar14)(uVar15,1);
      }
      if (lVar13 == 2) break;
      uVar15 = (*(code *)PTR__join_00799210)(".craggemini-media",param_2,0x11);
      uVar15 = (*(code *)PTR_read_dir_00799ad0)(uVar15,local_2c0);
      plVar5 = (longlong *)CONCAT44(uStack_234,local_238);
      lVar13 = 2;
      if ((char)local_230 == '\x02') {
        if ((1 < (local_238 & 3) - 2) && ((local_238 & 3) != 0)) {
          local_230 = (longlong *)((longlong)plVar5 + -1);
          local_238 = CONCAT31(local_238._1_3_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
        if (local_2d0 != 0) {
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        break;
      }
    }
    local_180[0] = 0;
    local_150 = 0;
    local_120 = plVar5;
    local_118 = (char)local_230;
    do {
      while( true ) {
        (*(code *)PTR_next_00799b88)();
        if (CONCAT44(uStack_234,local_238) == 0) {
          if (local_118 != '\x02') {
            LOCK();
            *local_120 = *local_120 + -1;
            UNLOCK();
            if (*local_120 == 0) {
              (*(code *)PTR_drop_slow_007997d0)();
            }
          }
          local_118 = '\x02';
          puVar6 = (undefined1 *)CONCAT44(iStack_224,local_228);
          local_e8 = (longlong **)CONCAT44(uStack_21c,local_220);
          uStack_e0 = (longlong *)CONCAT44(uStack_214,uStack_218);
          local_d8 = local_210;
          pplVar10 = local_210;
          pplVar9 = local_210;
          if (CONCAT44(uStack_234,local_238) != 1) goto LAB_00633196;
        }
        else {
          puVar6 = (undefined1 *)CONCAT44(iStack_224,local_228);
          local_e8 = (longlong **)CONCAT44(uStack_21c,local_220);
          uStack_e0 = (longlong *)CONCAT44(uStack_214,uStack_218);
          pplVar9 = &local_120;
        }
        pplVar10 = local_e8;
        plVar5 = local_230;
        local_d8 = local_210;
        if (local_230 != (longlong *)0x0) break;
        pplVar10 = pplVar9;
        if ((1 < ((uint)puVar6 & 3) - 2) && (((ulonglong)puVar6 & 3) != 0)) {
          local_230 = (longlong *)(puVar6 + -1);
          local_238 = CONCAT31(local_238._1_3_,3);
          (*(code *)PTR_drop_00799040)();
        }
joined_r0x006330bc:
        if (local_118 == '\x02') {
          goto LAB_00633193;
        }
      }
      local_2a0 = (undefined4)local_e8;
      uStack_29c = local_e8._4_4_;
      uVar15 = (*(code *)PTR_path_00799b98)();
      uVar15 = (*(code *)PTR_symlink_metadata_007992d0)(uVar15,local_240);
      plVar3 = local_230;
      pcVar14 = (code *)PTR___rust_dealloc_00798fc8;
      pplVar9 = (longlong **)CONCAT44(uStack_234,local_238);
      local_2b0 = plVar5;
      local_2a8 = puVar6;
      if (pplVar9 == (longlong **)0x2) {
        if ((1 < ((uint)local_230 & 3) - 2) && (((ulonglong)local_230 & 3) != 0)) {
          local_230 = (longlong *)((longlong)local_230 + -1);
          local_238 = CONCAT31(local_238._1_3_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
LAB_0063306a:
        if (local_250 != 0) {
          uVar15 = (*pcVar14)(uVar15,1);
        }
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          uVar15 = (*(code *)PTR_drop_slow_007997d0)();
        }
        *puVar6 = 0;
        if (pplVar10 != (longlong **)0x0) {
          (*pcVar14)(uVar15,1);
        }
        goto joined_r0x006330bc;
      }
      uVar15 = (*(code *)PTR_memcpy_00799008)(uVar15,0xa0);
      pcVar14 = (code *)PTR___rust_dealloc_00798fc8;
      uStack_e0 = plVar3;
      uVar11 = local_b0 & 0xf000;
      local_e8 = pplVar9;
      if (uVar11 == 0xa000) goto LAB_0063306a;
      if (param_4 != 0 || param_3 != (longlong *)0x0) {
        uVar15 = (*(code *)PTR_modified_00799bd8)();
        if (local_f0 == -1) {
          if ((1 < ((uint)local_f8 & 3) - 2) && ((local_f8 & 3) != 0)) {
            local_230 = (longlong *)(local_f8 - 1);
            local_238 = CONCAT31(local_238._1_3_,3);
            uVar15 = (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          uVar15 = (*(code *)PTR_duration_since_007993f8)(local_f0,local_f8);
          if (local_238 != 1) {
            bVar1 = local_188 <= local_230;
            if (local_230 == local_188) {
              bVar1 = param_4 <= local_228;
            }
            if (bVar1) goto LAB_00632fcb;
          }
        }
        goto LAB_0063306a;
      }
LAB_00632fcb:
      if (uVar11 == 0x4000) {
        uVar7 = (*(code *)PTR_remove_dir_all_00799038)();
        uVar15 = extraout_XMM0_Da;
        if (uVar7 == 0) goto LAB_00633174;
        if ((1 < ((uint)uVar7 & 3) - 2) && ((uVar7 & 3) != 0)) {
          local_230 = (longlong *)(uVar7 - 1);
          local_238 = CONCAT31(local_238._1_3_,3);
          uVar15 = (*(code *)PTR_drop_00799040)();
        }
LAB_00633111:
        lVar12 = 0;
      }
      else {
        uVar7 = (*(code *)PTR_remove_file_007992f0)();
        uVar15 = extraout_XMM0_Da_00;
        if (uVar7 != 0) {
          if ((1 < ((uint)uVar7 & 3) - 2) && ((uVar7 & 3) != 0)) {
            local_230 = (longlong *)(uVar7 - 1);
            local_238 = CONCAT31(local_238._1_3_,3);
            uVar15 = (*(code *)PTR_drop_00799040)();
          }
          goto LAB_00633111;
        }
LAB_00633174:
        lVar12 = 1;
      }
      if (local_250 != 0) {
        uVar15 = (*pcVar14)(uVar15,1);
      }
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        uVar15 = (*(code *)PTR_drop_slow_007997d0)();
      }
      *puVar6 = 0;
      if (pplVar10 != (longlong **)0x0) {
        (*pcVar14)(uVar15,1);
      }
      lVar8 = lVar12 + lVar8;
    } while (local_118 != '\x02');
LAB_00633193:
LAB_00633196:
    uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                       (local_180,pplVar10);
    if (local_2d0 != 0) {
      uVar15 = (*pcVar14)(uVar15,1);
    }
    lVar12 = 1;
  } while (lVar13 != 2);
  (*(code *)PTR_read_dir_00799ad0)(uVar15,param_2);
  uVar11 = local_238;
  cVar2 = (char)local_230;
  plVar5 = (longlong *)CONCAT44(uStack_234,local_238);
  if ((char)local_230 != '\x02') {
    local_180[0] = 0;
    local_150 = 0;
    local_118 = (char)local_230;
    local_120 = plVar5;
    do {
      (*(code *)PTR_next_00799b88)();
      if (CONCAT44(uStack_234,local_238) == 0) {
        if (local_118 != '\x02') {
          LOCK();
          *local_120 = *local_120 + -1;
          UNLOCK();
          if (*local_120 == 0) {
            (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        local_118 = '\x02';
        puVar6 = (undefined1 *)CONCAT44(iStack_224,local_228);
        local_e8 = (longlong **)CONCAT44(uStack_21c,local_220);
        uStack_e0 = (longlong *)CONCAT44(uStack_214,uStack_218);
        local_d8 = local_210;
        pplVar10 = local_210;
        if (CONCAT44(uStack_234,local_238) != 1) break;
      }
      else {
        puVar6 = (undefined1 *)CONCAT44(iStack_224,local_228);
        local_e8 = (longlong **)CONCAT44(uStack_21c,local_220);
        uStack_e0 = (longlong *)CONCAT44(uStack_214,uStack_218);
        pplVar10 = &local_120;
      }
      plVar3 = local_230;
      local_d8 = local_210;
      if (local_230 == (longlong *)0x0) {
        if ((1 < ((uint)puVar6 & 3) - 2) && (((ulonglong)puVar6 & 3) != 0)) {
          local_230 = (longlong *)(puVar6 + -1);
          local_238 = CONCAT31(local_238._1_3_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        local_268 = local_210;
        local_278 = local_e8;
        plStack_270 = uStack_e0;
        uVar15 = (*(code *)PTR_path_00799b98)();
        uVar15 = (*(code *)PTR_symlink_metadata_007992d0)(uVar15,local_240);
        plVar4 = local_230;
        pplVar10 = (longlong **)CONCAT44(uStack_234,local_238);
        if (pplVar10 == (longlong **)0x2) {
          if ((1 < ((uint)local_230 & 3) - 2) && (((ulonglong)local_230 & 3) != 0)) {
            local_230 = (longlong *)((longlong)local_230 + -1);
            local_238 = CONCAT31(local_238._1_3_,3);
            uVar15 = (*(code *)PTR_drop_00799040)();
          }
LAB_006334f1:
          if (local_250 != 0) {
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          }
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            uVar15 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        else {
          uVar15 = (*(code *)PTR_memcpy_00799008)(uVar15,0xa0);
          uStack_e0 = plVar4;
          local_e8 = pplVar10;
          if ((local_b0 & 0xf000) != 0x8000) goto LAB_006334f1;
          uVar15 = (*(code *)PTR_file_name_00799b90)();
          uVar15 = (*(code *)PTR_from_utf8_00799468)(uVar15,CONCAT44(uStack_29c,local_2a0));
          if (local_238 == 1) {
            if (local_2b0 != (longlong *)0x0) {
              uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            goto LAB_006334f1;
          }
          uVar7 = CONCAT44(iStack_224,local_228);
          if (iStack_224 < 0) {
LAB_006337f9:
            (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          local_258 = uVar7;
          if (uVar7 == 0) {
            local_2f0 = 1;
          }
          else {
            local_110 = local_230;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            local_2f0 = (*(code *)PTR___rust_alloc_00799000)();
            if (local_2f0 == 0) goto LAB_006337f9;
            uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,uVar7);
          }
          if (local_2b0 != (longlong *)0x0) {
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          }
          if (local_258 < 4) {
            if (local_258 != 0) goto LAB_0063360a;
            goto LAB_006334f1;
          }
          if (*(int *)(local_2f0 + -4 + local_258) != 0x706d742e) {
LAB_0063360a:
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            goto LAB_006334f1;
          }
          if (param_4 != 0 || param_3 != (longlong *)0x0) {
            uVar15 = (*(code *)PTR_modified_00799bd8)();
            if ((int)local_2a8 == -1) {
              if ((1 < ((uint)local_2b0 & 3) - 2) && (((ulonglong)local_2b0 & 3) != 0)) {
                local_230 = (longlong *)((longlong)local_2b0 + -1);
                local_238 = CONCAT31(local_238._1_3_,3);
                uVar15 = (*(code *)PTR_drop_00799040)();
              }
            }
            else {
              uVar15 = (*(code *)PTR_duration_since_007993f8)
                                 ((ulonglong)local_2a8 & 0xffffffff,local_2b0);
              if (local_238 != 1) {
                bVar1 = local_188 <= local_230;
                if (local_230 == local_188) {
                  bVar1 = param_4 <= local_228;
                }
                if (bVar1) goto LAB_00633626;
              }
            }
          }
          else {
LAB_00633626:
            uVar7 = (*(code *)PTR_remove_file_007992f0)();
            uVar15 = extraout_XMM0_Da_02;
            if (uVar7 == 0) {
              lVar8 = lVar8 + 1;
            }
            else if ((1 < ((uint)uVar7 & 3) - 2) && ((uVar7 & 3) != 0)) {
              local_230 = (longlong *)(uVar7 - 1);
              local_238 = CONCAT31(local_238._1_3_,3);
              uVar15 = (*(code *)PTR_drop_00799040)();
            }
          }
          uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          if (local_250 != 0) {
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          }
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            uVar15 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        pplVar10 = local_278;
        *puVar6 = 0;
        if (local_278 != (longlong **)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
      }
    } while (local_118 != '\x02');
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
              (local_180,pplVar10);
    if (cVar2 != '\x02') {
      return lVar8;
    }
  }
  if ((1 < (uVar11 & 3) - 2) && ((uVar11 & 3) != 0)) {
    local_230 = (longlong *)((longlong)plVar5 + -1);
    local_238 = CONCAT31(local_238._1_3_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return lVar8;
}


