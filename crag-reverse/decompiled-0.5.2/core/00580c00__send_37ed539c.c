// 00580c00 send

/* WARNING: Switch with 1 destination removed at 0x00580e13 */
/* <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::send */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::send(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  bool bVar32;
  
  lVar5 = *param_1;
  LOCK();
  puVar1 = (ulonglong *)(lVar5 + 0x88);
  uVar29 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar30 = uVar29 & 0xffffffffffffffe0;
  lVar24 = *(longlong *)(lVar5 + 0x80);
  uVar23 = uVar30 - *(longlong *)(lVar24 + 0xd00);
  uVar31 = (uint)uVar29;
  if (uVar23 == 0) {
    uVar29 = (ulonglong)(uVar31 & 0x1f);
  }
  else {
    uVar29 = (ulonglong)(uVar31 & 0x1f);
    bVar32 = uVar29 < uVar23 >> 5;
    lVar28 = lVar24;
    do {
      while( true ) {
        lVar24 = *(longlong *)(lVar28 + 0xd08);
        if (*(longlong *)(lVar28 + 0xd08) == 0) {
          lVar6 = *(longlong *)(lVar28 + 0xd00);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar24 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar24 == 0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(longlong *)(lVar24 + 0xd00) = lVar6 + 0x20;
          *(undefined8 *)(lVar24 + 0xd08) = 0;
          *(undefined8 *)(lVar24 + 0xd10) = 0;
          *(undefined8 *)(lVar24 + 0xd18) = 0;
          lVar25 = 0;
          LOCK();
          lVar6 = *(longlong *)(lVar28 + 0xd08);
          if (lVar6 == 0) {
            *(longlong *)(lVar28 + 0xd08) = lVar24;
          }
          else {
            lVar25 = lVar6;
          }
          UNLOCK();
          if (lVar6 != 0) {
            *(longlong *)(lVar24 + 0xd00) = *(longlong *)(lVar25 + 0xd00) + 0x20;
            lVar26 = 0;
            LOCK();
            lVar6 = *(longlong *)(lVar25 + 0xd08);
            if (lVar6 == 0) {
              *(longlong *)(lVar25 + 0xd08) = lVar24;
            }
            else {
              lVar26 = lVar6;
            }
            UNLOCK();
            if (lVar6 != 0) {
              do {
                *(longlong *)(lVar24 + 0xd00) = *(longlong *)(lVar26 + 0xd00) + 0x20;
                lVar27 = 0;
                LOCK();
                lVar6 = *(longlong *)(lVar26 + 0xd08);
                if (lVar6 == 0) {
                  *(longlong *)(lVar26 + 0xd08) = lVar24;
                }
                else {
                  lVar27 = lVar6;
                }
                UNLOCK();
                lVar26 = lVar27;
              } while (lVar6 != 0);
            }
            lVar24 = lVar25;
          }
        }
        if ((bool)(bVar32 & (int)*(undefined8 *)(lVar28 + 0xd10) == -1)) break;
LAB_00580c60:
        bVar32 = false;
        lVar28 = lVar24;
        if (*(ulonglong *)(lVar24 + 0xd00) == uVar30) goto LAB_00580da7;
      }
      LOCK();
      bVar32 = lVar28 == *(longlong *)(lVar5 + 0x80);
      if (bVar32) {
        *(longlong *)(lVar5 + 0x80) = lVar24;
      }
      UNLOCK();
      if (!bVar32) goto LAB_00580c60;
      LOCK();
      UNLOCK();
      *(undefined8 *)(lVar28 + 0xd18) = *(undefined8 *)(lVar5 + 0x88);
      LOCK();
      *(ulonglong *)(lVar28 + 0xd10) = *(ulonglong *)(lVar28 + 0xd10) | 0x100000000;
      UNLOCK();
      bVar32 = true;
      lVar28 = lVar24;
    } while (*(ulonglong *)(lVar24 + 0xd00) != uVar30);
  }
LAB_00580da7:
  lVar28 = uVar29 * 0x68;
  *(undefined8 *)(lVar24 + 0x60 + lVar28) = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  puVar2 = (undefined8 *)(lVar24 + 0x50 + lVar28);
  *puVar2 = *(undefined8 *)(param_2 + 0x14);
  puVar2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x12);
  puVar2 = (undefined8 *)(lVar24 + 0x40 + lVar28);
  *puVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar2[1] = uVar4;
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar12 = param_2[4];
  uVar13 = param_2[5];
  uVar14 = param_2[6];
  uVar15 = param_2[7];
  uVar16 = param_2[8];
  uVar17 = param_2[9];
  uVar18 = param_2[10];
  uVar19 = param_2[0xb];
  uVar20 = param_2[0xd];
  uVar21 = param_2[0xe];
  uVar22 = param_2[0xf];
  puVar3 = (undefined4 *)(lVar24 + 0x30 + lVar28);
  *puVar3 = param_2[0xc];
  puVar3[1] = uVar20;
  puVar3[2] = uVar21;
  puVar3[3] = uVar22;
  puVar3 = (undefined4 *)(lVar24 + 0x20 + lVar28);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  puVar3 = (undefined4 *)(lVar24 + 0x10 + lVar28);
  *puVar3 = uVar12;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  puVar3 = (undefined4 *)(lVar24 + lVar28);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  LOCK();
  *(ulonglong *)(lVar24 + 0xd10) = *(ulonglong *)(lVar24 + 0xd10) | 1L << (sbyte)uVar29;
  UNLOCK();
  uVar29 = *(ulonglong *)(lVar5 + 0x110);
  do {
    LOCK();
    uVar23 = *(ulonglong *)(lVar5 + 0x110);
    bVar32 = uVar29 == uVar23;
    if (bVar32) {
      *(ulonglong *)(lVar5 + 0x110) = uVar29 | 2;
    }
    else {
      uVar29 = uVar23;
    }
    UNLOCK();
  } while (!bVar32);
  if (uVar29 == 0) {
    lVar24 = *(longlong *)(lVar5 + 0x100);
    uVar29 = *(ulonglong *)(lVar5 + 0x108);
    *(longlong *)(lVar5 + 0x100) = 0;
    LOCK();
    uVar4 = *(undefined8 *)(lVar5 + 0x110);
    *(undefined8 *)(lVar5 + 0x110) = 0;
    UNLOCK();
    if (lVar24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar29 = (**(code **)(lVar24 + 8))(lVar24,uVar4);
      return uVar29;
    }
  }
  return uVar29;
}


