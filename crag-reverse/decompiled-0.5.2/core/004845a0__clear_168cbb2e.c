// 004845a0 clear

/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,
   ())>>::clear */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey,())>>
::clear(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  longlong lVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar9 = param_1[3];
  if (lVar9 != 0) {
    pauVar6 = (undefined1 (*) [16])*param_1;
    auVar10 = *pauVar6;
    pauVar7 = pauVar6 + 1;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar10[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar10 = *pauVar7;
          pauVar6 = pauVar6 + -0x50;
          pauVar7 = pauVar7 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar8 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      if (*(longlong *)pauVar6[(ulonglong)uVar2 * -5 + -5] != 0) {
        auVar10._0_8_ = (*(code *)puVar4)(auVar10._0_8_,1);
        auVar10._8_8_ = extraout_XMM0_Qb;
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      (*(code *)PTR_memset_00799090)(auVar10._0_8_,uVar1 + 0x11);
      uVar5 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar5 = uVar1;
      }
    }
    param_1[3] = 0;
    param_1[2] = uVar5;
  }
  return;
}


