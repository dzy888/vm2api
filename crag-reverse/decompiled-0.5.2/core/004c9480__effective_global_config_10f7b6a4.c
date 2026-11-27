// 004c9480 effective_global_config

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::effective_global_config */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::effective_global_config
          (undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  
  puVar5 = (undefined8 *)param_2[6];
  uVar12 = puVar5 == (undefined8 *)0x0;
  if (-1 < (longlong)puVar5) goto LAB_004c94a9;
  param_1 = 0;
  do {
    uVar12 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = puVar5;
LAB_004c94a9:
    local_208 = param_1;
    if ((bool)uVar12) {
      local_248 = 1;
      goto LAB_004c94f6;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    param_1 = 1;
    local_248 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_248 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,puVar5);
LAB_004c94f6:
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  uVar12 = *(undefined1 *)(param_2 + 0x2d);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x169);
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_1b8,param_2 + 0x10);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x16a);
  uVar6 = param_2[0x1c];
  uVar4 = *(undefined4 *)(param_2 + 0x1d);
  uVar7 = param_2[0x28];
  lVar10 = -1;
  if (param_2[0x16] == -1) {
    lVar11 = -1;
    lVar8 = param_2[0x19];
  }
  else {
    lVar11 = param_2[0x18];
    if (lVar11 < 0) {
LAB_004c958a:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004c9a2c;
    }
    if (lVar11 == 0) {
      local_250 = 1;
      lVar11 = 0;
      lVar8 = param_2[0x19];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_250 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_250 == 0) goto LAB_004c958a;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar11);
      lVar8 = param_2[0x19];
    }
  }
  if (lVar8 == -1) {
    lVar8 = param_2[0x15];
  }
  else {
    lVar10 = param_2[0x1b];
    if (lVar10 < 0) {
LAB_004c964c:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004c9a2c;
    }
    if (lVar10 == 0) {
      local_258 = 1;
      lVar10 = 0;
      lVar8 = param_2[0x15];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_258 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_258 == 0) goto LAB_004c964c;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar10);
      lVar8 = param_2[0x15];
    }
  }
  if (lVar8 < 0) {
LAB_004c9705:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (lVar8 == 0) {
      local_240 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_240 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_240 == 0) goto LAB_004c9705;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar8);
    }
    local_35 = *(undefined1 *)((longlong)param_2 + 0x16b);
    local_b0 = param_2[0x1e];
    local_a8 = *(undefined4 *)(param_2 + 0x1f);
    local_58 = param_2[0x29];
    uStack_50 = param_2[0x2a];
    local_1a0 = *param_2;
    local_198 = param_2[1];
    local_190 = param_2[2];
    local_188 = param_2[3];
    local_48 = param_2[0x2b];
    uStack_40 = param_2[0x2c];
    local_a0 = param_2[0x20];
    local_98 = *(undefined4 *)(param_2 + 0x21);
    local_218 = param_2[0x26];
    local_238 = param_2[0x22];
    uStack_230 = param_2[0x23];
    local_228 = *(undefined4 *)(param_2 + 0x24);
    uStack_224 = *(undefined4 *)((longlong)param_2 + 0x124);
    uStack_220 = *(undefined4 *)(param_2 + 0x25);
    uStack_21c = *(undefined4 *)((longlong)param_2 + 300);
    local_68 = (longlong *)param_2[0x27];
    LOCK();
    lVar1 = *local_68;
    *local_68 = *local_68 + 1;
    UNLOCK();
    if (*local_68 != 0 && SCARRY8(lVar1,1) == *local_68 < 0) {
      local_178 = local_248;
      local_158 = local_1f0;
      local_168 = local_200;
      uStack_160 = uStack_1f8;
      local_140 = local_1d8;
      local_150 = local_1e8;
      uStack_148 = uStack_1e0;
      local_128 = local_1c0;
      local_138 = local_1d0;
      uStack_130 = uStack_1c8;
      local_110 = local_1a8;
      local_120 = local_1b8;
      uStack_11c = uStack_1b4;
      uStack_118 = uStack_1b0;
      uStack_114 = uStack_1ac;
      local_100 = local_240;
      local_238._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
      uStack_230._4_4_ = (undefined4)((ulonglong)uStack_230 >> 0x20);
      local_90 = (undefined4)local_238;
      uStack_8c = local_238._4_4_;
      uStack_88 = (undefined4)uStack_230;
      uStack_84 = uStack_230._4_4_;
      local_180 = puVar5;
      local_170 = puVar5;
      local_108 = lVar8;
      local_f8 = lVar8;
      local_f0 = lVar11;
      local_e8 = local_250;
      local_e0 = lVar11;
      local_d8 = lVar10;
      local_d0 = local_258;
      local_c8 = lVar10;
      local_c0 = uVar6;
      local_b8 = uVar4;
      local_80 = local_228;
      uStack_7c = uStack_224;
      uStack_78 = uStack_220;
      uStack_74 = uStack_21c;
      local_70 = local_218;
      local_60 = uVar7;
      local_38 = uVar12;
      local_37 = uVar2;
      local_36 = uVar3;
      get_policy(&local_238,param_2);
      uVar6 = local_208;
      local_70 = local_218;
      local_80 = local_228;
      uStack_7c = uStack_224;
      uStack_78 = uStack_220;
      uStack_74 = uStack_21c;
      local_90 = (undefined4)local_238;
      uStack_8c = local_238._4_4_;
      uStack_88 = (undefined4)uStack_230;
      uStack_84 = uStack_230._4_4_;
      (*(code *)PTR_memcpy_00799008)(local_218,0x170);
      return uVar6;
    }
  }
LAB_004c9a2c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}


