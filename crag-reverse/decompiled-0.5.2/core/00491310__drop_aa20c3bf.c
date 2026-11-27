// 00491310 drop

/* WARNING: Switch with 1 destination removed at 0x00491424 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar9 = param_1[3];
    if (lVar9 != 0) {
      pauVar7 = (undefined1 (*) [16])*param_1;
      auVar10 = *pauVar7;
      pauVar8 = pauVar7 + 1;
      uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
        if ((short)uVar6 == 0) {
          do {
            auVar10 = *pauVar8;
            pauVar7 = pauVar7 + -0x40;
            pauVar8 = pauVar8 + 1;
            uVar6 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
          } while (uVar6 == 0);
        }
        iVar3 = 0;
        for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        if (*(longlong *)((longlong)pauVar7 + (-0x40 - (ulonglong)(uint)(iVar3 << 6))) != 0) {
          auVar10._0_8_ = (*(code *)puVar5)(auVar10._0_8_,1);
          auVar10._8_8_ = extraout_XMM0_Qb;
        }
        lVar2 = *(longlong *)((longlong)pauVar7 + (-0x28 - (ulonglong)(uint)(iVar3 << 6)));
        if ((lVar2 != -1) && (lVar2 != 0)) {
          auVar10._0_8_ = (*(code *)puVar5)(auVar10._0_8_,1);
          auVar10._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (lVar1 * 0x41 != -0x51) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


