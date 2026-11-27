// 004d1590 copy_cut_tree_bounded

/* craggemini_core[66f3c71560d70857]::pool::copy_cut_tree_bounded */

void __rustcall
craggemini_core[66f3c71560d70857]::pool::copy_cut_tree_bounded
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5,longlong *param_6,ulonglong *param_7)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  int local_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  uint local_120;
  ulonglong local_108;
  undefined8 local_a0 [6];
  undefined8 local_70;
  longlong *local_40;
  char local_38;
  
  if (*param_6 != 0) {
    (*(code *)PTR_symlink_metadata_007992d0)(param_4,param_2);
    if (local_158 == 2) {
      local_40 = plStack_150;
    }
    else {
      if ((local_120 & 0xf000) != 0x4000) {
        return;
      }
      local_40 = (longlong *)binding::ensure_private_dir(param_3,param_4);
      if (local_40 == (longlong *)0x0) {
        (*(code *)PTR_read_dir_00799ad0)(extraout_XMM0_Da,param_2);
        local_40 = (longlong *)CONCAT44(uStack_154,local_158);
        if ((char)plStack_150 != '\x02') {
          local_a0[0] = 0;
          local_70 = 0;
          local_38 = (char)plStack_150;
          do {
            (*(code *)PTR_next_00799b88)();
            if (CONCAT44(uStack_154,local_158) == 0) {
              if (local_38 != '\x02') {
                LOCK();
                *local_40 = *local_40 + -1;
                UNLOCK();
                if (*local_40 == 0) {
                  (*(code *)PTR_drop_slow_007997d0)();
                }
              }
              local_38 = '\x02';
              local_1c8 = CONCAT44(uStack_13c,uStack_140);
              local_1d8 = plStack_150;
              uStack_1d0 = (longlong *)CONCAT44(uStack_144,uStack_148);
              uStack_1c0 = uStack_138;
              local_1b8 = local_130;
              if (CONCAT44(uStack_154,local_158) != 1) break;
            }
            else {
              uStack_1d0 = (longlong *)CONCAT44(uStack_144,uStack_148);
              local_1c8 = CONCAT44(uStack_13c,uStack_140);
              uStack_1c0 = uStack_138;
              local_1d8 = plStack_150;
            }
            local_158 = (int)local_1d8;
            uStack_154 = local_1d8._4_4_;
            plStack_150 = uStack_1d0;
            uStack_138 = local_130;
            uStack_148 = (undefined4)local_1c8;
            uStack_144 = local_1c8._4_4_;
            uStack_140 = (undefined4)uStack_1c0;
            uStack_13c = uStack_1c0._4_4_;
            local_1b8 = local_130;
            if (local_1d8 == (longlong *)0x0) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
                        (&local_158);
            }
            else {
              local_1b8._0_4_ = (undefined4)local_130;
              local_1b8._4_4_ = (undefined4)((ulonglong)local_130 >> 0x20);
              local_198 = (undefined4)uStack_1c0;
              uStack_194 = uStack_1c0._4_4_;
              uStack_190 = (undefined4)local_1b8;
              uStack_18c = local_1b8._4_4_;
              local_1a8 = (undefined4)uStack_1d0;
              uStack_1a4 = uStack_1d0._4_4_;
              uStack_1a0 = (undefined4)local_1c8;
              uStack_19c = local_1c8._4_4_;
              local_1b0 = local_1d8;
              lVar1 = *param_6;
              if (lVar1 == 0) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::fs::DirEntry>
                          (&local_1b0,&local_40);
                break;
              }
              (*(code *)PTR_path_00799b98)();
              uVar5 = local_168;
              local_188 = local_160;
              local_178 = lVar1;
              uVar6 = (*(code *)PTR_symlink_metadata_007992d0)();
              uVar2 = local_120;
              if (local_158 == 2) {
                if ((1 < ((uint)plStack_150 & 3) - 2) && (((ulonglong)plStack_150 & 3) != 0)) {
                  plStack_150 = (longlong *)((longlong)plStack_150 + -1);
                  local_158 = 3;
                  uVar6 = (*(code *)PTR_drop_00799040)();
                }
                if (local_170 != 0) {
                  uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
                }
                LOCK();
                *local_1b0 = *local_1b0 + -1;
                UNLOCK();
                if (*local_1b0 == 0) {
                  uVar6 = (*(code *)PTR_drop_slow_007997d0)();
                }
              }
              else {
                local_180 = local_108;
                (*(code *)PTR_file_name_00799b90)();
                uVar6 = <std[6c98fd8553dbae28]::path::Path>::join::
                        <std[6c98fd8553dbae28]::path::PathBuf>
                                  (&local_1d8,param_3,param_4,&local_158);
                if (SBORROW2(0,(short)(uVar2 & 0xf000))) {
                  if (local_180 < 0x1000001) {
                    *param_6 = local_178 + -1;
                    auVar7 = transfer_cut_file(uVar5,local_188,uStack_1d0,local_1c8,param_5);
                    uVar4 = auVar7._8_8_;
                    uVar5 = 1;
                    if ((auVar7._0_8_ & 1) == 0) {
                      uVar3 = *param_7 + uVar4;
                      if (CARRY8(*param_7,uVar4)) {
                        uVar3 = 0xffffffffffffffff;
                      }
                      *param_7 = uVar3;
                      uVar5 = 0;
                    }
                    uVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <core[c0acaeba6ab4c2e0]::result::Result<u64,core[c0acaeba6ab4c2e0]::io::error::Error>>
                                      (uVar5,uVar4);
                  }
                }
                else if ((uVar2 & 0xf000) == 0x4000) {
                  uVar6 = copy_cut_tree_bounded
                                    (uVar5,local_188,uStack_1d0,local_1c8,param_5,param_6,param_7);
                }
                if (local_1d8 != (longlong *)0x0) {
                  uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
                }
                if (local_170 != 0) {
                  uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
                }
                LOCK();
                *local_1b0 = *local_1b0 + -1;
                UNLOCK();
                if (*local_1b0 == 0) {
                  uVar6 = (*(code *)PTR_drop_slow_007997d0)();
                }
              }
              *(undefined1 *)CONCAT44(uStack_1a4,local_1a8) = 0;
              if (CONCAT44(uStack_19c,uStack_1a0) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
              }
            }
          } while (local_38 != '\x02');
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                    (local_a0);
          return;
        }
      }
    }
    if ((1 < ((uint)local_40 & 3) - 2) && (((ulonglong)local_40 & 3) != 0)) {
      plStack_150 = (longlong *)((longlong)local_40 + -1);
      local_158 = CONCAT31(local_158._1_3_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


