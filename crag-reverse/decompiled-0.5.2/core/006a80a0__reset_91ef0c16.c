// 006a80a0 reset

/* <hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioTimer as
   hyper[c4782d5b5c5e3493]::rt::timer::Timer>::reset */

void __rustcall
<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioTimer_as_hyper[c4782d5b5c5e3493]::rt::timer::Timer>::
reset(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
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
  
  (**(code **)(*(longlong *)(param_2 + 8) + 0x20))();
  auVar1[0] = -(local_28 == DAT_00183c80);
  auVar1[1] = -(cStack_27 == UNK_00183c81);
  auVar1[2] = -(cStack_26 == UNK_00183c82);
  auVar1[3] = -(cStack_25 == UNK_00183c83);
  auVar1[4] = -(cStack_24 == UNK_00183c84);
  auVar1[5] = -(cStack_23 == UNK_00183c85);
  auVar1[6] = -(cStack_22 == UNK_00183c86);
  auVar1[7] = -(cStack_21 == UNK_00183c87);
  auVar1[8] = -(cStack_20 == UNK_00183c88);
  auVar1[9] = -(cStack_1f == UNK_00183c89);
  auVar1[10] = -(cStack_1e == UNK_00183c8a);
  auVar1[0xb] = -(cStack_1d == UNK_00183c8b);
  auVar1[0xc] = -(cStack_1c == UNK_00183c8c);
  auVar1[0xd] = -(cStack_1b == UNK_00183c8d);
  auVar1[0xe] = -(cStack_1a == UNK_00183c8e);
  auVar1[0xf] = -(cStack_19 == UNK_00183c8f);
  if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf) ==
      0xffff) {
    (*(code *)PTR_reset_0079a428)();
  }
  return;
}


