// 00491f30 drop

/* WARNING: Switch with 1 destination removed at 0x00491ff4 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,
   craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      pauVar6 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar6;
      pauVar7 = pauVar6 + 1;
      uVar5 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        if ((short)uVar5 == 0) {
          do {
            auVar1 = *pauVar7;
            pauVar6 = pauVar6 + -0xe0;
            pauVar7 = pauVar7 + 1;
            uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar5 == 0);
        }
        uVar3 = 0;
        for (uVar4 = uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar5 - 1 & uVar5;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo>
                  (pauVar6[(ulonglong)uVar3 * -0xe + -0xe] + 8);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar2 * 0xe1 != -0xf1) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


