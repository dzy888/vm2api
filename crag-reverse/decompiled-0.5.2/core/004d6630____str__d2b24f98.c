// 004d6630 <&str>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_www_authenticate::<&str> */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::with_www_authenticate::<&str>
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  if (param_4 < 0) {
LAB_004d6648:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == 0) {
    lVar24 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar24 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar24 == 0) goto LAB_004d6648;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
  }
  ::<str>::trim_matches::<<char>::is_whitespace>(lVar24,param_4);
  if (extraout_RDX == 0) {
    uVar2 = *(undefined4 *)param_2;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar8 = *(undefined4 *)(param_2 + 3);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar10 = *(undefined4 *)(param_2 + 4);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar12 = *(undefined4 *)(param_2 + 5);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar15 = *(undefined4 *)(param_2 + 7);
    uVar16 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar14;
    *(undefined4 *)(param_1 + 7) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar16;
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
    *(undefined4 *)(param_1 + 5) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
    *(undefined4 *)(param_1 + 2) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 3) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    if (param_4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
    }
  }
  else {
    lVar25 = ensure_upstream_mut(param_2);
    if ((*(longlong *)(lVar25 + 0x100) != -1) && (*(longlong *)(lVar25 + 0x100) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_00,1);
    }
    *(longlong *)(lVar25 + 0x100) = param_4;
    *(longlong *)(lVar25 + 0x108) = lVar24;
    *(longlong *)(lVar25 + 0x110) = param_4;
    uVar17 = *param_2;
    uVar18 = param_2[1];
    uVar19 = param_2[2];
    uVar20 = param_2[3];
    uVar21 = param_2[4];
    uVar22 = param_2[5];
    uVar23 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar23;
    param_1[4] = uVar21;
    param_1[5] = uVar22;
    param_1[2] = uVar19;
    param_1[3] = uVar20;
    *param_1 = uVar17;
    param_1[1] = uVar18;
  }
  return param_1;
}


