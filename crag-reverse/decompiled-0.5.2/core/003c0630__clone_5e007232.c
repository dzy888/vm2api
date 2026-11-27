// 003c0630 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  lVar19 = uVar7 * 0xd8;
  if (uVar7 < 0x97b425ed097b43) goto LAB_003c0669;
  puVar17 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar19;
    param_1 = puVar17;
LAB_003c0669:
    if (lVar19 == 0) {
      local_148 = 0;
      local_140 = 8;
      goto LAB_003c0a29;
    }
    lVar8 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar17 = (ulonglong *)&DAT_00000008;
    local_140 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_140 == 0);
  local_148 = uVar7;
  if (uVar7 != 0) {
    lVar18 = 0;
    uVar15 = 0;
    do {
      puVar13 = PTR_clone_00798fd0;
      if (lVar19 == lVar18) break;
      (*(code *)PTR_clone_00798fd0)();
      (*(code *)puVar13)();
      if (*(longlong *)(lVar8 + 0x60 + lVar18) == -1) {
        local_178 = 0xffffffffffffffff;
      }
      else {
        (*(code *)puVar13)();
        local_178 = local_198;
        local_158 = uStack_190;
        local_110 = uStack_188;
      }
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_c0,lVar18 + lVar8 + 0x30);
      (*(code *)puVar13)();
      uVar3 = *(undefined1 *)(lVar8 + 0xd5 + lVar18);
      uVar4 = *(undefined1 *)(lVar8 + 0xd4 + lVar18);
      uVar16 = 0xffffffffffffffff;
      if (*(longlong *)(lVar8 + 0x78 + lVar18) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_160 = uStack_190;
        local_118 = uStack_188;
        uVar16 = local_198;
      }
      uVar5 = *(undefined2 *)(lVar8 + 0xd0 + lVar18);
      uVar6 = *(undefined2 *)(lVar8 + 0xd2 + lVar18);
      uVar20 = 0xffffffffffffffff;
      if (*(longlong *)(lVar8 + 0x90 + lVar18) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_168 = uStack_190;
        local_120 = uStack_188;
        uVar20 = local_198;
      }
      if (*(longlong *)(lVar8 + 0xa8 + lVar18) == -1) {
        uVar14 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_a8 = uStack_190;
        uStack_a0 = uStack_188;
        uVar14 = local_198;
      }
      local_58 = local_b0;
      local_68 = local_c0;
      uStack_60 = uStack_b8;
      local_198 = local_a8;
      uStack_190 = uStack_a0;
      puVar1 = (undefined4 *)(lVar8 + 0xc0 + lVar18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar2 = (undefined8 *)(local_140 + 0x50 + lVar18);
      *puVar2 = uStack_d0;
      puVar2[1] = local_c8;
      puVar2 = (undefined8 *)(local_140 + 0x40 + lVar18);
      *puVar2 = local_b0;
      puVar2[1] = local_d8;
      puVar2 = (undefined8 *)(local_140 + 0x30 + lVar18);
      *puVar2 = local_c0;
      puVar2[1] = uStack_b8;
      puVar2 = (undefined8 *)(local_140 + 0x20 + lVar18);
      *puVar2 = uStack_e8;
      puVar2[1] = local_e0;
      puVar2 = (undefined8 *)(local_140 + 0x10 + lVar18);
      *puVar2 = local_f8;
      puVar2[1] = local_f0;
      *(undefined8 *)(local_140 + lVar18) = local_108;
      ((undefined8 *)(local_140 + lVar18))[1] = uStack_100;
      *(undefined8 *)(local_140 + 0x60 + lVar18) = local_178;
      *(undefined8 *)(local_140 + 0x68 + lVar18) = local_158;
      *(undefined8 *)(local_140 + 0x70 + lVar18) = local_110;
      *(undefined8 *)(local_140 + 0x78 + lVar18) = uVar16;
      *(undefined8 *)(local_140 + 0x80 + lVar18) = local_160;
      *(undefined8 *)(local_140 + 0x88 + lVar18) = local_118;
      *(undefined8 *)(local_140 + 0x90 + lVar18) = uVar20;
      *(undefined8 *)(local_140 + 0x98 + lVar18) = local_168;
      *(undefined8 *)(local_140 + 0xa0 + lVar18) = local_120;
      *(undefined8 *)(local_140 + 0xa8 + lVar18) = uVar14;
      puVar2 = (undefined8 *)(local_140 + 0xb0 + lVar18);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a0;
      puVar1 = (undefined4 *)(local_140 + 0xc0 + lVar18);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      *(undefined2 *)(local_140 + 0xd0 + lVar18) = uVar5;
      *(undefined2 *)(local_140 + 0xd2 + lVar18) = uVar6;
      *(undefined1 *)(local_140 + 0xd4 + lVar18) = uVar4;
      *(undefined1 *)(local_140 + 0xd5 + lVar18) = uVar3;
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 0xd8;
    } while (uVar7 != uVar15);
  }
LAB_003c0a29:
  param_1[2] = uVar7;
  *param_1 = local_148;
  param_1[1] = local_140;
  return;
}


