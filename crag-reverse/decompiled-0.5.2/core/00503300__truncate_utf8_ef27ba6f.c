// 00503300 truncate_utf8

/* craggemini_core[66f3c71560d70857]::protocol::truncate_utf8 */

void __rustcall
craggemini_core[66f3c71560d70857]::protocol::truncate_utf8
          (ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar2;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  if (param_3 < 0x1001) {
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      uVar1 = (*(code *)PTR___rust_alloc_00799000)();
      if (uVar1 == 0) {
        uVar2 = (*(code *)PTR_handle_error_00798ff0)();
        if (local_38 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
    }
    *param_1 = param_3;
    param_1[1] = uVar1;
    param_1[2] = param_3;
  }
  else {
    uVar1 = 0x1000;
    do {
      if (-0x41 < *(char *)(param_2 + uVar1)) {
LAB_0050341a:
        if (-1 < (longlong)uVar1) goto LAB_00503427;
        do {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00503427:
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uStack_30 = (*(code *)PTR___rust_alloc_00799000)();
        } while (uStack_30 == 0);
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,uVar1);
        goto LAB_0050339d;
      }
      if (-0x41 < *(char *)(param_2 + -1 + uVar1)) {
        uVar1 = uVar1 - 1;
        goto LAB_0050341a;
      }
      if (-0x41 < *(char *)(param_2 + -2 + uVar1)) {
        uVar1 = uVar1 - 2;
        goto LAB_0050341a;
      }
      if (-0x41 < *(char *)(param_2 + -3 + uVar1)) {
        uVar1 = uVar1 - 3;
        goto LAB_0050341a;
      }
      uVar1 = uVar1 - 4;
    } while (uVar1 != 0);
    uStack_30 = 1;
    uVar1 = 0;
LAB_0050339d:
    local_38 = uVar1;
    local_28 = uVar1;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_38,uVar1,3,1,1);
    *(undefined2 *)(uStack_30 + uVar1) = 0x80e2;
    *(undefined1 *)(uStack_30 + 2 + uVar1) = 0xa6;
    param_1[2] = uVar1 + 3;
    *param_1 = local_38;
    param_1[1] = uStack_30;
  }
  return;
}


