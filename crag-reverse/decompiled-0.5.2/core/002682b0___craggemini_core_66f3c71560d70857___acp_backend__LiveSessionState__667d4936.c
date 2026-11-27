// 002682b0 <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>

/* WARNING: Switch with 1 destination removed at 0x0026844d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[6] != -1) && (param_1[6] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[9] != -1) && (param_1[9] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar8 = param_1[2];
  if (lVar8 != 0) {
    lVar5 = param_1[1] + 8;
    do {
      if (*(longlong *)(lVar5 + -8) != 0) {
        (*(code *)puVar3)();
      }
      lVar5 = lVar5 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar8 = param_1[0xd];
  if (lVar8 != 0) {
    lVar5 = param_1[0xf];
    if (lVar5 != 0) {
      pauVar6 = (undefined1 (*) [16])param_1[0xc];
      auVar9 = *pauVar6;
      pauVar7 = pauVar6 + 1;
      uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar9[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar4 == 0) {
          do {
            auVar9 = *pauVar7;
            pauVar6 = pauVar6 + -0x18;
            pauVar7 = pauVar7 + 1;
            uVar4 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar4 == 0);
        }
        uVar1 = 0;
        for (uVar2 = uVar4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        if (*(longlong *)((longlong)pauVar6 + (ulonglong)uVar1 * -0x18 + -0x18) != 0) {
          auVar9._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar9._0_8_,1);
          auVar9._8_8_ = extraout_XMM0_Qb;
        }
        lVar5 = lVar5 + -1;
        uVar4 = uVar4 - 1 & uVar4;
      } while (lVar5 != 0);
    }
    if (lVar8 + (lVar8 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


