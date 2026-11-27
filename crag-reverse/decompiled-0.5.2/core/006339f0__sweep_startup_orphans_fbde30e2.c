// 006339f0 sweep_startup_orphans

/* WARNING: Removing unreachable block (ram,0x00633fca) */
/* craggemini_core[66f3c71560d70857]::admission::sweep_startup_orphans */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::admission::sweep_startup_orphans
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auVar13 [16];
  longlong local_298;
  longlong local_288;
  uint local_208;
  undefined4 uStack_204;
  longlong *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  longlong **local_1e0;
  uint local_1d0;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_e8;
  longlong *local_b8;
  char local_b0;
  undefined8 local_a0 [6];
  undefined8 local_70;
  longlong *local_40;
  char local_38;
  
  uVar3 = local_208;
  local_288 = sweep_orphan_slot_dirs();
  local_298 = sweep_stale_temp_dirs(param_1,param_2,param_3,param_4);
  (*(code *)PTR_read_dir_00799ad0)(extraout_XMM0_Da,param_2);
  puVar2 = PTR_next_00799b88;
  cVar5 = (char)local_200;
  local_40 = (longlong *)CONCAT44(uStack_204,local_208);
  if ((char)local_200 != '\x02') {
    local_a0[0] = 0;
    local_70 = 0;
    local_38 = (char)local_200;
    do {
      while( true ) {
        plVar6 = local_200;
        uVar4 = local_208;
        (*(code *)puVar2)();
        if (CONCAT44(uStack_204,local_208) == 0) {
          if (local_38 != '\x02') {
            LOCK();
            *local_40 = *local_40 + -1;
            UNLOCK();
            if (*local_40 == 0) {
              (*(code *)PTR_drop_slow_007997d0)();
            }
          }
          local_38 = '\x02';
          local_118 = CONCAT44(uStack_1ec,local_1f0);
          pplVar11 = local_1e0;
          if (CONCAT44(uStack_204,local_208) != 1) goto LAB_0063425a;
        }
        else {
          pplVar11 = &local_40;
        }
        local_118 = CONCAT44(uStack_1ec,local_1f0);
        if (local_200 != (longlong *)0x0) break;
        if ((1 < ((uint)local_1f8 & 3) - 2) && (((ulonglong)local_1f8 & 3) != 0)) {
          local_200 = (longlong *)(local_1f8 + -1);
          local_208 = CONCAT31(local_208._1_3_,3);
          (*(code *)PTR_drop_00799040)();
        }
LAB_00633ad0:
        if (local_38 == '\x02') goto LAB_0063424f;
      }
      uVar12 = (*(code *)PTR_path_00799b98)();
      uVar12 = (*(code *)PTR_symlink_metadata_007992d0)(uVar12,local_120);
      if (local_208 == 2) {
        if ((1 < ((uint)local_200 & 3) - 2) && (((ulonglong)local_200 & 3) != 0)) {
          local_200 = (longlong *)((longlong)local_200 + -1);
          local_208 = 3;
          uVar12 = (*(code *)PTR_drop_00799040)();
        }
LAB_00633c82:
        if (local_130 != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          uVar12 = (*(code *)PTR_drop_slow_007997d0)();
        }
        pplVar11 = (longlong **)CONCAT44(uStack_1ec,local_1f0);
        *local_1f8 = 0;
        if (pplVar11 != (longlong **)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        goto LAB_00633ad0;
      }
      if ((local_1d0 & 0xf000) != 0x4000) goto LAB_00633c82;
      (*(code *)PTR__join_00799210)("slots",local_120,5);
      cVar8 = (*(code *)PTR_is_dir_00799b80)();
      if (cVar8 == '\0') {
        if (CONCAT44(uStack_204,local_208) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
        }
      }
      else {
        if (CONCAT44(uStack_204,local_208) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
        }
        lVar10 = sweep_orphan_slot_dirs(local_128,local_120);
        local_288 = local_288 + lVar10;
      }
      lVar10 = sweep_stale_temp_dirs(local_128,local_120,param_3,param_4);
      uVar12 = (*(code *)PTR_file_name_00799b90)();
      local_298 = lVar10 + local_298;
      if ((local_1f8 == &DAT_00000008) && (*local_200 == 0x73746e756f636361)) {
        if (CONCAT44(uStack_204,local_208) != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        uVar12 = (*(code *)PTR_read_dir_00799ad0)(uVar12,local_120);
        cVar8 = (char)local_200;
        plVar1 = (longlong *)CONCAT44(uStack_204,local_208);
        if ((char)local_200 == '\x02') {
          if ((1 < (local_208 & 3) - 2) && ((local_208 & 3) != 0)) {
            local_200 = (longlong *)((longlong)plVar1 + -1);
            local_208 = CONCAT31(local_208._1_3_,3);
            uVar12 = (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          local_118 = 0;
          local_e8 = 0;
          local_b0 = (char)local_200;
          local_b8 = plVar1;
          do {
            plVar7 = local_200;
            (*(code *)puVar2)();
            if (CONCAT44(uStack_204,local_208) == 0) {
              if (local_b0 != '\x02') {
                LOCK();
                *local_b8 = *local_b8 + -1;
                UNLOCK();
                if (*local_b8 == 0) {
                  (*(code *)PTR_drop_slow_007997d0)();
                }
              }
              local_b0 = '\x02';
              pplVar11 = local_1e0;
              if (CONCAT44(uStack_204,local_208) != 1) break;
            }
            else {
              pplVar11 = &local_b8;
            }
            if (local_200 != (longlong *)0x0) {
              uVar12 = (*(code *)PTR_path_00799b98)();
              uVar12 = (*(code *)PTR_symlink_metadata_007992d0)(uVar12,local_1e0);
              if (local_208 == 2) {
                if ((1 < ((uint)local_200 & 3) - 2) && (((ulonglong)local_200 & 3) != 0)) {
                  local_200 = (longlong *)((longlong)local_200 + -1);
                  local_208 = 3;
                  uVar12 = (*(code *)PTR_drop_00799040)();
                }
              }
              else if ((local_1d0 & 0xf000) == 0x4000) {
                (*(code *)PTR__join_00799210)("slots",local_1e0,5);
                cVar9 = (*(code *)PTR_is_dir_00799b80)();
                if (cVar9 == '\0') {
                  if (CONCAT44(uStack_204,local_208) != 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
                  }
                }
                else {
                  if (CONCAT44(uStack_204,local_208) != 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
                  }
                  lVar10 = sweep_orphan_slot_dirs(CONCAT44(uStack_1e4,uStack_1e8),local_1e0);
                  local_288 = local_288 + lVar10;
                }
                lVar10 = sweep_stale_temp_dirs
                                   (CONCAT44(uStack_1e4,uStack_1e8),local_1e0,param_3,param_4);
                uVar12 = extraout_XMM0_Da_02;
                if (CONCAT44(uStack_1ec,local_1f0) != 0) {
                  uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_02,1);
                }
                LOCK();
                *local_200 = *local_200 + -1;
                UNLOCK();
                if (*local_200 == 0) {
                  uVar12 = (*(code *)PTR_drop_slow_007997d0)();
                }
                pplVar11 = (longlong **)CONCAT44(uStack_1ec,local_1f0);
                DAT_00000008 = 0;
                if (pplVar11 != (longlong **)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                }
                local_298 = local_298 + lVar10;
                goto LAB_00633efd;
              }
              if (CONCAT44(uStack_1ec,local_1f0) != 0) {
                uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
              }
              LOCK();
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                uVar12 = (*(code *)PTR_drop_slow_007997d0)();
              }
              pplVar11 = (longlong **)CONCAT44(uStack_1ec,local_1f0);
              DAT_00000008 = 0;
              if (pplVar11 != (longlong **)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
              }
            }
LAB_00633efd:
          } while (local_b0 != '\x02');
          uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                             (&local_118,pplVar11);
          if (((cVar8 == '\x02') && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
            local_200 = (longlong *)((longlong)plVar1 + -1);
            local_208 = CONCAT31(local_208._1_3_,3);
            uVar12 = (*(code *)PTR_drop_00799040)();
          }
        }
      }
      else if (CONCAT44(uStack_204,local_208) != 0) {
        uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      if (local_130 != 0) {
        uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        uVar12 = (*(code *)PTR_drop_slow_007997d0)();
      }
      pplVar11 = (longlong **)CONCAT44(uStack_1ec,local_1f0);
      *local_1f8 = 0;
      if (pplVar11 != (longlong **)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
    } while (local_38 != '\x02');
LAB_0063424f:
    local_1e0 = pplVar11;
LAB_0063425a:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
              (local_a0,local_1e0);
    if (cVar5 != '\x02') goto LAB_006342ac;
  }
  if ((1 < (uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
LAB_006342ac:
  auVar13._8_8_ = local_298;
  auVar13._0_8_ = local_288;
  return auVar13;
}


