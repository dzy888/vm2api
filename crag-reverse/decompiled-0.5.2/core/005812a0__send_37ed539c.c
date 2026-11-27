// 005812a0 send

/* WARNING: Switch with 1 destination removed at 0x00581492 */
/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::send */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  
  lVar4 = *param_1;
  LOCK();
  puVar1 = (ulonglong *)(lVar4 + 0x88);
  uVar23 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar25 = uVar23 & 0xffffffffffffffe0;
  lVar19 = *(longlong *)(lVar4 + 0x80);
  uVar18 = uVar25 - *(longlong *)(lVar19 + 0x600);
  uVar26 = (uint)uVar23;
  if (uVar18 != 0) {
    bVar27 = (ulonglong)(uVar26 & 0x1f) < uVar18 >> 5;
    lVar24 = lVar19;
    do {
      while( true ) {
        lVar19 = *(longlong *)(lVar24 + 0x608);
        if (*(longlong *)(lVar24 + 0x608) == 0) {
          lVar5 = *(longlong *)(lVar24 + 0x600);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar19 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar19 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          *(longlong *)(lVar19 + 0x600) = lVar5 + 0x20;
          *(undefined8 *)(lVar19 + 0x608) = 0;
          *(undefined8 *)(lVar19 + 0x610) = 0;
          *(undefined8 *)(lVar19 + 0x618) = 0;
          lVar20 = 0;
          LOCK();
          lVar5 = *(longlong *)(lVar24 + 0x608);
          if (lVar5 == 0) {
            *(longlong *)(lVar24 + 0x608) = lVar19;
          }
          else {
            lVar20 = lVar5;
          }
          UNLOCK();
          if (lVar5 != 0) {
            *(longlong *)(lVar19 + 0x600) = *(longlong *)(lVar20 + 0x600) + 0x20;
            lVar21 = 0;
            LOCK();
            lVar5 = *(longlong *)(lVar20 + 0x608);
            if (lVar5 == 0) {
              *(longlong *)(lVar20 + 0x608) = lVar19;
            }
            else {
              lVar21 = lVar5;
            }
            UNLOCK();
            if (lVar5 != 0) {
              do {
                *(longlong *)(lVar19 + 0x600) = *(longlong *)(lVar21 + 0x600) + 0x20;
                lVar22 = 0;
                LOCK();
                lVar5 = *(longlong *)(lVar21 + 0x608);
                if (lVar5 == 0) {
                  *(longlong *)(lVar21 + 0x608) = lVar19;
                }
                else {
                  lVar22 = lVar5;
                }
                UNLOCK();
                lVar21 = lVar22;
              } while (lVar5 != 0);
            }
            lVar19 = lVar20;
          }
        }
        if ((bool)(bVar27 & (int)*(undefined8 *)(lVar24 + 0x610) == -1)) break;
LAB_00581300:
        bVar27 = false;
        lVar24 = lVar19;
        if (*(ulonglong *)(lVar19 + 0x600) == uVar25) goto LAB_00581447;
      }
      LOCK();
      bVar27 = lVar24 == *(longlong *)(lVar4 + 0x80);
      if (bVar27) {
        *(longlong *)(lVar4 + 0x80) = lVar19;
      }
      UNLOCK();
      if (!bVar27) goto LAB_00581300;
      LOCK();
      UNLOCK();
      *(undefined8 *)(lVar24 + 0x618) = *(undefined8 *)(lVar4 + 0x88);
      LOCK();
      *(ulonglong *)(lVar24 + 0x610) = *(ulonglong *)(lVar24 + 0x610) | 0x100000000;
      UNLOCK();
      bVar27 = true;
      lVar24 = lVar19;
    } while (*(ulonglong *)(lVar19 + 0x600) != uVar25);
  }
LAB_00581447:
  uVar26 = uVar26 & 0x1f;
  uVar23 = (ulonglong)(uVar26 * 0x30);
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  uVar11 = param_2[4];
  uVar12 = param_2[5];
  uVar13 = param_2[6];
  uVar14 = param_2[7];
  uVar15 = param_2[9];
  uVar16 = param_2[10];
  uVar17 = param_2[0xb];
  puVar2 = (undefined4 *)(lVar19 + 0x20 + uVar23);
  *puVar2 = param_2[8];
  puVar2[1] = uVar15;
  puVar2[2] = uVar16;
  puVar2[3] = uVar17;
  puVar2 = (undefined4 *)(lVar19 + 0x10 + uVar23);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  puVar2 = (undefined4 *)(lVar19 + uVar23);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  LOCK();
  *(ulonglong *)(lVar19 + 0x610) = *(ulonglong *)(lVar19 + 0x610) | 1L << (sbyte)uVar26;
  UNLOCK();
  uVar23 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar18 = *(ulonglong *)(lVar4 + 0x110);
    bVar27 = uVar23 == uVar18;
    if (bVar27) {
      *(ulonglong *)(lVar4 + 0x110) = uVar23 | 2;
    }
    else {
      uVar23 = uVar18;
    }
    UNLOCK();
  } while (!bVar27);
  if (uVar23 == 0) {
    lVar19 = *(longlong *)(lVar4 + 0x100);
    uVar23 = *(ulonglong *)(lVar4 + 0x108);
    *(longlong *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (**(code **)(lVar19 + 8))(lVar19,uVar3);
      return uVar23;
    }
  }
  return uVar23;
}


