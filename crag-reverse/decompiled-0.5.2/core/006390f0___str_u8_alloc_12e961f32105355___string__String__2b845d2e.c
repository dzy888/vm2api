// 006390f0 <str,u8,alloc[12e961f32105355]::string::String>

/* alloc[12e961f32105355]::str::join_generic_copy::<str, u8, alloc[12e961f32105355]::string::String>
    */

ulonglong * __rustcall
alloc[12e961f32105355]::str::join_generic_copy::<str,u8,alloc[12e961f32105355]::string::String>
          (undefined4 param_1,ulonglong *param_2,longlong param_3,longlong param_4,
          undefined4 *param_5,ulonglong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  ulonglong local_50;
  ulonglong uStack_48;
  longlong local_40;
  ulonglong *local_38;
  
  if (param_4 == 0) goto LAB_006391b0;
  lVar4 = param_4 * 0x18;
  uVar10 = *(ulonglong *)(param_3 + 0x10);
  uVar7 = lVar4 - 0x18;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uVar7 >> 3) * -0x5555555555555555;
  uVar6 = SUB168(auVar1 * auVar2,0);
  bVar12 = CARRY8(uVar6,uVar10);
  uVar6 = uVar6 + uVar10;
  lVar11 = param_3;
  if (SUB168(auVar1 * auVar2,8) == 0) {
    while (!bVar12) {
      if (uVar7 == 0) goto LAB_0063919c;
      uVar7 = uVar7 - 0x18;
      bVar12 = CARRY8(uVar6,*(ulonglong *)(lVar11 + 0x28));
      uVar6 = uVar6 + *(ulonglong *)(lVar11 + 0x28);
      lVar11 = lVar11 + 0x18;
    }
  }
  param_3 = 0x35;
  param_1 = (*(code *)PTR_expect_failed_00799440)();
LAB_0063919c:
  if ((longlong)uVar6 < 0) {
LAB_006391a4:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006391b0:
    *param_2 = 0;
    param_2[1] = 1;
    param_2[2] = 0;
    return param_2;
  }
  if (uVar6 == 0) {
    uVar7 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar7 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar7 == 0) goto LAB_006391a4;
    param_1 = extraout_XMM0_Da;
  }
  local_40 = 0;
  local_50 = uVar6;
  uStack_48 = uVar7;
  local_38 = param_2;
  if (uVar6 < uVar10) {
    param_1 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_50,0,uVar10,1,1);
  }
  else {
    lVar11 = 0;
    if (uVar10 == 0) goto LAB_0063925b;
  }
  lVar11 = local_40;
  uVar7 = uStack_48;
  param_1 = (*(code *)PTR_memcpy_00799008)(param_1,uVar10);
LAB_0063925b:
  puVar5 = PTR_memcpy_00799008;
  puVar8 = (undefined4 *)(uVar7 + lVar11 + uVar10);
  uVar7 = uVar6 - (lVar11 + uVar10);
  switch(param_6) {
  case 0:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        uVar10 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        bVar12 = uVar7 < uVar10;
        uVar7 = uVar7 - uVar10;
        if (bVar12) {
LAB_0063953c:
          (*(code *)PTR_panic_fmt_007991a8)
                    (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078f9b0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        param_1 = (*(code *)puVar5)();
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
    break;
  case 1:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        if (uVar7 == 0) goto LAB_0063953c;
        uVar10 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        uVar9 = uVar7 - 1;
        *(undefined1 *)puVar8 = *(undefined1 *)param_5;
        uVar7 = uVar9 - uVar10;
        if (uVar9 < uVar10) goto LAB_0063953c;
        puVar8 = (undefined4 *)((longlong)puVar8 + uVar10 + 1);
        param_1 = (*(code *)puVar5)();
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
    break;
  case 2:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        if (uVar7 < 2) goto LAB_0063953c;
        uVar10 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        uVar9 = uVar7 - 2;
        *(undefined2 *)puVar8 = *(undefined2 *)param_5;
        uVar7 = uVar9 - uVar10;
        if (uVar9 < uVar10) goto LAB_0063953c;
        puVar8 = (undefined4 *)((longlong)puVar8 + uVar10 + 2);
        param_1 = (*(code *)puVar5)();
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
    break;
  case 3:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        if (uVar7 < 3) goto LAB_0063953c;
        uVar10 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        uVar9 = uVar7 - 3;
        *(undefined1 *)((longlong)puVar8 + 2) = *(undefined1 *)((longlong)param_5 + 2);
        *(undefined2 *)puVar8 = *(undefined2 *)param_5;
        uVar7 = uVar9 - uVar10;
        if (uVar9 < uVar10) goto LAB_0063953c;
        puVar8 = (undefined4 *)((longlong)puVar8 + uVar10 + 3);
        param_1 = (*(code *)puVar5)();
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
    break;
  case 4:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        if (uVar7 < 4) goto LAB_0063953c;
        uVar10 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        uVar9 = uVar7 - 4;
        *puVar8 = *param_5;
        uVar7 = uVar9 - uVar10;
        if (uVar9 < uVar10) goto LAB_0063953c;
        puVar8 = (undefined4 *)((longlong)puVar8 + uVar10 + 4);
        param_1 = (*(code *)puVar5)();
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
    break;
  default:
    if (param_4 != 1) {
      lVar11 = 0;
      do {
        uVar10 = uVar7 - param_6;
        if (uVar7 < param_6) goto LAB_0063953c;
        uVar9 = *(ulonglong *)(param_3 + 0x28 + lVar11);
        param_1 = (*(code *)puVar5)(*(undefined8 *)(param_3 + 0x20 + lVar11),param_6);
        uVar7 = uVar10 - uVar9;
        if (uVar10 < uVar9) goto LAB_0063953c;
        param_1 = (*(code *)puVar5)(param_1,uVar9);
        lVar11 = lVar11 + 0x18;
      } while (lVar4 + -0x18 != lVar11);
    }
  }
  local_38[2] = uVar6 - uVar7;
  *local_38 = local_50;
  local_38[1] = uStack_48;
  return local_38;
}


