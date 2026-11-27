// 00484200 clear

/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt)>>::clear */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt)>>
::clear(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar9 = param_1[3];
  if (lVar9 != 0) {
    pauVar7 = (undefined1 (*) [16])*param_1;
    auVar11 = *pauVar7;
    pauVar8 = pauVar7 + 1;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar11[0xf] >> 7) << 0xf);
    do {
      uVar10 = auVar11._0_8_;
      if ((short)uVar6 == 0) {
        do {
          auVar11 = *pauVar8;
          uVar10 = auVar11._0_8_;
          pauVar7 = pauVar7 + -0x60;
          pauVar8 = pauVar8 + 1;
          uVar6 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar6 == 0);
      }
      uVar2 = 0;
      for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      if (*(longlong *)pauVar7[(ulonglong)uVar2 * -6 + -6] != 0) {
        (*(code *)puVar4)(uVar10,1);
      }
      auVar11._0_8_ =
           core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt>
                     (pauVar7[(ulonglong)uVar2 * -6 + -5] + 8);
      auVar11._8_8_ = extraout_XMM0_Qb;
      uVar6 = uVar6 - 1 & uVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      (*(code *)PTR_memset_00799090)(auVar11._0_8_,uVar1 + 0x11);
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


