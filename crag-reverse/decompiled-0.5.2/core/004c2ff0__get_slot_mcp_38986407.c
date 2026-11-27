// 004c2ff0 get_slot_mcp

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_slot_mcp */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_slot_mcp
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  byte bVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uint uVar19;
  bool bVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x138);
  LOCK();
  bVar20 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar20) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar20) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar18 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    lVar3 = *(longlong *)(lVar2 + 0x30);
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
    lVar3 = *(longlong *)(lVar2 + 0x30);
  }
  if (lVar3 == 0) {
    uVar15 = 0;
  }
  else {
    uVar14 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(lVar2 + 0x38,param_2,param_3);
    puVar9 = PTR_bcmp_00799020;
    lVar3 = *(longlong *)(lVar2 + 0x18);
    uVar4 = *(ulonglong *)(lVar2 + 0x20);
    bVar21 = (byte)(uVar14 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar16 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar4;
      auVar1 = *(undefined1 (*) [16])(lVar3 + uVar14);
      auVar23[0] = -(auVar1[0] == auVar22[0]);
      auVar23[1] = -(auVar1[1] == auVar22[1]);
      auVar23[2] = -(auVar1[2] == auVar22[2]);
      auVar23[3] = -(auVar1[3] == auVar22[3]);
      auVar23[4] = -(auVar1[4] == auVar22[4]);
      auVar23[5] = -(auVar1[5] == auVar22[5]);
      auVar23[6] = -(auVar1[6] == auVar22[6]);
      auVar23[7] = -(auVar1[7] == auVar22[7]);
      auVar23[8] = -(auVar1[8] == auVar22[0]);
      auVar23[9] = -(auVar1[9] == auVar22[1]);
      auVar23[10] = -(auVar1[10] == auVar22[2]);
      auVar23[0xb] = -(auVar1[0xb] == auVar22[3]);
      auVar23[0xc] = -(auVar1[0xc] == auVar22[4]);
      auVar23[0xd] = -(auVar1[0xd] == auVar22[5]);
      auVar23[0xe] = -(auVar1[0xe] == auVar22[6]);
      auVar23[0xf] = -(auVar1[0xf] == auVar22[7]);
      uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar12;
      if (uVar12 != 0) {
        do {
          uVar7 = 0;
          for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar17 = lVar3 + (uVar7 + uVar14 & uVar4) * -0x20;
          if ((param_3 == *(longlong *)(lVar17 + -0x10)) &&
             (iVar13 = (*(code *)puVar9)(uVar14,param_3,puVar9,auVar1._0_8_,uVar14,param_2),
             iVar13 == 0)) {
            plVar5 = *(longlong **)(lVar17 + -8);
            LOCK();
            lVar3 = *plVar5;
            *plVar5 = *plVar5 + 1;
            UNLOCK();
            if (*plVar5 == 0 || SCARRY8(lVar3,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            uVar15 = *(undefined8 *)(lVar17 + -8);
            puVar18 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
            goto joined_r0x004c316b;
          }
          uVar12 = (ushort)(uVar19 - 1) & (ushort)uVar19;
          uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar12);
          puVar18 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
        } while (uVar12 != 0);
      }
      uVar15 = 0;
      auVar24[0] = -(auVar1[0] == -1);
      auVar24[1] = -(auVar1[1] == -1);
      auVar24[2] = -(auVar1[2] == -1);
      auVar24[3] = -(auVar1[3] == -1);
      auVar24[4] = -(auVar1[4] == -1);
      auVar24[5] = -(auVar1[5] == -1);
      auVar24[6] = -(auVar1[6] == -1);
      auVar24[7] = -(auVar1[7] == -1);
      auVar24[8] = -(auVar1[8] == -1);
      auVar24[9] = -(auVar1[9] == -1);
      auVar24[10] = -(auVar1[10] == -1);
      auVar24[0xb] = -(auVar1[0xb] == -1);
      auVar24[0xc] = -(auVar1[0xc] == -1);
      auVar24[0xd] = -(auVar1[0xd] == -1);
      auVar24[0xe] = -(auVar1[0xe] == -1);
      auVar24[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar14 = uVar14 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
joined_r0x004c316b:
  if (((bVar10 == 0) && ((*puVar18 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
  LOCK();
  iVar13 = *(int *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x10) = 0;
  UNLOCK();
  if (iVar13 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar15;
}


