// 0037d970 <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>

/* WARNING: Switch with 1 destination removed at 0x0037db0d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::admission::BoundedSeen>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::admission::BoundedSeen>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  
  puVar6 = PTR___rust_dealloc_00798fc8;
  uVar1 = *param_1;
  uVar16 = param_1[3];
  if (uVar16 != 0) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar7 = uVar1;
    if (uVar3 < uVar1) {
      uVar7 = 0;
    }
    lVar11 = uVar3 - uVar7;
    uVar12 = uVar1 - lVar11;
    lVar13 = uVar16 - uVar12;
    bVar17 = lVar13 != 0;
    if (uVar16 < uVar12) {
      lVar13 = 0;
    }
    uVar10 = lVar11 + uVar16;
    if (uVar16 >= uVar12 && bVar17) {
      uVar10 = uVar1;
    }
    lVar11 = uVar10 - lVar11;
    if (lVar11 != 0) {
      lVar9 = uVar3 * 0x18 + uVar7 * -0x18 + uVar2 + 8;
      do {
        if (*(longlong *)(lVar9 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar9 = lVar9 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar6 = PTR___rust_dealloc_00798fc8;
    if (uVar12 < uVar16) {
      lVar11 = uVar2 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar11 = lVar11 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  if (uVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar6 = PTR___rust_dealloc_00798fc8;
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    uVar16 = param_1[7];
    if (uVar16 != 0) {
      pauVar14 = (undefined1 (*) [16])param_1[4];
      auVar18 = *pauVar14;
      pauVar15 = pauVar14 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar18 = *pauVar15;
            pauVar14 = pauVar14 + -0x18;
            pauVar15 = pauVar15 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar4 * -0x18 + -0x18) != 0) {
          auVar18._0_8_ = (*(code *)puVar6)(auVar18._0_8_,1);
          auVar18._8_8_ = extraout_XMM0_Qb;
        }
        uVar16 = uVar16 - 1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar16 != 0);
    }
    if (uVar1 + (uVar1 * 0x18 + 0x27 & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


