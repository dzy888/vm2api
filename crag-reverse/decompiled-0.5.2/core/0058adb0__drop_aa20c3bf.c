// 0058adb0 drop

/* WARNING: Switch with 1 destination removed at 0x0058ae1a */
/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined *puVar7;
  ulonglong in_RAX;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  lVar4 = *param_1;
  LOCK();
  plVar1 = (longlong *)(lVar4 + 0x1c8);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return in_RAX;
  }
  LOCK();
  puVar2 = (ulonglong *)(lVar4 + 0x88);
  uVar12 = *puVar2;
  *puVar2 = *puVar2 + 1;
  puVar7 = PTR___rust_alloc_00799000;
  UNLOCK();
  uVar15 = uVar12 & 0xffffffffffffffe0;
  lVar8 = *(longlong *)(lVar4 + 0x80);
  uVar14 = uVar15 - *(longlong *)(lVar8 + 0x400);
  if (uVar14 != 0) {
    bVar16 = (ulonglong)((uint)uVar12 & 0x1f) < uVar14 >> 5;
    lVar13 = lVar8;
    do {
      while( true ) {
        lVar8 = *(longlong *)(lVar13 + 0x408);
        if (*(longlong *)(lVar13 + 0x408) == 0) {
          lVar5 = *(longlong *)(lVar13 + 0x400);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar8 = (*(code *)puVar7)();
          if (lVar8 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return uVar12;
          }
          *(longlong *)(lVar8 + 0x400) = lVar5 + 0x20;
          *(undefined8 *)(lVar8 + 0x408) = 0;
          *(undefined8 *)(lVar8 + 0x410) = 0;
          *(undefined8 *)(lVar8 + 0x418) = 0;
          lVar9 = 0;
          LOCK();
          lVar5 = *(longlong *)(lVar13 + 0x408);
          if (lVar5 == 0) {
            *(longlong *)(lVar13 + 0x408) = lVar8;
          }
          else {
            lVar9 = lVar5;
          }
          UNLOCK();
          if (lVar5 != 0) {
            *(longlong *)(lVar8 + 0x400) = *(longlong *)(lVar9 + 0x400) + 0x20;
            lVar10 = 0;
            LOCK();
            lVar5 = *(longlong *)(lVar9 + 0x408);
            if (lVar5 == 0) {
              *(longlong *)(lVar9 + 0x408) = lVar8;
            }
            else {
              lVar10 = lVar5;
            }
            UNLOCK();
            if (lVar5 != 0) {
              do {
                *(longlong *)(lVar8 + 0x400) = *(longlong *)(lVar10 + 0x400) + 0x20;
                lVar11 = 0;
                LOCK();
                lVar5 = *(longlong *)(lVar10 + 0x408);
                if (lVar5 == 0) {
                  *(longlong *)(lVar10 + 0x408) = lVar8;
                }
                else {
                  lVar11 = lVar5;
                }
                UNLOCK();
                lVar10 = lVar11;
              } while (lVar5 != 0);
            }
            lVar8 = lVar9;
          }
        }
        if ((bool)(bVar16 & (int)*(undefined8 *)(lVar13 + 0x410) == -1)) break;
LAB_0058ae50:
        bVar16 = false;
        lVar13 = lVar8;
        if (*(ulonglong *)(lVar8 + 0x400) == uVar15) goto LAB_0058adf0;
      }
      LOCK();
      bVar16 = lVar13 == *(longlong *)(lVar4 + 0x80);
      if (bVar16) {
        *(longlong *)(lVar4 + 0x80) = lVar8;
      }
      UNLOCK();
      if (!bVar16) goto LAB_0058ae50;
      LOCK();
      UNLOCK();
      *(undefined8 *)(lVar13 + 0x418) = *(undefined8 *)(lVar4 + 0x88);
      LOCK();
      *(ulonglong *)(lVar13 + 0x410) = *(ulonglong *)(lVar13 + 0x410) | 0x100000000;
      UNLOCK();
      bVar16 = true;
      lVar13 = lVar8;
    } while (*(ulonglong *)(lVar8 + 0x400) != uVar15);
  }
LAB_0058adf0:
  LOCK();
  *(ulonglong *)(lVar8 + 0x410) = *(ulonglong *)(lVar8 + 0x410) | 0x200000000;
  UNLOCK();
  uVar12 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar14 = *(ulonglong *)(lVar4 + 0x110);
    bVar16 = uVar12 == uVar14;
    if (bVar16) {
      *(ulonglong *)(lVar4 + 0x110) = uVar12 | 2;
    }
    else {
      uVar12 = uVar14;
    }
    UNLOCK();
  } while (!bVar16);
  if (uVar12 == 0) {
    lVar8 = *(longlong *)(lVar4 + 0x100);
    uVar12 = *(ulonglong *)(lVar4 + 0x108);
    *(longlong *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(lVar8 + 8))(lVar8,uVar3);
      return uVar12;
    }
  }
  return uVar12;
}


