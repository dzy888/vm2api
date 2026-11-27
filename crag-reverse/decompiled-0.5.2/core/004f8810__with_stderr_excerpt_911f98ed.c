// 004f8810 with_stderr_excerpt

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
          (undefined8 *param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4,
          undefined4 param_5)

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
  longlong lVar10;
  longlong extraout_RDX;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  byte local_38;
  
  lVar10 = *param_3;
  if (lVar10 != -1) {
    lVar1 = param_3[1];
    lVar9 = param_3[2];
    uVar11 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar1,lVar9);
    if (extraout_RDX != 0) {
      craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_50,lVar1,lVar9);
      lVar1 = CONCAT44(uStack_4c,local_50);
      craggemini_core[66f3c71560d70857]::protocol::truncate_utf8
                (&local_50,CONCAT44(uStack_44,uStack_48),local_40);
      lVar9 = ensure_upstream_mut(param_2);
      if ((*(longlong *)(lVar9 + 0x130) != -1) && (*(longlong *)(lVar9 + 0x130) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
      }
      *(undefined8 *)(lVar9 + 0x140) = local_40;
      *(undefined4 *)(lVar9 + 0x130) = local_50;
      *(undefined4 *)(lVar9 + 0x134) = uStack_4c;
      *(undefined4 *)(lVar9 + 0x138) = uStack_48;
      *(undefined4 *)(lVar9 + 0x13c) = uStack_44;
      *(byte *)(lVar9 + 0x176) = *(byte *)(lVar9 + 0x176) | local_38;
      uVar11 = local_50;
      if (lVar1 != 0) {
        uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(local_50,1);
      }
    }
    if (lVar10 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
    }
  }
  if ((param_4 & 1) != 0) {
    lVar10 = ensure_upstream_mut(param_2);
    *(undefined4 *)(lVar10 + 0x148) = 1;
    *(undefined4 *)(lVar10 + 0x14c) = param_5;
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


