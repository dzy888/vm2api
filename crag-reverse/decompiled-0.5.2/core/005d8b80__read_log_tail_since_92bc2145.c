// 005d8b80 read_log_tail_since

/* craggemini_core[66f3c71560d70857]::acp_backend::read_log_tail_since */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::read_log_tail_since
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
          ulonglong param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar5 [16];
  int local_118;
  undefined4 uStack_114;
  ulonglong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  ulonglong local_80;
  
  local_d0 = 0x1b600000000;
  uVar3 = uStack_c8 >> 8;
  uStack_c8 = CONCAT71((uint7)uVar3 & 0xffff0000000000,1);
  (*(code *)PTR__open_00799768)(param_3,param_2);
  uVar4 = uStack_114;
  if (local_118 == 1) {
    if ((1 < ((uint)local_110 & 3) - 2) && ((local_110 & 3) != 0)) {
      uStack_c8 = local_110 - 1;
      local_d0 = CONCAT71(local_d0._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    *param_1 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_metadata_00799b30)();
    if ((int)local_d0 == 2) {
      if ((1 < ((uint)uStack_c8 & 3) - 2) && ((uStack_c8 & 3) != 0)) {
        local_110 = uStack_c8 - 1;
        local_118 = CONCAT31(local_118._1_3_,3);
        (*(code *)PTR_drop_00799040)();
      }
    }
    else if (param_4 < local_80) {
      if (param_5 < local_80 - param_4) {
        param_4 = local_80 - param_5;
      }
      uVar3 = param_4;
      lVar2 = (*(code *)PTR_seek_0079a058)();
      if (lVar2 != 1) {
        lVar2 = local_80 - param_4;
        if (lVar2 < 0) {
LAB_005d8ceb:
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_f8 = 1;
        if (lVar2 != 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_f8 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_f8 == 0) goto LAB_005d8ceb;
        }
        local_f0 = 0;
        local_c0 = uVar4;
        local_100 = lVar2;
        local_d0 = param_5;
        uStack_c8 = param_5;
        auVar5 = std[6c98fd8553dbae28]::io::default_read_to_end::
                 <core[c0acaeba6ab4c2e0]::io::util::Take<std[6c98fd8553dbae28]::fs::File>>
                           (&local_d0,&local_100,0);
        if (auVar5._0_8_ == 1) {
          if ((1 < (auVar5._8_4_ & 3) - 2) && ((auVar5._8_8_ & 3) != 0)) {
            local_110 = auVar5._8_8_ - 1;
            local_118 = CONCAT31(local_118._1_3_,3);
            (*(code *)PTR_drop_00799040)();
          }
          *param_1 = 0xffffffffffffffff;
          uVar4 = (*(code *)PTR_close_00799030)();
        }
        else {
          uVar4 = (*(code *)PTR_close_00799030)();
          (*(code *)PTR_from_utf8_lossy_00799b68)(uVar4,local_f0);
          strip_ansi_escapes(&local_118,local_e0,local_d8);
          auVar5 = ::<str>::trim_matches::<<char>::is_whitespace>(local_110,local_108);
          if (auVar5._8_8_ == 0) {
            *param_1 = 0xffffffffffffffff;
            uVar4 = extraout_XMM0_Da;
          }
          else {
            protocol::redact_error_secrets(&local_d0,auVar5._0_8_);
            param_1[2] = CONCAT44(uStack_bc,local_c0);
            *(int *)param_1 = (int)local_d0;
            *(undefined4 *)((longlong)param_1 + 4) = local_d0._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c8;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_c8._4_4_;
            uVar4 = (int)local_d0;
          }
          if (CONCAT44(uStack_114,local_118) != 0) {
            uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
          }
          if (0 < local_e8) {
            uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
          }
        }
        if (local_100 == 0) {
          return param_1;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
        return param_1;
      }
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        uStack_c8 = uVar3 - 1;
        local_d0 = CONCAT71(local_d0._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
    }
    *param_1 = 0xffffffffffffffff;
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


