// 004d6400 <alloc[12e961f32105355]::string::String>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::<alloc[12e961f32105355]::string::String>
    */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::
<alloc[12e961f32105355]::string::String>(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong extraout_RDX;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  
  lVar9 = *param_3;
  if (lVar9 != -1) {
    uVar10 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3[1],param_3[2]);
    if (extraout_RDX == 0) {
      if (lVar9 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
    }
    else {
      lVar9 = ensure_upstream_mut(param_2);
      if ((*(longlong *)(lVar9 + 0x28) != -1) && (*(longlong *)(lVar9 + 0x28) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
      }
      *(longlong *)(lVar9 + 0x38) = param_3[2];
      lVar1 = param_3[1];
      *(longlong *)(lVar9 + 0x28) = *param_3;
      *(longlong *)(lVar9 + 0x30) = lVar1;
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


