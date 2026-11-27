// 00517980 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#7},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#7},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          longlong param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  int local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_00517b23;
  uVar18 = (*(code *)PTR_getenv_00799c98)(param_4,0xe);
  if (local_a8 == -1) {
    uVar17 = 0x200000;
  }
  else {
    uVar18 = (*(code *)PTR_from_utf8_00799468)(uVar18,local_98);
    if ((local_f8 == 1) || (local_e8 == 0)) {
LAB_00517ae1:
      uVar17 = 0x200000;
    }
    else {
      if (local_e8 == 1) {
        cVar8 = *uStack_f0;
        if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_00517ae1;
      }
      else {
        cVar8 = *uStack_f0;
      }
      uVar16 = (ulonglong)(cVar8 == '+');
      if (0x10 < local_e8 - uVar16) {
        uVar17 = 0;
        lVar14 = 0;
        while( true ) {
          if (lVar14 == local_e8 + -uVar16) goto joined_r0x00517af4;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar17;
          uVar9 = SUB168(auVar2 * ZEXT816(10),0);
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
          uVar15 = (byte)uStack_f0[lVar14 + uVar16] - 0x30;
          uVar17 = uVar9 + uVar15;
          if ((9 < uVar15) || (lVar14 = lVar14 + 1, CARRY8(uVar9,(ulonglong)uVar15))) break;
        }
        goto LAB_00517ae1;
      }
      if (local_e8 == uVar16) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        lVar14 = 0;
        do {
          if (9 < (byte)uStack_f0[lVar14 + uVar16] - 0x30) {
            uVar17 = 0x200000;
            break;
          }
          uVar17 = (ulonglong)((byte)uStack_f0[lVar14 + uVar16] - 0x30) + uVar17 * 10;
          lVar14 = lVar14 + 1;
        } while (lVar14 != local_e8 + -uVar16);
      }
    }
joined_r0x00517af4:
    if (local_a8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar17 + 1;
LAB_00517b23:
  (*(code *)PTR_new_00799ca0)();
  plVar10 = (longlong *)(*(code *)PTR_new_00799ca8)();
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
  plVar11 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar11 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *(undefined4 *)(plVar11 + 4) = local_d8;
    *(undefined4 *)((longlong)plVar11 + 0x24) = uStack_d4;
    *(undefined4 *)(plVar11 + 5) = uStack_d0;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = uStack_cc;
    plVar11[2] = param_6;
    plVar11[3] = 0;
    *plVar11 = 1;
    plVar11[1] = 1;
    LOCK();
    lVar14 = *plVar11;
    *plVar11 = *plVar11 + 1;
    UNLOCK();
    if (*plVar11 != 0 && SCARRY8(lVar14,1) == *plVar11 < 0) {
      uVar1 = param_7[4];
      uVar4 = *param_7;
      uVar5 = param_7[1];
      uVar6 = param_7[2];
      uVar7 = param_7[3];
      if (plVar11[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      local_a8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_98._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_8c = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_88 = (undefined4)uVar1;
      uStack_84 = (undefined4)((ulonglong)uVar1 >> 0x20);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar12 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *(undefined8 *)(puVar12 + 0x10) = uStack_38;
        *(longlong **)(puVar12 + 0x12) = plVar11;
        local_a8._0_4_ = (undefined4)uVar4;
        uStack_a0 = (undefined4)uVar5;
        local_98._0_4_ = (undefined4)uVar6;
        uStack_90 = (undefined4)uVar7;
        puVar12[0xc] = (undefined4)uStack_48;
        puVar12[0xd] = uStack_48._4_4_;
        puVar12[0xe] = (undefined4)local_40;
        puVar12[0xf] = local_40._4_4_;
        puVar12[8] = local_88;
        puVar12[9] = uStack_84;
        puVar12[10] = (undefined4)local_50;
        puVar12[0xb] = local_50._4_4_;
        puVar12[4] = (undefined4)local_98;
        puVar12[5] = local_98._4_4_;
        puVar12[6] = uStack_90;
        puVar12[7] = uStack_8c;
        *puVar12 = (undefined4)local_a8;
        puVar12[1] = local_a8._4_4_;
        puVar12[2] = uStack_a0;
        puVar12[3] = uStack_9c;
        LOCK();
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + 1;
        UNLOCK();
        if (*plVar10 != 0 && SCARRY8(lVar14,1) == *plVar10 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar13 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar13 != (undefined4 *)0x0) {
            *(undefined ***)(puVar13 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>::_closure_1_>_0078d0d8
            ;
            local_f8 = (int)plVar10;
            uStack_f4 = (undefined4)((ulonglong)plVar10 >> 0x20);
            uStack_f0._0_4_ = SUB84(puVar12,0);
            uStack_f0._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
            *puVar13 = local_f8;
            puVar13[1] = uStack_f4;
            puVar13[2] = (undefined4)uStack_f0;
            puVar13[3] = uStack_f0._4_4_;
            lVar14 = (*(code *)PTR_new_00799cc0)();
            if (lVar14 == 1) {
              param_1[1] = param_7;
              *param_1 = 0;
              LOCK();
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (*plVar11 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar10;
              param_1[1] = plVar11;
              param_1[2] = param_7;
            }
            return param_1;
          }
          (*(code *)PTR_handle_alloc_error_007991d8)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


