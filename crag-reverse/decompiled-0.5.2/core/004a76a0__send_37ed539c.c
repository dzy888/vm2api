// 004a76a0 send

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
  longlong *local_c8;
  undefined8 *puStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  byte local_a8;
  longlong *local_a0;
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
    uVar17 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)((longlong)param_1 + 4);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)((longlong)param_1 + 4);
    uVar17 = extraout_XMM0_Da;
  }
  if (cVar10 != '\0') {
    uVar11 = (ulonglong)puStack_c0 >> 8;
    puStack_c0 = (undefined8 *)CONCAT71((int7)uVar11,bVar9);
    local_c8 = param_1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_c8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b6f8);
LAB_004a7b33:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    lVar4 = *in_FS_OFFSET;
    lVar5 = param_1[8];
    lVar14 = 1;
    lVar13 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar13);
      if (*(longlong *)(lVar6 + 0x28) != lVar4 + -200) {
        LOCK();
        bVar16 = *(longlong *)(lVar6 + 0x18) == 0;
        if (bVar16) {
          *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar5 + 8 + lVar13);
        }
        UNLOCK();
        if (bVar16) {
          lVar3 = *(longlong *)(lVar5 + 0x10 + lVar13);
          if (lVar3 != 0) {
            *(longlong *)(lVar6 + 0x20) = lVar3;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            uVar17 = (*(code *)PTR_futex_wake_00799b60)();
          }
          local_70 = lVar14 - 1;
          uVar11 = param_1[9];
          if (local_70 < uVar11) {
            plVar7 = *(longlong **)(param_1[8] + lVar13);
            plVar12 = (longlong *)(param_1[8] + 8 + lVar13);
            local_98 = (longlong *)*plVar12;
            plStack_90 = (longlong *)plVar12[1];
            uVar17 = (*(code *)PTR_memmove_00799258)((int)*plVar12,(uVar11 - lVar14) * 0x18);
            param_1[9] = uVar11 - 1;
            if (plVar7 != (longlong *)0x0) {
              puStack_c0 = local_98;
              plStack_b8 = plStack_90;
              local_38 = plStack_90;
              local_c8 = plVar7;
              if (((bVar9 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
                 (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
                *(undefined1 *)((longlong)param_1 + 4) = 1;
              }
              LOCK();
              lVar3 = *param_1;
              *(int *)param_1 = 0;
              UNLOCK();
              if ((int)lVar3 == 2) {
                (*(code *)PTR_wake_00799010)();
              }
              if (local_38 != (longlong *)0x0) {
                *(undefined1 *)((longlong)local_38 + 2) = 1;
                *(undefined1 *)((longlong)local_38 + 1) = 1;
                LOCK();
                *local_c8 = *local_c8 + -1;
                UNLOCK();
                if (*local_c8 == 0) {
                  (*(code *)PTR_drop_slow_007995f0)();
                }
                return 2;
              }
              (*(code *)PTR_unwrap_failed_00799278)();
              goto LAB_004a7b33;
            }
          }
          (*(code *)PTR_assert_failed_00799718)
                    (uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b650);
          goto LAB_004a7b33;
        }
      }
      lVar13 = lVar13 + 0x18;
      lVar14 = lVar14 + 1;
    } while (lVar3 * 0x18 != lVar13);
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
        plVar12 = (longlong *)(*(code *)PTR_new_007995e8)();
        local_78 = 2;
        local_c8 = &local_58;
        puStack_c0 = &local_68;
        plStack_b8 = param_1;
        plStack_b0 = param_1;
        local_a0 = plVar12;
        uVar11 = send::_closure_0_(&local_c8,plVar12);
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          uVar11 = uVar11 & 0xffffffff;
          (*(code *)PTR_drop_slow_007995f0)();
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
        local_a0 = plVar12;
        uVar11 = send::_closure_0_(&local_c8,plVar12);
        local_c8 = (longlong *)*puVar15;
        *puVar15 = plVar12;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          *local_c8 = *local_c8 + -1;
          UNLOCK();
          if (*local_c8 == 0) {
            uVar11 = uVar11 & 0xffffffff;
            (*(code *)PTR_drop_slow_007995f0)();
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
         ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
        uVar11 = uVar11 & 0xffffffff;
        cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
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
        (*(code *)PTR_wake_00799010)();
      }
    }
  }
  else {
    if (((bVar9 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
    LOCK();
    lVar3 = *param_1;
    *(int *)param_1 = 0;
    UNLOCK();
    uVar11 = 1;
    if ((int)lVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
      uVar11 = 1;
    }
  }
  return uVar11;
}


