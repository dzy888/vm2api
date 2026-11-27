// 006f2ff0 new

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::new */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::new
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = (*(code *)PTR_new_0079a8b8)();
  if ((int)local_98 == 1) {
    param_1[1] = uStack_90;
    *param_1 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_new_0079a8c0)(uVar4,0);
    if ((int)local_98 == 1) {
      param_1[1] = uStack_90;
      *param_1 = 0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_try_clone_0079a8c8)();
      if ((int)local_98 != 1) {
        (*(code *)PTR_with_capacity_0079a8d0)();
        uVar2 = 0xffffffffffffffff;
        if (param_3 == 1) {
          (*(code *)PTR_with_capacity_0079a8d0)();
          local_48 = uStack_90;
          uStack_40 = uStack_88;
          uVar2 = local_98;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar3 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar3 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(undefined8 *)((longlong)param_1 + 0x61) = 0;
        *(undefined8 *)((longlong)param_1 + 0x69) = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        *param_1 = local_60;
        param_1[1] = uStack_58;
        param_1[2] = local_50;
        param_1[3] = uVar2;
        param_1[4] = local_48;
        param_1[5] = uStack_40;
        param_1[6] = CONCAT44(uStack_64,local_98._4_4_) & 0xffffff00ffffffff;
        param_1[7] = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined1 *)((longlong)param_1 + 0x44) = 0;
        param_1[9] = 0x10;
        param_1[10] = lVar3;
        *(undefined4 *)(param_1 + 0xf) = local_98._4_4_;
        *(undefined4 *)((longlong)param_1 + 0x7c) = local_98._4_4_;
        return param_1;
      }
      param_1[1] = uStack_90;
      *param_1 = 0xffffffffffffffff;
      (*(code *)PTR_close_00799030)();
    }
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


