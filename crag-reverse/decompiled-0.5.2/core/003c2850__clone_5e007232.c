// 003c2850 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  uVar12 = *(ulonglong *)(param_2 + 0x10);
  lVar16 = uVar12 * 200;
  uVar13 = uVar12;
  if (uVar12 < 0xa3d70a3d70a3d8) goto LAB_003c2889;
  puVar14 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    uVar13 = uVar12;
    param_2 = lVar16;
    param_1 = puVar14;
LAB_003c2889:
    if (lVar16 == 0) {
      local_f8 = 0;
      local_f0 = 8;
      goto LAB_003c2c03;
    }
    lVar6 = *(longlong *)(param_2 + 8);
    uVar12 = uVar13;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar14 = (ulonglong *)&DAT_00000008;
    local_f0 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_f0 == 0);
  local_f8 = uVar13;
  if (uVar13 != 0) {
    lVar19 = 0;
    uVar12 = 0;
    do {
      if (lVar16 == lVar19) break;
      (*(code *)PTR_clone_00798fd0)();
      uVar17 = 0xffffffffffffffff;
      if (*(longlong *)(lVar6 + 0x48 + lVar19) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_108 = uStack_160;
        local_c0 = local_158;
        uVar17 = local_168;
      }
      uVar15 = 0xffffffffffffffff;
      if (*(longlong *)(lVar6 + 0x60 + lVar19) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_110 = uStack_160;
        local_c8 = local_158;
        uVar15 = local_168;
      }
      uVar4 = *(undefined4 *)(lVar6 + 0xa8 + lVar19);
      uVar5 = *(undefined4 *)(lVar6 + 0xac + lVar19);
      local_150 = 0xffffffffffffffff;
      uVar18 = 0xffffffffffffffff;
      if (*(longlong *)(lVar6 + 0x78 + lVar19) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_118 = uStack_160;
        local_d0 = local_158;
        uVar18 = local_168;
      }
      if (*(longlong *)(lVar6 + 0x90 + lVar19) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_150 = local_168;
        local_120 = uStack_160;
        local_d8 = local_158;
      }
      puVar11 = PTR_clone_00798fd0;
      uVar3 = *(undefined1 *)(lVar6 + 0xc0 + lVar19);
      puVar1 = (undefined4 *)(lVar6 + 0xb0 + lVar19);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      (*(code *)PTR_clone_00798fd0)();
      (*(code *)puVar11)();
      *(undefined8 *)(local_f0 + 0x40 + lVar19) = local_158;
      puVar2 = (undefined8 *)(local_f0 + 0x30 + lVar19);
      *puVar2 = local_168;
      puVar2[1] = uStack_160;
      puVar2 = (undefined8 *)(local_f0 + 0x20 + lVar19);
      *puVar2 = uStack_98;
      puVar2[1] = local_90;
      puVar2 = (undefined8 *)(local_f0 + 0x10 + lVar19);
      *puVar2 = local_a8;
      puVar2[1] = local_a0;
      *(undefined8 *)(local_f0 + lVar19) = local_b8;
      ((undefined8 *)(local_f0 + lVar19))[1] = uStack_b0;
      *(undefined8 *)(local_f0 + 0x48 + lVar19) = uVar17;
      *(undefined8 *)(local_f0 + 0x50 + lVar19) = local_108;
      *(undefined8 *)(local_f0 + 0x58 + lVar19) = local_c0;
      *(undefined8 *)(local_f0 + 0x60 + lVar19) = uVar15;
      *(undefined8 *)(local_f0 + 0x68 + lVar19) = local_110;
      *(undefined8 *)(local_f0 + 0x70 + lVar19) = local_c8;
      *(undefined8 *)(local_f0 + 0x78 + lVar19) = uVar18;
      *(undefined8 *)(local_f0 + 0x80 + lVar19) = local_118;
      *(undefined8 *)(local_f0 + 0x88 + lVar19) = local_d0;
      *(undefined8 *)(local_f0 + 0x90 + lVar19) = local_150;
      *(undefined8 *)(local_f0 + 0x98 + lVar19) = local_120;
      *(undefined8 *)(local_f0 + 0xa0 + lVar19) = local_d8;
      *(undefined4 *)(local_f0 + 0xa8 + lVar19) = uVar4;
      *(undefined4 *)(local_f0 + 0xac + lVar19) = uVar5;
      puVar1 = (undefined4 *)(local_f0 + 0xb0 + lVar19);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      *(undefined1 *)(local_f0 + 0xc0 + lVar19) = uVar3;
      uVar12 = uVar12 + 1;
      lVar19 = lVar19 + 200;
    } while (uVar13 != uVar12);
  }
LAB_003c2c03:
  param_1[2] = uVar13;
  *param_1 = local_f8;
  param_1[1] = local_f0;
  return;
}


