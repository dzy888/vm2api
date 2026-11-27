// 0018afa0 <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#6},()>

/* std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#6},
   ()> */

undefined8 * __rustcall
std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked::
<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_6_,()>
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,char param_5,
          undefined **param_6)

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
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_e0;
  undefined8 local_d0;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  
  local_1c0 = param_2;
  local_1b8 = param_6;
  if (((param_3 & 1) != 0) || (*(longlong *)PTR_MIN_0021a198 != 0)) goto LAB_0018b14c;
  uVar14 = (*(code *)PTR_getenv_0021a1a0)(param_4,0xe);
  if (local_e0 == -1) {
    uVar13 = 0x200000;
  }
  else {
    uVar14 = (*(code *)PTR_from_utf8_00219d78)(uVar14,local_d0);
    if (((int)local_190 == 1) || (local_180 == (undefined **)0x0)) {
LAB_0018b10a:
      uVar13 = 0x200000;
    }
    else {
      if (local_180 == (undefined **)0x1) {
        cVar4 = *uStack_188;
        if ((cVar4 == '+') || (cVar4 == '-')) goto LAB_0018b10a;
      }
      else {
        cVar4 = *uStack_188;
      }
      uVar12 = (ulonglong)(cVar4 == '+');
      if (0x10 < (longlong)local_180 - uVar12) {
        uVar13 = 0;
        lVar8 = 0;
        while( true ) {
          if (lVar8 == (longlong)local_180 + -uVar12) goto joined_r0x0018b11d;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar13;
          uVar5 = SUB168(auVar2 * ZEXT816(10),0);
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
          uVar10 = (byte)uStack_188[lVar8 + uVar12] - 0x30;
          uVar13 = uVar5 + uVar10;
          if ((9 < uVar10) || (lVar8 = lVar8 + 1, CARRY8(uVar5,(ulonglong)uVar10))) break;
        }
        goto LAB_0018b10a;
      }
      if (local_180 == (undefined **)uVar12) {
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
        } while (lVar8 != (longlong)local_180 + -uVar12);
      }
    }
joined_r0x0018b11d:
    if (local_e0 != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(uVar14,1);
    }
  }
  *(ulonglong *)PTR_MIN_0021a198 = uVar13 + 1;
LAB_0018b14c:
  (*(code *)PTR_new_0021a1a8)();
  plVar6 = (longlong *)(*(code *)PTR_new_0021a1b0)();
  if (param_5 == '\0') {
    (*(code *)PTR_run_spawn_hooks_0021a1b8)();
  }
  else {
    local_1b0 = 0;
    uStack_1a8 = 8;
    local_1a0 = 0;
    uStack_198 = 0;
  }
  local_190 = (longlong *)0x1;
  uStack_188 = (char *)0x1;
  uStack_178 = 0;
  local_180 = param_6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar7 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
  }
  else {
    *(undefined4 *)(plVar7 + 4) = local_170;
    *(undefined4 *)((longlong)plVar7 + 0x24) = uStack_16c;
    *(undefined4 *)(plVar7 + 5) = uStack_168;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_164;
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_180;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_180._4_4_;
    *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_178;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_178._4_4_;
    *(int *)plVar7 = (int)local_190;
    *(undefined4 *)((longlong)plVar7 + 4) = local_190._4_4_;
    *(undefined4 *)(plVar7 + 1) = (undefined4)uStack_188;
    *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_188._4_4_;
    LOCK();
    lVar8 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    local_1c8 = plVar7;
    if (*plVar7 != 0 && SCARRY8(lVar8,1) == *plVar7 < 0) {
      (*(code *)PTR_memcpy_00219c60)((int)local_190,0x88);
      local_48 = (undefined4)local_1a0;
      uStack_44 = local_1a0._4_4_;
      uStack_40 = (undefined4)uStack_198;
      uStack_3c = uStack_198._4_4_;
      local_58 = (undefined4)local_1b0;
      uStack_54 = local_1b0._4_4_;
      uStack_50 = (undefined4)uStack_1a8;
      uStack_4c = uStack_1a8._4_4_;
      uVar14 = (undefined4)local_1b0;
      local_38 = plVar7;
      if (plVar7[2] != 0) {
        uVar14 = (*(code *)PTR_increment_num_running_threads_0021a1c0)();
      }
      (*(code *)PTR_memcpy_00219c60)(uVar14,0xb0);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar8 = (*(code *)PTR___rust_alloc_00219c88)();
      if (lVar8 == 0) {
        (*(code *)PTR_handle_alloc_error_00219eb0)();
      }
      else {
        uVar11 = 0xb0;
        (*(code *)PTR_memcpy_00219c60)();
        LOCK();
        lVar1 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 != 0 && SCARRY8(lVar1,1) == *plVar6 < 0) {
          local_180 = &
                      PTR_<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_6_,()>::_closure_1_>_00215cc0
          ;
          local_190 = plVar6;
          uStack_188 = (char *)lVar8;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
          puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00219c88)();
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined ***)(puVar9 + 4) = local_180;
            *puVar9 = (int)local_190;
            puVar9[1] = local_190._4_4_;
            puVar9[2] = (undefined4)uStack_188;
            puVar9[3] = uStack_188._4_4_;
            lVar8 = (*(code *)PTR_new_0021a1c8)();
            if (lVar8 == 1) {
              param_1[1] = uVar11;
              *param_1 = 0;
              LOCK();
              *local_1c8 = *local_1c8 + -1;
              UNLOCK();
              if (*local_1c8 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
                ::drop_slow(&local_1c8,puVar9);
              }
              LOCK();
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                (*(code *)PTR_drop_slow_00219e28)();
              }
            }
            else {
              *param_1 = plVar6;
              param_1[1] = local_1c8;
              param_1[2] = uVar11;
            }
            return param_1;
          }
          (*(code *)PTR_handle_alloc_error_00219eb0)();
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


