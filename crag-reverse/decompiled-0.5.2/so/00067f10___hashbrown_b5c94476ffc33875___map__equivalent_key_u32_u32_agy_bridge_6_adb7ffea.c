// 00067f10 <hashbrown[b5c94476ffc33875]::map::equivalent_key<u32,u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot>::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,
   agy_bridge[64a9e9deac6c45ce]::StreamSlot)>>::remove_entry::<hashbrown[b5c94476ffc33875]::map::equivalent_key<u32,
   u32, agy_bridge[64a9e9deac6c45ce]::StreamSlot>::{closure#0}> */

longlong __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot)>>::
remove_entry::
<hashbrown[b5c94476ffc33875]::map::equivalent_key<u32,u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot>::_closure_0_>
          (longlong param_1,longlong *param_2,ulonglong param_3,int *param_4)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar2 = *param_2;
  uVar8 = param_2[1];
  bVar13 = (byte)(param_3 >> 0x39);
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  lVar12 = 0;
  do {
    param_3 = param_3 & uVar8;
    auVar15 = *(undefined1 (*) [16])(lVar2 + param_3);
    auVar17[0] = -(auVar15[0] == auVar14[0]);
    auVar17[1] = -(auVar15[1] == auVar14[1]);
    auVar17[2] = -(auVar15[2] == auVar14[2]);
    auVar17[3] = -(auVar15[3] == auVar14[3]);
    auVar17[4] = -(auVar15[4] == auVar14[4]);
    auVar17[5] = -(auVar15[5] == auVar14[5]);
    auVar17[6] = -(auVar15[6] == auVar14[6]);
    auVar17[7] = -(auVar15[7] == auVar14[7]);
    auVar17[8] = -(auVar15[8] == auVar14[0]);
    auVar17[9] = -(auVar15[9] == auVar14[1]);
    auVar17[10] = -(auVar15[10] == auVar14[2]);
    auVar17[0xb] = -(auVar15[0xb] == auVar14[3]);
    auVar17[0xc] = -(auVar15[0xc] == auVar14[4]);
    auVar17[0xd] = -(auVar15[0xd] == auVar14[5]);
    auVar17[0xe] = -(auVar15[0xe] == auVar14[6]);
    auVar17[0xf] = -(auVar15[0xf] == auVar14[7]);
    uVar7 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
    uVar11 = (uint)uVar7;
    while (uVar7 != 0) {
      uVar5 = 0;
      for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar9 = uVar5 + param_3 & uVar8;
      if (*param_4 == *(int *)(lVar2 + -0x140 + uVar9 * -0x140)) {
        lVar12 = ((longlong)(uVar9 * 0x140) >> 6) * -0x3333333333333333;
        uVar8 = lVar12 - 0x10U & uVar8;
        pcVar1 = (char *)(lVar2 + uVar8);
        auVar14[0] = -(*pcVar1 == -1);
        auVar14[1] = -(pcVar1[1] == -1);
        auVar14[2] = -(pcVar1[2] == -1);
        auVar14[3] = -(pcVar1[3] == -1);
        auVar14[4] = -(pcVar1[4] == -1);
        auVar14[5] = -(pcVar1[5] == -1);
        auVar14[6] = -(pcVar1[6] == -1);
        auVar14[7] = -(pcVar1[7] == -1);
        auVar14[8] = -(pcVar1[8] == -1);
        auVar14[9] = -(pcVar1[9] == -1);
        auVar14[10] = -(pcVar1[10] == -1);
        auVar14[0xb] = -(pcVar1[0xb] == -1);
        auVar14[0xc] = -(pcVar1[0xc] == -1);
        auVar14[0xd] = -(pcVar1[0xd] == -1);
        auVar14[0xe] = -(pcVar1[0xe] == -1);
        auVar14[0xf] = -(pcVar1[0xf] == -1);
        uVar3 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
        pcVar1 = (char *)(lVar2 + lVar12);
        auVar15[0] = -(*pcVar1 == -1);
        auVar15[1] = -(pcVar1[1] == -1);
        auVar15[2] = -(pcVar1[2] == -1);
        auVar15[3] = -(pcVar1[3] == -1);
        auVar15[4] = -(pcVar1[4] == -1);
        auVar15[5] = -(pcVar1[5] == -1);
        auVar15[6] = -(pcVar1[6] == -1);
        auVar15[7] = -(pcVar1[7] == -1);
        auVar15[8] = -(pcVar1[8] == -1);
        auVar15[9] = -(pcVar1[9] == -1);
        auVar15[10] = -(pcVar1[10] == -1);
        auVar15[0xb] = -(pcVar1[0xb] == -1);
        auVar15[0xc] = -(pcVar1[0xc] == -1);
        auVar15[0xd] = -(pcVar1[0xd] == -1);
        auVar15[0xe] = -(pcVar1[0xe] == -1);
        auVar15[0xf] = -(pcVar1[0xf] == -1);
        uVar7 = 0xf;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar7 == 0; uVar7 = uVar7 - 1) {
          }
        }
        sVar4 = 0;
        for (uVar11 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar15[0xf] >> 7) << 0xf) | 0x10000; (uVar11 & 1) == 0;
            uVar11 = uVar11 >> 1 | 0x80000000) {
          sVar4 = sVar4 + 1;
        }
        uVar10 = 0x80;
        if ((ushort)(sVar4 + (uVar7 ^ 0xf)) < 0x10) {
          param_2[2] = param_2[2] + 1;
          uVar10 = 0xff;
        }
        *(undefined1 *)(lVar2 + lVar12) = uVar10;
        *(undefined1 *)(lVar2 + 0x10 + uVar8) = uVar10;
        param_2[3] = param_2[3] + -1;
        (*(code *)PTR_memcpy_000c3aa8)(lVar12,0x140);
        return param_1;
      }
      uVar7 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar7);
    }
    auVar16[0] = -(auVar15[0] == -1);
    auVar16[1] = -(auVar15[1] == -1);
    auVar16[2] = -(auVar15[2] == -1);
    auVar16[3] = -(auVar15[3] == -1);
    auVar16[4] = -(auVar15[4] == -1);
    auVar16[5] = -(auVar15[5] == -1);
    auVar16[6] = -(auVar15[6] == -1);
    auVar16[7] = -(auVar15[7] == -1);
    auVar16[8] = -(auVar15[8] == -1);
    auVar16[9] = -(auVar15[9] == -1);
    auVar16[10] = -(auVar15[10] == -1);
    auVar16[0xb] = -(auVar15[0xb] == -1);
    auVar16[0xc] = -(auVar15[0xc] == -1);
    auVar16[0xd] = -(auVar15[0xd] == -1);
    auVar16[0xe] = -(auVar15[0xe] == -1);
    auVar16[0xf] = -(auVar15[0xf] == -1);
    if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      return param_1;
    }
    param_3 = param_3 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


