// 001ec040 new

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::new */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::new
          (undefined8 *param_1,char *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_34;
  
  if (param_3 == 0) {
LAB_001ec07e:
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
    if (*param_2 != '/') {
      if (param_3 < 0x10) {
        uVar2 = 0;
        do {
          if (param_2[uVar2] == '/') {
            uVar5 = 1;
            goto LAB_001ec0a4;
          }
          uVar2 = uVar2 + 1;
        } while (param_3 != uVar2);
        goto LAB_001ec07e;
      }
      lVar4 = (*(code *)PTR_memchr_aligned_00219d40)();
      uVar5 = lVar4 == 1;
    }
  }
LAB_001ec0a4:
  (*(code *)PTR_spec_new_impl_0021a110)();
  if (local_58 == -1) {
    local_34 = 0;
    param_3 = local_48;
  }
  else {
    uStack_50 = (*(code *)PTR_from_0021aa20)();
    if (local_58 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da,1);
    }
    local_34 = 1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_error_00219c78)();
LAB_001ec278:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *plVar3 = 0;
  if (param_3 == 0) {
    lVar4 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar4 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_001ec278;
    }
    (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da_00,param_3);
  }
  plVar3[1] = 0;
  *plVar3 = lVar4;
  param_1[2] = 2;
  *param_1 = 2;
  param_1[1] = plVar3;
  param_1[0x10] = uStack_50;
  param_1[0x11] = param_3;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc3) = uVar5;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x18) = local_34;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  return param_1;
}


