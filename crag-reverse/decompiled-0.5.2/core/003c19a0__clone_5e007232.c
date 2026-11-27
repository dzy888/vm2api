// 003c19a0 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  lVar17 = uVar7 * 0x1a0;
  if (uVar7 < 0x4ec4ec4ec4ec4f) goto LAB_003c19da;
  puVar14 = (ulonglong *)0x0;
  do {
    param_1 = puVar14;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = lVar17;
LAB_003c19da:
    if (lVar17 == 0) {
      uVar15 = 8;
      goto LAB_003c2407;
    }
    lVar8 = *(longlong *)(param_2 + 8);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar15 = (*(code *)PTR___rust_alloc_00799000)();
    puVar14 = (ulonglong *)&DAT_00000008;
  } while (uVar15 == 0);
  if (uVar7 != 0) {
    local_298 = 0;
    uVar16 = 0;
    do {
      puVar13 = PTR_clone_00798fd0;
      if (lVar17 == local_298) break;
      (*(code *)PTR_clone_00798fd0)();
      (*(code *)puVar13)();
      lVar9 = *(longlong *)(lVar8 + 0x40 + local_298);
      if (lVar9 < 0) {
LAB_003c242a:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003c24c7;
      }
      if (lVar9 == 0) {
        local_278 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_278 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_278 == 0) goto LAB_003c242a;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar9);
      }
      uVar16 = uVar16 + 1;
      lVar10 = *(longlong *)(lVar8 + 0x58 + local_298);
      if (lVar10 < 0) {
LAB_003c2437:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003c24c7;
      }
      if (lVar10 == 0) {
        local_290 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_290 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_290 == 0) goto LAB_003c2437;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar10);
      }
      if (*(longlong *)(lVar8 + 0xa8 + local_298) == -1) {
        local_260 = -1;
      }
      else {
        local_260 = *(longlong *)(lVar8 + 0xb8 + local_298);
        if (local_260 < 0) {
LAB_003c2450:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003c24c7;
        }
        if (local_260 == 0) {
          local_288 = 1;
          local_1b0 = 0;
          local_260 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_288 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_288 == 0) goto LAB_003c2450;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,local_260);
          local_1b0 = local_260;
        }
      }
      puVar13 = PTR_clone_00798fd0;
      (*(code *)PTR_clone_00798fd0)();
      (*(code *)puVar13)();
      local_270 = 0xffffffffffffffff;
      local_230 = 0xffffffffffffffff;
      if (*(longlong *)(lVar8 + 0xc0 + local_298) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_230 = local_220;
        local_1a0 = local_218;
        local_170 = local_210;
      }
      uVar3 = *(undefined1 *)(lVar8 + 0x198 + local_298);
      puVar1 = (undefined4 *)(lVar8 + 0x180 + local_298);
      uVar19 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      uVar11 = *(undefined8 *)(lVar8 + 400 + local_298);
      local_78 = uVar19;
      if (*(longlong *)(lVar8 + 0xd8 + local_298) != -1) {
        uVar19 = (*(code *)PTR_clone_00798fd0)();
        local_270 = local_220;
        local_1a8 = local_218;
        local_178 = local_210;
      }
      if (*(longlong *)(lVar8 + 0xf0 + local_298) == -1) {
        local_200 = -1;
      }
      else {
        local_200 = *(longlong *)(lVar8 + 0x100 + local_298);
        if (local_200 < 0) {
LAB_003c2469:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003c24c7;
        }
        if (local_200 == 0) {
          local_240 = 1;
          local_1d0 = 0;
          local_200 = local_1d0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_240 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_240 == 0) goto LAB_003c2469;
          uVar19 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_200);
          local_1d0 = local_200;
        }
      }
      lVar18 = *(longlong *)(lVar8 + 0x108 + local_298);
      if (lVar18 == -1) {
        local_208 = -1;
      }
      else {
        local_208 = *(longlong *)(lVar8 + 0x118 + local_298);
        if (local_208 < 0) {
LAB_003c2487:
          (*(code *)PTR_handle_error_00798ff0)(uVar19,local_278);
          goto LAB_003c24c7;
        }
        if (local_208 == 0) {
          local_248 = 1;
          local_208 = 0;
          local_1e0 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)(lVar18,local_278);
          local_248 = (*(code *)PTR___rust_alloc_00799000)();
          uVar19 = extraout_XMM0_Da_03;
          if (local_248 == 0) goto LAB_003c2487;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,local_208);
          local_1e0 = local_208;
        }
      }
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_90,lVar8 + local_298 + 0x90);
      local_238 = 0xffffffffffffffff;
      local_268 = 0xffffffffffffffff;
      if (*(longlong *)(lVar8 + 0x120 + local_298) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_268 = local_220;
        local_1b8 = local_218;
        local_180 = local_210;
      }
      uVar4 = *(undefined1 *)(lVar8 + 0x199 + local_298);
      uVar5 = *(undefined1 *)(lVar8 + 0x19a + local_298);
      if (*(longlong *)(lVar8 + 0x138 + local_298) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_238 = local_220;
        local_1c0 = local_218;
        local_188 = local_210;
      }
      lVar18 = -1;
      local_1e8 = 0xffffffffffffffff;
      if (*(longlong *)(lVar8 + 0x150 + local_298) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        local_1e8 = local_220;
        local_1c8 = local_218;
        local_190 = local_210;
      }
      if (*(longlong *)(lVar8 + 0x168 + local_298) != -1) {
        lVar18 = *(longlong *)(lVar8 + 0x178 + local_298);
        if (lVar18 < 0) {
LAB_003c24a8:
          (*(code *)PTR_handle_error_00798ff0)();
LAB_003c24c7:
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (lVar18 == 0) {
          local_250 = 1;
          lVar18 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_250 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_250 == 0) goto LAB_003c24a8;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar18);
        }
      }
      uVar6 = *(undefined1 *)(lVar8 + 0x19b + local_298);
      puVar2 = (undefined8 *)(uVar15 + 0x20 + local_298);
      *puVar2 = uStack_128;
      puVar2[1] = local_120;
      puVar2 = (undefined8 *)(uVar15 + 0x10 + local_298);
      *puVar2 = local_138;
      puVar2[1] = local_130;
      *(undefined8 *)(uVar15 + local_298) = local_148;
      ((undefined8 *)(uVar15 + local_298))[1] = uStack_140;
      *(longlong *)(uVar15 + 0x30 + local_298) = lVar9;
      *(longlong *)(uVar15 + 0x38 + local_298) = local_278;
      *(longlong *)(uVar15 + 0x40 + local_298) = lVar9;
      *(longlong *)(uVar15 + 0x48 + local_298) = lVar10;
      *(longlong *)(uVar15 + 0x50 + local_298) = local_290;
      *(longlong *)(uVar15 + 0x58 + local_298) = lVar10;
      *(undefined8 *)(uVar15 + 0x70 + local_298) = local_108;
      puVar2 = (undefined8 *)(uVar15 + 0x60 + local_298);
      *puVar2 = local_118;
      puVar2[1] = uStack_110;
      puVar2 = (undefined8 *)(uVar15 + 0x78 + local_298);
      *puVar2 = local_100;
      puVar2[1] = uStack_f8;
      *(undefined8 *)(uVar15 + 0x88 + local_298) = local_f0;
      *(undefined8 *)(uVar15 + 0xa0 + local_298) = local_80;
      puVar2 = (undefined8 *)(uVar15 + 0x90 + local_298);
      *puVar2 = local_90;
      puVar2[1] = uStack_88;
      *(longlong *)(uVar15 + 0xa8 + local_298) = local_260;
      *(longlong *)(uVar15 + 0xb0 + local_298) = local_288;
      *(longlong *)(uVar15 + 0xb8 + local_298) = local_1b0;
      *(undefined8 *)(uVar15 + 0xc0 + local_298) = local_230;
      *(undefined8 *)(uVar15 + 200 + local_298) = local_1a0;
      *(undefined8 *)(uVar15 + 0xd0 + local_298) = local_170;
      *(undefined8 *)(uVar15 + 0xd8 + local_298) = local_270;
      *(undefined8 *)(uVar15 + 0xe0 + local_298) = local_1a8;
      *(undefined8 *)(uVar15 + 0xe8 + local_298) = local_178;
      *(longlong *)(uVar15 + 0xf0 + local_298) = local_200;
      *(longlong *)(uVar15 + 0xf8 + local_298) = local_240;
      *(longlong *)(uVar15 + 0x100 + local_298) = local_1d0;
      *(longlong *)(uVar15 + 0x108 + local_298) = local_208;
      *(longlong *)(uVar15 + 0x110 + local_298) = local_248;
      *(longlong *)(uVar15 + 0x118 + local_298) = local_1e0;
      *(undefined8 *)(uVar15 + 0x120 + local_298) = local_268;
      *(undefined8 *)(uVar15 + 0x128 + local_298) = local_1b8;
      *(undefined8 *)(uVar15 + 0x130 + local_298) = local_180;
      *(undefined8 *)(uVar15 + 0x138 + local_298) = local_238;
      *(undefined8 *)(uVar15 + 0x140 + local_298) = local_1c0;
      *(undefined8 *)(uVar15 + 0x148 + local_298) = local_188;
      *(undefined8 *)(uVar15 + 0x150 + local_298) = local_1e8;
      *(undefined8 *)(uVar15 + 0x158 + local_298) = local_1c8;
      *(undefined8 *)(uVar15 + 0x160 + local_298) = local_190;
      *(longlong *)(uVar15 + 0x168 + local_298) = lVar18;
      *(longlong *)(uVar15 + 0x170 + local_298) = local_250;
      *(longlong *)(uVar15 + 0x178 + local_298) = lVar18;
      puVar1 = (undefined4 *)(uVar15 + 0x180 + local_298);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      *(undefined8 *)(uVar15 + 400 + local_298) = uVar11;
      *(undefined1 *)(uVar15 + 0x198 + local_298) = uVar3;
      *(undefined1 *)(uVar15 + 0x199 + local_298) = uVar4;
      *(undefined1 *)(uVar15 + 0x19a + local_298) = uVar5;
      *(undefined1 *)(uVar15 + 0x19b + local_298) = uVar6;
      local_298 = local_298 + 0x1a0;
    } while (uVar7 != uVar16);
  }
LAB_003c2407:
  *param_1 = uVar7;
  param_1[1] = uVar15;
  param_1[2] = uVar7;
  return param_1;
}


