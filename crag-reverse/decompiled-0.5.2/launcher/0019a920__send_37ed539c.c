// 0019a920 send

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send
          (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *in_FS_OFFSET;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *puStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  byte local_a8;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  byte local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  
  uVar17 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (longlong *)0x0;
  LOCK();
  bVar16 = (int)*param_1 == 0;
  if (bVar16) {
    *(int *)param_1 = 1;
  }
  UNLOCK();
  local_68 = param_2;
  local_60 = param_3;
  if (!bVar16) {
    uVar17 = (*(code *)PTR_lock_contended_00219d70)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)((longlong)param_1 + 4);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)((longlong)param_1 + 4);
    uVar17 = extraout_XMM0_Da;
  }
  if (cVar10 != '\0') {
    uVar11 = (ulonglong)puStack_c0 >> 8;
    puStack_c0 = (undefined8 *)CONCAT71((int7)uVar11,bVar9);
    local_c8 = param_1;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
               ,&local_c8,&PTR_s__rustc_48a229ceaefd4985c50990b14_00216630);
LAB_0019adc0:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    lVar4 = *in_FS_OFFSET;
    lVar5 = param_1[8];
    lVar13 = 1;
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar14);
      if (*(longlong *)(lVar6 + 0x28) != lVar4 + -0x70) {
        LOCK();
        bVar16 = *(longlong *)(lVar6 + 0x18) == 0;
        if (bVar16) {
          *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar5 + 8 + lVar14);
        }
        UNLOCK();
        if (bVar16) {
          lVar3 = *(longlong *)(lVar5 + 0x10 + lVar14);
          if (lVar3 != 0) {
            *(longlong *)(lVar6 + 0x20) = lVar3;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            uVar17 = (*(code *)PTR_futex_wake_00219fe8)();
          }
          local_70 = lVar13 - 1;
          uVar11 = param_1[9];
          if (local_70 < uVar11) {
            lVar3 = param_1[8];
            plVar7 = *(longlong **)(lVar3 + lVar14);
            plVar12 = (longlong *)(lVar3 + 8 + lVar14);
            local_98 = (longlong *)*plVar12;
            plStack_90 = (longlong *)plVar12[1];
            uVar17 = (*(code *)PTR_memmove_00219fb0)((int)*plVar12,(uVar11 - lVar13) * 0x18);
            param_1[9] = uVar11 - 1;
            if (plVar7 != (longlong *)0x0) {
              puStack_c0 = local_98;
              plStack_b8 = plStack_90;
              local_38 = plStack_90;
              local_c8 = plVar7;
              if (((bVar9 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
                 (cVar10 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar10 == '\0')) {
                *(undefined1 *)((longlong)param_1 + 4) = 1;
              }
              LOCK();
              lVar4 = *param_1;
              *(int *)param_1 = 0;
              UNLOCK();
              if ((int)lVar4 == 2) {
                (*(code *)PTR_wake_00219d10)();
              }
              if (local_38 != (longlong *)0x0) {
                *(undefined1 *)((longlong)local_38 + 2) = 1;
                *(undefined1 *)((longlong)local_38 + 1) = 1;
                LOCK();
                *plVar7 = *plVar7 + -1;
                UNLOCK();
                if (*plVar7 == 0) {
                  <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>
                  ::drop_slow(&local_c8,lVar3 + lVar14 + 0x18);
                }
                return 2;
              }
              (*(code *)PTR_unwrap_failed_00219e58)();
              goto LAB_0019adc0;
            }
          }
          (*(code *)PTR_assert_failed_00219ff0)
                    (uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165a0);
          goto LAB_0019adc0;
        }
      }
      lVar14 = lVar14 + 0x18;
      lVar13 = lVar13 + 1;
    } while (lVar3 * 0x18 != lVar14);
  }
  if ((char)param_1[0xd] == '\0') {
    puVar15 = (undefined8 *)(*in_FS_OFFSET + -0x20);
    local_98 = &local_58;
    plStack_90 = &local_68;
    local_88 = param_1;
    plStack_80 = param_1;
    local_78 = bVar9;
    if (((char)in_FS_OFFSET[-3] == '\x01') ||
       (puVar15 = (undefined8 *)
                  <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                  ::get_or_init_slow::
                  <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                            (puVar15,0), puVar15 != (undefined8 *)0x0)) {
      plVar12 = (longlong *)*puVar15;
      *puVar15 = 0;
      local_a8 = bVar9;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)(*(code *)PTR_new_00219fc0)();
        local_78 = 2;
        local_d0 = plVar12;
        local_c8 = &local_58;
        puStack_c0 = &local_68;
        plStack_b8 = param_1;
        plStack_b0 = param_1;
        uVar11 = send::_closure_0_(&local_c8,plVar12);
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          uVar11 = uVar11 & 0xffffffff;
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_d0);
        }
      }
      else {
        plVar12[3] = 0;
        plVar12[4] = 0;
        local_78 = 2;
        local_c8 = local_98;
        puStack_c0 = plStack_90;
        plStack_b8 = local_88;
        plStack_b0 = plStack_80;
        local_d0 = plVar12;
        uVar11 = send::_closure_0_(&local_c8,plVar12);
        local_c8 = (longlong *)*puVar15;
        *puVar15 = plVar12;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          *local_c8 = *local_c8 + -1;
          UNLOCK();
          if (*local_c8 == 0) {
            uVar11 = uVar11 & 0xffffffff;
            <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
            drop_slow(&local_c8);
          }
        }
      }
    }
    else {
      uVar11 = <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
               <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<()>>>
               ::_closure_2_();
    }
    plVar12 = plStack_80;
    if (local_78 != 2) {
      if (((local_78 & 1) == 0) &&
         ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) {
        uVar11 = uVar11 & 0xffffffff;
        cVar10 = (*(code *)PTR_is_zero_slow_path_00219d18)();
        if (cVar10 == '\0') {
          *(undefined1 *)((longlong)plVar12 + 4) = 1;
        }
      }
      LOCK();
      lVar3 = *plVar12;
      *(int *)plVar12 = 0;
      UNLOCK();
      if ((int)lVar3 == 2) {
        uVar11 = uVar11 & 0xffffffff;
        (*(code *)PTR_wake_00219d10)();
      }
    }
  }
  else {
    if (((bVar9 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)
        ) && (cVar10 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar10 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    LOCK();
    lVar3 = *param_1;
    *(int *)param_1 = 0;
    UNLOCK();
    uVar11 = 1;
    if ((int)lVar3 == 2) {
      (*(code *)PTR_wake_00219d10)();
      uVar11 = 1;
    }
  }
  return uVar11;
}


