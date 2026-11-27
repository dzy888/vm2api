// 00189de0 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()> */

longlong * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>
          (longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          undefined **param_6,longlong *param_7,undefined4 *param_8)

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
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined4 *local_38;
  
  local_40 = param_7;
  local_38 = param_8;
  local_e0 = param_2;
  local_a0 = param_6;
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_0021a198 != 0)) goto LAB_00189fa0;
  param_3 = 0xe;
  (*(code *)PTR_getenv_0021a1a0)();
  plVar5 = local_98;
  if (local_98 == (longlong *)0xffffffffffffffff) {
    uVar11 = 0x200000;
  }
  else {
    param_3 = CONCAT44(uStack_84,local_88);
    (*(code *)PTR_from_utf8_00219d78)();
    if (((int)local_d8 == 1) || (local_c8 == (undefined **)0x0)) {
LAB_00189f5e:
      uVar11 = 0x200000;
    }
    else {
      if (local_c8 == (undefined **)0x1) {
        cVar3 = *uStack_d0;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_00189f5e;
      }
      else {
        cVar3 = *uStack_d0;
      }
      uVar10 = (ulonglong)(cVar3 == '+');
      param_3 = (longlong)local_c8 - uVar10;
      if (0x10 < param_3) {
        uVar11 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == (longlong)local_c8 + -uVar10) goto joined_r0x00189f71;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar11;
          param_3 = SUB168(auVar1 * ZEXT816(10),8);
          uVar4 = SUB168(auVar1 * ZEXT816(10),0);
          if (param_3 != 0) break;
          param_3 = (ulonglong)((byte)uStack_d0[lVar8 + uVar10] - 0x30);
          uVar11 = uVar4 + param_3;
          if ((9 < (byte)uStack_d0[lVar8 + uVar10] - 0x30) ||
             (lVar8 = lVar8 + 1, CARRY8(uVar4,param_3))) break;
        }
        goto LAB_00189f5e;
      }
      if (param_3 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        lVar8 = 0;
        do {
          uVar9 = (byte)uStack_d0[lVar8 + uVar10] - 0x30;
          param_3 = (ulonglong)uVar9;
          if (9 < uVar9) {
            uVar11 = 0x200000;
            goto joined_r0x00189f71;
          }
          uVar11 = (ulonglong)uVar9 + uVar11 * 10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != (longlong)local_c8 + -uVar10);
        param_3 = 0;
      }
    }
joined_r0x00189f71:
    if (plVar5 != (longlong *)0x0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00219c40)();
    }
  }
  *(ulonglong *)PTR_MIN_0021a198 = uVar11 + 1;
LAB_00189fa0:
  (*(code *)PTR_new_0021a1a8)();
  plVar5 = (longlong *)(*(code *)PTR_new_0021a1b0)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_0021a1b8)();
  }
  else {
    local_60 = 0;
    uStack_58 = 8;
    local_50 = 0;
    uStack_48 = 0;
  }
  local_d8 = (longlong *)0x1;
  uStack_d0 = (char *)0x1;
  uStack_c0 = 0;
  local_c8 = param_6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar6 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar6 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
  }
  else {
    *(undefined4 *)(plVar6 + 4) = local_b8;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_b4;
    *(undefined4 *)(plVar6 + 5) = uStack_b0;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_ac;
    plVar6[2] = (longlong)local_c8;
    plVar6[3] = uStack_c0;
    *plVar6 = (longlong)local_d8;
    plVar6[1] = (longlong)uStack_d0;
    LOCK();
    lVar8 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    local_e8 = plVar6;
    if (*plVar6 != 0 && SCARRY8(lVar8,1) == *plVar6 < 0) {
      local_98 = param_7;
      uStack_90 = param_8;
      local_78 = (undefined4)local_50;
      uStack_74 = local_50._4_4_;
      uStack_70 = (undefined4)uStack_48;
      uStack_6c = uStack_48._4_4_;
      local_88 = (undefined4)local_60;
      uStack_84 = local_60._4_4_;
      uStack_80 = (undefined4)uStack_58;
      uStack_7c = uStack_58._4_4_;
      local_68 = plVar6;
      if (plVar6[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_0021a1c0)();
      }
      local_a8 = local_68;
      local_b8 = local_78;
      uStack_b4 = uStack_74;
      uStack_b0 = uStack_70;
      uStack_ac = uStack_6c;
      local_c8 = (undefined **)CONCAT44(uStack_84,local_88);
      uStack_c0 = CONCAT44(uStack_7c,uStack_80);
      local_d8 = local_98;
      uStack_d0 = (char *)uStack_90;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
      if (puVar7 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_00219eb0)();
      }
      else {
        *(longlong **)(puVar7 + 0xc) = local_68;
        puVar7[8] = local_78;
        puVar7[9] = uStack_74;
        puVar7[10] = uStack_70;
        puVar7[0xb] = uStack_6c;
        puVar7[4] = local_88;
        puVar7[5] = uStack_84;
        puVar7[6] = uStack_80;
        puVar7[7] = uStack_7c;
        *puVar7 = (undefined4)local_98;
        puVar7[1] = local_98._4_4_;
        puVar7[2] = (undefined4)uStack_90;
        puVar7[3] = uStack_90._4_4_;
        LOCK();
        lVar8 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 != 0 && SCARRY8(lVar8,1) == *plVar5 < 0) {
          local_c8 = &
                     PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>::_closure_1_>_00215c60
          ;
          local_d8 = plVar5;
          uStack_d0 = (char *)puVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined ***)(puVar7 + 4) = local_c8;
            *puVar7 = (int)local_d8;
            puVar7[1] = local_d8._4_4_;
            puVar7[2] = (undefined4)uStack_d0;
            puVar7[3] = uStack_d0._4_4_;
            lVar8 = (*(code *)PTR_new_0021a1c8)();
            if (lVar8 == 1) {
              param_1[1] = param_3;
              *param_1 = 0;
              LOCK();
              *local_e8 = *local_e8 + -1;
              UNLOCK();
              if (*local_e8 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
                ::drop_slow(&local_e8,puVar7);
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
              param_1[1] = (longlong)local_e8;
              param_1[2] = param_3;
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


