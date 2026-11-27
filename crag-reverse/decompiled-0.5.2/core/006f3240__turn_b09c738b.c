// 006f3240 turn

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::turn */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::turn
          (longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong local_58;
  undefined1 *local_50;
  undefined *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  if (*param_2 != 0) {
    LOCK();
    bVar12 = (int)param_2[1] == 0;
    if (bVar12) {
      *(int *)(param_2 + 1) = 1;
    }
    UNLOCK();
    if (!bVar12) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar4 = bVar4 ^ 1;
    }
    local_40 = param_2;
    <tokio[d7d91d38da47d894]::runtime::io::registration_set::RegistrationSet>::release
              (param_2,param_2 + 2);
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)((longlong)local_40 + 0xc) = 1;
    }
    LOCK();
    lVar10 = param_2[1];
    *(int *)(param_2 + 1) = 0;
    UNLOCK();
    if ((int)lVar10 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  lVar10 = param_1 + 0x18;
  if (param_3 != 0) {
    lVar10 = param_1;
  }
  if (*(longlong *)(param_1 + 0x18) == -1) {
    lVar10 = param_1;
  }
  if (param_4 == -1) {
    lVar10 = param_1;
  }
  if (param_4 != 0) {
    lVar10 = param_1;
  }
  local_58 = (*(code *)PTR_poll_0079a8d8)();
  local_38 = local_58;
  if (local_58 != 0) {
    uVar9 = (uint)local_58 & 3;
    switch(uVar9) {
    case 0:
      cVar5 = *(char *)(local_58 + 0x10);
      break;
    case 1:
      cVar5 = *(char *)(local_58 + 0x1f);
      break;
    case 2:
      lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar5 = (**(code **)(lVar6 + 8))();
      break;
    case 3:
      cVar5 = (char)(local_58 >> 0x20);
    }
    if (cVar5 != '#') {
      local_48 = PTR_fmt_007994c0;
      local_50 = (undefined1 *)&local_58;
      (*(code *)PTR_panic_fmt_007991a8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((1 < uVar9 - 2) && ((local_58 & 3) != 0)) {
      local_48 = (undefined *)(local_58 - 1);
      local_50 = (undefined1 *)CONCAT71(local_50._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (*(longlong *)(lVar10 + 0x10) != 0) {
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar10 + 8) + 4 + uVar11 * 0xc);
      if (lVar6 == 1) {
        *(undefined1 *)(param_1 + 0x34) = 1;
      }
      else if (lVar6 != 0) {
        uVar9 = *(uint *)(*(longlong *)(lVar10 + 8) + uVar11 * 0xc);
        uVar8 = (ulonglong)((uVar9 & 3) != 0);
        uVar7 = uVar8 + 2;
        if ((uVar9 & 4) == 0) {
          uVar7 = uVar8;
        }
        if ((uVar9 & 0x10) == 0) {
          uVar8 = uVar7 + 4;
          if ((~uVar9 & 0x2001) != 0) {
            uVar8 = uVar7;
          }
          if ((uVar9 & 4) == 0) {
            if (uVar9 == 8) goto LAB_006f3408;
          }
          else if ((uVar9 & 8) != 0) goto LAB_006f3408;
        }
        else {
          uVar8 = uVar7 | 4;
LAB_006f3408:
          uVar8 = uVar8 | 8;
        }
        uVar7 = *(ulonglong *)(lVar6 + 0x10);
        do {
          LOCK();
          uVar1 = *(ulonglong *)(lVar6 + 0x10);
          bVar12 = uVar7 == uVar1;
          if (bVar12) {
            *(ulonglong *)(lVar6 + 0x10) =
                 (ulonglong)((uint)uVar7 & 0x8000003f) |
                 (uVar9 * 4 & 0x20) + (uVar9 & 2) * 8 | uVar8 |
                 (ulonglong)((uint)uVar7 + 0x10000 & 0x7fff0000);
          }
          else {
            uVar7 = uVar1;
          }
          UNLOCK();
        } while (!bVar12);
        <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ulonglong *)(lVar10 + 0x10));
  }
  return;
}


