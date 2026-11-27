// 006e6450 <usize>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<usize,
   std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<usize> */

longlong * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<usize>(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<&usize>(param_2 + 4,param_3);
  lVar2 = *param_2;
  uVar8 = param_2[1];
  bVar16 = (byte)(uVar7 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  lVar10 = 0;
  lVar12 = 0;
  do {
    uVar7 = uVar7 & uVar8;
    pcVar1 = (char *)(lVar2 + uVar7);
    auVar20[0] = -(*pcVar1 == auVar17[0]);
    auVar20[1] = -(pcVar1[1] == auVar17[1]);
    auVar20[2] = -(pcVar1[2] == auVar17[2]);
    auVar20[3] = -(pcVar1[3] == auVar17[3]);
    auVar20[4] = -(pcVar1[4] == auVar17[4]);
    auVar20[5] = -(pcVar1[5] == auVar17[5]);
    auVar20[6] = -(pcVar1[6] == auVar17[6]);
    auVar20[7] = -(pcVar1[7] == auVar17[7]);
    auVar20[8] = -(pcVar1[8] == auVar17[0]);
    auVar20[9] = -(pcVar1[9] == auVar17[1]);
    auVar20[10] = -(pcVar1[10] == auVar17[2]);
    auVar20[0xb] = -(pcVar1[0xb] == auVar17[3]);
    auVar20[0xc] = -(pcVar1[0xc] == auVar17[4]);
    auVar20[0xd] = -(pcVar1[0xd] == auVar17[5]);
    auVar20[0xe] = -(pcVar1[0xe] == auVar17[6]);
    auVar20[0xf] = -(pcVar1[0xf] == auVar17[7]);
    uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar5 = 0;
      for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar14 = uVar5 + uVar7 & uVar8;
      lVar15 = lVar2 + uVar14 * -0x20;
      if (*param_3 == *(longlong *)(lVar15 + -0x20)) {
        uVar8 = uVar14 - 0x10 & uVar8;
        pcVar1 = (char *)(lVar2 + uVar8);
        auVar17[0] = -(*pcVar1 == -1);
        auVar17[1] = -(pcVar1[1] == -1);
        auVar17[2] = -(pcVar1[2] == -1);
        auVar17[3] = -(pcVar1[3] == -1);
        auVar17[4] = -(pcVar1[4] == -1);
        auVar17[5] = -(pcVar1[5] == -1);
        auVar17[6] = -(pcVar1[6] == -1);
        auVar17[7] = -(pcVar1[7] == -1);
        auVar17[8] = -(pcVar1[8] == -1);
        auVar17[9] = -(pcVar1[9] == -1);
        auVar17[10] = -(pcVar1[10] == -1);
        auVar17[0xb] = -(pcVar1[0xb] == -1);
        auVar17[0xc] = -(pcVar1[0xc] == -1);
        auVar17[0xd] = -(pcVar1[0xd] == -1);
        auVar17[0xe] = -(pcVar1[0xe] == -1);
        auVar17[0xf] = -(pcVar1[0xf] == -1);
        uVar3 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
        pcVar1 = (char *)(lVar2 + uVar14);
        auVar18[0] = -(*pcVar1 == -1);
        auVar18[1] = -(pcVar1[1] == -1);
        auVar18[2] = -(pcVar1[2] == -1);
        auVar18[3] = -(pcVar1[3] == -1);
        auVar18[4] = -(pcVar1[4] == -1);
        auVar18[5] = -(pcVar1[5] == -1);
        auVar18[6] = -(pcVar1[6] == -1);
        auVar18[7] = -(pcVar1[7] == -1);
        auVar18[8] = -(pcVar1[8] == -1);
        auVar18[9] = -(pcVar1[9] == -1);
        auVar18[10] = -(pcVar1[10] == -1);
        auVar18[0xb] = -(pcVar1[0xb] == -1);
        auVar18[0xc] = -(pcVar1[0xc] == -1);
        auVar18[0xd] = -(pcVar1[0xd] == -1);
        auVar18[0xe] = -(pcVar1[0xe] == -1);
        auVar18[0xf] = -(pcVar1[0xf] == -1);
        uVar13 = 0xf;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar13 == 0; uVar13 = uVar13 - 1) {
          }
        }
        sVar4 = 0;
        for (uVar11 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar18[0xf] >> 7) << 0xf) | 0x10000; (uVar11 & 1) == 0;
            uVar11 = uVar11 >> 1 | 0x80000000) {
          sVar4 = sVar4 + 1;
        }
        uVar9 = 0x80;
        if ((ushort)(sVar4 + (uVar13 ^ 0xf)) < 0x10) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        *(undefined1 *)(lVar2 + uVar14) = uVar9;
        *(undefined1 *)(lVar2 + 0x10 + uVar8) = uVar9;
        param_2[3] = param_2[3] + -1;
        lVar10 = *(longlong *)(lVar15 + -0x18);
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar2 = *(longlong *)(lVar15 + -8);
          param_1[1] = *(longlong *)(lVar15 + -0x10);
          param_1[2] = lVar2;
        }
        goto LAB_006e656a;
      }
      uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
    }
    auVar19[0] = -(*pcVar1 == -1);
    auVar19[1] = -(pcVar1[1] == -1);
    auVar19[2] = -(pcVar1[2] == -1);
    auVar19[3] = -(pcVar1[3] == -1);
    auVar19[4] = -(pcVar1[4] == -1);
    auVar19[5] = -(pcVar1[5] == -1);
    auVar19[6] = -(pcVar1[6] == -1);
    auVar19[7] = -(pcVar1[7] == -1);
    auVar19[8] = -(pcVar1[8] == -1);
    auVar19[9] = -(pcVar1[9] == -1);
    auVar19[10] = -(pcVar1[10] == -1);
    auVar19[0xb] = -(pcVar1[0xb] == -1);
    auVar19[0xc] = -(pcVar1[0xc] == -1);
    auVar19[0xd] = -(pcVar1[0xd] == -1);
    auVar19[0xe] = -(pcVar1[0xe] == -1);
    auVar19[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
LAB_006e656a:
      *param_1 = lVar10;
      return param_1;
    }
    uVar7 = uVar7 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


