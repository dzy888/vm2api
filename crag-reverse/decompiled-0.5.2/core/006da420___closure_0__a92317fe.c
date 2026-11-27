// 006da420 {closure#0}

/* tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::decrease_handle_refcount::{closure#0}
    */

void __rustcall
tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::decrease_handle_refcount::
_closure_0_(int *param_1,char param_2,int *param_3,byte param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined *puVar10;
  char cVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_70;
  byte local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  int *local_38;
  
  if (param_4 == 2) {
    local_50 = *(undefined8 *)(param_1 + 2);
    local_60 = *(longlong **)(param_1 + 4);
    lVar15 = *(longlong *)(param_1 + 6);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    local_48 = local_60 + lVar15;
    local_58 = local_60;
    if (lVar15 != 0) {
      lVar15 = lVar15 << 3;
      plVar2 = local_60;
      do {
        plVar14 = plVar2 + 1;
        plVar2 = (longlong *)*plVar2;
        plVar5 = plVar2 + 2;
        LOCK();
        bVar16 = (int)plVar2[2] == 0;
        if (bVar16) {
          *(int *)(plVar2 + 2) = 1;
        }
        UNLOCK();
        local_58 = plVar14;
        if (!bVar16) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          local_68 = 0;
          cVar11 = *(char *)((longlong)plVar2 + 0x14);
        }
        else {
          local_68 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          local_68 = local_68 ^ 1;
          cVar11 = *(char *)((longlong)plVar2 + 0x14);
        }
        if (cVar11 != '\0') {
          local_70 = plVar5;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_70,
                     &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793800);
          plVar2 = local_70;
          goto LAB_006dac0f;
        }
        plVar2[7] = 0;
        plVar3 = (longlong *)plVar2[6];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            (*(code *)PTR_drop_slow_007990d0)();
          }
        }
        plVar2[6] = 0;
        if (((local_68 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
          *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
        }
        LOCK();
        lVar9 = *plVar5;
        *(int *)plVar5 = 0;
        UNLOCK();
        if ((int)lVar9 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
        lVar15 = lVar15 + -8;
        plVar2 = plVar14;
      } while (lVar15 != 0);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_60);
    if (((param_2 == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
      return;
    }
    return;
  }
  local_38 = param_3 + 2;
  uVar4 = *(ulonglong *)(param_1 + 6);
  if ((ulonglong)(*(longlong *)(param_3 + 2) - *(longlong *)(param_3 + 6)) < uVar4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_3 + 2,*(longlong *)(param_3 + 6),uVar4,8,8);
  }
  local_50 = *(undefined8 *)(param_1 + 2);
  local_60 = *(longlong **)(param_1 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_48 = local_60 + uVar4;
  local_58 = local_60;
  if (uVar4 != 0) {
    lVar15 = uVar4 << 3;
    plVar5 = local_60;
    do {
      plVar14 = plVar5 + 1;
      plVar5 = (longlong *)*plVar5;
      local_40 = plVar5 + 2;
      LOCK();
      bVar16 = (int)plVar5[2] == 0;
      if (bVar16) {
        *(int *)(plVar5 + 2) = 1;
      }
      UNLOCK();
      local_58 = plVar14;
      if (!bVar16) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar12 = 0;
        cVar11 = *(char *)((longlong)plVar5 + 0x14);
        plVar2 = local_70;
        local_70 = local_40;
      }
      else {
        bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar12 = bVar12 ^ 1;
        cVar11 = *(char *)((longlong)plVar5 + 0x14);
        plVar2 = local_70;
        local_70 = local_40;
      }
      local_40 = local_70;
      if (cVar11 != '\0') {
        local_68 = bVar12;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_70,
                   &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793818);
        plVar2 = local_70;
        goto LAB_006dac0f;
      }
      plVar3 = *(longlong **)(param_1 + 8);
      plVar6 = (longlong *)plVar5[6];
      local_70 = plVar2;
      if ((plVar6 == (longlong *)0x0) || (plVar3 == (longlong *)0x0)) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          lVar9 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          if (*plVar3 == 0 || SCARRY8(lVar9,1) != *plVar3 < 0) goto LAB_006dac0f;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            (*(code *)PTR_drop_slow_007990d0)();
            plVar2 = local_70;
          }
        }
      }
      else {
        LOCK();
        lVar9 = *plVar3;
        *plVar3 = *plVar3 + 1;
        UNLOCK();
        if (*plVar3 == 0 || SCARRY8(lVar9,1) != *plVar3 < 0) goto LAB_006dac0f;
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
          plVar2 = local_70;
        }
      }
      local_70 = plVar2;
      plVar5[6] = (longlong)plVar3;
      plVar5[7] = *(longlong *)(param_3 + 6);
      if (((bVar12 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
        *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
      }
      LOCK();
      lVar9 = *local_40;
      *(int *)local_40 = 0;
      UNLOCK();
      if ((int)lVar9 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      lVar9 = *(longlong *)(param_3 + 6);
      local_70 = plVar5;
      if (lVar9 == *(longlong *)(param_3 + 2)) {
        (*(code *)PTR_grow_one_0079a748)();
      }
      *(longlong **)(*(longlong *)(param_3 + 4) + lVar9 * 8) = plVar5;
      *(longlong *)(param_3 + 6) = lVar9 + 1;
      lVar15 = lVar15 + -8;
      plVar5 = plVar14;
    } while (lVar15 != 0);
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_60);
  plVar2 = *(longlong **)(param_1 + 8);
  uVar4 = *(ulonglong *)(param_1 + 10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  uVar17 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (((param_2 == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar17 = extraout_XMM0_Da,
     cVar11 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    uVar17 = (*(code *)PTR_wake_00799010)();
  }
  lVar15 = *(longlong *)(param_3 + 6);
  if (lVar15 == uVar4 + 1) {
    if (lVar15 == 0) {
LAB_006dab47:
      (*(code *)PTR_unwrap_failed_00799278)();
      plVar2 = local_70;
      goto LAB_006dac0f;
    }
    *(longlong *)(param_3 + 6) = lVar15 + -1;
    local_60 = *(longlong **)(*(longlong *)(param_3 + 4) + -8 + lVar15 * 8);
    LOCK();
    *local_60 = *local_60 + -1;
    UNLOCK();
    if (*local_60 == 0) {
      uVar17 = (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  else {
    if (lVar15 == 0) goto LAB_006dab47;
    *(longlong *)(param_3 + 6) = lVar15 + -1;
    plVar5 = *(longlong **)(*(longlong *)(param_3 + 4) + -8 + lVar15 * 8);
    plVar2 = plVar5 + 2;
    LOCK();
    bVar16 = (int)plVar5[2] == 0;
    if (bVar16) {
      *(int *)(plVar5 + 2) = 1;
    }
    UNLOCK();
    local_70 = plVar5;
    if (!bVar16) {
      uVar17 = (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar10 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar12 = 0;
      cVar11 = *(char *)((longlong)plVar5 + 0x14);
    }
    else {
      bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar12 = bVar12 ^ 1;
      cVar11 = *(char *)((longlong)plVar5 + 0x14);
      uVar17 = extraout_XMM0_Da_00;
    }
    if (cVar11 != '\0') {
      uVar4 = (ulonglong)local_58 >> 8;
      local_58 = (longlong *)CONCAT71((int7)uVar4,bVar12);
      local_60 = plVar2;
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_60,
                 &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007937b8);
      plVar2 = local_70;
      goto LAB_006dac0f;
    }
    plVar5[7] = uVar4;
    if (((bVar12 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar17 = extraout_XMM0_Da_01,
       cVar11 == '\0')) {
      *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
    }
    LOCK();
    lVar15 = *plVar2;
    *(int *)plVar2 = 0;
    UNLOCK();
    if ((int)lVar15 == 2) {
      uVar17 = (*(code *)PTR_wake_00799010)();
    }
    local_60 = local_70;
    if (*(ulonglong *)(param_3 + 6) <= uVar4) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar17,&
                        PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007937d0
                );
      plVar2 = local_70;
      goto LAB_006dac0f;
    }
    lVar15 = *(longlong *)(param_3 + 4);
    plVar2 = *(longlong **)(lVar15 + uVar4 * 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      uVar17 = (*(code *)PTR_drop_slow_007990d0)();
    }
    *(longlong **)(lVar15 + uVar4 * 8) = local_60;
  }
  uVar4 = *(ulonglong *)(param_3 + 2);
  uVar13 = *(ulonglong *)(param_3 + 6);
  if ((uVar13 * 4 <= uVar4) && (uVar8 = uVar13 * 2, uVar8 < uVar4)) {
    if (uVar4 < uVar13) {
      (*(code *)PTR_panic_fmt_007991a8)
                (uVar17,&anon_b653a1b66957936d0374b020249023da_11_llvm_8452810696759730481);
      plVar2 = local_70;
LAB_006dac0f:
      local_70 = plVar2;
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (uVar13 < uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 == 0) {
      lVar15 = 8;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
    }
    else {
      lVar15 = (*(code *)PTR___rust_realloc_007997f0)(uVar13 * 8,8);
      if (lVar15 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        plVar2 = local_70;
        goto LAB_006dac0f;
      }
    }
    *(longlong *)(param_3 + 4) = lVar15;
    *(ulonglong *)(param_3 + 2) = uVar13;
  }
  if ((((param_4 & 1) == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(param_3 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_3;
  *param_3 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


