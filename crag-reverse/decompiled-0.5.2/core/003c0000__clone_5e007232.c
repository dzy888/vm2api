// 003c0000 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar5 = uVar3 * 0x60;
  if (uVar3 < 0x155555555555556) goto LAB_003c003e;
  puVar8 = (ulonglong *)0x0;
  do {
    param_1 = puVar8;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar5;
LAB_003c003e:
    if (lVar5 == 0) {
      local_118 = 0;
      local_110 = 8;
      goto LAB_003c0225;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_110 = (*(code *)PTR___rust_alloc_00799000)();
    puVar8 = (ulonglong *)&DAT_00000008;
  } while (local_110 == 0);
  local_118 = uVar3;
  if (uVar3 != 0) {
    lVar12 = 0;
    uVar11 = 0;
    pcVar10 = (code *)PTR_clone_00798fd0;
    do {
      if (lVar5 == lVar12) break;
      if (*(longlong *)(lVar4 + 0x30 + lVar12) == -1) {
        local_f0 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        pcVar10 = (code *)PTR_clone_00798fd0;
      }
      (*pcVar10)();
      (*pcVar10)();
      if (*(longlong *)(lVar4 + 0x48 + lVar12) == -1) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_88 = uStack_d0;
        uStack_80 = uStack_c8;
        uVar9 = local_d8;
      }
      pcVar10 = (code *)PTR_clone_00798fd0;
      uVar11 = uVar11 + 1;
      local_d8 = local_88;
      uVar6 = local_d8;
      uStack_d0 = uStack_80;
      uVar7 = uStack_d0;
      *(undefined8 *)(local_110 + 0x40 + lVar12) = local_e0;
      puVar2 = (undefined8 *)(local_110 + 0x30 + lVar12);
      *puVar2 = local_f0;
      puVar2[1] = uStack_e8;
      puVar2 = (undefined8 *)(local_110 + 0x20 + lVar12);
      *puVar2 = uStack_98;
      puVar2[1] = local_90;
      puVar2 = (undefined8 *)(local_110 + 0x10 + lVar12);
      *puVar2 = local_a8;
      puVar2[1] = local_a0;
      *(undefined8 *)(local_110 + lVar12) = local_b8;
      ((undefined8 *)(local_110 + lVar12))[1] = uStack_b0;
      *(undefined8 *)(local_110 + 0x48 + lVar12) = uVar9;
      local_d8._0_4_ = (undefined4)local_88;
      local_d8._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      uStack_d0._0_4_ = (undefined4)uStack_80;
      uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      puVar1 = (undefined4 *)(local_110 + 0x50 + lVar12);
      *puVar1 = (undefined4)local_d8;
      puVar1[1] = local_d8._4_4_;
      puVar1[2] = (undefined4)uStack_d0;
      puVar1[3] = uStack_d0._4_4_;
      lVar12 = lVar12 + 0x60;
      local_d8 = uVar6;
      uStack_d0 = uVar7;
    } while (uVar3 != uVar11);
  }
LAB_003c0225:
  param_1[2] = uVar3;
  *param_1 = local_118;
  param_1[1] = local_110;
  return;
}


