// 002decd0 clone

/* <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
       undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 extraout_RDX;
  undefined8 uVar12;
  longlong unaff_R14;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_190;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar8 = PTR_clone_00798fd0;
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)puVar8)();
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (-1 < lVar4) {
    if (lVar4 == 0) {
      local_1a0 = 1;
      lVar13 = *(longlong *)(param_2 + 0x58);
      if (lVar13 < 0) goto LAB_002ded6c;
LAB_002ded91:
      if (lVar13 == 0) {
        local_190 = 1;
        if (*(longlong *)(param_2 + 0xa8) != -1) goto LAB_002dedd6;
LAB_002dee14:
        local_1a8 = -1;
        goto LAB_002dee80;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      unaff_R14 = 1;
      local_190 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_190 == 0) goto LAB_002ded6c;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar13);
      if (*(longlong *)(param_2 + 0xa8) == -1) goto LAB_002dee14;
LAB_002dedd6:
      local_1a8 = *(longlong *)(param_2 + 0xb8);
      if (local_1a8 < 0) {
LAB_002dedee:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_002df20b;
      }
      if (local_1a8 == 0) {
        local_120 = 1;
        local_1a8 = 0;
      }
      else {
        local_158 = *(undefined8 *)(param_2 + 0xb0);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        unaff_R14 = 1;
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) goto LAB_002dedee;
        local_120 = lVar9;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,local_1a8);
      }
LAB_002dee80:
      (*(code *)PTR_clone_00798fd0)();
      (*(code *)PTR_clone_00798fd0)();
      local_158 = 0xffffffffffffffff;
      if (*(longlong *)(param_2 + 0xc0) == -1) {
        local_118 = 0xffffffffffffffff;
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_118 = local_178;
        local_f8 = local_170;
        unaff_R14 = local_168;
      }
      uVar1 = *(undefined1 *)(param_2 + 0x198);
      local_48 = *(undefined4 *)(param_2 + 0x180);
      uStack_44 = *(undefined4 *)(param_2 + 0x184);
      uStack_40 = *(undefined4 *)(param_2 + 0x188);
      uStack_3c = *(undefined4 *)(param_2 + 0x18c);
      local_c8 = *(undefined8 *)(param_2 + 400);
      if (*(longlong *)(param_2 + 0xd8) == -1) {
        if (*(longlong *)(param_2 + 0xf0) != -1) goto LAB_002def75;
LAB_002defab:
        local_180 = -1;
        lVar9 = *(longlong *)(param_2 + 0x108);
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
        local_158 = local_178;
        local_100 = local_170;
        local_d0 = local_168;
        if (*(longlong *)(param_2 + 0xf0) == -1) goto LAB_002defab;
LAB_002def75:
        local_180 = *(longlong *)(param_2 + 0x100);
        if (local_180 < 0) {
LAB_002def8f:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_002df20b;
        }
        if (local_180 == 0) {
          local_140 = 1;
          local_180 = 0;
          lVar9 = *(longlong *)(param_2 + 0x108);
        }
        else {
          uVar12 = *(undefined8 *)(param_2 + 0xf8);
          local_160 = unaff_R14;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar9 == 0) goto LAB_002def8f;
          local_140 = lVar9;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_180,param_5,param_6,uVar12);
          lVar9 = *(longlong *)(param_2 + 0x108);
          unaff_R14 = local_160;
        }
      }
      if (lVar9 == -1) {
        lVar9 = -1;
      }
      else {
        lVar9 = *(longlong *)(param_2 + 0x118);
        if (lVar9 < 0) {
LAB_002df03a:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_002df20b;
        }
        if (lVar9 == 0) {
          local_148 = 1;
          lVar9 = 0;
        }
        else {
          local_160 = unaff_R14;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar10 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar10 == 0) goto LAB_002df03a;
          local_148 = lVar10;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar9);
          unaff_R14 = local_160;
        }
      }
      lVar10 = param_2 + 0x90;
      puVar11 = &local_60;
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone();
      uVar12 = extraout_RDX;
      if (*(longlong *)(param_2 + 0x120) == -1) {
        local_128 = 0xffffffffffffffff;
      }
      else {
        lVar10 = param_2 + 0x120;
        puVar11 = &local_178;
        (*(code *)PTR_clone_00798fd0)();
        local_128 = local_178;
        local_108 = local_170;
        local_d8 = local_168;
      }
      uVar2 = *(undefined1 *)(param_2 + 0x199);
      uVar3 = *(undefined1 *)(param_2 + 0x19a);
      if (*(longlong *)(param_2 + 0x138) == -1) {
        local_130 = 0xffffffffffffffff;
        if (*(longlong *)(param_2 + 0x150) != -1) goto LAB_002df1b8;
LAB_002df228:
        local_138 = 0xffffffffffffffff;
        lVar5 = *(longlong *)(param_2 + 0x168);
        local_150 = uVar12;
        lVar7 = local_e8;
      }
      else {
        lVar10 = param_2 + 0x138;
        puVar11 = &local_178;
        (*(code *)PTR_clone_00798fd0)();
        local_130 = local_178;
        local_110 = local_170;
        local_e0 = local_168;
        if (*(longlong *)(param_2 + 0x150) == -1) goto LAB_002df228;
LAB_002df1b8:
        puVar11 = &local_178;
        (*(code *)PTR_clone_00798fd0)();
        lVar5 = *(longlong *)(param_2 + 0x168);
        local_150 = local_170;
        lVar10 = local_168;
        local_138 = local_178;
        lVar7 = local_e8;
      }
      local_e8 = lVar10;
      if (lVar5 == -1) {
        lVar10 = -1;
        goto LAB_002df2bb;
      }
      lVar10 = *(longlong *)(param_2 + 0x178);
      if (lVar10 < 0) {
        local_e8 = lVar7;
      }
      else {
        if (lVar10 == 0) {
          puVar11 = (undefined8 *)0x1;
          lVar10 = 0;
LAB_002df2bb:
          param_1[2] = local_b0;
          *param_1 = local_c0;
          param_1[1] = uStack_b8;
          param_1[5] = local_98;
          param_1[3] = local_a8;
          param_1[4] = uStack_a0;
          param_1[6] = lVar4;
          param_1[7] = local_1a0;
          param_1[8] = lVar4;
          param_1[9] = lVar13;
          param_1[10] = local_190;
          param_1[0xb] = lVar13;
          param_1[0x15] = local_1a8;
          param_1[0x16] = local_120;
          param_1[0x17] = local_1a8;
          param_1[0xe] = local_80;
          param_1[0xc] = local_90;
          param_1[0xd] = uStack_88;
          param_1[0x11] = local_68;
          param_1[0xf] = local_78;
          param_1[0x10] = uStack_70;
          param_1[0x18] = local_118;
          param_1[0x19] = local_f8;
          param_1[0x1a] = unaff_R14;
          *(undefined1 *)(param_1 + 0x33) = uVar1;
          param_1[0x30] = CONCAT44(uStack_44,local_48);
          param_1[0x31] = CONCAT44(uStack_3c,uStack_40);
          param_1[0x32] = local_c8;
          param_1[0x1b] = local_158;
          param_1[0x1c] = local_100;
          param_1[0x1d] = local_d0;
          param_1[0x1e] = local_180;
          param_1[0x1f] = local_140;
          param_1[0x20] = local_180;
          param_1[0x21] = lVar9;
          param_1[0x22] = local_148;
          param_1[0x23] = lVar9;
          param_1[0x14] = local_50;
          param_1[0x12] = local_60;
          param_1[0x13] = uStack_58;
          param_1[0x24] = local_128;
          param_1[0x25] = local_108;
          param_1[0x26] = local_d8;
          *(undefined1 *)((longlong)param_1 + 0x199) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x19a) = uVar3;
          param_1[0x27] = local_130;
          param_1[0x28] = local_110;
          param_1[0x29] = local_e0;
          param_1[0x2a] = local_138;
          param_1[0x2b] = local_150;
          param_1[0x2c] = local_e8;
          param_1[0x2d] = lVar10;
          param_1[0x2e] = puVar11;
          param_1[0x2f] = lVar10;
          *(undefined1 *)((longlong)param_1 + 0x19b) = *(undefined1 *)(param_2 + 0x19b);
          return;
        }
        local_f0 = *(undefined8 *)(param_2 + 0x170);
        local_160 = unaff_R14;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 != (undefined8 *)0x0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar10);
          unaff_R14 = local_160;
          goto LAB_002df2bb;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_002df20b;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_1a0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_1a0 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
      lVar13 = *(longlong *)(param_2 + 0x58);
      if (-1 < lVar13) goto LAB_002ded91;
LAB_002ded6c:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_002df20b;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_002df20b:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


