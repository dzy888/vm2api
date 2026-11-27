// 005d0220 has_live_session

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::has_live_session */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::has_live_session
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte local_84;
  undefined1 *local_68;
  
  LOCK();
  bVar16 = *(int *)(param_1 + 0x2d8) == 0;
  if (bVar16) {
    *(int *)(param_1 + 0x2d8) = 1;
  }
  UNLOCK();
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(param_1 + 0x2dc) == '\0') {
      local_84 = 0;
      lVar2 = *(longlong *)(param_1 + 0x2f8);
      goto joined_r0x005d0424;
    }
LAB_005d027b:
    if (((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(param_1 + 0x2dc) = 1;
    }
  }
  else {
    local_84 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (*(char *)(param_1 + 0x2dc) == '\0') {
      local_84 = local_84 ^ 1;
      lVar2 = *(longlong *)(param_1 + 0x2f8);
joined_r0x005d0424:
      if (lVar2 != 0) {
        uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&str>(param_1 + 0x300,param_2,param_3);
        puVar7 = PTR_bcmp_00799020;
        lVar2 = *(longlong *)(param_1 + 0x2e0);
        uVar3 = *(ulonglong *)(param_1 + 0x2e8);
        bVar17 = (byte)(uVar11 >> 0x39);
        auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar18 = pshuflw(auVar18,auVar18,0);
        lVar14 = 0;
        while( true ) {
          uVar11 = uVar11 & uVar3;
          auVar1 = *(undefined1 (*) [16])(lVar2 + uVar11);
          auVar19[0] = -(auVar1[0] == auVar18[0]);
          auVar19[1] = -(auVar1[1] == auVar18[1]);
          auVar19[2] = -(auVar1[2] == auVar18[2]);
          auVar19[3] = -(auVar1[3] == auVar18[3]);
          auVar19[4] = -(auVar1[4] == auVar18[4]);
          auVar19[5] = -(auVar1[5] == auVar18[5]);
          auVar19[6] = -(auVar1[6] == auVar18[6]);
          auVar19[7] = -(auVar1[7] == auVar18[7]);
          auVar19[8] = -(auVar1[8] == auVar18[0]);
          auVar19[9] = -(auVar1[9] == auVar18[1]);
          auVar19[10] = -(auVar1[10] == auVar18[2]);
          auVar19[0xb] = -(auVar1[0xb] == auVar18[3]);
          auVar19[0xc] = -(auVar1[0xc] == auVar18[4]);
          auVar19[0xd] = -(auVar1[0xd] == auVar18[5]);
          auVar19[0xe] = -(auVar1[0xe] == auVar18[6]);
          auVar19[0xf] = -(auVar1[0xf] == auVar18[7]);
          uVar9 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar19[0xf] >> 7) << 0xf;
          uVar15 = (uint)uVar9;
          if (uVar9 != 0) {
            do {
              uVar4 = 0;
              for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              uVar13 = uVar4 + uVar11 & uVar3;
              if (param_3 == *(longlong *)(lVar2 + -0x98 + uVar13 * -0xa8)) {
                iVar10 = (*(code *)puVar7)(-uVar13,param_3);
                uVar12 = 1;
                if (iVar10 == 0) goto LAB_005d042c;
              }
              uVar9 = (ushort)(uVar15 - 1) & (ushort)uVar15;
              uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar9);
            } while (uVar9 != 0);
          }
          auVar20[0] = -(auVar1[0] == -1);
          auVar20[1] = -(auVar1[1] == -1);
          auVar20[2] = -(auVar1[2] == -1);
          auVar20[3] = -(auVar1[3] == -1);
          auVar20[4] = -(auVar1[4] == -1);
          auVar20[5] = -(auVar1[5] == -1);
          auVar20[6] = -(auVar1[6] == -1);
          auVar20[7] = -(auVar1[7] == -1);
          auVar20[8] = -(auVar1[8] == -1);
          auVar20[9] = -(auVar1[9] == -1);
          auVar20[10] = -(auVar1[10] == -1);
          auVar20[0xb] = -(auVar1[0xb] == -1);
          auVar20[0xc] = -(auVar1[0xc] == -1);
          auVar20[0xd] = -(auVar1[0xd] == -1);
          auVar20[0xe] = -(auVar1[0xe] == -1);
          auVar20[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x2f,0) & 1) != 0) || (SUB161(auVar20 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
          uVar11 = uVar11 + lVar14 + 0x10;
          lVar14 = lVar14 + 0x10;
        }
      }
      uVar12 = 0;
LAB_005d042c:
      local_68 = (undefined1 *)(param_1 + 0x2dc);
      if (((local_84 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *local_68 = 1;
      }
      goto LAB_005d0445;
    }
    if (local_84 != 0) goto LAB_005d027b;
  }
  uVar12 = 0;
LAB_005d0445:
  LOCK();
  iVar10 = *(int *)(param_1 + 0x2d8);
  *(int *)(param_1 + 0x2d8) = 0;
  UNLOCK();
  if (iVar10 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar12;
}


