// 004d64f0 <&str>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::<&str> */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::<&str>
          (undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  
  if (param_3 != 0) {
    if (param_4 < 0) {
LAB_004d6514:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_4 == 0) {
      lVar9 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar9 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar9 == 0) goto LAB_004d6514;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
    }
    uVar11 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar9,param_4);
    if (extraout_RDX == 0) {
      if (param_4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
      }
    }
    else {
      lVar10 = ensure_upstream_mut(param_2);
      if ((*(longlong *)(lVar10 + 0x28) != -1) && (*(longlong *)(lVar10 + 0x28) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
      }
      *(longlong *)(lVar10 + 0x28) = param_4;
      *(longlong *)(lVar10 + 0x30) = lVar9;
      *(longlong *)(lVar10 + 0x38) = param_4;
    }
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return param_1;
}


