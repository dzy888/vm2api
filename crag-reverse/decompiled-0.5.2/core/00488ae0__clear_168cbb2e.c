// 00488ae0 clear

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::clear */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::clear(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  
  lVar11 = *(longlong *)(param_1 + 0x30);
  if (lVar11 != 0) {
    pauVar9 = *(undefined1 (**) [16])(param_1 + 0x18);
    auVar13 = *pauVar9;
    pauVar10 = pauVar9 + 1;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar13[0xf] >> 7) << 0xf);
    do {
      uVar12 = auVar13._0_8_;
      if ((short)uVar7 == 0) {
        do {
          auVar13 = *pauVar10;
          uVar12 = auVar13._0_8_;
          pauVar9 = pauVar9 + -0xe0;
          pauVar10 = pauVar10 + 1;
          uVar7 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar7 == 0);
      }
      uVar2 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      if (*(longlong *)pauVar9[(ulonglong)uVar2 * -0xe + -0xe] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar11 + -1;
      auVar13._0_8_ =
           core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
                     (pauVar9[(ulonglong)uVar2 * -0xe + -0xd] + 8);
      auVar13._8_8_ = extraout_XMM0_Qb;
    } while (lVar11 != 0);
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      (*(code *)PTR_memset_00799090)(auVar13._0_8_,uVar1 + 0x11);
      uVar6 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar6 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(ulonglong *)(param_1 + 0x28) = uVar6;
  }
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar11 = *(longlong *)(param_1 + 0x60);
  if (lVar11 != 0) {
    pauVar9 = *(undefined1 (**) [16])(param_1 + 0x48);
    auVar14 = *pauVar9;
    pauVar10 = pauVar9 + 1;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar14 = *pauVar10;
          pauVar9 = pauVar9 + -0x20;
          pauVar10 = pauVar10 + 1;
          uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar7 == 0);
      }
      iVar3 = 0;
      for (uVar2 = uVar7; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      if (*(longlong *)((longlong)pauVar9 + (-0x18 - (ulonglong)(uint)(iVar3 << 5))) != 0) {
        auVar14._0_8_ = (*(code *)puVar5)((ulonglong)(uint)(iVar3 << 5),1);
        auVar14._8_8_ = extraout_XMM0_Qb_00;
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    uVar1 = *(ulonglong *)(param_1 + 0x50);
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      (*(code *)PTR_memset_00799090)(auVar14._0_8_,uVar1 + 0x11);
      uVar6 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar6 = uVar1;
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(ulonglong *)(param_1 + 0x58) = uVar6;
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  if (lVar11 != 0) {
    lVar8 = *(longlong *)(param_1 + 8) + 8;
    do {
      if (*(longlong *)(lVar8 + -8) != 0) {
        (*(code *)puVar5)();
      }
      lVar8 = lVar8 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}


