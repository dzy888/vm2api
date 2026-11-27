// 006a0c30 merge_captured_headers

/* craggemini_core[66f3c71560d70857]::bridge::merge_captured_headers */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::bridge::merge_captured_headers
          (undefined4 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
          longlong param_5,longlong *param_6,longlong *param_7)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_c0;
  longlong local_a8;
  longlong local_90;
  
  lVar2 = *param_3;
  if (lVar2 != -2) {
    param_1 = (*(code *)PTR_memcpy_00799008)(param_5,0x90);
    lVar3 = local_c0;
  }
  else {
    local_a8 = -1;
    local_90 = -1;
    lVar3 = -1;
  }
  if (param_5 == 0 || lVar2 != -2 && local_c0 != -1) {
LAB_006a0d42:
    if (local_a8 == -1) {
      param_1 = (undefined4)*param_6;
    }
    if (local_90 == -1) {
      uVar4 = (*(code *)PTR_memcpy_00799008)(param_7[2],0x90);
    }
    else {
      uVar4 = (*(code *)PTR_memcpy_00799008)(param_1,0x90);
      if ((*param_7 != -1) && (*param_7 != 0)) {
        uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
      }
    }
    if (((local_a8 != -1) && (*param_6 != -1)) && (*param_6 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
    }
    return param_2;
  }
  if (-1 < param_5) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 != 0) {
      param_1 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_5);
      if ((lVar3 != -1) && (lVar3 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      goto LAB_006a0d42;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


