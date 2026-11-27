// 0017cee0 notify

/* <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify(undefined4 param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  longlong lVar9;
  uint uVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *in_FS_OFFSET;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((char)param_2[7] == '\0') {
    LOCK();
    bVar16 = (int)*param_2 == 0;
    if (bVar16) {
      *(int *)param_2 = 1;
    }
    UNLOCK();
    if (!bVar16) {
      param_1 = (*(code *)PTR_lock_contended_00219d70)();
    }
    puVar11 = PTR_GLOBAL_PANIC_COUNT_00219d08;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
      bVar12 = 0;
      cVar13 = *(char *)((longlong)param_2 + 4);
    }
    else {
      bVar12 = (*(code *)PTR_is_zero_slow_path_00219d18)();
      bVar12 = bVar12 ^ 1;
      cVar13 = *(char *)((longlong)param_2 + 4);
      param_1 = extraout_XMM0_Da;
    }
    if (cVar13 != '\0') {
      uVar10 = (uint)local_68 >> 8;
      local_68 = CONCAT31((int3)uVar10,bVar12);
      local_70 = param_2;
      (*(code *)PTR_unwrap_failed_00219ec0)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>>>_002158f8
                 ,&local_70,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215978);
LAB_0017d139:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if ((char)param_2[7] == '\0') {
      lVar9 = param_2[3];
      if (lVar9 != 0) {
        lVar4 = *in_FS_OFFSET;
        lVar5 = param_2[2];
        lVar14 = 1;
        lVar15 = 0;
        do {
          lVar6 = *(longlong *)(lVar5 + lVar15);
          if (*(longlong *)(lVar6 + 0x28) != lVar4 + -0x70) {
            LOCK();
            bVar16 = *(longlong *)(lVar6 + 0x18) == 0;
            if (bVar16) {
              *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar5 + 8 + lVar15);
            }
            UNLOCK();
            if (bVar16) {
              lVar9 = *(longlong *)(lVar5 + 0x10 + lVar15);
              if (lVar9 != 0) {
                *(longlong *)(lVar6 + 0x20) = lVar9;
              }
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar6 + 0x10) + 0x28);
              iVar3 = *piVar1;
              *piVar1 = 1;
              UNLOCK();
              if (iVar3 == -1) {
                param_1 = (*(code *)PTR_futex_wake_00219fe8)();
              }
              local_58 = lVar14 - 1;
              uVar7 = param_2[3];
              if (local_58 < uVar7) {
                lVar9 = param_2[2];
                local_50 = *(longlong **)(lVar9 + lVar15);
                puVar2 = (undefined4 *)(lVar9 + 8 + lVar15);
                local_48 = *puVar2;
                uStack_44 = puVar2[1];
                uStack_40 = puVar2[2];
                uStack_3c = puVar2[3];
                param_1 = (*(code *)PTR_memmove_00219fb0)(local_50,(uVar7 - lVar14) * 0x18);
                param_2[3] = uVar7 - 1;
                if (local_50 != (longlong *)0x0) {
                  local_70 = local_50;
                  local_68 = local_48;
                  uStack_64 = uStack_44;
                  uStack_60 = uStack_40;
                  uStack_5c = uStack_3c;
                  LOCK();
                  *local_50 = *local_50 + -1;
                  UNLOCK();
                  if (*local_50 == 0) {
                    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>
                    ::drop_slow(&local_70,lVar9 + lVar15 + 0x18);
                  }
                  break;
                }
              }
              (*(code *)PTR_assert_failed_00219ff0)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215918);
              goto LAB_0017d139;
            }
          }
          lVar15 = lVar15 + 0x18;
          lVar14 = lVar14 + 1;
        } while (lVar9 * 0x18 != lVar15);
      }
      <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(param_2 + 1);
      if (param_2[3] == 0) {
        LOCK();
        *(bool *)(param_2 + 7) = param_2[6] == 0;
        UNLOCK();
      }
      else {
        LOCK();
        *(undefined1 *)(param_2 + 7) = 0;
        UNLOCK();
      }
    }
    if (((bVar12 == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar13 == '\0')) {
      *(undefined1 *)((longlong)param_2 + 4) = 1;
    }
    LOCK();
    lVar9 = *param_2;
    *(int *)param_2 = 0;
    UNLOCK();
    if ((int)lVar9 == 2) {
      (*(code *)PTR_wake_00219d10)();
    }
  }
  return;
}


