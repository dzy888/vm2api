// 006f55d0 <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::{closure#0},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          longlong param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_006f5773;
  param_3 = 0xe;
  (*(code *)PTR_getenv_00799c98)();
  if (local_98 == -1) {
    uVar16 = 0x200000;
  }
  else {
    (*(code *)PTR_from_utf8_00799468)();
    if ((local_e8 == 1) || (local_d8 == 0)) {
LAB_006f5731:
      uVar16 = 0x200000;
      param_3 = local_88;
    }
    else {
      if (local_d8 == 1) {
        cVar7 = *uStack_e0;
        if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_006f5731;
      }
      else {
        cVar7 = *uStack_e0;
      }
      uVar15 = (ulonglong)(cVar7 == '+');
      local_88 = local_d8 - uVar15;
      if (0x10 < local_88) {
        uVar16 = 0;
        lVar13 = 0;
        while( true ) {
          param_3 = local_88;
          if (lVar13 == local_d8 + -uVar15) goto joined_r0x006f5744;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar16;
          local_88 = SUB168(auVar1 * ZEXT816(10),8);
          uVar8 = SUB168(auVar1 * ZEXT816(10),0);
          if (local_88 != 0) break;
          local_88 = (ulonglong)((byte)uStack_e0[lVar13 + uVar15] - 0x30);
          uVar16 = uVar8 + local_88;
          if ((9 < (byte)uStack_e0[lVar13 + uVar15] - 0x30) ||
             (lVar13 = lVar13 + 1, CARRY8(uVar8,local_88))) break;
        }
        goto LAB_006f5731;
      }
      if (local_88 == 0) {
        uVar16 = 0;
        param_3 = local_88;
      }
      else {
        uVar16 = 0;
        lVar13 = 0;
        do {
          uVar14 = (byte)uStack_e0[lVar13 + uVar15] - 0x30;
          param_3 = (ulonglong)uVar14;
          if (9 < uVar14) {
            uVar16 = 0x200000;
            goto joined_r0x006f5744;
          }
          uVar16 = (ulonglong)uVar14 + uVar16 * 10;
          lVar13 = lVar13 + 1;
        } while (lVar13 != local_d8 + -uVar15);
        param_3 = 0;
      }
    }
joined_r0x006f5744:
    if (local_98 != 0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar16 + 1;
LAB_006f5773:
  (*(code *)PTR_new_00799ca0)();
  plVar9 = (longlong *)(*(code *)PTR_new_00799ca8)();
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
  plVar10 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar10 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *(undefined4 *)(plVar10 + 4) = local_c8;
    *(undefined4 *)((longlong)plVar10 + 0x24) = uStack_c4;
    *(undefined4 *)(plVar10 + 5) = uStack_c0;
    *(undefined4 *)((longlong)plVar10 + 0x2c) = uStack_bc;
    plVar10[2] = param_6;
    plVar10[3] = 0;
    *plVar10 = 1;
    plVar10[1] = 1;
    LOCK();
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + 1;
    UNLOCK();
    if (*plVar10 != 0 && SCARRY8(lVar13,1) == *plVar10 < 0) {
      uVar3 = *param_7;
      uVar4 = param_7[1];
      uVar5 = param_7[2];
      uVar6 = param_7[3];
      if (plVar10[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_8c = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_88._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_7c = (undefined4)((ulonglong)uVar6 >> 0x20);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *(longlong **)(puVar11 + 0x10) = plVar10;
        local_98._0_4_ = (undefined4)uVar3;
        uStack_90 = (undefined4)uVar4;
        local_88._0_4_ = (undefined4)uVar5;
        uStack_80 = (undefined4)uVar6;
        puVar11[0xc] = (undefined4)local_40;
        puVar11[0xd] = local_40._4_4_;
        puVar11[0xe] = (undefined4)uStack_38;
        puVar11[0xf] = uStack_38._4_4_;
        puVar11[8] = (undefined4)local_50;
        puVar11[9] = local_50._4_4_;
        puVar11[10] = (undefined4)uStack_48;
        puVar11[0xb] = uStack_48._4_4_;
        puVar11[4] = (undefined4)local_88;
        puVar11[5] = local_88._4_4_;
        puVar11[6] = uStack_80;
        puVar11[7] = uStack_7c;
        *puVar11 = (undefined4)local_98;
        puVar11[1] = local_98._4_4_;
        puVar11[2] = uStack_90;
        puVar11[3] = uStack_8c;
        LOCK();
        lVar13 = *plVar9;
        *plVar9 = *plVar9 + 1;
        UNLOCK();
        if (*plVar9 != 0 && SCARRY8(lVar13,1) == *plVar9 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar12 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar12 != (undefined4 *)0x0) {
            *(undefined ***)(puVar12 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread::_closure_0_,()>::_closure_1_>_00794530
            ;
            local_e8 = (int)plVar9;
            uStack_e4 = (undefined4)((ulonglong)plVar9 >> 0x20);
            uStack_e0._0_4_ = SUB84(puVar11,0);
            uStack_e0._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
            *puVar12 = local_e8;
            puVar12[1] = uStack_e4;
            puVar12[2] = (undefined4)uStack_e0;
            puVar12[3] = uStack_e0._4_4_;
            lVar13 = (*(code *)PTR_new_00799cc0)();
            if (lVar13 == 1) {
              param_1[1] = param_3;
              *param_1 = 0;
              LOCK();
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar9;
              param_1[1] = plVar10;
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


