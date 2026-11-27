// 006da150 drop

/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong *plStack_50;
  longlong *plStack_48;
  byte bStack_40;
  longlong *plStack_38;
  
  lVar2 = *param_1;
  plVar9 = (longlong *)(lVar2 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    cVar8 = *(char *)(lVar2 + 0x14);
    bVar7 = bStack_40;
    bStack_40 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    cVar8 = *(char *)(lVar2 + 0x14);
    bVar7 = bStack_40;
    bStack_40 = bVar6 ^ 1;
  }
  if (cVar8 != '\0') {
    plStack_48 = plVar9;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_48,
               &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793830);
    plVar4 = plStack_48;
    goto LAB_006db649;
  }
  lVar10 = *(longlong *)(lVar2 + 0x40) + -1;
  *(longlong *)(lVar2 + 0x40) = lVar10;
  bVar11 = bStack_40 == 0;
  bStack_40 = bVar7;
  if (((bVar11) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
  LOCK();
  iVar1 = *(int *)plVar9;
  *(int *)plVar9 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (lVar10 == 0) {
    LOCK();
    iVar1 = *(int *)plVar9;
    if (iVar1 == 0) {
      *(int *)plVar9 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
      cVar8 = *(char *)(lVar2 + 0x14);
      plVar4 = plStack_48;
      plStack_48 = plVar9;
    }
    else {
      plStack_38 = plVar9;
      bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar7 = bVar7 ^ 1;
      cVar8 = *(char *)(lVar2 + 0x14);
      plVar4 = plStack_48;
      plStack_48 = plStack_38;
    }
    plStack_38 = plStack_48;
    if (cVar8 != '\0') {
      bStack_40 = bVar7;
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_48,
                 &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793708);
      plVar4 = plStack_48;
      goto LAB_006db649;
    }
    plVar9 = *(longlong **)(lVar2 + 0x30);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      lVar10 = *plVar9;
      *plVar9 = *plVar9 + 1;
      UNLOCK();
      if (*plVar9 == 0 || SCARRY8(lVar10,1) != *plVar9 < 0) goto LAB_006db649;
      plStack_50 = *(longlong **)(lVar2 + 0x30);
      LOCK();
      bVar11 = (int)plStack_50[2] == 0;
      if (bVar11) {
        *(int *)(plStack_50 + 2) = 1;
      }
      UNLOCK();
      if (bVar11) {
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          plStack_48 = plVar4;
          bVar6 = bVar6 ^ 1;
          plVar4 = plStack_48;
        }
        plStack_48 = plVar4;
        bVar5 = bStack_40;
        if (*(char *)((longlong)plStack_50 + 0x14) != '\0') {
LAB_006db026:
          plStack_48 = plStack_50 + 2;
          bStack_40 = bVar6;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_48,
                     &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793720);
          plVar4 = plStack_48;
          goto LAB_006db649;
        }
      }
      else {
        if ((bVar7 == 0) &&
           ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
          cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          plStack_48 = plVar4;
          plVar4 = plStack_48;
          if (cVar8 == '\0') {
            *(undefined1 *)(lVar2 + 0x14) = 1;
          }
        }
        plStack_48 = plVar4;
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x10) = 0;
        UNLOCK();
        if (iVar1 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        LOCK();
        bVar11 = (int)plStack_50[2] == 0;
        if (bVar11) {
          *(int *)(plStack_50 + 2) = 1;
        }
        UNLOCK();
        if (!bVar11) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar6 = 0;
          cVar8 = *(char *)((longlong)plStack_50 + 0x14);
        }
        else {
          bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar6 = bVar6 ^ 1;
          cVar8 = *(char *)((longlong)plStack_50 + 0x14);
        }
        if (cVar8 != '\0') {
LAB_006db5b8:
          plStack_48 = plStack_50 + 2;
          bStack_40 = bVar6;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_48,
                     &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793738);
          plVar4 = plStack_48;
