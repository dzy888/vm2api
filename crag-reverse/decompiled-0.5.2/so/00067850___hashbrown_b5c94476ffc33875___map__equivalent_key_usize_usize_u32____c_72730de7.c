// 00067850 <hashbrown[b5c94476ffc33875]::map::equivalent_key<usize,usize,u32>::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,
   u32)>>::remove_entry::<hashbrown[b5c94476ffc33875]::map::equivalent_key<usize, usize,
   u32>::{closure#0}> */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,u32)>>::remove_entry::
<hashbrown[b5c94476ffc33875]::map::equivalent_key<usize,usize,u32>::_closure_0_>
          (undefined8 *param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar3 = *param_2;
  uVar8 = param_2[1];
  bVar16 = (byte)(param_3 >> 0x39);
  auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar17 = pshuflw(auVar17,auVar17,0);
  uVar9 = 0;
  lVar13 = 0;
  do {
    param_3 = param_3 & uVar8;
    pcVar1 = (char *)(lVar3 + param_3);
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
    uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
    uVar12 = (uint)uVar14;
    while (uVar14 != 0) {
      uVar6 = 0;
      for (uVar7 = uVar12; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar15 = uVar6 + param_3 & uVar8;
      lVar11 = lVar3 + uVar15 * -0x10;
      if (*param_4 == *(longlong *)(lVar11 + -0x10)) {
        uVar8 = uVar15 - 0x10 & uVar8;
        pcVar1 = (char *)(lVar3 + uVar8);
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
        uVar4 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
        pcVar1 = (char *)(lVar3 + uVar15);
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
        uVar14 = 0xf;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        sVar5 = 0;
        for (uVar12 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                              (ushort)(auVar18[0xf] >> 7) << 0xf) | 0x10000; (uVar12 & 1) == 0;
            uVar12 = uVar12 >> 1 | 0x80000000) {
          sVar5 = sVar5 + 1;
        }
        uVar10 = 0x80;
        if ((ushort)(sVar5 + (uVar14 ^ 0xf)) < 0x10) {
          param_2[2] = param_2[2] + 1;
          uVar10 = 0xff;
        }
        *(undefined1 *)(lVar3 + uVar15) = uVar10;
        *(undefined1 *)(lVar3 + 0x10 + uVar8) = uVar10;
        param_2[3] = param_2[3] + -1;
        uVar2 = *(undefined4 *)(lVar11 + -8);
        param_1[1] = *(undefined8 *)(lVar11 + -0x10);
        *(undefined4 *)(param_1 + 2) = uVar2;
        uVar9 = 1;
        goto LAB_0006795d;
      }
      uVar14 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar14);
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
LAB_0006795d:
      *param_1 = uVar9;
      return;
    }
    param_3 = param_3 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}


