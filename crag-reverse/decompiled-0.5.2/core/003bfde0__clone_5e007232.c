// 003bfde0 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia> as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::InlineMedia>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar5 = uVar3 * 0x48;
  if (uVar3 < 0x1c71c71c71c71c8) goto LAB_003bfe1f;
  puVar9 = (ulonglong *)0x0;
  do {
    param_1 = puVar9;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar5;
LAB_003bfe1f:
    if (lVar5 == 0) {
      local_f0 = 0;
      local_e8 = 8;
      goto LAB_003bff77;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_e8 = (*(code *)PTR___rust_alloc_00799000)();
    puVar6 = PTR_clone_00798fd0;
    puVar9 = (ulonglong *)&DAT_00000008;
  } while (local_e8 == 0);
  local_f0 = uVar3;
  if (uVar3 != 0) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      if (lVar5 == lVar12) break;
      (*(code *)puVar6)();
      (*(code *)puVar6)();
      if (*(longlong *)(lVar4 + 0x30 + lVar12) == -1) {
        uVar10 = 0xffffffffffffffff;
      }
      else {
        (*(code *)puVar6)();
        local_48 = uStack_c0;
        uStack_40 = uStack_b8;
        uVar10 = local_c8;
      }
      uVar11 = uVar11 + 1;
      local_c8 = local_48;
      uVar7 = local_c8;
      uStack_c0 = uStack_40;
      uVar8 = uStack_c0;
      puVar2 = (undefined8 *)(local_e8 + 0x20 + lVar12);
      *puVar2 = uStack_88;
      puVar2[1] = local_80;
      puVar2 = (undefined8 *)(local_e8 + 0x10 + lVar12);
      *puVar2 = local_98;
      puVar2[1] = local_90;
      *(undefined8 *)(local_e8 + lVar12) = local_a8;
      ((undefined8 *)(local_e8 + lVar12))[1] = uStack_a0;
      *(undefined8 *)(local_e8 + 0x30 + lVar12) = uVar10;
      local_c8._0_4_ = (undefined4)local_48;
      local_c8._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uStack_40;
      uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
      puVar1 = (undefined4 *)(local_e8 + 0x38 + lVar12);
      *puVar1 = (undefined4)local_c8;
      puVar1[1] = local_c8._4_4_;
      puVar1[2] = (undefined4)uStack_c0;
      puVar1[3] = uStack_c0._4_4_;
      lVar12 = lVar12 + 0x48;
      local_c8 = uVar7;
      uStack_c0 = uVar8;
    } while (uVar3 != uVar11);
  }
LAB_003bff77:
  param_1[2] = uVar3;
  *param_1 = local_f0;
  param_1[1] = local_e8;
  return;
}


