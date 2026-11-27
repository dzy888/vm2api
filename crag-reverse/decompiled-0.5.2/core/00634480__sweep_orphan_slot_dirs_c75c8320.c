// 00634480 sweep_orphan_slot_dirs

/* craggemini_core[66f3c71560d70857]::admission::sweep_orphan_slot_dirs */

longlong __rustcall
craggemini_core[66f3c71560d70857]::admission::sweep_orphan_slot_dirs
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  longlong local_1b0;
  longlong local_180;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_158;
  uint local_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong **local_128;
  uint local_118;
  undefined8 local_a0 [6];
  undefined8 local_70;
  longlong *local_40;
  char local_38;
  
  uVar5 = (*(code *)PTR__join_00799210)("slots",param_2,5);
  uVar5 = (*(code *)PTR_read_dir_00799ad0)(uVar5,local_170);
  puVar1 = PTR_next_00799b88;
  local_40 = (longlong *)CONCAT44(uStack_14c,local_150);
  if ((char)local_148 == '\x02') {
    if ((1 < (local_150 & 3) - 2) && ((local_150 & 3) != 0)) {
      uVar5 = (*(code *)PTR_drop_00799040)();
    }
    local_1b0 = 0;
  }
  else {
    local_a0[0] = 0;
    local_70 = 0;
    local_38 = (char)local_148;
    local_1b0 = 0;
    do {
      plVar2 = local_148;
      (*(code *)puVar1)();
      if (CONCAT44(uStack_14c,local_150) == 0) {
        if (local_38 != '\x02') {
          LOCK();
          *local_40 = *local_40 + -1;
          UNLOCK();
          if (*local_40 == 0) {
            (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        local_38 = '\x02';
        pplVar4 = local_128;
        if (CONCAT44(uStack_14c,local_150) != 1) break;
      }
      else {
        pplVar4 = &local_40;
      }
      if (local_148 == (longlong *)0x0) {
        if ((1 < ((uint)local_140 & 3) - 2) && (((ulonglong)local_140 & 3) != 0)) {
          local_148 = (longlong *)(local_140 + -1);
          local_150 = CONCAT31(local_150._1_3_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        uVar5 = (*(code *)PTR_path_00799b98)();
        uVar5 = (*(code *)PTR_symlink_metadata_007992d0)(uVar5,local_158);
        if (local_150 == 2) {
          if ((1 < ((uint)local_148 & 3) - 2) && (((ulonglong)local_148 & 3) != 0)) {
            local_148 = (longlong *)((longlong)local_148 + -1);
            local_150 = 3;
            uVar5 = (*(code *)PTR_drop_00799040)();
          }
LAB_0063475a:
          if (local_168 != 0) {
            uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
          }
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            uVar5 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        else {
          if ((local_118 & 0xf000) != 0x4000) goto LAB_0063475a;
          uVar5 = (*(code *)PTR_file_name_00799b90)();
          uVar5 = (*(code *)PTR_from_utf8_00799468)(uVar5,local_128);
          if (local_150 == 1) {
            if (CONCAT44(uStack_134,local_138) != 0) {
              uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
            }
            goto LAB_0063475a;
          }
          if ((local_140 != (undefined1 *)0x0) && ((char)*local_148 == 's')) {
            uVar3 = (*(code *)PTR_remove_dir_all_00799038)();
            uVar5 = extraout_XMM0_Da;
            if (uVar3 == 0) {
              local_1b0 = local_1b0 + 1;
            }
            else if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
              local_148 = (longlong *)(uVar3 - 1);
              local_150 = CONCAT31(local_150._1_3_,3);
              uVar5 = (*(code *)PTR_drop_00799040)();
            }
          }
          if (CONCAT44(uStack_134,local_138) != 0) {
            uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
          }
          if (local_168 != 0) {
            uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
          }
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            uVar5 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        pplVar4 = (longlong **)CONCAT44(uStack_134,local_138);
        *local_140 = 0;
        if (pplVar4 != (longlong **)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
        }
      }
    } while (local_38 != '\x02');
    uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                      (local_a0,pplVar4);
  }
  if (local_180 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
  }
  return local_1b0;
}


