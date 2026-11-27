// 0018b4f0 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#7},
   ()> */

longlong * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>
          (longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          undefined **param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong *local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_108 = param_2;
  local_100 = param_6;
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_0021a198 != 0)) goto LAB_0018b693;
  uVar12 = (*(code *)PTR_getenv_0021a1a0)(param_4,0xe);
  plVar5 = local_a8;
  if (local_a8 == (longlong *)0xffffffffffffffff) {
    uVar11 = 0x200000;
  }
  else {
    uVar12 = (*(code *)PTR_from_utf8_00219d78)(uVar12,local_98);
    if (((int)local_f8 == 1) || (local_e8 == (undefined **)0x0)) {
LAB_0018b651:
      uVar11 = 0x200000;
    }
    else {
      if (local_e8 == (undefined **)0x1) {
        cVar3 = *uStack_f0;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_0018b651;
      }
      else {
        cVar3 = *uStack_f0;
      }
      uVar10 = (ulonglong)(cVar3 == '+');
      if (0x10 < (longlong)local_e8 - uVar10) {
        uVar11 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == (longlong)local_e8 + -uVar10) goto joined_r0x0018b664;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar11;
          uVar4 = SUB168(auVar1 * ZEXT816(10),0);
          if (SUB168(auVar1 * ZEXT816(10),8) != 0) break;
          uVar9 = (byte)uStack_f0[lVar8 + uVar10] - 0x30;
          uVar11 = uVar4 + uVar9;
          if ((9 < uVar9) || (lVar8 = lVar8 + 1, CARRY8(uVar4,(ulonglong)uVar9))) break;
        }
        goto LAB_0018b651;
      }
      if (local_e8 == (undefined **)uVar10) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar8 = 0;
        do {
          if (9 < (byte)uStack_f0[lVar8 + uVar10] - 0x30) {
            uVar11 = 0x200000;
            break;
          }
          uVar11 = (ulonglong)((byte)uStack_f0[lVar8 + uVar10] - 0x30) + uVar11 * 10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != (longlong)local_e8 + -uVar10);
      }
    }
joined_r0x0018b664:
    if (plVar5 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar12,1);
    }
  }
  *(ulonglong *)PTR_MIN_0021a198 = uVar11 + 1;
LAB_0018b693:
  (*(code *)PTR_new_0021a1a8)();
  plVar5 = (longlong *)(*(code *)PTR_new_0021a1b0)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_0021a1b8)();
  }
  else {
    local_50 = 0;
    uStack_48 = 8;
    local_40 = 0;
    uStack_38 = 0;
  }
  local_f8 = (longlong *)0x1;
  uStack_f0 = (char *)0x1;
  lStack_e0 = 0;
  local_e8 = param_6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar6 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar6 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
  }
  else {
    *(undefined4 *)(plVar6 + 4) = local_d8;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_d4;
    *(undefined4 *)(plVar6 + 5) = uStack_d0;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_cc;
    plVar6[2] = (longlong)local_e8;
    plVar6[3] = lStack_e0;
    *plVar6 = (longlong)local_f8;
    plVar6[1] = (longlong)uStack_f0;
    LOCK();
    lVar8 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    local_110 = plVar6;
    if (*plVar6 != 0 && SCARRY8(lVar8,1) == *plVar6 < 0) {
      local_88 = param_7[4];
      local_a8 = (longlong *)*param_7;
      uStack_a0 = (undefined4 *)param_7[1];
      local_98 = (undefined **)param_7[2];
      uStack_90 = param_7[3];
      uStack_70 = (undefined4)local_40;
      uStack_6c = local_40._4_4_;
      uStack_68 = (undefined4)uStack_38;
      uStack_64 = uStack_38._4_4_;
      uStack_80 = (undefined4)local_50;
      uStack_7c = local_50._4_4_;
      uStack_78 = (undefined4)uStack_48;
      uStack_74 = uStack_48._4_4_;
      local_60 = plVar6;
      if (plVar6[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_0021a1c0)();
      }
      local_b8 = CONCAT44(uStack_64,uStack_68);
      local_b0 = local_60;
      local_c8 = uStack_78;
      uStack_c4 = uStack_74;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      local_d8 = (undefined4)local_88;
      uStack_d4 = local_88._4_4_;
      uStack_d0 = uStack_80;
      uStack_cc = uStack_7c;
      local_e8 = local_98;
      lStack_e0 = uStack_90;
      local_f8 = local_a8;
      uStack_f0 = (char *)uStack_a0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar7 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_00219eb0)();
      }
      else {
        *(ulonglong *)(puVar7 + 0x10) = CONCAT44(uStack_64,uStack_68);
        *(longlong **)(puVar7 + 0x12) = local_60;
        puVar7[0xc] = uStack_78;
        puVar7[0xd] = uStack_74;
        puVar7[0xe] = uStack_70;
        puVar7[0xf] = uStack_6c;
        puVar7[8] = (undefined4)local_88;
        puVar7[9] = local_88._4_4_;
        puVar7[10] = uStack_80;
        puVar7[0xb] = uStack_7c;
        puVar7[4] = (undefined4)local_98;
        puVar7[5] = local_98._4_4_;
        puVar7[6] = (undefined4)uStack_90;
        puVar7[7] = uStack_90._4_4_;
        *puVar7 = (undefined4)local_a8;
        puVar7[1] = local_a8._4_4_;
        puVar7[2] = (undefined4)uStack_a0;
        puVar7[3] = uStack_a0._4_4_;
        LOCK();
        lVar8 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 != 0 && SCARRY8(lVar8,1) == *plVar5 < 0) {
          local_e8 = &
                     PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_7_,()>::_closure_1_>_00215ce0
          ;
          local_f8 = plVar5;
          uStack_f0 = (char *)puVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined ***)(puVar7 + 4) = local_e8;
            *puVar7 = (int)local_f8;
            puVar7[1] = local_f8._4_4_;
            puVar7[2] = (undefined4)uStack_f0;
            puVar7[3] = uStack_f0._4_4_;
            lVar8 = (*(code *)PTR_new_0021a1c8)();
            if (lVar8 == 1) {
              param_1[1] = (longlong)param_7;
              *param_1 = 0;
              LOCK();
              *local_110 = *local_110 + -1;
              UNLOCK();
              if (*local_110 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
                ::drop_slow(&local_110,puVar7);
              }
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                (*(code *)PTR_drop_slow_00219e28)();
              }
            }
            else {
              *param_1 = (longlong)plVar5;
              param_1[1] = (longlong)local_110;
              param_1[2] = (longlong)param_7;
            }
            return param_1;
          }
          (*(code *)PTR_handle_alloc_error_00219eb0)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


