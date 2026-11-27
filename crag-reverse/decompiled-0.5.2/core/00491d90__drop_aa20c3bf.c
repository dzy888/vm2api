// 00491d90 drop

/* WARNING: Switch with 1 destination removed at 0x00491e90 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,
   alloc[12e961f32105355]::boxed::Box<dyn http[56314f485c23ccf6]::extensions::AnyClone +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      pauVar7 = (undefined1 (*) [16])*param_1;
      auVar9 = *pauVar7;
      pauVar5 = pauVar7 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
        if ((short)uVar8 == 0) {
          do {
            auVar9 = *pauVar5;
            pauVar7 = pauVar7 + -0x20;
            pauVar5 = pauVar5 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
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
          } while (uVar8 == 0);
        }
        iVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        puVar2 = *(undefined8 **)((longlong)pauVar7 + (-8 - (ulonglong)(uint)(iVar3 << 5)));
        if ((code *)*puVar2 != (code *)0x0) {
          auVar9._0_8_ = (*(code *)*puVar2)();
          auVar9._8_8_ = extraout_XMM0_Qb;
        }
        if (puVar2[1] != 0) {
          auVar9._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar9._0_8_,puVar2[2]);
          auVar9._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar1 * 0x21 != -0x31) {
      (*(code *)PTR_free_0079adc8)(param_1,0x10);
      return;
    }
  }
  return;
}


