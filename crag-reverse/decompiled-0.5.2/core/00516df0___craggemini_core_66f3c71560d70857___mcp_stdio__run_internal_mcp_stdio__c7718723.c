// 00516df0 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#5},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#5},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_5_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          longlong param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_00516f9c;
  param_3 = 0xe;
  (*(code *)PTR_getenv_00799c98)();
  if (local_148 == -1) {
    uVar26 = 0x200000;
  }
  else {
    (*(code *)PTR_from_utf8_00799468)();
    if ((local_c8 == 1) || (local_b8 == 0)) {
LAB_00516f5a:
      uVar26 = 0x200000;
      param_3 = local_138;
    }
    else {
      if (local_b8 == 1) {
        cVar17 = *uStack_c0;
        if ((cVar17 == '+') || (cVar17 == '-')) goto LAB_00516f5a;
      }
      else {
        cVar17 = *uStack_c0;
      }
      uVar25 = (ulonglong)(cVar17 == '+');
      local_138 = local_b8 - uVar25;
      if (0x10 < local_138) {
        uVar26 = 0;
        lVar23 = 0;
        while( true ) {
          param_3 = local_138;
          if (lVar23 == local_b8 + -uVar25) goto joined_r0x00516f6d;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar26;
          local_138 = SUB168(auVar1 * ZEXT816(10),8);
          uVar18 = SUB168(auVar1 * ZEXT816(10),0);
          if (local_138 != 0) break;
          local_138 = (ulonglong)((byte)uStack_c0[lVar23 + uVar25] - 0x30);
          uVar26 = uVar18 + local_138;
          if ((9 < (byte)uStack_c0[lVar23 + uVar25] - 0x30) ||
             (lVar23 = lVar23 + 1, CARRY8(uVar18,local_138))) break;
        }
        goto LAB_00516f5a;
      }
      if (local_138 == 0) {
        uVar26 = 0;
        param_3 = local_138;
      }
      else {
        uVar26 = 0;
        lVar23 = 0;
        do {
          uVar24 = (byte)uStack_c0[lVar23 + uVar25] - 0x30;
          param_3 = (ulonglong)uVar24;
          if (9 < uVar24) {
            uVar26 = 0x200000;
            goto joined_r0x00516f6d;
          }
          uVar26 = (ulonglong)uVar24 + uVar26 * 10;
          lVar23 = lVar23 + 1;
        } while (lVar23 != local_b8 + -uVar25);
        param_3 = 0;
      }
    }
joined_r0x00516f6d:
    if (local_148 != 0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar26 + 1;
LAB_00516f9c:
  (*(code *)PTR_new_00799ca0)();
  plVar19 = (longlong *)(*(code *)PTR_new_00799ca8)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_00799cb0)();
  }
  else {
    local_50 = 0;
    uStack_48 = 8;
    local_40 = 0;
    uStack_38 = 0;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar20 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar20 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    plVar20[4] = CONCAT44(uStack_a4,local_a8);
    plVar20[5] = CONCAT44(uStack_9c,uStack_a0);
    plVar20[2] = param_6;
    plVar20[3] = 0;
    *plVar20 = 1;
    plVar20[1] = 1;
    LOCK();
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + 1;
    UNLOCK();
    if (*plVar20 != 0 && SCARRY8(lVar23,1) == *plVar20 < 0) {
      uVar11 = param_7[8];
      uVar12 = param_7[9];
      uVar13 = *param_7;
      uVar14 = param_7[1];
      uVar15 = param_7[2];
      uVar16 = param_7[3];
      uVar3 = *(undefined4 *)(param_7 + 4);
      uVar4 = *(undefined4 *)((longlong)param_7 + 0x24);
      uVar5 = *(undefined4 *)(param_7 + 5);
      uVar6 = *(undefined4 *)((longlong)param_7 + 0x2c);
      uVar7 = *(undefined4 *)(param_7 + 6);
      uVar8 = *(undefined4 *)((longlong)param_7 + 0x34);
      uVar9 = *(undefined4 *)(param_7 + 7);
      uVar10 = *(undefined4 *)((longlong)param_7 + 0x3c);
      if (plVar20[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      local_148._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_13c = (undefined4)((ulonglong)uVar14 >> 0x20);
      local_138._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
      uStack_12c = (undefined4)((ulonglong)uVar16 >> 0x20);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar21 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar21 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *(longlong **)(puVar21 + 0x1c) = plVar20;
        *(undefined8 *)(puVar21 + 0x18) = local_40;
        *(undefined8 *)(puVar21 + 0x1a) = uStack_38;
        *(undefined8 *)(puVar21 + 0x14) = local_50;
        *(undefined8 *)(puVar21 + 0x16) = uStack_48;
        *(undefined8 *)(puVar21 + 0x10) = uVar11;
        *(undefined8 *)(puVar21 + 0x12) = uVar12;
        local_148._0_4_ = (undefined4)uVar13;
        uStack_140 = (undefined4)uVar14;
        local_138._0_4_ = (undefined4)uVar15;
        uStack_130 = (undefined4)uVar16;
        puVar21[0xc] = uVar7;
        puVar21[0xd] = uVar8;
        puVar21[0xe] = uVar9;
        puVar21[0xf] = uVar10;
        puVar21[8] = uVar3;
        puVar21[9] = uVar4;
        puVar21[10] = uVar5;
        puVar21[0xb] = uVar6;
        puVar21[4] = (undefined4)local_138;
        puVar21[5] = local_138._4_4_;
        puVar21[6] = uStack_130;
        puVar21[7] = uStack_12c;
        *puVar21 = (undefined4)local_148;
        puVar21[1] = local_148._4_4_;
        puVar21[2] = uStack_140;
        puVar21[3] = uStack_13c;
        LOCK();
        lVar23 = *plVar19;
        *plVar19 = *plVar19 + 1;
        UNLOCK();
        if (*plVar19 != 0 && SCARRY8(lVar23,1) == *plVar19 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar22 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar22 != (undefined4 *)0x0) {
            *(undefined ***)(puVar22 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_5_,()>::_closure_1_>_0078d098
            ;
            local_c8 = (int)plVar19;
            uStack_c4 = (undefined4)((ulonglong)plVar19 >> 0x20);
            uStack_c0._0_4_ = SUB84(puVar21,0);
            uStack_c0._4_4_ = (undefined4)((ulonglong)puVar21 >> 0x20);
            *puVar22 = local_c8;
            puVar22[1] = uStack_c4;
            puVar22[2] = (undefined4)uStack_c0;
            puVar22[3] = uStack_c0._4_4_;
            lVar23 = (*(code *)PTR_new_00799cc0)();
            if (lVar23 == 1) {
              param_1[1] = param_3;
              *param_1 = 0;
              LOCK();
              *plVar20 = *plVar20 + -1;
              UNLOCK();
              if (*plVar20 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar19 = *plVar19 + -1;
              UNLOCK();
              if (*plVar19 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar19;
              param_1[1] = plVar20;
              param_1[2] = param_3;
            }
            return param_1;
          }
          (*(code *)PTR_handle_alloc_error_007991d8)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


