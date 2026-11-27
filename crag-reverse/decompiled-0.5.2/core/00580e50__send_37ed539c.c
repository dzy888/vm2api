// 00580e50 send

/* WARNING: Switch with 1 destination removed at 0x00581038 */
/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>::send */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>
::send(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  
  lVar4 = *param_1;
  LOCK();
  puVar1 = (ulonglong *)(lVar4 + 0x88);
  uVar19 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar21 = uVar19 & 0xffffffffffffffe0;
  lVar15 = *(longlong *)(lVar4 + 0x80);
  uVar14 = uVar21 - *(longlong *)(lVar15 + 0x400);
  uVar22 = (uint)uVar19;
  if (uVar14 != 0) {
    bVar23 = (ulonglong)(uVar22 & 0x1f) < uVar14 >> 5;
    lVar20 = lVar15;
    do {
      while( true ) {
        lVar15 = *(longlong *)(lVar20 + 0x408);
        if (*(longlong *)(lVar20 + 0x408) == 0) {
          lVar5 = *(longlong *)(lVar20 + 0x400);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar15 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar15 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          *(longlong *)(lVar15 + 0x400) = lVar5 + 0x20;
          *(undefined8 *)(lVar15 + 0x408) = 0;
          *(undefined8 *)(lVar15 + 0x410) = 0;
          *(undefined8 *)(lVar15 + 0x418) = 0;
          lVar16 = 0;
          LOCK();
          lVar5 = *(longlong *)(lVar20 + 0x408);
          if (lVar5 == 0) {
            *(longlong *)(lVar20 + 0x408) = lVar15;
          }
          else {
            lVar16 = lVar5;
          }
          UNLOCK();
          if (lVar5 != 0) {
            *(longlong *)(lVar15 + 0x400) = *(longlong *)(lVar16 + 0x400) + 0x20;
            lVar17 = 0;
            LOCK();
            lVar5 = *(longlong *)(lVar16 + 0x408);
            if (lVar5 == 0) {
              *(longlong *)(lVar16 + 0x408) = lVar15;
            }
            else {
              lVar17 = lVar5;
            }
            UNLOCK();
            if (lVar5 != 0) {
              do {
                *(longlong *)(lVar15 + 0x400) = *(longlong *)(lVar17 + 0x400) + 0x20;
                lVar18 = 0;
                LOCK();
                lVar5 = *(longlong *)(lVar17 + 0x408);
                if (lVar5 == 0) {
                  *(longlong *)(lVar17 + 0x408) = lVar15;
                }
                else {
                  lVar18 = lVar5;
                }
                UNLOCK();
                lVar17 = lVar18;
              } while (lVar5 != 0);
            }
            lVar15 = lVar16;
          }
        }
        if ((bool)(bVar23 & (int)*(undefined8 *)(lVar20 + 0x410) == -1)) break;
LAB_00580eb0:
        bVar23 = false;
        lVar20 = lVar15;
        if (*(ulonglong *)(lVar15 + 0x400) == uVar21) goto LAB_00580ff7;
      }
      LOCK();
      bVar23 = lVar20 == *(longlong *)(lVar4 + 0x80);
      if (bVar23) {
        *(longlong *)(lVar4 + 0x80) = lVar15;
      }
      UNLOCK();
      if (!bVar23) goto LAB_00580eb0;
      LOCK();
      UNLOCK();
      *(undefined8 *)(lVar20 + 0x418) = *(undefined8 *)(lVar4 + 0x88);
      LOCK();
      *(ulonglong *)(lVar20 + 0x410) = *(ulonglong *)(lVar20 + 0x410) | 0x100000000;
      UNLOCK();
      bVar23 = true;
      lVar20 = lVar15;
    } while (*(ulonglong *)(lVar15 + 0x400) != uVar21);
  }
LAB_00580ff7:
  uVar22 = uVar22 & 0x1f;
  uVar19 = (ulonglong)(uVar22 << 5);
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  puVar2 = (undefined4 *)(lVar15 + 0x10 + uVar19);
  *puVar2 = param_2[4];
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  puVar2 = (undefined4 *)(lVar15 + uVar19);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  LOCK();
  *(ulonglong *)(lVar15 + 0x410) = *(ulonglong *)(lVar15 + 0x410) | 1L << (sbyte)uVar22;
  UNLOCK();
  uVar19 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar14 = *(ulonglong *)(lVar4 + 0x110);
    bVar23 = uVar19 == uVar14;
    if (bVar23) {
      *(ulonglong *)(lVar4 + 0x110) = uVar19 | 2;
    }
    else {
      uVar19 = uVar14;
    }
    UNLOCK();
  } while (!bVar23);
  if (uVar19 == 0) {
    lVar15 = *(longlong *)(lVar4 + 0x100);
    uVar19 = *(ulonglong *)(lVar4 + 0x108);
    *(longlong *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar19 = (**(code **)(lVar15 + 8))(lVar15,uVar3);
      return uVar19;
    }
  }
  return uVar19;
}


