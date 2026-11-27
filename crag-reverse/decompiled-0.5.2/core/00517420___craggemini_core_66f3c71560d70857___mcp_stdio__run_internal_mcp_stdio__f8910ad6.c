// 00517420 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#6},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#6},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_6_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 local_1b0;
  int local_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_e0;
  undefined8 local_d0;
  
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_00799c90 != 0)) goto LAB_005175cc;
  uVar14 = (*(code *)PTR_getenv_00799c98)(param_4,0xe,param_5,param_6,param_6);
  if (local_e0 == -1) {
    uVar13 = 0x200000;
  }
  else {
    uVar14 = (*(code *)PTR_from_utf8_00799468)(uVar14,local_d0);
    if ((local_190 == 1) || (local_180 == 0)) {
LAB_0051758a:
      uVar13 = 0x200000;
    }
    else {
      if (local_180 == 1) {
        cVar4 = *uStack_188;
        if ((cVar4 == '+') || (cVar4 == '-')) goto LAB_0051758a;
      }
      else {
        cVar4 = *uStack_188;
      }
      uVar12 = (ulonglong)(cVar4 == '+');
      if (0x10 < local_180 - uVar12) {
        uVar13 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == local_180 + -uVar12) goto joined_r0x0051759d;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar13;
          uVar5 = SUB168(auVar2 * ZEXT816(10),0);
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
          uVar10 = (byte)uStack_188[lVar8 + uVar12] - 0x30;
          uVar13 = uVar5 + uVar10;
          if ((9 < uVar10) || (lVar8 = lVar8 + 1, CARRY8(uVar5,(ulonglong)uVar10))) break;
        }
        goto LAB_0051758a;
      }
      if (local_180 == uVar12) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        lVar8 = 0;
        do {
          if (9 < (byte)uStack_188[lVar8 + uVar12] - 0x30) {
            uVar13 = 0x200000;
            break;
          }
          uVar13 = (ulonglong)((byte)uStack_188[lVar8 + uVar12] - 0x30) + uVar13 * 10;
          lVar8 = lVar8 + 1;
        } while (lVar8 != local_180 + -uVar12);
      }
    }
joined_r0x0051759d:
    if (local_e0 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
    }
  }
  *(ulonglong *)PTR_MIN_00799c90 = uVar13 + 1;
LAB_005175cc:
  (*(code *)PTR_new_00799ca0)();
  plVar6 = (longlong *)(*(code *)PTR_new_00799ca8)();
  if ((char)param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_00799cb0)();
  }
  else {
    local_1b0 = 0;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar7 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    local_180._0_4_ = (undefined4)param_6;
    local_180._4_4_ = (undefined4)((ulonglong)param_6 >> 0x20);
    *(undefined4 *)(plVar7 + 4) = local_170;
    *(undefined4 *)((longlong)plVar7 + 0x24) = uStack_16c;
    *(undefined4 *)(plVar7 + 5) = uStack_168;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_164;
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_180;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_180._4_4_;
    *(undefined4 *)(plVar7 + 3) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
    *(undefined4 *)plVar7 = 1;
    *(undefined4 *)((longlong)plVar7 + 4) = 0;
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
    LOCK();
    lVar8 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 != 0 && SCARRY8(lVar8,1) == *plVar7 < 0) {
      (*(code *)PTR_memcpy_00799008)(1,0x88);
      if (plVar7[2] != 0) {
        local_1b0 = (*(code *)PTR_increment_num_running_threads_00799cb8)();
      }
      (*(code *)PTR_memcpy_00799008)(local_1b0,0xb0);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar8 == 0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
      else {
        uVar11 = 0xb0;
        (*(code *)PTR_memcpy_00799008)();
        LOCK();
        lVar1 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 != 0 && SCARRY8(lVar1,1) == *plVar6 < 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined ***)(puVar9 + 4) =
                 &
                 PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_6_,()>::_closure_1_>_0078d0b8
            ;
            local_190 = (int)plVar6;
            uStack_18c = (undefined4)((ulonglong)plVar6 >> 0x20);
            uStack_188._0_4_ = (undefined4)lVar8;
            uStack_188._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
            *puVar9 = local_190;
            puVar9[1] = uStack_18c;
            puVar9[2] = (undefined4)uStack_188;
            puVar9[3] = uStack_188._4_4_;
            lVar8 = (*(code *)PTR_new_00799cc0)();
            if (lVar8 == 1) {
              param_1[1] = uVar11;
              *param_1 = 0;
              LOCK();
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                (*(code *)PTR_drop_slow_00799c58)();
              }
              LOCK();
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                (*(code *)PTR_drop_slow_007996e8)();
              }
            }
            else {
              *param_1 = plVar6;
              param_1[1] = plVar7;
              param_1[2] = uVar11;
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


