// 00039860 is_turn_done

/* <agy_bridge[64a9e9deac6c45ce]::Turn>::is_turn_done */

undefined1 __rustcall <agy_bridge[64a9e9deac6c45ce]::Turn>::is_turn_done(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 0x323) != '\x01') {
    return 0;
  }
  if (*(char *)(param_1 + 0x322) == '\x01') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0xa0) != -1) &&
     (cVar4 = agy_bridge[64a9e9deac6c45ce]::sse_ok
                        (*(undefined4 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0xa8),
                         *(undefined8 *)(param_1 + 0xb0)), cVar4 == '\0')) {
    return *(undefined1 *)(param_1 + 0x1a3);
  }
  if (*(char *)(param_1 + 0x321) != '\0') {
    return *(undefined1 *)(param_1 + 0x325);
  }
  if (((*(char *)(param_1 + 0x1a4) == '\x01') && (*(longlong *)(param_1 + 0x200) == 0)) &&
     (*(longlong *)(param_1 + 0x1e0) == 0)) {
    pauVar5 = *(undefined1 (**) [16])(param_1 + 0x278);
    lVar6 = *(longlong *)(param_1 + 0x290);
    auVar1 = *pauVar5;
    pauVar7 = pauVar5 + 1;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    do {
      bVar9 = lVar6 == 0;
      lVar6 = lVar6 + -1;
      if (bVar9) {
        return 1;
      }
      if ((short)uVar8 == 0) {
        do {
          auVar1 = *pauVar7;
          pauVar5 = pauVar5 + -0x140;
          pauVar7 = pauVar7 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar8 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8;
    } while ((pauVar5[(ulonglong)uVar2 * -0x14 + -1][0xc] != '\0') ||
            (*(longlong *)(pauVar5[(ulonglong)uVar2 * -0x14 + -0x11] + 8) == -1));
  }
  return 0;
}


