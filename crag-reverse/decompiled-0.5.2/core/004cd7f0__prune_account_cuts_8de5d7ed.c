// 004cd7f0 prune_account_cuts

/* craggemini_core[66f3c71560d70857]::pool::prune_account_cuts */

void __rustcall
craggemini_core[66f3c71560d70857]::pool::prune_account_cuts
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong ******param_4)

{
  longlong ******pppppplVar1;
  longlong ******pppppplVar2;
  longlong ******pppppplVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  longlong *******ppppppplVar8;
  code *pcVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  longlong *******ppppppplVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong *******local_2e0;
  longlong *******local_2d8;
  undefined1 *local_2d0;
  undefined1 local_2c1;
  longlong ******local_2c0;
  longlong *******local_2b8;
  undefined1 *local_2b0;
  longlong *******local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  ulonglong local_290;
  int local_288;
  longlong *******local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  longlong *******local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  longlong ******local_218;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 *local_190;
  longlong local_188;
  undefined8 local_178;
  ulonglong local_170;
  longlong ******local_168;
  undefined8 local_160;
  undefined8 local_158 [6];
  undefined8 local_128;
  longlong *******local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *******local_d8;
  uint local_b0;
  
  local_160 = param_3;
  uVar16 = (*(code *)PTR__join_00799210)("cuts",param_2,4);
  uVar16 = (*(code *)PTR_read_dir_00799ad0)(uVar16,local_178);
  puVar6 = PTR_next_00799b88;
  if ((char)uStack_250 == '\x02') {
    if ((1 < ((uint)local_258 & 3) - 2) && (((ulonglong)local_258 & 3) != 0)) {
      uStack_250 = (longlong *******)((longlong)local_258 + -1);
      local_258 = (longlong *******)CONCAT71(local_258._1_7_,3);
      uVar16 = (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (longlong *******)&DAT_00000008;
    local_2a0 = (undefined1 *)0x0;
    local_158[0] = 0;
    local_128 = 0;
    local_f8 = local_258;
    local_f0 = (char)uStack_250;
    local_2c0 = (longlong ******)0x0;
    pcVar9 = (code *)PTR_drop_00799040;
    local_168 = param_4;
    do {
      (*(code *)puVar6)();
      if (local_258 == (longlong *******)0x0) {
        if (local_f0 != '\x02') {
          LOCK();
          *local_f8 = (longlong ******)((longlong)*local_f8 + -1);
          UNLOCK();
          if (*local_f8 == (longlong ******)0x0) {
            (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        local_f0 = '\x02';
        local_e8 = uStack_240;
        uStack_e0 = uStack_238;
        local_d8 = uStack_230;
        ppppppplVar12 = uStack_230;
        if (local_258 != (longlong *******)0x1) break;
      }
      else {
        ppppppplVar12 = (longlong *******)&local_f8;
      }
      local_e8 = uStack_240;
      uStack_e0 = uStack_238;
      local_d8 = uStack_230;
      if (uStack_250 == (longlong *******)0x0) {
        if ((1 < ((uint)local_248 & 3) - 2) && (((ulonglong)local_248 & 3) != 0)) {
          uStack_250 = (longlong *******)(local_248 + -1);
          local_258 = (longlong *******)CONCAT71(local_258._1_7_,3);
          (*pcVar9)();
        }
      }
      else {
        local_260 = uStack_230;
        local_e8._0_4_ = SUB84(uStack_240,0);
        local_e8._4_4_ = (undefined4)((ulonglong)uStack_240 >> 0x20);
        uStack_e0._0_4_ = SUB84(uStack_238,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_238 >> 0x20);
        local_270 = (undefined4)local_e8;
        uStack_26c = local_e8._4_4_;
        uStack_268 = (undefined4)uStack_e0;
        uStack_264 = uStack_e0._4_4_;
        local_280 = uStack_250;
        local_278 = local_248;
        (*(code *)PTR_path_00799b98)();
        uVar16 = (*(code *)PTR_file_name_00799b90)();
        uVar16 = (*(code *)PTR_from_utf8_lossy_00799b68)(uVar16,local_248);
        ppppppplVar12 = local_d8;
        local_2d8 = local_e8;
        local_2e0 = local_d8;
        ppppppplVar8 = uStack_e0;
        if (local_e8 == (longlong *******)0xffffffffffffffff) {
          if ((longlong)local_d8 < 0) {
LAB_004ce205:
            (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if (local_d8 == (longlong *******)0x0) {
            local_2b8 = (longlong *******)0x1;
            local_2e0 = (longlong *******)0x0;
            ppppppplVar8 = (longlong *******)0x1;
            local_2d8 = (longlong *******)0x0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            ppppppplVar8 = (longlong *******)(*(code *)PTR___rust_alloc_00799000)();
            if (ppppppplVar8 == (longlong *******)0x0) goto LAB_004ce205;
            uVar16 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,ppppppplVar12);
            local_2d8 = ppppppplVar12;
            local_2b8 = ppppppplVar8;
          }
        }
        if (local_258 != (longlong *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
        uVar4 = CONCAT44(uStack_194,uStack_198);
        local_298 = local_190;
        uVar16 = (*(code *)PTR_symlink_metadata_007992d0)();
        ppppppplVar10 = uStack_250;
        ppppppplVar12 = local_258;
        if (local_258 == (longlong *******)0x2) {
          if ((1 < ((uint)uStack_250 & 3) - 2) && (((ulonglong)uStack_250 & 3) != 0)) {
            uStack_250 = (longlong *******)((longlong)uStack_250 + -1);
            local_258 = (longlong *******)0x3;
            uVar16 = (*(code *)PTR_drop_00799040)();
          }
LAB_004cdf28:
          if (local_2d8 != (longlong *******)0x0) {
            uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
          }
          if (CONCAT44(uStack_19c,local_1a0) != 0) {
            uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
          }
          LOCK();
          *local_280 = (longlong ******)((longlong)*local_280 + -1);
          pcVar9 = (code *)PTR_drop_00799040;
          UNLOCK();
          if (*local_280 == (longlong ******)0x0) {
            uVar16 = (*(code *)PTR_drop_slow_007997d0)();
          }
          ppppppplVar12 = (longlong *******)CONCAT44(uStack_26c,local_270);
          *local_278 = 0;
        }
        else {
          uVar16 = (*(code *)PTR_memcpy_00799008)(uVar16,0xa0);
          local_e8 = ppppppplVar12;
          uStack_e0 = ppppppplVar10;
          if ((&DAT_00000004 < local_2e0) &&
             ((*(char *)((longlong)ppppppplVar8 + 4) == '-' && *(int *)ppppppplVar8 == 0x706d742e ||
              (*(char *)((longlong)ppppppplVar8 + 4) == '-' && *(int *)ppppppplVar8 == 0x646c6f2e)))
             ) {
            uVar16 = (*(code *)PTR_modified_00799bd8)();
            if (local_288 == -1) {
              if ((1 < ((uint)local_290 & 3) - 2) && ((local_290 & 3) != 0)) {
                uStack_250 = (longlong *******)(local_290 - 1);
                local_258 = (longlong *******)CONCAT71(local_258._1_7_,3);
                uVar16 = (*(code *)PTR_drop_00799040)();
              }
            }
            else {
              uVar16 = (*(code *)PTR_elapsed_00799be0)();
              if ((int)local_258 != 1) {
                bVar15 = (longlong *******)0x3c < uStack_250;
                if (uStack_250 == (longlong *******)0x3c) {
                  bVar15 = (int)local_248 != 0;
                }
                if (bVar15) {
                  uVar13 = (*(code *)PTR_remove_dir_all_00799038)();
                  uVar16 = extraout_XMM0_Da_00;
                  if (((uVar13 != 0) && (1 < ((uint)uVar13 & 3) - 2)) && ((uVar13 & 3) != 0)) {
                    uStack_250 = (longlong *******)(uVar13 - 1);
                    local_258 = (longlong *******)CONCAT71(local_258._1_7_,3);
                    uVar16 = (*(code *)PTR_drop_00799040)();
                  }
                }
              }
            }
            goto LAB_004cdf28;
          }
          if ((local_b0 & 0xf000) != 0x4000) goto LAB_004cdf28;
          (*(code *)PTR_modified_00799bd8)();
          iVar7 = local_288;
          if (local_288 == -1) {
            iVar7 = 0;
          }
          local_170 = 0;
          if (local_288 != -1) {
            local_170 = local_290;
          }
          else if ((1 < ((uint)local_290 & 3) - 2) && ((local_290 & 3) != 0)) {
            uStack_250 = (longlong *******)(local_290 - 1);
            local_258 = (longlong *******)CONCAT71(local_258._1_7_,3);
            (*(code *)PTR_drop_00799040)();
          }
          local_218 = (longlong ******)dir_size_bytes(uVar4,local_298);
          puVar5 = local_2a0;
          bVar15 = CARRY8((ulonglong)local_2c0,(ulonglong)local_218);
          local_2c0 = (longlong ******)((longlong)local_2c0 + (longlong)local_218);
          if (bVar15) {
            local_2c0 = (longlong ******)0xffffffffffffffff;
          }
          local_248 = local_190;
          local_258 = (longlong *******)CONCAT44(uStack_19c,local_1a0);
          uStack_250 = (longlong *******)CONCAT44(uStack_194,uStack_198);
          uStack_240 = local_2d8;
          uStack_230 = local_2e0;
          local_228 = local_170;
          uStack_238 = ppppppplVar8;
          iStack_220 = iVar7;
          if (local_2a0 == local_2b0) {
            <alloc[12e961f32105355]::raw_vec::RawVec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
            ::grow_one(&local_2b0);
          }
          local_2a8[(longlong)puVar5 * 9 + 8] = local_218;
          ppppppplVar12 = local_2a8 + (longlong)puVar5 * 9 + 6;
          *(undefined4 *)ppppppplVar12 = (undefined4)local_228;
          *(undefined4 *)((longlong)ppppppplVar12 + 4) = local_228._4_4_;
          *(int *)(ppppppplVar12 + 1) = iStack_220;
          *(undefined4 *)((longlong)ppppppplVar12 + 0xc) = uStack_21c;
          ppppppplVar12 = local_2a8 + (longlong)puVar5 * 9 + 4;
          *(undefined4 *)ppppppplVar12 = (undefined4)uStack_238;
          *(undefined4 *)((longlong)ppppppplVar12 + 4) = uStack_238._4_4_;
          *(undefined4 *)(ppppppplVar12 + 1) = (undefined4)uStack_230;
          *(undefined4 *)((longlong)ppppppplVar12 + 0xc) = uStack_230._4_4_;
          ppppppplVar12 = local_2a8 + (longlong)puVar5 * 9 + 2;
          *(int *)ppppppplVar12 = (int)local_248;
          *(undefined4 *)((longlong)ppppppplVar12 + 4) = local_248._4_4_;
          *(undefined4 *)(ppppppplVar12 + 1) = (undefined4)uStack_240;
          *(undefined4 *)((longlong)ppppppplVar12 + 0xc) = uStack_240._4_4_;
          ppppppplVar12 = local_2a8 + (longlong)puVar5 * 9;
          *(int *)ppppppplVar12 = (int)local_258;
          *(undefined4 *)((longlong)ppppppplVar12 + 4) = local_258._4_4_;
          *(undefined4 *)(ppppppplVar12 + 1) = (undefined4)uStack_250;
          *(undefined4 *)((longlong)ppppppplVar12 + 0xc) = uStack_250._4_4_;
          local_2a0 = puVar5 + 1;
          LOCK();
          *local_280 = (longlong ******)((longlong)*local_280 + -1);
          UNLOCK();
          uVar16 = (int)local_258;
          if (*local_280 == (longlong ******)0x0) {
            uVar16 = (*(code *)PTR_drop_slow_007997d0)();
          }
          ppppppplVar12 = (longlong *******)CONCAT44(uStack_26c,local_270);
          *local_278 = 0;
          pcVar9 = (code *)PTR_drop_00799040;
        }
        if (ppppppplVar12 != (longlong *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
        }
      }
    } while (local_f0 != '\x02');
    uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                       (local_158,ppppppplVar12);
    pcVar9 = (code *)PTR___rust_dealloc_00798fc8;
    if ((&DAT_00000040 < local_2a0) || ((longlong ******)0x10000000 < local_2c0)) {
      local_258 = (longlong *******)&local_2c1;
      if ((undefined1 *)0x1 < local_2a0) {
        if (local_2a0 < (undefined1 *)0x15) {
          uVar16 = core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left
                   ::
                   <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                             (local_2a8,local_2a0,1,&local_258);
        }
        else {
          uVar16 = core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
                   <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
                             (local_2a8,local_2a0,&local_258);
        }
      }
      ppppppplVar8 = local_2a8 + (longlong)local_2a0 * 9;
      local_258 = local_2a8;
      uStack_250 = local_2a8;
      local_298 = local_2b0;
      local_248 = local_2b0;
      local_2b8 = local_2a8;
      local_2d0 = local_2a0;
      ppppppplVar12 = local_2a8;
      uStack_240 = ppppppplVar8;
      if (local_2a0 == (undefined1 *)0x0) {
LAB_004ce223:
        puVar5 = local_298;
        if (ppppppplVar8 != ppppppplVar12) {
          uVar13 = (ulonglong)((longlong)ppppppplVar8 - (longlong)ppppppplVar12) / 0x48;
          ppppppplVar12 = ppppppplVar12 + 4;
          do {
            if (ppppppplVar12[-4] != (longlong ******)0x0) {
              uVar16 = (*pcVar9)(uVar16,1);
            }
            if (ppppppplVar12[-1] != (longlong ******)0x0) {
              uVar16 = (*pcVar9)(uVar16,1);
            }
            ppppppplVar12 = ppppppplVar12 + 9;
            uVar13 = uVar13 - 1;
            puVar5 = local_298;
          } while (uVar13 != 0);
        }
      }
      else {
        ppppppplVar10 = local_2a8;
        do {
          ppppppplVar11 = ppppppplVar10;
          if (local_2d0 < (undefined1 *)0x41 && local_2c0 < (longlong ******)0x10000001) {
            ppppppplVar12 = ppppppplVar10 + 9;
            pppppplVar1 = *ppppppplVar10;
            uStack_250 = ppppppplVar12;
            if (pppppplVar1 != (longlong ******)0xffffffffffffffff) {
              if (ppppppplVar10[3] != (longlong ******)0x0) {
                uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)
                                   (local_2c0 < (longlong ******)0x10000001,1);
              }
              if (pppppplVar1 != (longlong ******)0x0) {
                uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
              }
            }
            goto LAB_004ce223;
          }
LAB_004ce0a2:
          ppppppplVar10 = ppppppplVar11 + 9;
          pppppplVar1 = *ppppppplVar11;
          ppppppplVar12 = ppppppplVar10;
          if (pppppplVar1 == (longlong ******)0xffffffffffffffff) goto LAB_004ce211;
          pppppplVar2 = ppppppplVar11[8];
          pppppplVar3 = ppppppplVar11[3];
          if ((local_168 == ppppppplVar11[5]) &&
             (iVar7 = (*(code *)PTR_bcmp_00799020)(), iVar7 == 0)) goto code_r0x004ce0f5;
          uVar13 = (*(code *)PTR_remove_dir_all_00799038)();
          pcVar9 = (code *)PTR___rust_dealloc_00798fc8;
          uVar16 = extraout_XMM0_Da_02;
          if (uVar13 == 0) {
            local_2d0 = local_2d0 + ((ulonglong)(local_2d0 == (undefined1 *)0x0) - 1);
            bVar15 = local_2c0 < pppppplVar2;
            local_2c0 = (longlong ******)((longlong)local_2c0 - (longlong)pppppplVar2);
            if (bVar15) {
              local_2c0 = (longlong ******)0x0;
            }
          }
          else if ((1 < ((uint)uVar13 & 3) - 2) && ((uVar13 & 3) != 0)) {
            uStack_e0 = (longlong *******)(uVar13 - 1);
            local_e8 = (longlong *******)CONCAT71(local_e8._1_7_,3);
            uVar16 = (*(code *)PTR_drop_00799040)();
          }
          if (pppppplVar3 != (longlong ******)0x0) {
            uVar16 = (*pcVar9)(uVar16,1);
          }
          if (pppppplVar1 != (longlong ******)0x0) {
            uVar16 = (*pcVar9)(uVar16,1);
          }
          puVar5 = local_298;
        } while (ppppppplVar10 != ppppppplVar8);
      }
    }
    else {
      puVar5 = local_2b0;
      if (local_2a0 != (undefined1 *)0x0) {
        ppppppplVar12 = local_2a8 + 4;
        puVar14 = local_2a0;
        do {
          if (ppppppplVar12[-4] != (longlong ******)0x0) {
            uVar16 = (*pcVar9)(uVar16,1);
          }
          if (ppppppplVar12[-1] != (longlong ******)0x0) {
            uVar16 = (*pcVar9)(uVar16,1);
          }
          ppppppplVar12 = ppppppplVar12 + 9;
          puVar14 = puVar14 + -1;
          puVar5 = local_2b0;
        } while (puVar14 != (undefined1 *)0x0);
      }
    }
    if (puVar5 != (undefined1 *)0x0) {
      uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
    }
  }
  if (local_188 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
  }
  return;
code_r0x004ce0f5:
  uVar16 = extraout_XMM0_Da_01;
  if (pppppplVar3 != (longlong ******)0x0) {
    uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
  }
  if (pppppplVar1 != (longlong ******)0x0) {
    uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,1);
  }
  ppppppplVar12 = ppppppplVar11 + 9;
  ppppppplVar11 = ppppppplVar10;
  if (ppppppplVar12 == ppppppplVar8) {
    ppppppplVar12 = ppppppplVar8;
LAB_004ce211:
    pcVar9 = (code *)PTR___rust_dealloc_00798fc8;
    uStack_250 = ppppppplVar12;
    goto LAB_004ce223;
  }
  goto LAB_004ce0a2;
}


