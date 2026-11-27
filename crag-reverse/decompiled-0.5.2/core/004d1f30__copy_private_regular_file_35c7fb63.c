// 004d1f30 copy_private_regular_file

/* craggemini_core[66f3c71560d70857]::pool::copy_private_regular_file */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::pool::copy_private_regular_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,char param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 local_289;
  undefined4 local_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  undefined4 local_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  ulonglong local_188;
  ulonglong local_180;
  uint local_158;
  longlong local_e0;
  ulonglong local_d8;
  uint local_a8;
  longlong local_90;
  
  uVar12 = (*(code *)PTR_symlink_metadata_007992d0)(param_4,param_2);
  uVar4 = (ulonglong)uStack_250;
  lVar3 = (longlong)local_258;
  if (local_258 == (undefined8 *)0x2) {
    if (((uint)uStack_250 & 3) - 2 < 2) {
      return 0;
    }
    if (((ulonglong)uStack_250 & 3) == 0) {
      return 0;
    }
    uStack_250 = (undefined **)((longlong)uStack_250 - 1);
    local_258 = (undefined8 *)0x3;
    (*(code *)PTR_drop_00799040)();
    return 0;
  }
  uVar12 = (*(code *)PTR_memcpy_00799008)(uVar12,0xa0);
  local_e0 = lVar3;
  local_d8 = uVar4;
  if ((local_a8 & 0xf000) != 0x8000) {
    return 0;
  }
  if (local_90 - 0x40001U < 0xfffffffffffc0000) {
    return 0;
  }
  if (param_5 != '\0') {
    uVar12 = (*(code *)PTR_symlink_metadata_007992d0)(uVar12,param_4);
    uVar4 = (ulonglong)uStack_250;
    lVar3 = (longlong)local_258;
    if (local_258 == (undefined8 *)0x2) {
      if ((1 < ((uint)uStack_250 & 3) - 2) && (((ulonglong)uStack_250 & 3) != 0)) {
        uStack_250 = (undefined **)((longlong)uStack_250 - 1);
        local_258 = (undefined8 *)0x3;
        uVar12 = (*(code *)PTR_drop_00799040)();
      }
    }
    else {
      uVar12 = (*(code *)PTR_memcpy_00799008)(uVar12,0xa0);
      local_190 = lVar3;
      local_188 = uVar4;
      if ((local_158 & 0xf000) == 0x8000) {
        (*(code *)PTR_modified_00799bd8)();
        (*(code *)PTR_modified_00799bd8)();
        local_258 = (undefined8 *)CONCAT44(uStack_284,local_288);
        uStack_250 = (undefined **)CONCAT44(uStack_27c,uStack_280);
        local_248 = CONCAT44(uStack_26c,local_270);
        uStack_240 = uStack_268;
        uStack_23c = uStack_264;
        if ((uStack_280 != 0xffffffff) && (uStack_268 != 0xffffffff)) {
          bVar2 = (longlong)local_258 <= local_248;
          if (local_258 == (undefined8 *)local_248) {
            bVar2 = uStack_280 <= uStack_268;
          }
          if (bVar2) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <(core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>)>
                      (&local_258,&local_190);
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
                      (lVar3,uVar4);
            return 0;
          }
        }
        uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <(core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::time::SystemTime,core[c0acaeba6ab4c2e0]::io::error::Error>)>
                           (&local_258,&local_190);
      }
    }
  }
  uVar12 = (*(code *)PTR_inner_00799760)(uVar12,param_2);
  lVar5 = local_248;
  uVar4 = (ulonglong)uStack_250;
  lVar3 = (longlong)local_258;
  if (local_258 == (undefined8 *)0xffffffffffffffff) {
    return (ulonglong)uStack_250;
  }
  if (local_248 - 0x40001U < 0xfffffffffffc0000) {
LAB_004d2174:
    uVar9 = 0;
    goto LAB_004d2437;
  }
  lVar11 = param_4;
  uVar12 = (*(code *)PTR_inner_00799760)(uVar12,param_4);
  lVar8 = (longlong)local_258;
  if (local_258 == (undefined8 *)0xffffffffffffffff) {
    if ((1 < ((uint)uStack_250 & 3) - 2) && (((ulonglong)uStack_250 & 3) != 0)) {
      local_188 = (longlong)uStack_250 - 1;
      local_190 = CONCAT71(local_190._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    if ((local_248 == lVar5) &&
       (lVar11 = lVar5, iVar7 = (*(code *)PTR_bcmp_00799020)(uVar12,lVar5),
       uVar12 = extraout_XMM0_Da, iVar7 == 0)) {
      uVar10 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da,0x180);
      uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                         (uVar10,param_4);
      if (lVar8 != 0) {
        uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      goto LAB_004d2174;
    }
    if (lVar8 != 0) {
      lVar11 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
    }
  }
  lVar8 = (*(code *)PTR_parent_00799418)();
  if ((lVar8 != 0) &&
     (uVar9 = binding::ensure_private_dir(lVar8,lVar11), uVar12 = extraout_XMM0_Da_00, uVar9 != 0))
  goto LAB_004d2437;
  (*(code *)PTR_new_v4_00799350)();
  local_288 = (undefined4)local_258;
  uStack_284 = local_258._4_4_;
  uStack_280 = (uint)uStack_250;
  uStack_27c = uStack_250._4_4_;
  local_190 = 0;
  local_188 = 1;
  local_180 = 0;
  local_248 = 0x60000020;
  uStack_250 = &PTR_<alloc[12e961f32105355]::string::String>_0078beb0;
  local_258 = &local_190;
  cVar6 = (*(code *)PTR_fmt_00799400)();
  lVar8 = local_190;
  if (cVar6 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_0078b630,&local_289,
               &PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_0078bee0);
    goto LAB_004d2535;
  }
  if (local_180 < 9) {
    if (local_180 == 8) {
LAB_004d22e7:
      local_190 = local_188;
      local_188 = 8;
      uStack_250 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_258 = &local_190;
      uVar12 = (*(code *)PTR_format_inner_00799048)(&local_190,&local_258);
      if (lVar8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      uVar12 = (*(code *)PTR__with_extension_00799bd0)(local_1a0,param_4,local_198);
      if (local_1a8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      uStack_250 = (undefined **)CONCAT26((short)((ulonglong)uStack_250 >> 0x30),0x10000000100);
      local_258 = (undefined8 *)0x180000a0000;
      uVar12 = (*(code *)PTR__open_00799768)(local_260);
      if ((int)local_190 == 1) {
        uVar9 = local_188;
      }
      else {
        local_288 = local_190._4_4_;
        uVar9 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::write_all
                          (&local_288,uVar4,lVar5);
        if ((uVar9 == 0) && (uVar9 = (*(code *)PTR_sync_data_00799770)(), uVar9 == 0)) {
          (*(code *)PTR_close_00799030)();
          uVar9 = (*(code *)PTR_rename_00799778)(param_4,param_3);
          uVar12 = extraout_XMM0_Da_01;
          if ((uVar9 == 0) &&
             (uVar9 = (*(code *)PTR_set_permissions_007992e8)(extraout_XMM0_Da_01,0x180),
             uVar12 = extraout_XMM0_Da_02, uVar9 == 0)) {
            if (CONCAT44(uStack_26c,local_270) != 0) {
              uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_02,1);
            }
            if (lVar3 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
            }
            return 0;
          }
        }
        else {
          uVar12 = (*(code *)PTR_close_00799030)();
        }
      }
      if (CONCAT44(uStack_26c,local_270) != 0) {
        uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
LAB_004d2437:
      if (lVar3 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      return uVar9;
    }
  }
  else if (-0x41 < *(char *)(local_188 + 8)) goto LAB_004d22e7;
  (*(code *)PTR_slice_error_fail_00799408)
            (8,0,&PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bdc0);
LAB_004d2535:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


