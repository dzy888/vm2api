// 006da270 drop

/* WARNING: Switch with 1 destination removed at 0x006db965 */
/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong uStack_88;
  byte bStack_80;
  byte bStack_7c;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (*param_1 == 0) {
    return;
  }
  param_1 = (longlong *)*param_1;
  plVar8 = param_1 + 2;
  LOCK();
  bVar16 = (int)param_1[2] == 0;
  if (bVar16) {
    *(int *)(param_1 + 2) = 1;
  }
  UNLOCK();
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bStack_80 = 0;
    cVar12 = *(char *)((longlong)param_1 + 0x14);
  }
  else {
    bStack_80 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bStack_80 = bStack_80 ^ 1;
    cVar12 = *(char *)((longlong)param_1 + 0x14);
  }
  if (cVar12 != '\0') {
    plStack_60._1_7_ = (undefined7)((ulonglong)plStack_60 >> 8);
    plStack_60 = (longlong *)CONCAT71(plStack_60._1_7_,bStack_80);
    plStack_68 = plVar8;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_68,
               &PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793878);
LAB_006dbfaa:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if ((char)param_1[9] == '\0') {
    uVar13 = param_1[5];
    if (uVar13 != 0) {
      uStack_88 = 0;
      do {
        while( true ) {
          param_1[5] = uVar13 - 1;
          plVar1 = *(longlong **)(param_1[4] + -8 + uVar13 * 8);
          plVar8 = plVar1 + 2;
          LOCK();
          bVar16 = (int)plVar1[2] == 0;
          if (bVar16) {
            *(int *)(plVar1 + 2) = 1;
          }
          UNLOCK();
          if (!bVar16) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*puVar15 & 0x7fffffffffffffff) == 0) {
            bStack_7c = 0;
            cVar12 = *(char *)((longlong)plVar1 + 0x14);
          }
          else {
            bStack_7c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bStack_7c = bStack_7c ^ 1;
            cVar12 = *(char *)((longlong)plVar1 + 0x14);
          }
          if (cVar12 != '\0') {
            plStack_60._1_7_ = (undefined7)((ulonglong)plStack_60 >> 8);
            plStack_60 = (longlong *)CONCAT71(plStack_60._1_7_,bStack_7c);
            plStack_68 = plVar8;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&plStack_68
                       ,&
                        PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_00793890
                      );
            goto LAB_006dbfaa;
          }
          plVar2 = (longlong *)plVar1[6];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              (*(code *)PTR_drop_slow_007990d0)();
            }
          }
          uVar17 = 0;
          plVar1[6] = 0;
          plVar1[7] = 0;
          if ((char)plVar1[9] != '\0') break;
          while (lVar14 = plVar1[5], lVar14 != 0) {
            plVar1[5] = lVar14 + -1;
            plVar3 = *(longlong **)(plVar1[4] + -8 + lVar14 * 8);
            plVar2 = plVar3 + 2;
            LOCK();
            bVar16 = (int)plVar3[2] == 0;
            if (bVar16) {
              *(int *)(plVar3 + 2) = 1;
            }
            UNLOCK();
            plStack_48 = plVar3;
            if (!bVar16) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              bVar11 = 0;
              cVar12 = *(char *)((longlong)plVar3 + 0x14);
            }
            else {
              bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              bVar11 = bVar11 ^ 1;
              cVar12 = *(char *)((longlong)plVar3 + 0x14);
            }
            if (cVar12 != '\0') {
              plStack_60._1_7_ = (undefined7)((ulonglong)plStack_60 >> 8);
              plStack_60 = (longlong *)CONCAT71(plStack_60._1_7_,bVar11);
              plStack_68 = plVar2;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,
                         &plStack_68,
                         &
                         PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007938c0
                        );
              goto LAB_006dbfaa;
            }
            plVar4 = (longlong *)plVar3[6];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *plVar4 = *plVar4 + -1;
              UNLOCK();
              if (*plVar4 == 0) {
                (*(code *)PTR_drop_slow_007990d0)();
              }
            }
            uVar17 = 0;
            plVar3[6] = 0;
            plVar3[7] = 0;
            if ((char)plVar3[9] == '\0') {
              LOCK();
              lVar14 = *param_1;
              *param_1 = *param_1 + 1;
              UNLOCK();
              if (*param_1 == 0 || SCARRY8(lVar14,1) != *param_1 < 0) goto LAB_006dbfaa;
              plVar4 = (longlong *)plVar3[6];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *plVar4 = *plVar4 + -1;
                UNLOCK();
                if (*plVar4 == 0) {
                  uVar17 = (*(code *)PTR_drop_slow_007990d0)();
                }
              }
              plVar3[6] = (longlong)param_1;
              plVar3[7] = param_1[5];
              if ((bVar11 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                uVar17 = extraout_XMM0_Da_00;
                if (cVar12 == '\0') {
                  *(undefined1 *)((longlong)plVar3 + 0x14) = 1;
                }
              }
              LOCK();
              lVar14 = *plVar2;
              *(int *)plVar2 = 0;
              UNLOCK();
              if ((int)lVar14 == 2) {
                uVar17 = (*(code *)PTR_wake_00799010)();
              }
              plVar2 = plStack_48;
              plStack_68 = plStack_48;
              lVar14 = param_1[5];
              if (lVar14 == param_1[3]) {
                uVar17 = (*(code *)PTR_grow_one_0079a748)();
              }
              *(longlong **)(param_1[4] + lVar14 * 8) = plVar2;
              param_1[5] = lVar14 + 1;
            }
            else {
              if ((bVar11 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                uVar17 = extraout_XMM0_Da;
                if (cVar12 == '\0') {
                  *(undefined1 *)((longlong)plVar3 + 0x14) = 1;
                }
              }
              LOCK();
              lVar14 = *plVar2;
              *(int *)plVar2 = 0;
              UNLOCK();
              if ((int)lVar14 == 2) {
                uVar17 = (*(code *)PTR_wake_00799010)();
              }
              LOCK();
              *plStack_48 = *plStack_48 + -1;
              UNLOCK();
              if (*plStack_48 == 0) {
                uVar17 = (*(code *)PTR_drop_slow_007990d0)();
              }
            }
          }
          *(undefined1 *)(plVar1 + 9) = 1;
          if (plVar1[3] != 0) {
            uVar17 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
          }
          plVar1[3] = 0;
          plVar1[4] = 8;
          plVar1[5] = 0;
          puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
          if ((bStack_7c == 0) &&
             ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
            cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            uVar17 = extraout_XMM0_Da_01;
            if (cVar12 == '\0') {
              *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
            }
          }
          LOCK();
          lVar14 = *plVar8;
          *(int *)plVar8 = 0;
          UNLOCK();
          if ((int)lVar14 == 2) {
            uVar17 = (*(code *)PTR_wake_00799010)();
          }
          lVar14 = param_1[5];
          plStack_68 = plVar1;
          if (lVar14 == param_1[3]) {
            uVar17 = (*(code *)PTR_grow_one_0079a748)();
          }
          *(longlong **)(param_1[4] + lVar14 * 8) = plVar1;
          param_1[5] = lVar14 + 1U;
          if (lVar14 + 1U <= uStack_88) {
            (*(code *)PTR_panic_bounds_check_00799520)
                      (uVar17,&
                              PTR_anon_ad2f892e54e1b23d293987efc0a65e00_3_llvm_172257243520341577_007938a8
                      );
            goto LAB_006dbfaa;
          }
          lVar5 = param_1[4];
          uVar6 = *(undefined8 *)(lVar5 + uStack_88 * 8);
          *(undefined8 *)(lVar5 + uStack_88 * 8) = *(undefined8 *)(lVar5 + lVar14 * 8);
          *(undefined8 *)(lVar5 + lVar14 * 8) = uVar6;
          uStack_88 = uStack_88 + 1;
          uVar13 = param_1[5];
          if (uVar13 <= uStack_88) goto LAB_006dbd9b;
        }
        if (((bStack_7c == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
           (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
          *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
        }
        LOCK();
        lVar14 = *plVar8;
        *(int *)plVar8 = 0;
        UNLOCK();
        if ((int)lVar14 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
        uVar13 = param_1[5];
      } while (uStack_88 < uVar13);
    }
LAB_006dbd9b:
    *(undefined1 *)(param_1 + 9) = 1;
    lStack_38 = param_1[5];
    plStack_48 = (longlong *)param_1[3];
    uStack_40 = (undefined4)param_1[4];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x24);
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    if (((bStack_80 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    LOCK();
    lVar14 = param_1[2];
    *(int *)(param_1 + 2) = 0;
    UNLOCK();
    if ((int)lVar14 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar10 = PTR_notify_waiters_00799550;
    puVar9 = PTR_drop_slow_007990d0;
    plStack_68 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    plStack_50 = plStack_68 + lStack_38;
    lStack_58 = (longlong)plStack_48;
    plStack_60 = plStack_68;
    if (lStack_38 != 0) {
      lVar14 = lStack_38 << 3;
      plVar8 = plStack_68;
      do {
        plVar1 = (longlong *)*plVar8;
        plStack_60 = plVar8 + 1;
        (*(code *)puVar10)();
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar9)();
        }
        lVar14 = lVar14 + -8;
        plVar8 = plVar8 + 1;
      } while (lVar14 != 0);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&plStack_68);
    (*(code *)PTR_notify_waiters_00799550)();
  }
  else {
    if (((bStack_80 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    }
    LOCK();
    lVar14 = *plVar8;
    *(int *)plVar8 = 0;
    UNLOCK();
    if ((int)lVar14 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


