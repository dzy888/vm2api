// 006e0790 drop_notified

/* WARNING: Switch with 1 destination removed at 0x006e0958 */
/* <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified */

void __rustcall
<tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified
          (undefined4 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  
  if (*(char *)param_2[1] != '\x01') {
    return;
  }
  puVar2 = (ulonglong *)*param_2;
  puVar3 = (ulonglong *)param_2[3];
  puVar1 = puVar2 + 1;
  LOCK();
  bVar13 = (int)puVar2[1] == 0;
  if (bVar13) {
    *(int *)(puVar2 + 1) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    param_1 = extraout_XMM0_Da;
  }
  uVar4 = *puVar2;
  puVar10 = &switchD_006e0807::switchdataD_001b62d4;
  switch(puVar3[4]) {
  case 0:
  case 2:
    bVar13 = false;
    uVar12 = *puVar3;
    if (uVar12 == 0) goto LAB_006e0858;
    goto LAB_006e0829;
  case 1:
    puVar10 = (uint *)0x0;
    uVar12 = *puVar3;
    break;
  default:
    (*(code *)PTR_panic_00799338)(param_1,&PTR_s__vendor_tokio_1_54_1_src_sync_no_00793af8);
    goto LAB_006e09b1;
  case 5:
    puVar10 = (uint *)0x1;
    uVar12 = *puVar3;
  }
  bVar13 = true;
  if (uVar12 == 0) {
LAB_006e0858:
    puVar11 = (ulonglong *)puVar2[2];
    if (puVar11 == puVar3) {
      puVar11 = (ulonglong *)puVar3[1];
      puVar2[2] = (ulonglong)puVar11;
      goto joined_r0x006e086a;
    }
  }
  else {
LAB_006e0829:
    puVar11 = (ulonglong *)puVar3[1];
    *(ulonglong **)(uVar12 + 8) = puVar11;
joined_r0x006e086a:
    if (puVar11 == (ulonglong *)0x0) {
      if ((ulonglong *)puVar2[3] == puVar3) {
        puVar2[3] = *puVar3;
        goto LAB_006e083c;
      }
    }
    else {
      *puVar11 = *puVar3;
LAB_006e083c:
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    puVar11 = (ulonglong *)puVar2[2];
  }
  if (puVar11 == (ulonglong *)0x0) {
    if (puVar2[3] != 0) {
      (*(code *)PTR_panic_00799338)
                (puVar10,&
                         PTR_anon_3e483e6b3ccbdca1751358c89510dd96_8_llvm_15764310632135838254_00793ba0
                );
LAB_006e09b1:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (((uint)uVar4 & 3) == 1) {
      *puVar2 = uVar4 & 0xfffffffffffffffc;
    }
  }
  if ((bVar13) &&
     (lVar9 = tokio[d7d91d38da47d894]::sync::notify::notify_locked(puVar2 + 2,puVar2), lVar9 != 0))
  {
    if ((bVar7 == 0) &&
       (((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0 &&
        (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')))) {
      *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
    }
    LOCK();
    uVar4 = *puVar1;
    *(int *)puVar1 = 0;
    UNLOCK();
    if ((int)uVar4 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
                    /* WARNING: Could not recover jumptable at 0x006e08f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 8))();
    return;
  }
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  }
  LOCK();
  uVar4 = *puVar1;
  *(int *)puVar1 = 0;
  UNLOCK();
  if ((int)uVar4 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


