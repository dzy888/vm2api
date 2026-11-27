// 004f7660 with_param

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::with_param
          (undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong extraout_RDX;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  
  lVar1 = *param_3;
  if (lVar1 != -1) {
    lVar2 = param_3[1];
    lVar3 = param_3[2];
    uVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar2,lVar3);
    if (extraout_RDX == 0) {
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
    }
    else {
      lVar11 = ensure_upstream_mut(param_2);
      if ((*(longlong *)(lVar11 + 0x58) != -1) && (*(longlong *)(lVar11 + 0x58) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
      }
      *(longlong *)(lVar11 + 0x58) = lVar1;
      *(longlong *)(lVar11 + 0x60) = lVar2;
      *(longlong *)(lVar11 + 0x68) = lVar3;
    }
  }
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar10;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return param_1;
}


