// 003939a0 clone

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong local_b0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  undefined4 *puStack_68;
  ulonglong local_60;
  longlong lStack_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong *local_38;
  
  uVar18 = param_2[3];
  if (uVar18 < 0x555555555555556) goto LAB_003939df;
  param_1 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = (ulonglong *)(uVar18 * 0x18);
LAB_003939df:
    local_38 = param_1;
    if ((ulonglong *)(uVar18 * 0x18) == (ulonglong *)0x0) {
      puStack_68 = (undefined4 *)&DAT_00000008;
      uVar10 = 0;
      goto LAB_00393a1d;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_1 = (ulonglong *)&DAT_00000008;
    puStack_68 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  } while (puStack_68 == (undefined4 *)0x0);
  uVar10 = uVar18;
LAB_00393a1d:
  local_60 = 0;
  lStack_58 = 0;
  if (uVar18 == 0) {
    uVar14 = 0;
    uVar15 = 0;
    lVar7 = 0;
  }
  else {
    uVar15 = *param_2;
    uVar14 = 0;
    if (uVar15 <= param_2[2]) {
      uVar14 = uVar15;
    }
    uVar14 = param_2[2] - uVar14;
    lVar7 = uVar18 - (uVar15 - uVar14);
    if (uVar18 < uVar15 - uVar14 || lVar7 == 0) {
      uVar15 = uVar18 + uVar14;
      lVar7 = 0;
    }
  }
  uVar1 = param_2[1];
  local_40 = uVar15 * 0x18;
  uVar12 = local_40 + uVar14 * -0x18;
  uVar16 = (uVar12 >> 3) * -0x5555555555555555;
  uVar18 = lVar7 + uVar16;
  local_70 = uVar10;
  if (uVar10 < uVar18) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_70,0,uVar18,8,0x18);
    lVar9 = lStack_58;
    uVar17 = local_60;
    uVar4 = local_70;
    if (uVar10 - lStack_58 < local_60) {
      uVar5 = uVar10 - local_60;
      uVar8 = lStack_58 - uVar5;
      if (local_70 - uVar10 < uVar8 || uVar5 <= uVar8) {
        uVar17 = local_70 - uVar5;
        (*(code *)PTR_memmove_00799258)(puStack_68,uVar5 * 0x18);
        local_60 = uVar17;
      }
      else {
        (*(code *)PTR_memcpy_00799008)(uVar8 * 8,uVar8 * 0x18);
      }
    }
    uVar10 = uVar4;
  }
  else {
    uVar17 = 0;
    lVar9 = 0;
  }
  puVar3 = PTR_clone_00798fd0;
  lVar19 = uVar14 * 0x18 + uVar1;
  local_48 = 0;
  if (uVar10 <= uVar17 + lVar9) {
    local_48 = uVar10;
  }
  uVar17 = (uVar17 + lVar9) - local_48;
  local_b0 = uVar10 - uVar17;
  if (uVar18 <= local_b0) {
    if (uVar14 == uVar15) {
      uVar16 = 0;
    }
    else {
      puVar11 = puStack_68 + uVar17 * 6;
      uVar18 = 0;
      do {
        (*(code *)puVar3)();
        *(undefined8 *)(puVar11 + 4) = local_78;
        *puVar11 = local_88;
        puVar11[1] = uStack_84;
        puVar11[2] = uStack_80;
        puVar11[3] = uStack_7c;
        uVar18 = uVar18 + 1;
        puVar11 = puVar11 + 6;
      } while (uVar16 != uVar18);
    }
    puVar3 = PTR_clone_00798fd0;
    local_b0 = uVar16;
    if (lVar7 != 0) {
      local_b0 = lVar7 + uVar16;
      puVar11 = puStack_68 + uVar16 * 6 + uVar17 * 6;
      lVar19 = 0;
      do {
        (*(code *)puVar3)();
        *(undefined8 *)(puVar11 + 4) = local_78;
        *puVar11 = local_88;
        puVar11[1] = uStack_84;
        puVar11[2] = uStack_80;
        puVar11[3] = uStack_7c;
        lVar19 = lVar19 + -1;
        puVar11 = puVar11 + 6;
      } while (-lVar19 != lVar7);
    }
    goto LAB_00393ee1;
  }
  lVar2 = lVar7 * 0x18;
  local_50 = uVar10;
  uVar18 = uVar1;
  if (uVar10 != uVar17) {
    puVar11 = puStack_68 + uVar17 * 6;
    uVar10 = 0;
    do {
      if (uVar12 == 0) {
        lVar13 = 0;
        lVar19 = lVar2;
        goto LAB_00393e80;
      }
      (*(code *)PTR_clone_00798fd0)();
      lVar19 = lVar19 + 0x18;
      *(undefined8 *)(puVar11 + 4) = local_78;
      *puVar11 = local_88;
      puVar11[1] = uStack_84;
      puVar11[2] = uStack_80;
      puVar11[3] = uStack_7c;
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 6;
      uVar12 = uVar12 - 0x18;
    } while (local_b0 != uVar10);
  }
  puVar3 = PTR_clone_00798fd0;
  if (lVar19 == local_40 + uVar1) {
    uVar10 = 0;
  }
  else {
    uVar10 = ((local_40 + uVar1) - lVar19) / 0x18;
    local_b0 = local_b0 + uVar10;
    lVar7 = 0;
    puVar11 = puStack_68;
    do {
      (*(code *)puVar3)();
      *(undefined8 *)(puVar11 + 4) = local_78;
      *puVar11 = local_88;
      puVar11[1] = uStack_84;
      puVar11[2] = uStack_80;
      puVar11[3] = uStack_7c;
      lVar7 = lVar7 + -1;
      puVar11 = puVar11 + 6;
    } while (-lVar7 != uVar10);
  }
  if (uVar1 != uVar1 + lVar2) goto LAB_00393df8;
  goto LAB_00393ed5;
  while( true ) {
    (*(code *)PTR_clone_00798fd0)();
    uVar18 = uVar18 + 0x18;
    *(undefined8 *)(puVar11 + 4) = local_78;
    *puVar11 = local_88;
    puVar11[1] = uStack_84;
    puVar11[2] = uStack_80;
    puVar11[3] = uStack_7c;
    lVar19 = lVar19 + -0x18;
    lVar6 = local_b0 + lVar13;
    lVar13 = lVar13 + -1;
    puVar11 = puVar11 + 6;
    if (lVar6 - 1U == uVar10) break;
LAB_00393e80:
    if (lVar19 == 0) {
      local_b0 = lVar7 + uVar10;
      goto LAB_00393ee1;
    }
  }
  uVar10 = 0;
  if (uVar18 != uVar1 + lVar2) {
LAB_00393df8:
    puVar3 = PTR_clone_00798fd0;
    uVar18 = ((uVar1 + lVar2) - uVar18) / 0x18;
    puVar11 = puStack_68 + uVar10 * 6;
    lVar7 = 0;
    do {
      (*(code *)puVar3)();
      *(undefined8 *)(puVar11 + 4) = local_78;
      *puVar11 = local_88;
      puVar11[1] = uStack_84;
      puVar11[2] = uStack_80;
      puVar11[3] = uStack_7c;
      lVar7 = lVar7 + -1;
      puVar11 = puVar11 + 6;
    } while (-lVar7 != uVar18);
    local_b0 = local_b0 + uVar18;
    goto LAB_00393ee1;
  }
LAB_00393ed5:
LAB_00393ee1:
  *local_38 = local_70;
  local_38[1] = (ulonglong)puStack_68;
  local_38[2] = local_60;
  local_38[3] = local_b0 + lVar9;
  return;
}


