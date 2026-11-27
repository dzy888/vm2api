// 002df880 clone

/* <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_100;
  longlong local_f8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar8 = (undefined8 *)param_2[6];
  uVar26 = puVar8 == (undefined8 *)0x0;
  if (-1 < (longlong)puVar8) goto LAB_002df8a9;
  puVar24 = (undefined8 *)0x0;
  do {
    param_1 = puVar24;
    uVar26 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = puVar8;
LAB_002df8a9:
    if ((bool)uVar26) {
      local_d0 = 1;
      goto LAB_002df8f4;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_d0 = (*(code *)PTR___rust_alloc_00799000)();
    puVar24 = (undefined8 *)0x1;
  } while (local_d0 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,puVar8);
LAB_002df8f4:
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  uVar26 = *(undefined1 *)(param_2 + 0x2d);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x169);
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_70,param_2 + 0x10);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x16a);
  uVar9 = param_2[0x1c];
  uVar5 = *(undefined4 *)(param_2 + 0x1d);
  uVar10 = param_2[0x28];
  lVar25 = -1;
  if (param_2[0x16] == -1) {
    local_100 = -1;
    lVar11 = param_2[0x19];
  }
  else {
    local_100 = param_2[0x18];
    if (local_100 < 0) {
LAB_002df98f:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_002dfdcc;
    }
    if (local_100 == 0) {
      local_d8 = 1;
      local_100 = 0;
      lVar11 = param_2[0x19];
    }
    else {
      local_f8 = param_2[0x17];
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_d8 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_d8 == 0) goto LAB_002df98f;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,local_100);
      lVar11 = param_2[0x19];
    }
  }
  if (lVar11 == -1) {
    lVar11 = param_2[0x15];
  }
  else {
    lVar25 = param_2[0x1b];
    if (lVar25 < 0) {
LAB_002dfa60:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_002dfdcc;
    }
    if (lVar25 == 0) {
      local_f8 = 1;
      lVar25 = 0;
      lVar11 = param_2[0x15];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_f8 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_f8 == 0) goto LAB_002dfa60;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar25);
      lVar11 = param_2[0x15];
    }
  }
  if (lVar11 < 0) {
LAB_002dfb25:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (lVar11 == 0) {
      local_c8 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_c8 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_c8 == 0) goto LAB_002dfb25;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar11);
    }
    uVar4 = *(undefined1 *)((longlong)param_2 + 0x16b);
    uVar12 = param_2[0x1e];
    uVar6 = *(undefined4 *)(param_2 + 0x1f);
    uVar20 = param_2[0x29];
    uVar21 = param_2[0x2a];
    uVar13 = *param_2;
    uVar14 = param_2[1];
    uVar15 = param_2[2];
    uVar16 = param_2[3];
    uVar22 = param_2[0x2b];
    uVar23 = param_2[0x2c];
    uVar17 = param_2[0x20];
    uVar7 = *(undefined4 *)(param_2 + 0x21);
    local_38 = param_2[0x26];
    local_58 = param_2[0x22];
    uStack_50 = param_2[0x23];
    local_48 = param_2[0x24];
    uStack_40 = param_2[0x25];
    plVar18 = (longlong *)param_2[0x27];
    LOCK();
    lVar1 = *plVar18;
    *plVar18 = *plVar18 + 1;
    UNLOCK();
    if (*plVar18 != 0 && SCARRY8(lVar1,1) == *plVar18 < 0) {
      param_1[4] = puVar8;
      param_1[5] = local_d0;
      param_1[6] = puVar8;
      param_1[9] = local_a8;
      param_1[7] = local_b8;
      param_1[8] = uStack_b0;
      param_1[0xc] = local_90;
      param_1[10] = local_a0;
      param_1[0xb] = uStack_98;
      param_1[0xf] = local_78;
      param_1[0xd] = local_88;
      param_1[0xe] = uStack_80;
      *(undefined1 *)(param_1 + 0x2d) = uVar26;
      *(undefined1 *)((longlong)param_1 + 0x169) = uVar2;
      param_1[0x12] = local_60;
      param_1[0x10] = local_70;
      param_1[0x11] = uStack_68;
      *(undefined1 *)((longlong)param_1 + 0x16a) = uVar3;
      param_1[0x1c] = uVar9;
      *(undefined4 *)(param_1 + 0x1d) = uVar5;
      param_1[0x28] = uVar10;
      param_1[0x16] = local_100;
      param_1[0x17] = local_d8;
      param_1[0x18] = local_100;
      param_1[0x19] = lVar25;
      param_1[0x1a] = local_f8;
      param_1[0x1b] = lVar25;
      param_1[0x13] = lVar11;
      param_1[0x14] = local_c8;
      param_1[0x15] = lVar11;
      *(undefined1 *)((longlong)param_1 + 0x16b) = uVar4;
      param_1[0x1e] = uVar12;
      *(undefined4 *)(param_1 + 0x1f) = uVar6;
      param_1[0x29] = uVar20;
      param_1[0x2a] = uVar21;
      *param_1 = uVar13;
      param_1[1] = uVar14;
      param_1[2] = uVar15;
      param_1[3] = uVar16;
      param_1[0x2b] = uVar22;
      param_1[0x2c] = uVar23;
      param_1[0x20] = uVar17;
      *(undefined4 *)(param_1 + 0x21) = uVar7;
      param_1[0x26] = local_38;
      param_1[0x24] = local_48;
      param_1[0x25] = uStack_40;
      param_1[0x22] = local_58;
      param_1[0x23] = uStack_50;
      param_1[0x27] = plVar18;
      return;
    }
  }
LAB_002dfdcc:
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
}


