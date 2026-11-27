// 004d2610 stage_conversation_resume_cut

/* craggemini_core[66f3c71560d70857]::pool::stage_conversation_resume_cut */

bool __rustcall
craggemini_core[66f3c71560d70857]::pool::stage_conversation_resume_cut
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte *param_5
          ,longlong param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__join_00799210;
  if ((param_6 - 0x81U < 0xffffffffffffff80) ||
     ((9 < (byte)(*param_5 - 0x30) && (0x19 < (byte)((*param_5 & 0xdf) + 0xbf))))) {
LAB_004d264c:
    bVar10 = false;
  }
  else {
    lVar7 = 0;
    do {
      bVar5 = param_5[lVar7];
      if (((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
         ((0x32 < bVar5 - 0x2d ||
          ((0x4000000000003U >> ((ulonglong)(bVar5 - 0x2d) & 0x3f) & 1) == 0)))) goto LAB_004d264c;
      lVar7 = lVar7 + 1;
    } while (param_6 != lVar7);
    (*(code *)PTR__join_00799210)("cuts",param_2,4);
    (*(code *)puVar1)(param_5,local_f0,param_6);
    if (CONCAT71(uStack_ff,local_100) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    cVar4 = (*(code *)PTR_is_dir_00799b80)();
    if (cVar4 == '\0') {
      bVar10 = false;
    }
    else {
      (*(code *)PTR__join_00799210)(".gemini",param_4,7);
      (*(code *)PTR__join_00799210)("antigravity-cli",local_f0,0xf);
      if (CONCAT71(uStack_ff,local_100) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      (*(code *)PTR__join_00799210)(".gemini",param_4,7);
      (*(code *)PTR__join_00799210)("antigravity",local_f0,0xb);
      if (CONCAT71(uStack_ff,local_100) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      local_c8 = local_68;
      uVar8 = binding::ensure_private_dir(local_70);
      if (uVar8 == 0) {
        local_b0 = 0x200;
        local_b8 = 0;
        (*(code *)PTR__join_00799210)("brain",local_50,5);
        local_98 = local_40;
        cVar4 = (*(code *)PTR_is_dir_00799b80)();
        if (cVar4 != '\0') {
          lVar7 = binding::ensure_private_dir(local_88,local_80);
          if (lVar7 == 0) {
            local_e0 = 0x200;
            (*(code *)PTR__join_00799210)("brain",local_80,5);
            copy_cut_tree_bounded(local_98,local_38,local_f8,local_f0,0,&local_e0,&local_b8);
            if (CONCAT71(uStack_ff,local_100) != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
          }
          else {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                      (lVar7);
          }
          (*(code *)PTR__join_00799210)("brain",local_c8,5);
          copy_cut_tree_bounded(local_98,local_38,local_f8,local_f0,0,&local_b0,&local_b8);
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        (*(code *)PTR__join_00799210)("conversations",local_50,0xd);
        uVar3 = local_d0;
        uVar2 = local_d8;
        cVar4 = (*(code *)PTR_is_dir_00799b80)();
        if (cVar4 != '\0') {
          (*(code *)PTR__join_00799210)("conversations",local_c8,0xd);
          copy_cut_tree_bounded(uVar2,uVar3,local_f8,local_f0,0,&local_b0,&local_b8);
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        if (local_e0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        (*(code *)PTR__join_00799210)("sessionsfileData",local_50,8);
        uVar3 = local_d0;
        uVar2 = local_d8;
        cVar4 = (*(code *)PTR_is_dir_00799b80)();
        if (cVar4 != '\0') {
          (*(code *)PTR__join_00799210)("sessionsfileData",local_c8,8);
          copy_cut_tree_bounded(uVar2,uVar3,local_f8,local_f0,0,&local_b0,&local_b8);
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        local_c0 = local_70;
        if (local_e0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        lVar7 = local_b0;
        uVar8 = local_b8;
        local_e8 = local_b8;
        (*(code *)PTR__join_00799210)("conversation_summaries.db",local_50,0x19);
        uVar3 = local_d0;
        uVar2 = local_d8;
        bVar5 = (*(code *)PTR_is_file_00799348)();
        if ((bVar5 & lVar7 != 0) != 0) {
          (*(code *)PTR__join_00799210)("conversation_summaries.db",local_c8,0x19);
          auVar11 = transfer_cut_file(uVar2,uVar3,local_f8,local_f0,0);
          uVar9 = auVar11._8_8_;
          if (auVar11._0_8_ == 1) {
            if ((1 < (auVar11._8_4_ & 3) - 2) && ((uVar9 & 3) != 0)) {
              local_a0 = uVar9 - 1;
              local_a8 = 3;
              (*(code *)PTR_drop_00799040)();
            }
          }
          else {
            local_e8 = 0xffffffffffffffff;
            if (!CARRY8(uVar8,uVar9)) {
              local_e8 = uVar8 + uVar9;
            }
            lVar7 = lVar7 + -1;
          }
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        if (local_e0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        (*(code *)PTR__join_00799210)("conve",local_50,0x1d);
        uVar3 = local_d0;
        uVar2 = local_d8;
        bVar5 = (*(code *)PTR_is_file_00799348)();
        if ((bVar5 & lVar7 != 0) == 1) {
          (*(code *)PTR__join_00799210)("conve",local_c8,0x1d);
          auVar11 = transfer_cut_file(uVar2,uVar3,local_f8,local_f0,0);
          uVar8 = auVar11._8_8_;
          if ((auVar11._0_8_ & 1) == 0) {
            bVar10 = CARRY8(local_e8,uVar8);
            uVar8 = local_e8 + uVar8;
            local_e8 = 0xffffffffffffffff;
            if (!bVar10) {
              local_e8 = uVar8;
            }
            lVar7 = lVar7 + -1;
          }
          else if ((1 < (auVar11._8_4_ & 3) - 2) && ((uVar8 & 3) != 0)) {
            local_a0 = uVar8 - 1;
            local_a8 = 3;
            (*(code *)PTR_drop_00799040)();
          }
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        if (local_e0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        (*(code *)PTR__join_00799210)("conversation_summaries.db-shm",local_50,0x1d);
        bVar5 = (*(code *)PTR_is_file_00799348)();
        if ((bVar5 & lVar7 != 0) == 1) {
          (*(code *)PTR__join_00799210)("conversation_summaries.db-shm",local_c8,0x1d);
          auVar11 = transfer_cut_file(local_d8,local_d0,local_f8,local_f0,0);
          uVar8 = auVar11._8_8_;
          if ((auVar11._0_8_ & 1) == 0) {
            bVar10 = CARRY8(local_e8,uVar8);
            uVar8 = local_e8 + uVar8;
            local_e8 = 0xffffffffffffffff;
            if (!bVar10) {
              local_e8 = uVar8;
            }
          }
          else {
            uVar6 = auVar11._8_4_ & 3;
            if ((1 < uVar6 - 2) && (uVar6 != 0)) {
              local_a0 = uVar8 - 1;
              local_a8 = 3;
              (*(code *)PTR_drop_00799040)();
            }
          }
          if (CONCAT71(uStack_ff,local_100) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        if (local_e0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        bVar10 = local_e8 != 0;
        if (local_48 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (local_90 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      else {
        if ((1 < ((uint)uVar8 & 3) - 2) && ((uVar8 & 3) != 0)) {
          (*(code *)PTR_drop_00799040)();
        }
        if (local_90 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        bVar10 = false;
      }
      if (local_78 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (local_60 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  return bVar10;
}


