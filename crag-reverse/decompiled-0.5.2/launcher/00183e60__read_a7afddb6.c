// 00183e60 read

/* <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::read */

undefined8 * __rustcall
<craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::read
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_90;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  uVar5 = open_file(*param_2,param_3,param_4);
  if ((uVar5 & 1) != 0) {
    *(char *)(param_1 + 1) = (char)(uVar5 >> 8);
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  local_124 = (undefined4)(uVar5 >> 0x20);
  (*(code *)PTR_metadata_0021a048)();
  lVar4 = local_68;
  uVar5 = local_90;
  lVar3 = local_b8;
  lVar2 = local_c0;
  if ((int)local_e0 == 2) {
    if ((1 < ((uint)local_d8 & 3) - 2) && ((local_d8 & 3) != 0)) {
      uStack_118 = local_d8 - 1;
      local_120 = CONCAT71(local_120._1_7_,3);
      (*(code *)PTR_drop_00219c58)();
    }
  }
  else if (local_90 < 0x10001) {
    local_f8 = local_60;
    local_100 = local_58;
    local_108 = local_50;
    if (local_90 == 0) {
      uStack_118 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      uStack_118 = (*(code *)PTR___rust_alloc_00219c88)();
      if (uStack_118 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    local_120 = uVar5;
    local_110 = 0;
    local_d8 = 0x10001;
    local_d0 = 0x10001;
    local_e0 = &local_124;
    auVar7 = std[6c98fd8553dbae28]::io::default_read_to_end::
             <core[c0acaeba6ab4c2e0]::io::util::Take<&mut_std[6c98fd8553dbae28]::fs::File>>
                       (&local_e0,&local_120,0);
    uVar6 = extraout_XMM0_Da;
    if (auVar7._0_8_ == 1) {
      if ((1 < (auVar7._8_4_ & 3) - 2) && ((auVar7._8_8_ & 3) != 0)) {
        local_e8 = auVar7._8_8_ - 1;
        local_f0 = 3;
        uVar6 = (*(code *)PTR_drop_00219c58)();
      }
    }
    else if (local_110 < 0x10001) {
      uVar6 = (*(code *)PTR_metadata_0021a048)();
      if ((int)local_e0 == 2) {
        if ((1 < ((uint)local_d8 & 3) - 2) && ((local_d8 & 3) != 0)) {
          local_e8 = local_d8 - 1;
          local_f0 = 3;
          uVar6 = (*(code *)PTR_drop_00219c58)();
        }
      }
      else if (((((local_c0 == lVar2) && (local_b8 == lVar3)) && (local_90 == uVar5)) &&
               ((local_68 == lVar4 && (local_60 == local_f8)))) &&
              ((local_58 == local_100 && (local_50 == local_108)))) {
        param_1[2] = local_110;
        *(undefined4 *)param_1 = (undefined4)local_120;
        *(undefined4 *)((longlong)param_1 + 4) = local_120._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_118;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_118._4_4_;
        param_1[3] = lVar2;
        param_1[4] = lVar3;
        param_1[5] = uVar5;
        param_1[6] = lVar4;
        param_1[7] = local_f8;
        param_1[8] = local_100;
        param_1[9] = local_108;
        goto LAB_00183f00;
      }
    }
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 0xffffffffffffffff;
    if (local_120 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
    }
    goto LAB_00183f00;
  }
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 0xffffffffffffffff;
LAB_00183f00:
  (*(code *)PTR_close_00219d60)();
  return param_1;
}