LAB_006db649:
          plStack_48 = plVar4;
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        LOCK();
        bVar11 = *(int *)(lVar2 + 0x10) == 0;
        if (bVar11) {
          *(int *)(lVar2 + 0x10) = 1;
        }
        UNLOCK();
        if (!bVar11) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          cVar8 = *(char *)(lVar2 + 0x14);
          bVar7 = 0;
          bVar5 = bStack_40;
        }
        else {
          bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          cVar8 = *(char *)(lVar2 + 0x14);
          bVar7 = bVar7 ^ 1;
          bVar5 = bStack_40;
        }
        bStack_40 = bVar7;
        bVar7 = bStack_40;
        if (cVar8 != '\0') {
LAB_006db615:
          plStack_48 = plStack_38;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_48,
                     &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793750);
          plVar4 = plStack_48;
          goto LAB_006db649;
        }
      }
      bStack_40 = bVar5;
      plVar9 = plStack_50 + 2;
      if ((*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) &&
         (*(longlong **)(lVar2 + 0x30) == plStack_50)) {
LAB_006db12e:
        tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::decrease_handle_refcount
        ::_closure_0_(plStack_38,bVar7,plVar9,bVar6);
        LOCK();
        *plStack_50 = *plStack_50 + -1;
        UNLOCK();
        if (*plStack_50 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
          return;
        }
        return;
      }
      if ((bVar6 == 0) &&
         (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0 &&
          (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')))) {
        *(undefined1 *)((longlong)plStack_50 + 0x14) = 1;
      }
      LOCK();
      lVar10 = *plVar9;
      *(int *)plVar9 = 0;
      UNLOCK();
      if ((int)lVar10 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      LOCK();
      *plStack_50 = *plStack_50 + -1;
      UNLOCK();
      if (*plStack_50 == 0) {
        (*(code *)PTR_drop_slow_007990d0)();
      }
      plVar9 = *(longlong **)(lVar2 + 0x30);
      if (plVar9 != (longlong *)0x0) {
        do {
          LOCK();
          lVar10 = *plVar9;
          *plVar9 = *plVar9 + 1;
          UNLOCK();
          plVar4 = plStack_48;
          if (*plVar9 == 0 || SCARRY8(lVar10,1) != *plVar9 < 0) goto LAB_006db649;
          plStack_50 = *(longlong **)(lVar2 + 0x30);
          LOCK();
          bVar11 = (int)plStack_50[2] == 0;
          if (bVar11) {
            *(int *)(plStack_50 + 2) = 1;
          }
          UNLOCK();
          if (bVar11) {
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              bVar6 = bVar6 ^ 1;
            }
            bVar5 = bStack_40;
            if (*(char *)((longlong)plStack_50 + 0x14) != '\0') goto LAB_006db026;
          }
          else {
            if ((((bVar7 & 1) == 0) &&
                ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
               (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
              *(undefined1 *)(lVar2 + 0x14) = 1;
            }
            LOCK();
            iVar1 = *(int *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x10) = 0;
            UNLOCK();
            if (iVar1 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            LOCK();
            bVar11 = (int)plStack_50[2] == 0;
            if (bVar11) {
              *(int *)(plStack_50 + 2) = 1;
            }
            UNLOCK();
            if (!bVar11) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              bVar6 = 0;
              cVar8 = *(char *)((longlong)plStack_50 + 0x14);
            }
            else {
              bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              bVar6 = bVar6 ^ 1;
              cVar8 = *(char *)((longlong)plStack_50 + 0x14);
            }
            if (cVar8 != '\0') goto LAB_006db5b8;
            LOCK();
            bVar11 = *(int *)(lVar2 + 0x10) == 0;
            if (bVar11) {
              *(int *)(lVar2 + 0x10) = 1;
            }
            UNLOCK();
            if (!bVar11) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              cVar8 = *(char *)(lVar2 + 0x14);
              bVar7 = 0;
              bVar5 = bStack_40;
            }
            else {
              bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              cVar8 = *(char *)(lVar2 + 0x14);
              bVar7 = bVar7 ^ 1;
              bVar5 = bStack_40;
            }
            bStack_40 = bVar7;
            bVar7 = bStack_40;
            if (cVar8 != '\0') goto LAB_006db615;
          }
          bStack_40 = bVar5;
          plVar9 = plStack_50 + 2;
          if ((*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) &&
             (*(longlong **)(lVar2 + 0x30) == plStack_50)) goto LAB_006db12e;
          if (((bVar6 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
            *(undefined1 *)((longlong)plStack_50 + 0x14) = 1;
          }
          LOCK();
          lVar10 = *plVar9;
          *(int *)plVar9 = 0;
          UNLOCK();
          if ((int)lVar10 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          LOCK();
          *plStack_50 = *plStack_50 + -1;
          UNLOCK();
          if (*plStack_50 == 0) {
            (*(code *)PTR_drop_slow_007990d0)();
          }
          plVar9 = *(longlong **)(lVar2 + 0x30);
        } while (plVar9 != (longlong *)0x0);
      }
    }
    tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::decrease_handle_refcount::
    _closure_0_(plStack_38,bVar7);
  }
  return;
}


