// 005167e0 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>
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
  char cVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_0051698c;
  param_3 = 0xe;
  (*(code *)PTR_getenv_00799c98)();
  if (local_128 == -1) {
    uVar24 = 0x200000;
  }
  else {
    (*(code *)PTR_from_utf8_00799468)();
    if ((local_b8 == 1) || (local_a8 == 0)) {
LAB_0051694a:
      uVar24 = 0x200000;
      param_3 = local_118;
    }
    else {
      if (local_a8 == 1) {
        cVar15 = *uStack_b0;
        if ((cVar15 == '+') || (cVar15 == '-')) goto LAB_0051694a;
      }
      else {
        cVar15 = *uStack_b0;
      }
      uVar23 = (ulonglong)(cVar15 == '+');
      local_118 = local_a8 - uVar23;
      if (0x10 < local_118) {
        uVar24 = 0;
        lVar21 = 0;
        while( true ) {
          param_3 = local_118;
          if (lVar21 == local_a8 + -uVar23) goto joined_r0x0051695d;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar24;
          local_118 = SUB168(auVar1 * ZEXT816(10),8);
          uVar16 = SUB168(auVar1 * ZEXT816(10),0);
          if (local_118 != 0) break;
          local_118 = (ulonglong)((byte)uStack_b0[lVar21 + uVar23] - 0x30);
          uVar24 = uVar16 + local_118;
          if ((9 < (byte)uStack_b0[lVar21 + uVar23] - 0x30) ||
             (lVar21 = lVar21 + 1, CARRY8(uVar16,local_118))) break;
        }
        goto LAB_0051694a;
      }
      if (local_118 == 0) {
        uVar24 = 0;
        param_3 = local_118;
      }
      else {
        uVar24 = 0;
        lVar21 = 0;
        do {
          uVar22 = (byte)uStack_b0[lVar21 + uVar23] - 0x30;
          param_3 = (ulonglong)uVar22;
          if (9 < uVar22) {
            uVar24 = 0x200000;
            goto joined_r0x0051695d;
          }
          uVar24 = (ulonglong)uVar22 + uVar24 * 10;
          lVar21 = lVar21 + 1;
        } while (lVar21 != local_a8 + -uVar23);
        param_3 = 0;
      }
    }
joined_r0x0051695d:
    if (local_128 != 0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar24 + 1;
LAB_0051698c:
  (*(code *)PTR_new_00799ca0)();
  plVar17 = (longlong *)(*(code *)PTR_new_00799ca8)();
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
  plVar18 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar18 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    plVar18[4] = CONCAT44(uStack_94,local_98);
    plVar18[5] = CONCAT44(uStack_8c,uStack_90);
    plVar18[2] = param_6;
    plVar18[3] = 0;
    *plVar18 = 1;
    plVar18[1] = 1;
    LOCK();
    lVar21 = *plVar18;
    *plVar18 = *plVar18 + 1;
    UNLOCK();
    if (*plVar18 != 0 && SCARRY8(lVar21,1) == *plVar18 < 0) {
      uVar11 = *param_7;
      uVar12 = param_7[1];
      uVar13 = param_7[2];
      uVar14 = param_7[3];
      uVar3 = *(undefined4 *)(param_7 + 4);
      uVar4 = *(undefined4 *)((longlong)param_7 + 0x24);
      uVar5 = *(undefined4 *)(param_7 + 5);
      uVar6 = *(undefined4 *)((longlong)param_7 + 0x2c);
      uVar7 = *(undefined4 *)(param_7 + 6);
      uVar8 = *(undefined4 *)((longlong)param_7 + 0x34);
      uVar9 = *(undefined4 *)(param_7 + 7);
      uVar10 = *(undefined4 *)((longlong)param_7 + 0x3c);
      if (plVar18[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      local_128._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_11c = (undefined4)((ulonglong)uVar12 >> 0x20);
      local_118._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_10c = (undefined4)((ulonglong)uVar14 >> 0x20);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar19 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar19 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *(longlong **)(puVar19 + 0x18) = plVar18;
        *(undefined8 *)(puVar19 + 0x14) = local_40;
        *(undefined8 *)(puVar19 + 0x16) = uStack_38;
        *(undefined8 *)(puVar19 + 0x10) = local_50;
        *(undefined8 *)(puVar19 + 0x12) = uStack_48;
        local_128._0_4_ = (undefined4)uVar11;
        uStack_120 = (undefined4)uVar12;
        local_118._0_4_ = (undefined4)uVar13;
        uStack_110 = (undefined4)uVar14;
        puVar19[0xc] = uVar7;
        puVar19[0xd] = uVar8;
        puVar19[0xe] = uVar9;
        puVar19[0xf] = uVar10;
        puVar19[8] = uVar3;
        puVar19[9] = uVar4;
        puVar19[10] = uVar5;
        puVar19[0xb] = uVar6;
        puVar19[4] = (undefined4)local_118;
        puVar19[5] = local_118._4_4_;
        puVar19[6] = uStack_110;
        puVar19[7] = uStack_10c;
        *puVar19 = (undefined4)local_128;
        puVar19[1] = local_128._4_4_;
        puVar19[2] = uStack_120;
        puVar19[3] = uStack_11c;
        LOCK();
        lVar21 = *plVar17;
        *plVar17 = *plVar17 + 1;
        UNLOCK();
        if (*plVar17 != 0 && SCARRY8(lVar21,1) == *plVar17 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar20 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar20 != (undefined4 *)0x0) {
            *(undefined ***)(puVar20 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>::_closure_1_>_0078d078
            ;
            local_b8 = (int)plVar17;
            uStack_b4 = (undefined4)((ulonglong)plVar17 >> 0x20);
            uStack_b0._0_4_ = SUB84(puVar19,0);
            uStack_b0._4_4_ = (undefined4)((ulonglong)puVar19 >> 0x20);
            *puVar20 = local_b8;
            puVar20[1] = uStack_b4;
            puVar20[2] = (undefined4)uStack_b0;
            puVar20[3] = uStack_b0._4_4_;
            lVar21 = (*(code *)PTR_new_00799cc0)();
            if (lVar21 == 1) {
              param_1[1] = param_3;
              *param_1 = 0;
              LOCK();
              *plVar18 = *plVar18 + -1;
              UNLOCK();
              if (*plVar18 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (*plVar17 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar17;
              param_1[1] = plVar18;
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


