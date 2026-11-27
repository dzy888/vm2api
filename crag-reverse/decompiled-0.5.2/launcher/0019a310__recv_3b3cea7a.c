// 0019a310 recv

/* WARNING: Type propagation algorithm not settling */
/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv
          (uint *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  code *pcVar7;
  undefined *puVar8;
  uint *puVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong *in_FS_OFFSET;
  bool bVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_d0;
  uint *local_c8;
  undefined8 *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  byte local_a8;
  uint *local_98;
  uint *puStack_90;
  uint *local_88;
  uint *puStack_80;
  byte local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  uVar23 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (uint *)0x0;
  LOCK();
  uVar17 = *param_1;
  if (uVar17 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  local_68 = param_2;
  local_60 = param_3;
  if (uVar17 != 0) {
    uVar23 = (*(code *)PTR_lock_contended_00219d70)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar11 = (char)param_1[1];
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar10 = bVar10 ^ 1;
    cVar11 = (char)param_1[1];
    uVar23 = extraout_XMM0_Da;
  }
  if (cVar11 != '\0') {
    uVar13 = (ulonglong)puStack_c0 >> 8;
    puStack_c0 = (undefined8 *)CONCAT71((int7)uVar13,bVar10);
    local_c8 = param_1;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
               ,&local_c8,&PTR_s__rustc_48a229ceaefd4985c50990b14_00216618);
    goto LAB_0019a881;
  }
  lVar16 = *(longlong *)(param_1 + 6);
  if (lVar16 != 0) {
    lVar3 = *in_FS_OFFSET;
    lVar4 = *(longlong *)(param_1 + 4);
    lVar19 = 1;
    lVar18 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar18);
      if (*(longlong *)(lVar5 + 0x28) != lVar3 + -0x70) {
        LOCK();
        bVar22 = *(longlong *)(lVar5 + 0x18) == 0;
        if (bVar22) {
          *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar4 + 8 + lVar18);
        }
        UNLOCK();
        if (bVar22) {
          lVar16 = *(longlong *)(lVar4 + 0x10 + lVar18);
          if (lVar16 != 0) {
            *(longlong *)(lVar5 + 0x20) = lVar16;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar5 + 0x10) + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            uVar23 = (*(code *)PTR_futex_wake_00219fe8)();
          }
          uVar13 = *(ulonglong *)(param_1 + 6);
          if (lVar19 - 1U < uVar13) {
            lVar16 = *(longlong *)(param_1 + 4);
            puVar6 = *(uint **)(lVar16 + lVar18);
            plVar14 = (longlong *)(lVar16 + 8 + lVar18);
            local_98 = (uint *)*plVar14;
            puStack_90 = (uint *)plVar14[1];
            lVar16 = lVar16 + lVar18 + 0x18;
            uVar23 = (*(code *)PTR_memmove_00219fb0)(puVar6,(uVar13 - lVar19) * 0x18);
            *(ulonglong *)(param_1 + 6) = uVar13 - 1;
            if (puVar6 != (uint *)0x0) {
              puStack_c0 = (undefined8 *)local_98;
              puStack_b8 = puStack_90;
              local_38 = puStack_90;
              uVar23 = local_98._0_4_;
              local_c8 = puVar6;
              if (((bVar10 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
                 (cVar11 = (*(code *)PTR_is_zero_slow_path_00219d18)(), uVar23 = extraout_XMM0_Da_01
                 , cVar11 == '\0')) {
                *(undefined1 *)(param_1 + 1) = 1;
              }
              LOCK();
              uVar17 = *param_1;
              *param_1 = 0;
              UNLOCK();
              if (uVar17 == 2) {
                (*(code *)PTR_wake_00219d10)();
                uVar23 = extraout_XMM0_Da_00;
              }
              puVar9 = local_38;
              puVar8 = PTR_yield_now_00219ff8;
              if (local_38 == (uint *)0x0) {
                uVar13 = 1;
                LOCK();
                *(longlong *)puVar6 = *(longlong *)puVar6 + -1;
                lVar3 = *(longlong *)puVar6;
                UNLOCK();
                goto joined_r0x0019a4e7;
              }
              if ((char)*local_38 != '\0') {
                cVar11 = *(char *)((longlong)local_38 + 2);
                *(undefined1 *)((longlong)local_38 + 2) = 0;
                if (cVar11 == '\0') goto LAB_0019a866;
                *(undefined1 *)((longlong)local_38 + 1) = 1;
                uVar13 = 2;
                LOCK();
                *(longlong *)puVar6 = *(longlong *)puVar6 + -1;
                lVar3 = *(longlong *)puVar6;
                UNLOCK();
                goto joined_r0x0019a4e7;
              }
              if (*(char *)((longlong)local_38 + 1) != '\0') goto LAB_0019a664;
              uVar20 = 0;
              uVar17 = 0;
              goto LAB_0019a6d9;
            }
          }
          (*(code *)PTR_assert_failed_00219ff0)
                    (uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165a0);
          goto LAB_0019a881;
        }
      }
      lVar18 = lVar18 + 0x18;
      lVar19 = lVar19 + 1;
    } while (lVar16 * 0x18 != lVar18);
  }
  if ((char)param_1[0x1a] != '\0') {
    if (((bVar10 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar11 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    uVar17 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (uVar17 == 2) {
      (*(code *)PTR_wake_00219d10)();
      return 1;
    }
    return 1;
  }
  puVar21 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  local_98 = (uint *)&local_58;
  puStack_90 = (uint *)&local_68;
  local_88 = param_1;
  puStack_80 = param_1;
  local_78 = bVar10;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar21 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (puVar21,0), puVar21 != (undefined8 *)0x0)) {
    plVar14 = (longlong *)*puVar21;
    *puVar21 = 0;
    local_a8 = bVar10;
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_78 = 2;
      local_d0 = plVar14;
      local_c8 = (uint *)&local_58;
      puStack_c0 = &local_68;
      puStack_b8 = param_1;
      puStack_b0 = param_1;
      uVar13 = recv::_closure_1_(&local_c8,plVar14);
      LOCK();
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        uVar13 = uVar13 & 0xffffffff;
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_d0);
      }
    }
    else {
      plVar14[3] = 0;
      plVar14[4] = 0;
      local_78 = 2;
      local_c8 = local_98;
      puStack_c0 = (undefined8 *)puStack_90;
      puStack_b8 = local_88;
      puStack_b0 = puStack_80;
      local_d0 = plVar14;
      uVar13 = recv::_closure_1_(&local_c8,plVar14);
      local_c8 = (uint *)*puVar21;
      *puVar21 = plVar14;
      if (local_c8 != (uint *)0x0) {
        LOCK();
        *(longlong *)local_c8 = *(longlong *)local_c8 + -1;
        UNLOCK();
        if (*(longlong *)local_c8 == 0) {
          uVar13 = uVar13 & 0xffffffff;
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_c8);
        }
      }
    }
  }
  else {
    uVar13 = <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
             <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
             ::_closure_2_();
  }
  puVar6 = puStack_80;
  if (local_78 == 2) {
    return uVar13;
  }
  if (((local_78 & 1) == 0) &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) {
    uVar13 = uVar13 & 0xffffffff;
    cVar11 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    if (cVar11 == '\0') {
      *(undefined1 *)(puVar6 + 1) = 1;
    }
  }
  LOCK();
  uVar17 = *puVar6;
  *puVar6 = 0;
  UNLOCK();
  if (uVar17 != 2) {
    return uVar13;
  }
  (*(code *)PTR_wake_00219d10)();
  goto LAB_0019a69a;
