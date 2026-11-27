// 005809d0 send

/* WARNING: Switch with 1 destination removed at 0x00580bb6 */
/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::send */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
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
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  
  lVar4 = *param_1;
  LOCK();
  puVar1 = (ulonglong *)(lVar4 + 0x88);
  uVar15 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar17 = uVar15 & 0xffffffffffffffe0;
  lVar11 = *(longlong *)(lVar4 + 0x80);
  uVar10 = uVar17 - *(longlong *)(lVar11 + 0x300);
  uVar18 = (uint)uVar15;
  if (uVar10 == 0) {
    uVar15 = (ulonglong)(uVar18 & 0x1f);
  }
  else {
    uVar15 = (ulonglong)(uVar18 & 0x1f);
    bVar19 = uVar15 < uVar10 >> 5;
    lVar16 = lVar11;
    do {
      while( true ) {
        lVar11 = *(longlong *)(lVar16 + 0x308);
        if (*(longlong *)(lVar16 + 0x308) == 0) {
          lVar5 = *(longlong *)(lVar16 + 0x300);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar11 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar11 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          *(longlong *)(lVar11 + 0x300) = lVar5 + 0x20;
          *(undefined8 *)(lVar11 + 0x308) = 0;
          *(undefined8 *)(lVar11 + 0x310) = 0;
          *(undefined8 *)(lVar11 + 0x318) = 0;
          lVar12 = 0;
          LOCK();
          lVar5 = *(longlong *)(lVar16 + 0x308);
          if (lVar5 == 0) {
            *(longlong *)(lVar16 + 0x308) = lVar11;
          }
          else {
            lVar12 = lVar5;
          }
          UNLOCK();
          if (lVar5 != 0) {
            *(longlong *)(lVar11 + 0x300) = *(longlong *)(lVar12 + 0x300) + 0x20;
            lVar13 = 0;
            LOCK();
            lVar5 = *(longlong *)(lVar12 + 0x308);
            if (lVar5 == 0) {
              *(longlong *)(lVar12 + 0x308) = lVar11;
            }
            else {
              lVar13 = lVar5;
            }
            UNLOCK();
            if (lVar5 != 0) {
              do {
                *(longlong *)(lVar11 + 0x300) = *(longlong *)(lVar13 + 0x300) + 0x20;
                lVar14 = 0;
                LOCK();
                lVar5 = *(longlong *)(lVar13 + 0x308);
                if (lVar5 == 0) {
                  *(longlong *)(lVar13 + 0x308) = lVar11;
                }
                else {
                  lVar14 = lVar5;
                }
                UNLOCK();
                lVar13 = lVar14;
              } while (lVar5 != 0);
            }
            lVar11 = lVar12;
          }
        }
        if ((bool)(bVar19 & (int)*(undefined8 *)(lVar16 + 0x310) == -1)) break;
LAB_00580a30:
        bVar19 = false;
        lVar16 = lVar11;
        if (*(ulonglong *)(lVar11 + 0x300) == uVar17) goto LAB_00580b77;
      }
      LOCK();
      bVar19 = lVar16 == *(longlong *)(lVar4 + 0x80);
      if (bVar19) {
        *(longlong *)(lVar4 + 0x80) = lVar11;
      }
      UNLOCK();
      if (!bVar19) goto LAB_00580a30;
      LOCK();
      UNLOCK();
      *(undefined8 *)(lVar16 + 0x318) = *(undefined8 *)(lVar4 + 0x88);
      LOCK();
      *(ulonglong *)(lVar16 + 0x310) = *(ulonglong *)(lVar16 + 0x310) | 0x100000000;
      UNLOCK();
      bVar19 = true;
      lVar16 = lVar11;
    } while (*(ulonglong *)(lVar11 + 0x300) != uVar17);
  }
LAB_00580b77:
  *(undefined8 *)(lVar11 + 0x10 + uVar15 * 0x18) = *(undefined8 *)(param_2 + 4);
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  puVar2 = (undefined4 *)(lVar11 + uVar15 * 0x18);
  *puVar2 = *param_2;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  LOCK();
  *(ulonglong *)(lVar11 + 0x310) = *(ulonglong *)(lVar11 + 0x310) | 1L << (sbyte)uVar15;
  UNLOCK();
  uVar15 = *(ulonglong *)(lVar4 + 0x110);
  do {
    LOCK();
    uVar10 = *(ulonglong *)(lVar4 + 0x110);
    bVar19 = uVar15 == uVar10;
    if (bVar19) {
      *(ulonglong *)(lVar4 + 0x110) = uVar15 | 2;
    }
    else {
      uVar15 = uVar10;
    }
    UNLOCK();
  } while (!bVar19);
  if (uVar15 == 0) {
    lVar11 = *(longlong *)(lVar4 + 0x100);
    uVar15 = *(ulonglong *)(lVar4 + 0x108);
    *(longlong *)(lVar4 + 0x100) = 0;
    LOCK();
    uVar3 = *(undefined8 *)(lVar4 + 0x110);
    *(undefined8 *)(lVar4 + 0x110) = 0;
    UNLOCK();
    if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (**(code **)(lVar11 + 8))(lVar11,uVar3);
      return uVar15;
    }
  }
  return uVar15;
}


