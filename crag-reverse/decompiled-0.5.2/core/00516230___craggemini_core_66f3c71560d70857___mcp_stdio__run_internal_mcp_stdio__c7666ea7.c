// 00516230 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_0051633a;
  param_3 = 0xe;
  (*(code *)PTR_getenv_00799c98)();
  if (local_98 == -1) {
    uVar12 = 0x200000;
  }
  else {
    param_3 = CONCAT44(uStack_84,local_88);
    (*(code *)PTR_from_utf8_00799468)();
    if ((local_d8 == 1) || (local_c8 == 0)) {
LAB_0051630a:
      uVar12 = 0x200000;
    }
    else {
      if (local_c8 == 1) {
        cVar3 = *uStack_d0;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_0051630a;
      }
      else {
        cVar3 = *uStack_d0;
      }
      uVar11 = (ulonglong)(cVar3 == '+');
      param_3 = local_c8 - uVar11;
      if (0x10 < param_3) {
        uVar12 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == local_c8 + -uVar11) goto LAB_00516310;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar12;
          param_3 = SUB168(auVar1 * ZEXT816(10),8);
          uVar9 = SUB168(auVar1 * ZEXT816(10),0);
          if (param_3 != 0) break;
          param_3 = (ulonglong)((byte)uStack_d0[lVar8 + uVar11] - 0x30);
          uVar12 = uVar9 + param_3;
          if ((9 < (byte)uStack_d0[lVar8 + uVar11] - 0x30) ||
             (lVar8 = lVar8 + 1, CARRY8(uVar9,param_3))) break;
        }
        goto LAB_0051630a;
      }
      if (param_3 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        lVar8 = 0;
        do {
          uVar10 = (byte)uStack_d0[lVar8 + uVar11] - 0x30;
          param_3 = (ulonglong)uVar10;
          if (9 < uVar10) goto LAB_0051630a;
          uVar12 = (ulonglong)uVar10 + uVar12 * 10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != local_c8 + -uVar11);
        param_3 = 0;
      }
    }
LAB_00516310:
    if (local_98 != 0) {
      param_3 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar12 + 1;
LAB_0051633a:
  (*(code *)PTR_new_00799ca0)();
  plVar4 = (longlong *)(*(code *)PTR_new_00799ca8)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_00799cb0)();
  }
  else {
    local_60 = 0;
    uStack_58 = 8;
    local_50 = 0;
    uStack_48 = 0;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar5 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar5 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *(undefined4 *)(plVar5 + 4) = local_b8;
    *(undefined4 *)((longlong)plVar5 + 0x24) = uStack_b4;
    *(undefined4 *)(plVar5 + 5) = uStack_b0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_ac;
    plVar5[2] = param_6;
    plVar5[3] = 0;
    *plVar5 = 1;
    plVar5[1] = 1;
    LOCK();
    lVar8 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 != 0 && SCARRY8(lVar8,1) == *plVar5 < 0) {
      if (plVar5[2] != 0) {
        (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 == (undefined4 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        *(longlong **)(puVar6 + 0xc) = plVar5;
        local_98._0_4_ = (undefined4)param_7;
        local_98._4_4_ = (undefined4)((ulonglong)param_7 >> 0x20);
        uStack_90 = (undefined4)param_8;
        uStack_8c = (undefined4)((ulonglong)param_8 >> 0x20);
        puVar6[8] = (undefined4)local_50;
        puVar6[9] = local_50._4_4_;
        puVar6[10] = (undefined4)uStack_48;
        puVar6[0xb] = uStack_48._4_4_;
        puVar6[4] = (undefined4)local_60;
        puVar6[5] = local_60._4_4_;
        puVar6[6] = (undefined4)uStack_58;
        puVar6[7] = uStack_58._4_4_;
        *puVar6 = (undefined4)local_98;
        puVar6[1] = local_98._4_4_;
        puVar6[2] = uStack_90;
        puVar6[3] = uStack_8c;
        LOCK();
        lVar8 = *plVar4;
        *plVar4 = *plVar4 + 1;
        UNLOCK();
        if (*plVar4 != 0 && SCARRY8(lVar8,1) == *plVar4 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined ***)(puVar7 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>::_closure_1_>_0078d058
            ;
            local_d8 = (int)plVar4;
            uStack_d4 = (undefined4)((ulonglong)plVar4 >> 0x20);
            uStack_d0._0_4_ = SUB84(puVar6,0);
            uStack_d0._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
            *puVar7 = local_d8;
            puVar7[1] = uStack_d4;
            puVar7[2] = (undefined4)uStack_d0;
            puVar7[3] = uStack_d0._4_4_;
            lVar8 = (*(code *)PTR_new_00799cc0)();
            if (lVar8 == 1) {
              param_1[1] = param_3;
              *param_1 = 0;
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar4;
              param_1[1] = plVar5;
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


