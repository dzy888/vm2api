// 006e5b50 poll

/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

ulonglong * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness_as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *local_38;
  
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x18);
  puVar4 = (ulonglong *)*param_3;
  cVar8 = (char)param_2[7];
  if (cVar8 != '\0') goto LAB_006e5ba2;
  while( true ) {
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    uVar14 = param_2[5];
    uVar13 = -((uint)uVar14 & 1) & 5;
    uVar16 = uVar13 + 10;
    if ((uVar14 & 2) == 0) {
      uVar16 = uVar13;
    }
    uVar13 = uVar16 | 0x14;
    if ((uVar14 & 0x10) == 0) {
      uVar13 = uVar16;
    }
    uVar13 = (uint)uVar14 & 0x20 | uVar13;
    if (((uint)uVar5 & (uVar13 | 0x80000000)) != 0) {
      *(undefined1 *)(param_2 + 7) = 2;
      *param_1 = (ulonglong)(uVar13 & (uint)uVar5);
      *(ushort *)(param_1 + 1) = (ushort)((ulonglong)uVar5 >> 0x10) & 0x7fff;
      *(byte *)((longlong)param_1 + 10) = (byte)((ulonglong)uVar5 >> 0x18) >> 7;
      return param_1;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar9 = bVar9 ^ 1;
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    uVar12 = -((int)(uint)uVar5 >> 0x1f);
    uVar16 = 0x3f;
    if (uVar12 == 0) {
      uVar16 = (uint)uVar5;
    }
    uVar14 = (ulonglong)(uVar13 & uVar16 | uVar12);
    if (uVar14 != 0) break;
    lVar10 = (**(code **)*puVar4)();
    lVar11 = param_2[3];
    param_2[3] = lVar10;
    param_2[4] = uVar14;
    local_38 = param_2 + 1;
    plVar6 = *(longlong **)(lVar3 + 0x20);
    if (plVar6 == local_38) {
      (*(code *)
        PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>>_0079a7b0
      )(0,&local_38);
LAB_006e5f30:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    param_2[2] = (longlong)plVar6;
    param_2[1] = 0;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)local_38;
    }
    *(longlong **)(lVar3 + 0x20) = local_38;
    if (*(longlong *)(lVar3 + 0x28) == 0) {
      *(longlong **)(lVar3 + 0x28) = local_38;
      *(undefined1 *)(param_2 + 7) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 7) = 1;
    }
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))();
    }
    while( true ) {
      if (((bVar9 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *(undefined1 *)(lVar3 + 0x1c) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
        cVar8 = (char)param_2[7];
      }
      else {
        cVar8 = (char)param_2[7];
      }
      if (cVar8 == '\0') break;
LAB_006e5ba2:
      if (cVar8 != '\x01') {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        uVar14 = param_2[5];
        uVar13 = -((uint)uVar14 & 1) & 5;
        uVar16 = uVar13 + 10;
        if ((uVar14 & 2) == 0) {
          uVar16 = uVar13;
        }
        uVar13 = uVar16 | 0x14;
        if ((uVar14 & 0x10) == 0) {
          uVar13 = uVar16;
        }
        *param_1 = (ulonglong)((uVar13 | (uint)uVar14 & 0x20) & (uint)uVar5);
        *(ushort *)(param_1 + 1) = (ushort)((ulonglong)uVar5 >> 0x10) & 0x7fff;
        *(byte *)((longlong)param_1 + 10) = (byte)((ulonglong)uVar5 >> 0x18) >> 7;
        return param_1;
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar9 = 0;
        cVar8 = (char)param_2[6];
      }
      else {
        bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar9 = bVar9 ^ 1;
        cVar8 = (char)param_2[6];
      }
      if (cVar8 == '\0') {
        uVar14 = param_2[3];
        if (uVar14 == 0) {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_006e5f30;
        }
        uVar15 = uVar14 ^ *puVar4 | param_2[4] ^ puVar4[1];
        if (uVar15 != 0) {
          lVar11 = (**(code **)*puVar4)();
          (**(code **)(uVar14 + 0x18))();
          param_2[3] = lVar11;
          param_2[4] = uVar15;
        }
        *(undefined1 *)((longlong)param_1 + 10) = 2;
        goto joined_r0x006e5e97;
      }
      *(undefined1 *)(param_2 + 7) = 2;
    }
  }
  *(undefined1 *)(param_2 + 7) = 2;
  *param_1 = (ulonglong)(uVar13 & uVar16);
  *(ushort *)(param_1 + 1) = (ushort)((ulonglong)uVar5 >> 0x10) & 0x7fff;
  *(byte *)((longlong)param_1 + 10) = (byte)((ulonglong)uVar5 >> 0x18) >> 7;
joined_r0x006e5e97:
  if (((bVar9 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(lVar3 + 0x1c) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
}


