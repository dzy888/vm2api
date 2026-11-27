// 0068a020 supports_graceful_cancel

/* <craggemini_core[66f3c71560d70857]::bridge::Bridge>::supports_graceful_cancel */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::bridge::Bridge>::supports_graceful_cancel(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + 0x10 + lVar3) == 0x12) {
        pcVar2 = *(char **)(lVar1 + 8 + lVar3);
        auVar4[0] = -(*pcVar2 == DAT_00183df0);
        auVar4[1] = -(pcVar2[1] == UNK_00183df1);
        auVar4[2] = -(pcVar2[2] == UNK_00183df2);
        auVar4[3] = -(pcVar2[3] == UNK_00183df3);
        auVar4[4] = -(pcVar2[4] == UNK_00183df4);
        auVar4[5] = -(pcVar2[5] == UNK_00183df5);
        auVar4[6] = -(pcVar2[6] == UNK_00183df6);
        auVar4[7] = -(pcVar2[7] == UNK_00183df7);
        auVar4[8] = -(pcVar2[8] == UNK_00183df8);
        auVar4[9] = -(pcVar2[9] == UNK_00183df9);
        auVar4[10] = -(pcVar2[10] == UNK_00183dfa);
        auVar4[0xb] = -(pcVar2[0xb] == UNK_00183dfb);
        auVar4[0xc] = -(pcVar2[0xc] == UNK_00183dfc);
        auVar4[0xd] = -(pcVar2[0xd] == UNK_00183dfd);
        auVar4[0xe] = -(pcVar2[0xe] == UNK_00183dfe);
        auVar4[0xf] = -(pcVar2[0xf] == UNK_00183dff);
        auVar5[0] = -((char)*(undefined2 *)(pcVar2 + 0x10) == (char)DAT_00182d10);
        auVar5[1] = -((char)((ushort)*(undefined2 *)(pcVar2 + 0x10) >> 8) == DAT_00182d10._1_1_);
        auVar5[2] = -(DAT_00182d10._2_1_ == '\0');
        auVar5[3] = -(DAT_00182d10._3_1_ == '\0');
        auVar5[4] = 0xff;
        auVar5[5] = 0xff;
        auVar5[6] = 0xff;
        auVar5[7] = 0xff;
        auVar5[8] = 0xff;
        auVar5[9] = 0xff;
        auVar5[10] = 0xff;
        auVar5[0xb] = 0xff;
        auVar5[0xc] = 0xff;
        auVar5[0xd] = 0xff;
        auVar5[0xe] = 0xff;
        auVar5[0xf] = 0xff;
        auVar5 = auVar5 & auVar4;
        if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        }
      }
      lVar3 = lVar3 + 0x18;
    } while (*(longlong *)(param_1 + 0xd8) * 0x18 != lVar3);
  }
  return 0;
}


