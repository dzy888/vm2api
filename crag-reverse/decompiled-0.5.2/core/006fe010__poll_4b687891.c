// 006fe010 poll

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire_as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
      undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 unaff_RBP;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined7 uVar19;
  ulonglong uVar18;
  longlong lVar20;
  longlong *in_FS_OFFSET;
  undefined8 *local_38;
  
  piVar5 = (int *)*param_1;
  if (*(char *)(param_1 + 7) == '\x01') {
    uVar18 = param_1[5];
    uVar17 = *(ulonglong *)(piVar5 + 8);
  }
  else {
    uVar18 = param_1[6];
    uVar17 = *(ulonglong *)(piVar5 + 8);
  }
  if ((uVar17 & 1) == 0) {
    puVar1 = param_1 + 1;
    uVar16 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
LAB_006fe088:
    uVar11 = uVar17;
    if (uVar17 < uVar18 * 2) {
      if ((char)uVar16 == '\x02') {
        LOCK();
        iVar2 = *piVar5;
        if (iVar2 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar2 != 0) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          uVar16 = 0;
        }
        else {
          uVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          uVar16 = (ulonglong)uVar9 ^ 1;
        }
      }
      LOCK();
      uVar14 = *(ulonglong *)(piVar5 + 8);
      if (uVar17 == uVar14) {
        *(ulonglong *)(piVar5 + 8) = 0;
      }
      else {
        uVar11 = uVar14;
      }
      UNLOCK();
      if (uVar17 != uVar14) goto LAB_006fe07f;
      uVar17 = uVar17 >> 1;
      bVar8 = false;
      uVar18 = uVar16 & 0xffffffff;
LAB_006fe10b:
      uVar19 = (undefined7)(uVar18 >> 8);
      if ((char)piVar5[6] == '\0') {
        cVar13 = *(char *)(param_1 + 7);
        *(undefined1 *)(param_1 + 7) = 1;
        uVar11 = param_1[5];
        do {
          uVar10 = uVar11;
          uVar14 = uVar10;
          if (uVar17 < uVar10) {
            uVar14 = uVar17;
          }
          LOCK();
          uVar3 = param_1[5];
          if (uVar10 == uVar3) {
            param_1[5] = uVar10 - uVar14;
            uVar11 = uVar10;
          }
          else {
            uVar11 = uVar3;
          }
          UNLOCK();
        } while (uVar10 != uVar3);
        if (uVar17 < uVar10) {
          puVar15 = (undefined8 *)param_1[1];
          puVar6 = *(undefined8 **)*param_2;
          if (((puVar15 == (undefined8 *)0x0) || (puVar15 != puVar6)) ||
             (param_1[2] != ((longlong *)*param_2)[1])) {
            uVar12 = (*(code *)*puVar6)();
            lVar20 = param_1[1];
            param_1[1] = uVar12;
            param_1[2] = puVar15;
          }
          else {
            lVar20 = 0;
          }
          if (cVar13 == '\0') {
            puVar15 = *(undefined8 **)(piVar5 + 2);
            local_38 = puVar1;
            if (puVar15 == puVar1) {
              (*(code *)
                PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::sync::batch_semaphore::Waiter>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::sync::batch_semaphore::Waiter>>>_0079a850
              )(0,&local_38,param_5,
                &anon_1c7207ea9655bfcf55d918eab6d9918c_48_llvm_17559541839288726608);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            param_1[4] = puVar15;
            param_1[3] = 0;
            if (puVar15 != (undefined8 *)0x0) {
              puVar15[2] = puVar1;
            }
            *(undefined8 **)(piVar5 + 2) = puVar1;
            if (*(longlong *)(piVar5 + 4) == 0) {
              *(undefined8 **)(piVar5 + 4) = puVar1;
            }
          }
          if ((((uVar18 & 1) == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
            *(undefined1 *)(piVar5 + 1) = 1;
          }
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = 0;
          UNLOCK();
          if (iVar2 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          if (lVar20 != 0) {
            (**(code **)(lVar20 + 0x18))();
          }
          uVar17 = CONCAT71(uVar19,2);
          if ((!bVar8) || ((char)uVar16 == '\x02')) goto LAB_006fe2dd;
          if (((uVar16 & 1) == 0) &&
             (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0 &&
              (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')))) {
            *(undefined1 *)(piVar5 + 1) = 1;
          }
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = 0;
          UNLOCK();
          uVar17 = CONCAT71(uVar19,2);
          if (iVar2 != 2) goto LAB_006fe2dd;
          goto LAB_006fe3fd;
        }
        <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
                  (piVar5,uVar17 - uVar14,piVar5,uVar18 & 0xff);
        uVar17 = 0;
      }
      else {
        if ((((uVar18 & 1) == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
          *(undefined1 *)(piVar5 + 1) = 1;
        }
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = 0;
        UNLOCK();
        uVar17 = CONCAT71(uVar19,1);
        if (iVar2 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      if (bVar8) goto LAB_006fe258;
      goto LAB_006fe28e;
    }
    LOCK();
    uVar14 = *(ulonglong *)(piVar5 + 8);
    if (uVar17 == uVar14) {
      *(ulonglong *)(piVar5 + 8) = uVar17 + uVar18 * -2;
    }
    else {
      uVar11 = uVar14;
    }
    UNLOCK();
    if (uVar17 != uVar14) goto LAB_006fe07f;
    if (*(char *)(param_1 + 7) == '\x01') {
      uVar17 = uVar18 & 0x7fffffffffffffff;
      if ((char)uVar16 == '\x02') {
        LOCK();
        iVar2 = *piVar5;
        if (iVar2 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar2 != 0) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          uVar18 = 0;
        }
        else {
          uVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          uVar18 = (ulonglong)uVar9 ^ 1;
        }
        bVar8 = true;
        uVar16 = 2;
      }
      else {
        bVar8 = false;
        uVar18 = uVar16 & 0xffffffff;
      }
      goto LAB_006fe10b;
    }
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    uVar17 = 0;
    goto LAB_006fe258;
  }
LAB_006fe2da:
  uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
  goto LAB_006fe2dd;
LAB_006fe07f:
  uVar17 = uVar11;
  if ((uVar11 & 1) != 0) goto LAB_006fe0e8;
  goto LAB_006fe088;
LAB_006fe0e8:
  uVar17 = CONCAT71((int7)(uVar11 >> 8),1);
LAB_006fe258:
  if ((char)uVar16 == '\x02') {
LAB_006fe28e:
    cVar13 = (char)uVar17;
  }
  else {
    if ((((uVar16 & 1) == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)(piVar5 + 1) = 1;
    }
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = 0;
    UNLOCK();
    if (iVar2 != 2) goto LAB_006fe28e;
LAB_006fe3fd:
    (*(code *)PTR_wake_00799010)();
    cVar13 = (char)uVar17;
  }
  if (cVar13 == '\x02') goto LAB_006fe2dd;
  if ((uVar17 & 0xff) != 0) goto LAB_006fe2da;
  lVar20 = *in_FS_OFFSET;
  if (*(char *)(lVar20 + -0xf0) == '\0') {
    cVar13 = *(char *)(lVar20 + -0xf3);
    cVar4 = *(char *)(lVar20 + -0xf4);
joined_r0x006fe445:
    if (cVar4 == '\x01') {
      if (cVar13 == '\0') {
        (*(code *)PTR_defer_0079a740)();
        uVar17 = CONCAT71((int7)(uVar17 >> 8),2);
        goto LAB_006fe2dd;
      }
      cVar13 = cVar13 + -1;
    }
    *(char *)(lVar20 + -0xf3) = cVar13;
  }
  else if (*(char *)(lVar20 + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar20 + -0xf0) = 0;
    cVar13 = *(char *)(lVar20 + -0xf3);
    cVar4 = *(char *)(lVar20 + -0xf4);
    goto joined_r0x006fe445;
  }
  *(undefined1 *)(param_1 + 7) = 0;
  uVar17 = 0;
LAB_006fe2dd:
  return uVar17 & 0xffffffff;
}


