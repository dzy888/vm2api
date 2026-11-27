// 004cd230 transfer_cut_file

/* craggemini_core[66f3c71560d70857]::pool::transfer_cut_file */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auVar9 [16];
  undefined1 local_151;
  undefined8 local_150;
  ulonglong local_148;
  undefined8 local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  uint local_c0;
  ulonglong local_a8;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = param_2;
  (*(code *)PTR_symlink_metadata_007992d0)(param_4,param_2);
  if ((int)local_f8 == 2) {
    uVar3 = 1;
    uVar7 = (ulonglong)uStack_f0;
    goto LAB_004cd660;
  }
  if (0x1000000 < local_a8 || (local_c0 & 0xf000) != 0x8000) {
    uVar5 = 0;
LAB_004cd2a3:
    uVar3 = 0;
    uVar7 = uVar5;
    goto LAB_004cd660;
  }
  lVar4 = (*(code *)PTR_parent_00799418)();
  uVar8 = extraout_XMM0_Da;
  if (lVar4 == 0) {
LAB_004cd2d3:
    if (param_5 != '\0') {
      lVar4 = (*(code *)PTR_file_name_00799bc0)();
      uVar8 = extraout_XMM0_Da_01;
      if (lVar4 != 0) {
        uVar8 = (*(code *)PTR_from_utf8_00799468)();
        if ((((int)local_f8 != 1) && (2 < local_e8)) &&
           ((*(char *)(((longlong)uStack_f0 - 1U) + local_e8) == 'b' &&
             *(short *)(((longlong)uStack_f0 - 3U) + local_e8) == 0x642e ||
            ((6 < local_e8 &&
             ((*(int *)(((longlong)uStack_f0 - 4U) + local_e8) == 0x6c61772d &&
               *(int *)(((longlong)uStack_f0 - 7U) + local_e8) == 0x2d62642e ||
              (*(int *)(((longlong)uStack_f0 - 4U) + local_e8) == 0x6d68732d &&
               *(int *)(((longlong)uStack_f0 - 7U) + local_e8) == 0x2d62642e))))))))
        goto LAB_004cd404;
      }
      (*(code *)PTR_metadata_00799308)(uVar8,param_4);
      if ((int)local_f8 == 2) {
        uVar5 = (ulonglong)uStack_f0;
LAB_004cd395:
        if ((1 < ((uint)uVar5 & 3) - 2) && ((uVar5 & 3) != 0)) {
          uStack_f0 = (undefined **)(uVar5 - 1);
          local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,3);
          (*(code *)PTR_drop_00799040)();
        }
      }
      else {
        uVar5 = (*(code *)PTR_remove_file_007992f0)();
        if (uVar5 != 0) goto LAB_004cd395;
      }
      uVar6 = (*(code *)PTR_hard_link_00799bc8)(param_4,param_3);
      uVar5 = local_a8;
      if (uVar6 == 0) goto LAB_004cd2a3;
      uVar8 = extraout_XMM0_Da_02;
      if ((1 < ((uint)uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
        uStack_f0 = (undefined **)(uVar6 - 1);
        local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,3);
        uVar8 = (*(code *)PTR_drop_00799040)();
      }
    }
LAB_004cd404:
    (*(code *)PTR_inner_00799760)(uVar8,param_2);
    uVar5 = local_e8;
    if (local_f8 != (undefined8 *)0xffffffffffffffff) {
      if (local_e8 < 0x1000001) {
        local_118 = (ulonglong)local_f8;
        local_148 = (ulonglong)uStack_f0;
        (*(code *)PTR_new_v4_00799350)();
        local_128 = (int)local_f8;
        uStack_124 = local_f8._4_4_;
        uStack_120 = (undefined4)uStack_f0;
        uStack_11c = uStack_f0._4_4_;
        local_140 = 0;
        local_138 = 1;
        local_130 = 0;
        local_e8 = 0x60000020;
        uStack_f0 = &PTR_<alloc[12e961f32105355]::string::String>_0078beb0;
        local_f8 = &local_140;
        cVar2 = (*(code *)PTR_fmt_00799400)();
        lVar4 = local_140;
        if (cVar2 != '\0') {
          (*(code *)PTR_unwrap_failed_00799028)
                    (&DAT_0078b630,&local_151,
                     &
                     PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_0078bee0
                    );
          goto LAB_004cd734;
        }
        if (local_130 < 9) {
          if (local_130 == 8) {
LAB_004cd4f3:
            local_140 = local_138;
            local_138 = 8;
            uStack_f0 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_f8 = &local_140;
            uVar8 = (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da_03,&local_f8);
            uVar6 = local_118;
            if (lVar4 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
            }
            uVar8 = (*(code *)PTR__with_extension_00799bd0)(local_40,param_4,local_38);
            if (local_48 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
            }
            uStack_f0 = (undefined **)CONCAT26((short)((ulonglong)uStack_f0 >> 0x30),0x10000000100);
            local_f8 = (undefined8 *)0x180000a0000;
            local_150 = local_108;
            uVar8 = (*(code *)PTR__open_00799768)(local_100);
            if ((int)local_140 == 1) {
              uVar7 = local_138;
            }
            else {
              local_128 = local_140._4_4_;
              uVar7 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::
                      write_all(&local_128,local_148,uVar5);
              if (uVar7 == 0) {
                uVar7 = (*(code *)PTR_sync_data_00799770)();
                if (uVar7 == 0) {
                  (*(code *)PTR_close_00799030)();
                  uVar7 = (*(code *)PTR_rename_00799778)(param_4,param_3);
                  if (uVar7 == 0) {
                    uVar3 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_04,0x180);
                    uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                      (uVar3,param_4);
                    if (local_110 != 0) {
                      uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
                    }
                    if (uVar6 != 0) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
                    }
                    goto LAB_004cd2a3;
                  }
                  local_f8 = (undefined8 *)uVar7;
                  uVar3 = (*(code *)PTR_remove_file_007992f0)();
                  uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                    (uVar3,local_100);
                  goto LAB_004cd61d;
                }
              }
              uVar8 = (*(code *)PTR_close_00799030)();
            }
LAB_004cd61d:
            if (local_110 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
            }
            uVar3 = 1;
            uVar5 = local_148;
            goto LAB_004cd644;
          }
        }
        else if (-0x41 < *(char *)(local_138 + 8)) goto LAB_004cd4f3;
        (*(code *)PTR_slice_error_fail_00799408)
                  (8,0,&
                       PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bd90
                  );
LAB_004cd734:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = 0;
      uVar3 = 0;
      uVar5 = (ulonglong)uStack_f0;
      uVar6 = (ulonglong)local_f8;
LAB_004cd644:
      if (uVar6 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      }
      goto LAB_004cd660;
    }
  }
  else {
    uVar5 = binding::ensure_private_dir(lVar4,uVar3);
    uVar8 = extraout_XMM0_Da_00;
    if (uVar5 == 0) goto LAB_004cd2d3;
    uStack_f0 = (undefined **)uVar5;
  }
  uVar3 = 1;
  uVar7 = (ulonglong)uStack_f0;
LAB_004cd660:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar3;
  return auVar9;
}


