// 00473be0 <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>>

/* WARNING: Switch with 1 destination removed at 0x00473cf2 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>>
          (undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  longlong lVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar8 = param_1[3];
    if (lVar8 != 0) {
      pauVar5 = (undefined1 (*) [16])*param_1;
      auVar9 = *pauVar5;
      pauVar6 = pauVar5 + 1;
      uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
        if ((short)uVar7 == 0) {
          do {
            auVar9 = *pauVar6;
            pauVar5 = pauVar5 + -0x38;
            pauVar6 = pauVar6 + 1;
            uVar7 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
          } while (uVar7 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar5 + (ulonglong)uVar2 * -0x38 + -0x38) != 0) {
          auVar9._0_8_ = (*(code *)puVar4)(auVar9._0_8_,1);
          auVar9._8_8_ = extraout_XMM0_Qb;
        }
        if (*(longlong *)((longlong)pauVar5 + (ulonglong)uVar2 * -0x38 + -0x20) != 0) {
          auVar9._0_8_ = (*(code *)puVar4)(auVar9._0_8_,1);
          auVar9._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar1 + (lVar1 * 0x38 + 0x47U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


