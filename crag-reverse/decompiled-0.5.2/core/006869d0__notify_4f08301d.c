// 006869d0 notify

/* <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::notify
          (undefined4 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  longlong lVar8;
  uint uVar9;
  undefined *puVar10;
  byte bVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *in_FS_OFFSET;
  bool bVar15;
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
    bVar15 = (int)*param_2 == 0;
    if (bVar15) {
      *(int *)param_2 = 1;
    }
    UNLOCK();
    if (!bVar15) {
      param_1 = (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar10 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar11 = 0;
      cVar12 = *(char *)((longlong)param_2 + 4);
    }
    else {
      bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar11 = bVar11 ^ 1;
      cVar12 = *(char *)((longlong)param_2 + 4);
      param_1 = extraout_XMM0_Da;
    }
    if (cVar12 != '\0') {
      uVar9 = (uint)local_68 >> 8;
      local_68 = CONCAT31((int3)uVar9,bVar11);
      local_70 = param_2;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String>>>>_00791318
                 ,&local_70,&PTR_s__rustc_48a229ceaefd4985c50990b14_007914a8);
LAB_00686c2a:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if ((char)param_2[7] == '\0') {
      if (param_2[3] != 0) {
        lVar8 = *in_FS_OFFSET;
        lVar4 = param_2[2];
        param_3 = param_2[3] * 0x18;
        lVar13 = 1;
        lVar14 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + lVar14);
          if (*(longlong *)(lVar5 + 0x28) != lVar8 + -200) {
            LOCK();
            bVar15 = *(longlong *)(lVar5 + 0x18) == 0;
            if (bVar15) {
              *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar4 + 8 + lVar14);
            }
            UNLOCK();
            if (bVar15) {
              lVar8 = *(longlong *)(lVar4 + 0x10 + lVar14);
              if (lVar8 != 0) {
                *(longlong *)(lVar5 + 0x20) = lVar8;
              }
              LOCK();
              piVar1 = (int *)(*(longlong *)(lVar5 + 0x10) + 0x28);
              iVar3 = *piVar1;
              *piVar1 = 1;
              UNLOCK();
              if (iVar3 == -1) {
                param_1 = (*(code *)PTR_futex_wake_00799b60)();
              }
              local_58 = lVar13 - 1;
              uVar6 = param_2[3];
              if (local_58 < uVar6) {
                lVar8 = param_2[2];
                local_50 = *(longlong **)(lVar8 + lVar14);
                puVar2 = (undefined4 *)(lVar8 + 8 + lVar14);
                local_48 = *puVar2;
                uStack_44 = puVar2[1];
                uStack_40 = puVar2[2];
                uStack_3c = puVar2[3];
                param_3 = lVar8 + lVar14 + 0x18;
                param_1 = (*(code *)PTR_memmove_00799258)(local_50,(uVar6 - lVar13) * 0x18);
                param_2[3] = uVar6 - 1;
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
                    (*(code *)PTR_drop_slow_007995f0)();
                  }
                  break;
                }
              }
              (*(code *)PTR_assert_failed_00799718)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00791418);
              goto LAB_00686c2a;
            }
          }
          lVar14 = lVar14 + 0x18;
          lVar13 = lVar13 + 1;
        } while (param_3 != lVar14);
      }
      <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(param_2 + 1,param_3);
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
    if (((bVar11 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)((longlong)param_2 + 4) = 1;
    }
    LOCK();
    lVar8 = *param_2;
    *(int *)param_2 = 0;
    UNLOCK();
    if ((int)lVar8 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  return;
}


