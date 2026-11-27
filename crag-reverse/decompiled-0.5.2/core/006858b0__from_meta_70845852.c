// 006858b0 from_meta

/* <craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>::from_meta */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>::from_meta
          (longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
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
  longlong *plVar14;
  longlong lVar15;
  undefined1 uVar16;
  undefined4 extraout_XMM0_Da;
  
  uVar16 = param_4 == 0;
  if (-1 < param_4) goto LAB_006858d5;
  uVar16 = true;
  plVar14 = (longlong *)0x0;
  while( true ) {
    param_1 = plVar14;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_4;
LAB_006858d5:
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    lVar1 = *(longlong *)(param_2 + 0x50);
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar7 = *(undefined4 *)(param_2 + 0x8c);
    uVar8 = *(undefined4 *)(param_2 + 0x90);
    uVar9 = *(undefined4 *)(param_2 + 0x94);
    uVar10 = *(undefined4 *)(param_2 + 0x78);
    uVar11 = *(undefined4 *)(param_2 + 0x7c);
    uVar12 = *(undefined4 *)(param_2 + 0x80);
    uVar13 = *(undefined4 *)(param_2 + 0x84);
    if ((bool)uVar16) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar15 = (*(code *)PTR___rust_alloc_00799000)();
    uVar16 = lVar15 == 0;
    plVar14 = (longlong *)0x1;
    if (!(bool)uVar16) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
LAB_00685948:
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
      param_1[5] = lVar1;
      *(undefined4 *)(param_1 + 6) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
      *(undefined4 *)(param_1 + 7) = uVar8;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
      *(undefined4 *)(param_1 + 8) = uVar10;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar11;
      *(undefined4 *)(param_1 + 9) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar13;
      *param_1 = param_4;
      param_1[1] = lVar15;
      param_1[2] = param_4;
      return param_1;
    }
  }
  lVar15 = 1;
  goto LAB_00685948;
}


