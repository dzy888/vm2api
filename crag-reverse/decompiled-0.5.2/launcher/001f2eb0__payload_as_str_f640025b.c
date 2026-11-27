// 001f2eb0 payload_as_str

/* std[6c98fd8553dbae28]::panicking::payload_as_str */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::panicking::payload_as_str(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  pcVar1 = *(code **)(param_2 + 0x18);
  (*pcVar1)();
  auVar6[0] = -(local_28 == DAT_00113b50);
  auVar6[1] = -(cStack_27 == UNK_00113b51);
  auVar6[2] = -(cStack_26 == UNK_00113b52);
  auVar6[3] = -(cStack_25 == UNK_00113b53);
  auVar6[4] = -(cStack_24 == UNK_00113b54);
  auVar6[5] = -(cStack_23 == UNK_00113b55);
  auVar6[6] = -(cStack_22 == UNK_00113b56);
  auVar6[7] = -(cStack_21 == UNK_00113b57);
  auVar6[8] = -(cStack_20 == UNK_00113b58);
  auVar6[9] = -(cStack_1f == UNK_00113b59);
  auVar6[10] = -(cStack_1e == UNK_00113b5a);
  auVar6[0xb] = -(cStack_1d == UNK_00113b5b);
  auVar6[0xc] = -(cStack_1c == UNK_00113b5c);
  auVar6[0xd] = -(cStack_1b == UNK_00113b5d);
  auVar6[0xe] = -(cStack_1a == UNK_00113b5e);
  auVar6[0xf] = -(cStack_19 == UNK_00113b5f);
  lVar4 = 8;
  puVar2 = param_1;
  if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf) !=
      0xffff) {
    (*pcVar1)();
    auVar7[0] = -(local_28 == DAT_001139b0);
    auVar7[1] = -(cStack_27 == UNK_001139b1);
    auVar7[2] = -(cStack_26 == UNK_001139b2);
    auVar7[3] = -(cStack_25 == UNK_001139b3);
    auVar7[4] = -(cStack_24 == UNK_001139b4);
    auVar7[5] = -(cStack_23 == UNK_001139b5);
    auVar7[6] = -(cStack_22 == UNK_001139b6);
    auVar7[7] = -(cStack_21 == UNK_001139b7);
    auVar7[8] = -(cStack_20 == UNK_001139b8);
    auVar7[9] = -(cStack_1f == UNK_001139b9);
    auVar7[10] = -(cStack_1e == UNK_001139ba);
    auVar7[0xb] = -(cStack_1d == UNK_001139bb);
    auVar7[0xc] = -(cStack_1c == UNK_001139bc);
    auVar7[0xd] = -(cStack_1b == UNK_001139bd);
    auVar7[0xe] = -(cStack_1a == UNK_001139be);
    auVar7[0xf] = -(cStack_19 == UNK_001139bf);
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        != 0xffff) {
      puVar3 = &DAT_0012ea76;
      uVar5 = 0xc;
      goto LAB_001f2f2d;
    }
    puVar2 = param_1 + 1;
    lVar4 = 0x10;
  }
  puVar3 = (undefined *)*puVar2;
  uVar5 = *(undefined8 *)((longlong)param_1 + lVar4);
LAB_001f2f2d:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = puVar3;
  return auVar8;
}