LAB_0019a6d9:
  do {
    if (uVar17 < 7) {
      if (uVar17 != 0) {
        uVar12 = uVar20 & 7;
        if (6 < uVar20 - 1) {
          uVar15 = uVar20 & 0xfffffff8;
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if (uVar12 == 0) goto LAB_0019a6c3;
        }
        do {
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar23 = (*(code *)puVar8)();
    }
LAB_0019a6c3:
    iVar2 = uVar17 * 2;
    uVar17 = uVar17 + 1;
    uVar20 = uVar20 + iVar2 + 1;
  } while (*(char *)((longlong)puVar9 + 1) == '\0');
LAB_0019a664:
  cVar11 = *(char *)((longlong)puVar9 + 2);
  *(undefined1 *)((longlong)puVar9 + 2) = 0;
  if (cVar11 == '\0') {
LAB_0019a866:
    (*(code *)PTR_unwrap_failed_00219e58)();
LAB_0019a881:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar16 = 3;
  (*(code *)PTR___rust_dealloc_00219c40)(uVar23,1);
  uVar13 = 2;
  LOCK();
  *(longlong *)puVar6 = *(longlong *)puVar6 + -1;
  lVar3 = *(longlong *)puVar6;
  UNLOCK();
joined_r0x0019a4e7:
  if (lVar3 != 0) {
    return uVar13;
  }
  <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::drop_slow
            (&local_c8,lVar16);
LAB_0019a69a:
  return uVar13 & 0xffffffff;
}


