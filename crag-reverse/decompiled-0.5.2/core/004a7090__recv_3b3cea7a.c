// 004a7090 recv

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
  longlong lVar6;
  uint *puVar7;
  code *pcVar8;
  undefined *puVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong *in_FS_OFFSET;
  bool bVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  uint *local_c8;
  undefined8 *puStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  byte local_a8;
  longlong *local_a0;
  uint *local_98;
  uint *puStack_90;
  uint *local_88;
  uint *puStack_80;
  byte local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint *local_38;
  
  uVar22 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (uint *)0x0;
  LOCK();
  uVar16 = *param_1;
  if (uVar16 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  local_68 = param_2;
  local_60 = param_3;
  if (uVar16 != 0) {
    uVar22 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar11 = (char)param_1[1];
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
    cVar11 = (char)param_1[1];
    uVar22 = extraout_XMM0_Da;
  }
  if (cVar11 != '\0') {
    uVar13 = (ulonglong)puStack_c0 >> 8;
    puStack_c0 = (undefined8 *)CONCAT71((int7)uVar13,bVar10);
    local_c8 = param_1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_c8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b6e0);
    goto LAB_004a75fe;
  }
  lVar3 = *(longlong *)(param_1 + 6);
  if (lVar3 != 0) {
    lVar4 = *in_FS_OFFSET;
    lVar5 = *(longlong *)(param_1 + 4);
    lVar18 = 1;
    lVar17 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar17);
      if (*(longlong *)(lVar6 + 0x28) != lVar4 + -200) {
        LOCK();
        bVar21 = *(longlong *)(lVar6 + 0x18) == 0;
        if (bVar21) {
          *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar5 + 8 + lVar17);
        }
        UNLOCK();
        if (bVar21) {
          lVar3 = *(longlong *)(lVar5 + 0x10 + lVar17);
          if (lVar3 != 0) {
            *(longlong *)(lVar6 + 0x20) = lVar3;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            uVar22 = (*(code *)PTR_futex_wake_00799b60)();
          }
          local_70 = lVar18 - 1;
          uVar13 = *(ulonglong *)(param_1 + 6);
          if (local_70 < uVar13) {
            puVar7 = *(uint **)(*(longlong *)(param_1 + 4) + lVar17);
            plVar14 = (longlong *)(*(longlong *)(param_1 + 4) + 8 + lVar17);
            local_98 = (uint *)*plVar14;
            puStack_90 = (uint *)plVar14[1];
            uVar22 = (*(code *)PTR_memmove_00799258)((int)*plVar14,(uVar13 - lVar18) * 0x18);
            *(ulonglong *)(param_1 + 6) = uVar13 - 1;
            if (puVar7 != (uint *)0x0) {
              puStack_c0 = (undefined8 *)local_98;
              puStack_b8 = puStack_90;
              local_38 = puStack_90;
              uVar22 = local_98._0_4_;
              local_c8 = puVar7;
              if (((bVar10 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
                 (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar22 = extraout_XMM0_Da_01
                 , cVar11 == '\0')) {
                *(undefined1 *)(param_1 + 1) = 1;
              }
              LOCK();
              uVar16 = *param_1;
              *param_1 = 0;
              UNLOCK();
              if (uVar16 == 2) {
                (*(code *)PTR_wake_00799010)();
                uVar22 = extraout_XMM0_Da_00;
              }
              puVar7 = local_38;
              puVar9 = PTR_yield_now_00799b28;
              if (local_38 == (uint *)0x0) {
                uVar13 = 1;
                LOCK();
                *(longlong *)local_c8 = *(longlong *)local_c8 + -1;
                lVar3 = *(longlong *)local_c8;
                UNLOCK();
                goto joined_r0x004a726b;
              }
              if ((char)*local_38 != '\0') {
                cVar11 = *(char *)((longlong)local_38 + 2);
                *(undefined1 *)((longlong)local_38 + 2) = 0;
                if (cVar11 == '\0') goto LAB_004a75e1;
                *(undefined1 *)((longlong)local_38 + 1) = 1;
                uVar13 = 2;
                LOCK();
                *(longlong *)local_c8 = *(longlong *)local_c8 + -1;
                lVar3 = *(longlong *)local_c8;
                UNLOCK();
                goto joined_r0x004a726b;
              }
              if (*(char *)((longlong)local_38 + 1) != '\0') goto LAB_004a73e3;
              uVar19 = 0;
              uVar16 = 0;
              goto LAB_004a7459;
            }
          }
          (*(code *)PTR_assert_failed_00799718)
                    (uVar22,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b650);
          goto LAB_004a75fe;
        }
      }
      lVar17 = lVar17 + 0x18;
      lVar18 = lVar18 + 1;
    } while (lVar3 * 0x18 != lVar17);
  }
  if ((char)param_1[0x1a] != '\0') {
    if (((bVar10 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    uVar16 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (uVar16 == 2) {
      (*(code *)PTR_wake_00799010)();
      return 1;
    }
    return 1;
  }
  puVar20 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  local_98 = (uint *)&local_58;
  puStack_90 = (uint *)&local_68;
  local_88 = param_1;
  puStack_80 = param_1;
  local_78 = bVar10;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar20 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (puVar20,0), puVar20 != (undefined8 *)0x0)) {
    plVar14 = (longlong *)*puVar20;
    *puVar20 = 0;
    local_a8 = bVar10;
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_78 = 2;
      local_c8 = (uint *)&local_58;
      puStack_c0 = &local_68;
      puStack_b8 = param_1;
      puStack_b0 = param_1;
      local_a0 = plVar14;
      uVar13 = recv::_closure_1_(&local_c8,plVar14);
      LOCK();
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        uVar13 = uVar13 & 0xffffffff;
        (*(code *)PTR_drop_slow_007995f0)();
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
      local_a0 = plVar14;
      uVar13 = recv::_closure_1_(&local_c8,plVar14);
      local_c8 = (uint *)*puVar20;
      *puVar20 = plVar14;
      if (local_c8 != (uint *)0x0) {
        LOCK();
        *(longlong *)local_c8 = *(longlong *)local_c8 + -1;
        UNLOCK();
        if (*(longlong *)local_c8 == 0) {
          uVar13 = uVar13 & 0xffffffff;
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
    }
  }
  else {
    uVar13 = <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
             <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
             ::_closure_2_();
  }
  puVar7 = puStack_80;
  if (local_78 == 2) {
    return uVar13;
  }
  if (((local_78 & 1) == 0) &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
    uVar13 = uVar13 & 0xffffffff;
    cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar11 == '\0') {
      *(undefined1 *)(puVar7 + 1) = 1;
    }
  }
  LOCK();
  uVar16 = *puVar7;
  *puVar7 = 0;
  UNLOCK();
  if (uVar16 != 2) {
    return uVar13;
  }
  (*(code *)PTR_wake_00799010)();
  goto LAB_004a741b;
LAB_004a7459:
  do {
    if (uVar16 < 7) {
      if (uVar16 != 0) {
        uVar12 = uVar19 & 7;
        if (6 < uVar19 - 1) {
          uVar15 = uVar19 & 0xfffffff8;
          do {
            uVar15 = uVar15 - 8;
          } while (uVar15 != 0);
          if (uVar12 == 0) goto LAB_004a7443;
        }
        do {
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      uVar22 = (*(code *)puVar9)();
    }
LAB_004a7443:
    iVar2 = uVar16 * 2;
    uVar16 = uVar16 + 1;
    uVar19 = uVar19 + iVar2 + 1;
  } while (*(char *)((longlong)puVar7 + 1) == '\0');
LAB_004a73e3:
  cVar11 = *(char *)((longlong)puVar7 + 2);
  *(undefined1 *)((longlong)puVar7 + 2) = 0;
  if (cVar11 == '\0') {
LAB_004a75e1:
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_004a75fe:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  uVar13 = 2;
  LOCK();
  *(longlong *)local_c8 = *(longlong *)local_c8 + -1;
  lVar3 = *(longlong *)local_c8;
  UNLOCK();
joined_r0x004a726b:
  if (lVar3 != 0) {
    return uVar13;
  }
  (*(code *)PTR_drop_slow_007995f0)();
LAB_004a741b:
  return uVar13 & 0xffffffff;
}


