// 0027b230 {closure#11}

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#11}
    */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::_closure_11_
          (undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
          undefined1 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar18 = param_3;
  (*(code *)PTR_clone_00798fd0)();
  if (**(longlong **)(param_2 + 8) == -1) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    uVar12 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_168 = CONCAT44(uStack_d4,uStack_d8);
    puVar18 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    lVar3 = *(longlong *)(param_2 + 0x18);
    uVar12 = local_e0;
  }
  if (lVar3 < 0) {
LAB_0027b2d2:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0027b746:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  if (lVar3 == 0) {
    lVar13 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar13 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar13 == 0) goto LAB_0027b2d2;
    (*(code *)PTR_memcpy_00799008)(lVar3,lVar3);
  }
  if (**(longlong **)(param_2 + 0x20) == -1) {
    local_1b8 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_1b8 = local_e0;
    local_178 = CONCAT44(uStack_d4,uStack_d8);
    local_158 = CONCAT44(uStack_cc,local_d0);
  }
  <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_80,*(undefined8 *)(param_2 + 0x28));
  uVar2 = **(undefined1 **)(param_2 + 0x30);
  uVar4 = **(ulonglong **)(param_2 + 0x38);
  uVar5 = **(ulonglong **)(param_2 + 0x40);
  uVar6 = **(ulonglong **)(param_2 + 0x48);
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_e0,*(undefined8 *)(param_2 + 0x50));
  local_48 = local_c0;
  uStack_44 = uStack_bc;
  uStack_40 = uStack_b8;
  uStack_3c = uStack_b4;
  local_58 = local_d0;
  uStack_54 = uStack_cc;
  uStack_50 = uStack_c8;
  uStack_4c = uStack_c4;
  local_68 = (undefined4)local_e0;
  uStack_64 = local_e0._4_4_;
  uStack_60 = uStack_d8;
  uStack_5c = uStack_d4;
  local_e0 = 0xffffffffffffffff;
  puVar7 = *(undefined8 **)(param_2 + 0x58);
  plVar8 = (longlong *)*puVar7;
  if (plVar8 == (longlong *)0x0) {
    uVar14 = 0;
  }
  else {
    LOCK();
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + 1;
    UNLOCK();
    if (*plVar8 == 0 || SCARRY8(lVar1,1) != *plVar8 < 0) goto LAB_0027b746;
    uVar14 = *puVar7;
  }
  if (**(longlong **)(param_2 + 0x60) == -1) {
    local_1c0 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_1c0 = local_110;
    local_180 = local_108;
    local_160 = local_100;
  }
  uVar15 = (*(code *)PTR_clone_00799208)();
  uVar16 = (*(code *)PTR_clone_00799208)();
  uVar17 = (*(code *)PTR_clone_00799208)();
  uVar20 = uVar6 / 1000;
  uVar21 = uVar5 / 1000;
  uVar19 = uVar4 / 1000;
  param_1[2] = local_e8;
  *param_1 = local_f8;
  param_1[1] = uStack_f0;
  uVar10 = *param_4;
  uVar11 = param_4[1];
  param_1[0xb] = param_4[2];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  *(undefined1 *)(param_1 + 0x37) = param_5;
  uVar10 = *param_3;
  uVar11 = param_3[1];
  param_1[5] = param_3[2];
  param_1[3] = uVar10;
  param_1[4] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = local_168;
  param_1[0xe] = puVar18;
  param_1[0xf] = lVar3;
  param_1[0x10] = lVar13;
  param_1[0x11] = lVar3;
  param_1[0x12] = local_1b8;
  param_1[0x13] = local_178;
  param_1[0x14] = local_158;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[8] = local_70;
  param_1[6] = local_80;
  param_1[7] = uStack_78;
  *(undefined1 *)((longlong)param_1 + 0x1b9) = uVar2;
  param_1[0x27] = uVar19;
  *(int *)(param_1 + 0x28) = ((int)uVar4 + (int)uVar19 * -1000) * 1000000;
  param_1[0x29] = uVar21;
  *(int *)(param_1 + 0x2a) = ((int)uVar5 + (int)uVar21 * -1000) * 1000000;
  param_1[0x2b] = uVar20;
  *(int *)(param_1 + 0x2c) = ((int)uVar6 + (int)uVar20 * -1000) * 1000000;
  param_1[0x31] = CONCAT44(uStack_44,local_48);
  param_1[0x32] = CONCAT44(uStack_3c,uStack_40);
  param_1[0x2f] = CONCAT44(uStack_54,local_58);
  param_1[0x30] = CONCAT44(uStack_4c,uStack_50);
  param_1[0x2d] = CONCAT44(uStack_64,local_68);
  param_1[0x2e] = CONCAT44(uStack_5c,uStack_60);
  param_1[0x18] = local_e0;
  param_1[0x19] = CONCAT44(uStack_d4,uStack_d8);
  param_1[0x1a] = CONCAT44(uStack_cc,local_d0);
  param_1[0x1b] = CONCAT44(uStack_c4,uStack_c8);
  param_1[0x1c] = CONCAT44(uStack_bc,local_c0);
  param_1[0x1d] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x1e] = local_b0;
  param_1[0x1f] = uStack_a8;
  param_1[0x20] = local_a0;
  param_1[0x21] = uStack_98;
  param_1[0x22] = local_90;
  param_1[0x23] = uStack_88;
  param_1[0x36] = uVar14;
  param_1[0x24] = local_1c0;
  param_1[0x25] = local_180;
  param_1[0x26] = local_160;
  param_1[0x33] = uVar15;
  param_1[0x34] = uVar16;
  param_1[0x35] = uVar17;
  return;
}


