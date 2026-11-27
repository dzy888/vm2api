// 006395b0 <str,u8,&str>

/* alloc[12e961f32105355]::str::join_generic_copy::<str, u8, &str> */

ulonglong * __rustcall
alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
          (undefined4 param_1,ulonglong *param_2,undefined8 *param_3,longlong param_4,
          undefined4 *param_5,ulonglong param_6)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  longlong lVar11;
  undefined8 *unaff_RBP;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined8 *local_70;
  ulonglong local_60;
  ulonglong uStack_58;
  longlong local_50;
  undefined **local_48;
  ulonglong *local_40;
  ulonglong local_38;
  
  if (param_4 == 0) goto LAB_00639660;
  lVar11 = param_4 * 0x10;
  uVar13 = param_3[1];
  uVar9 = lVar11 - 0x10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9 >> 4;
  uVar7 = SUB168(auVar2 * auVar3,0);
  uVar14 = uVar7 + uVar13;
  if ((SUB168(auVar2 * auVar3,8) == 0) && (!CARRY8(uVar7,uVar13))) {
    local_70 = param_3 + param_4 * 2;
    unaff_RBP = param_3 + 2;
    ppuVar10 = (undefined **)*param_3;
    puVar8 = unaff_RBP;
    do {
      if (uVar9 == 0) goto LAB_0063964c;
      uVar9 = uVar9 - 0x10;
      bVar16 = CARRY8(uVar14,puVar8[1]);
      uVar14 = uVar14 + puVar8[1];
      puVar8 = puVar8 + 2;
    } while (!bVar16);
  }
  param_2 = (ulonglong *)&DAT_001a2221;
  ppuVar10 = &PTR_s__rustc_48a229ceaefd4985c50990b14_0078f9c8;
  param_1 = (*(code *)PTR_expect_failed_00799440)();
LAB_0063964c:
  if ((longlong)uVar14 < 0) {
    puVar6 = (ulonglong *)0x0;
LAB_00639654:
    param_2 = puVar6;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00639660:
    *param_2 = 0;
    param_2[1] = 1;
    param_2[2] = 0;
    return param_2;
  }
  local_48 = ppuVar10;
  local_38 = param_6;
  if (uVar14 == 0) {
    uVar9 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar9 = (*(code *)PTR___rust_alloc_00799000)();
    puVar6 = (ulonglong *)0x1;
    if (uVar9 == 0) goto LAB_00639654;
    param_1 = extraout_XMM0_Da;
  }
  local_50 = 0;
  local_60 = uVar14;
  uStack_58 = uVar9;
  local_40 = param_2;
  if (uVar14 < uVar13) {
    param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_60,0,uVar13,1,1);
  }
  else {
    lVar15 = 0;
    if (uVar13 == 0) goto LAB_0063970c;
  }
  lVar15 = local_50;
  uVar9 = uStack_58;
  param_1 = (*(code *)PTR_memcpy_00799008)(param_1,uVar13);
LAB_0063970c:
  uVar7 = local_38;
  puVar5 = PTR_memcpy_00799008;
  puVar12 = (undefined4 *)(uVar9 + lVar15 + uVar13);
  uVar9 = uVar14 - (lVar15 + uVar13);
  switch(local_38) {
  case 0:
    if (param_4 != 1) {
      lVar15 = 0;
      do {
        uVar13 = *(ulonglong *)((longlong)param_3 + lVar15 + 0x18);
        bVar16 = uVar9 < uVar13;
        uVar9 = uVar9 - uVar13;
        if (bVar16) {
LAB_006399bd:
          (*(code *)PTR_panic_fmt_007991a8)
                    (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078f9b0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        param_1 = (*(code *)PTR_memcpy_00799008)();
        lVar15 = lVar15 + 0x10;
      } while (lVar11 + -0x10 != lVar15);
    }
    break;
  case 1:
    if (param_4 != 1) {
      do {
        if (uVar9 == 0) goto LAB_006399bd;
        uVar13 = unaff_RBP[1];
        uVar7 = uVar9 - 1;
        *(undefined1 *)puVar12 = *(undefined1 *)param_5;
        uVar9 = uVar7 - uVar13;
        if (uVar7 < uVar13) goto LAB_006399bd;
        puVar12 = (undefined4 *)((longlong)puVar12 + uVar13 + 1);
        param_1 = (*(code *)puVar5)();
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != local_70);
    }
    break;
  case 2:
    if (param_4 != 1) {
      do {
        if (uVar9 < 2) goto LAB_006399bd;
        uVar13 = unaff_RBP[1];
        uVar7 = uVar9 - 2;
        *(undefined2 *)puVar12 = *(undefined2 *)param_5;
        uVar9 = uVar7 - uVar13;
        if (uVar7 < uVar13) goto LAB_006399bd;
        puVar12 = (undefined4 *)((longlong)puVar12 + uVar13 + 2);
        param_1 = (*(code *)puVar5)();
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != local_70);
    }
    break;
  case 3:
    if (param_4 != 1) {
      do {
        if (uVar9 < 3) goto LAB_006399bd;
        uVar13 = unaff_RBP[1];
        uVar7 = uVar9 - 3;
        *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)param_5 + 2);
        *(undefined2 *)puVar12 = *(undefined2 *)param_5;
        uVar9 = uVar7 - uVar13;
        if (uVar7 < uVar13) goto LAB_006399bd;
        puVar12 = (undefined4 *)((longlong)puVar12 + uVar13 + 3);
        param_1 = (*(code *)puVar5)();
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != local_70);
    }
    break;
  case 4:
    if (param_4 != 1) {
      do {
        if (uVar9 < 4) goto LAB_006399bd;
        uVar13 = unaff_RBP[1];
        uVar7 = uVar9 - 4;
        *puVar12 = *param_5;
        uVar9 = uVar7 - uVar13;
        if (uVar7 < uVar13) goto LAB_006399bd;
        puVar12 = (undefined4 *)((longlong)puVar12 + uVar13 + 4);
        param_1 = (*(code *)puVar5)();
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != local_70);
    }
    break;
  default:
    if (param_4 != 1) {
      do {
        uVar13 = uVar9 - uVar7;
        if (uVar9 < uVar7) goto LAB_006399bd;
        uVar1 = unaff_RBP[1];
        param_1 = (*(code *)puVar5)(uVar7,uVar7);
        uVar9 = uVar13 - uVar1;
        if (uVar13 < uVar1) goto LAB_006399bd;
        param_1 = (*(code *)puVar5)(param_1,uVar1);
        unaff_RBP = unaff_RBP + 2;
      } while (unaff_RBP != local_70);
    }
  }
  local_40[2] = uVar14 - uVar9;
  *local_40 = local_60;
  local_40[1] = uStack_58;
  return local_40;
}


