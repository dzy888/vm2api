// 006db8d0 cancel

/* WARNING: Switch with 1 destination removed at 0x006db965 */
/* tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::cancel */

void __rustcall
tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::cancel(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong local_88;
  byte local_80;
  byte local_7c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  plVar1 = (longlong *)*param_1;
  plVar9 = plVar1 + 2;
  LOCK();
  bVar17 = (int)plVar1[2] == 0;
  if (bVar17) {
    *(int *)(plVar1 + 2) = 1;
  }
  UNLOCK();
  if (!bVar17) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar16 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_80 = 0;
    cVar13 = *(char *)((longlong)plVar1 + 0x14);
  }
  else {
    local_80 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_80 = local_80 ^ 1;
    cVar13 = *(char *)((longlong)plVar1 + 0x14);
  }
  if (cVar13 != '\0') {
    local_60._1_7_ = (undefined7)((ulonglong)local_60 >> 8);
    local_60 = (longlong *)CONCAT71(local_60._1_7_,local_80);
    local_68 = plVar9;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_68,
               &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793878);
LAB_006dbfaa:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  if ((char)plVar1[9] == '\0') {
    uVar14 = plVar1[5];
    if (uVar14 != 0) {
      local_88 = 0;
      do {
        while( true ) {
          plVar1[5] = uVar14 - 1;
          plVar2 = *(longlong **)(plVar1[4] + -8 + uVar14 * 8);
          plVar9 = plVar2 + 2;
          LOCK();
          bVar17 = (int)plVar2[2] == 0;
          if (bVar17) {
            *(int *)(plVar2 + 2) = 1;
          }
          UNLOCK();
          if (!bVar17) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*puVar16 & 0x7fffffffffffffff) == 0) {
            local_7c = 0;
            cVar13 = *(char *)((longlong)plVar2 + 0x14);
          }
          else {
            local_7c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            local_7c = local_7c ^ 1;
            cVar13 = *(char *)((longlong)plVar2 + 0x14);
          }
          if (cVar13 != '\0') {
            local_60._1_7_ = (undefined7)((ulonglong)local_60 >> 8);
            local_60 = (longlong *)CONCAT71(local_60._1_7_,local_7c);
            local_68 = plVar9;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_68,
                       &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793890
                      );
            goto LAB_006dbfaa;
          }
          plVar3 = (longlong *)plVar2[6];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_007990d0)();
            }
          }
          uVar18 = 0;
          plVar2[6] = 0;
          plVar2[7] = 0;
          if ((char)plVar2[9] != '\0') break;
          while (lVar15 = plVar2[5], lVar15 != 0) {
            plVar2[5] = lVar15 + -1;
            plVar4 = *(longlong **)(plVar2[4] + -8 + lVar15 * 8);
            plVar3 = plVar4 + 2;
            LOCK();
            bVar17 = (int)plVar4[2] == 0;
            if (bVar17) {
              *(int *)(plVar4 + 2) = 1;
            }
            UNLOCK();
            local_48 = plVar4;
            if (!bVar17) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              bVar12 = 0;
              cVar13 = *(char *)((longlong)plVar4 + 0x14);
            }
            else {
              bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              bVar12 = bVar12 ^ 1;
              cVar13 = *(char *)((longlong)plVar4 + 0x14);
            }
            if (cVar13 != '\0') {
              local_60._1_7_ = (undefined7)((ulonglong)local_60 >> 8);
              local_60 = (longlong *)CONCAT71(local_60._1_7_,bVar12);
              local_68 = plVar3;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&local_68
                         ,&
                          PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007938c0
                        );
              goto LAB_006dbfaa;
            }
            plVar5 = (longlong *)plVar4[6];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *plVar5 = *plVar5 + -1;
              UNLOCK();
              if (*plVar5 == 0) {
                (*(code *)PTR_drop_slow_007990d0)();
              }
            }
            uVar18 = 0;
            plVar4[6] = 0;
            plVar4[7] = 0;
            if ((char)plVar4[9] == '\0') {
              LOCK();
              lVar15 = *plVar1;
              *plVar1 = *plVar1 + 1;
              UNLOCK();
              if (*plVar1 == 0 || SCARRY8(lVar15,1) != *plVar1 < 0) goto LAB_006dbfaa;
              plVar5 = (longlong *)plVar4[6];
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *plVar5 = *plVar5 + -1;
                UNLOCK();
                if (*plVar5 == 0) {
                  uVar18 = (*(code *)PTR_drop_slow_007990d0)();
                }
              }
              plVar4[6] = (longlong)plVar1;
              plVar4[7] = plVar1[5];
              if ((bVar12 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                uVar18 = extraout_XMM0_Da_00;
                if (cVar13 == '\0') {
                  *(undefined1 *)((longlong)plVar4 + 0x14) = 1;
                }
              }
              LOCK();
              lVar15 = *plVar3;
              *(int *)plVar3 = 0;
              UNLOCK();
              if ((int)lVar15 == 2) {
                uVar18 = (*(code *)PTR_wake_00799010)();
              }
              plVar3 = local_48;
              local_68 = local_48;
              lVar15 = plVar1[5];
              if (lVar15 == plVar1[3]) {
                uVar18 = (*(code *)PTR_grow_one_0079a748)();
              }
              *(longlong **)(plVar1[4] + lVar15 * 8) = plVar3;
              plVar1[5] = lVar15 + 1;
            }
            else {
              if ((bVar12 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                uVar18 = extraout_XMM0_Da;
                if (cVar13 == '\0') {
                  *(undefined1 *)((longlong)plVar4 + 0x14) = 1;
                }
              }
              LOCK();
              lVar15 = *plVar3;
              *(int *)plVar3 = 0;
              UNLOCK();
              if ((int)lVar15 == 2) {
                uVar18 = (*(code *)PTR_wake_00799010)();
              }
              LOCK();
              *local_48 = *local_48 + -1;
              UNLOCK();
              if (*local_48 == 0) {
                uVar18 = (*(code *)PTR_drop_slow_007990d0)();
              }
            }
          }
          *(undefined1 *)(plVar2 + 9) = 1;
          if (plVar2[3] != 0) {
            uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,8);
          }
          plVar2[3] = 0;
          plVar2[4] = 8;
          plVar2[5] = 0;
          puVar16 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
          if ((local_7c == 0) &&
             ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
            cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            uVar18 = extraout_XMM0_Da_01;
            if (cVar13 == '\0') {
              *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
            }
          }
          LOCK();
          lVar15 = *plVar9;
          *(int *)plVar9 = 0;
          UNLOCK();
          if ((int)lVar15 == 2) {
            uVar18 = (*(code *)PTR_wake_00799010)();
          }
          lVar15 = plVar1[5];
          local_68 = plVar2;
          if (lVar15 == plVar1[3]) {
            uVar18 = (*(code *)PTR_grow_one_0079a748)();
          }
          *(longlong **)(plVar1[4] + lVar15 * 8) = plVar2;
          plVar1[5] = lVar15 + 1U;
          if (lVar15 + 1U <= local_88) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (uVar18,&
                              PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007938a8
                      );
            goto LAB_006dbfaa;
          }
          lVar6 = plVar1[4];
          uVar7 = *(undefined8 *)(lVar6 + local_88 * 8);
          *(undefined8 *)(lVar6 + local_88 * 8) = *(undefined8 *)(lVar6 + lVar15 * 8);
          *(undefined8 *)(lVar6 + lVar15 * 8) = uVar7;
          local_88 = local_88 + 1;
          uVar14 = plVar1[5];
          if (uVar14 <= local_88) goto LAB_006dbd9b;
        }
        if (((local_7c == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) &&
           (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
          *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
        }
        LOCK();
        lVar15 = *plVar9;
        *(int *)plVar9 = 0;
        UNLOCK();
        if ((int)lVar15 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
        uVar14 = plVar1[5];
      } while (local_88 < uVar14);
    }
LAB_006dbd9b:
    *(undefined1 *)(plVar1 + 9) = 1;
    local_38 = plVar1[5];
    local_48 = (longlong *)plVar1[3];
    uStack_40 = (undefined4)plVar1[4];
    uStack_3c = *(undefined4 *)((longlong)plVar1 + 0x24);
    plVar1[3] = 0;
    plVar1[4] = 8;
    plVar1[5] = 0;
    if (((local_80 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
    }
    LOCK();
    lVar15 = plVar1[2];
    *(int *)(plVar1 + 2) = 0;
    UNLOCK();
    if ((int)lVar15 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar11 = PTR_notify_waiters_00799550;
    puVar10 = PTR_drop_slow_007990d0;
    local_68 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    local_50 = local_68 + local_38;
    local_58 = (longlong)local_48;
    local_60 = local_68;
    if (local_38 != 0) {
      lVar15 = local_38 << 3;
      plVar9 = local_68;
      do {
        plVar1 = (longlong *)*plVar9;
        local_60 = plVar9 + 1;
        (*(code *)puVar11)();
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar10)();
        }
        lVar15 = lVar15 + -8;
        plVar9 = plVar9 + 1;
      } while (lVar15 != 0);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_68);
    (*(code *)PTR_notify_waiters_00799550)();
  }
  else {
    if (((local_80 == 0) && ((*puVar16 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
    }
    LOCK();
    lVar15 = *plVar9;
    *(int *)plVar9 = 0;
    UNLOCK();
    if ((int)lVar15 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


