// 0048e6a0 drop

/* <hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::oauth::StoredAttempt)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  
  lVar11 = param_1[4];
  if (lVar11 != 0) {
    uVar8 = (uint)*(ushort *)(param_1 + 3);
    lVar9 = *param_1;
    pauVar10 = (undefined1 (*) [16])param_1[1];
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar1 = *pauVar10;
          lVar9 = lVar9 + -0x2c00;
          pauVar10 = pauVar10 + 1;
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
        param_1[1] = (longlong)pauVar10;
        *param_1 = lVar9;
      }
      uVar4 = 0;
      for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8;
      *(short *)(param_1 + 3) = (short)uVar8;
      lVar6 = (ulonglong)uVar4 * -0x2c0;
      lVar11 = lVar11 + -1;
      param_1[4] = lVar11;
      if (*(longlong *)(lVar9 + -0x2c0 + lVar6) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(-(ulonglong)uVar4,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(lVar9 + lVar6 + -0x280);
    } while (lVar11 != 0);
  }
  uVar2 = param_1[6];
  if (uVar2 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  param_1[8] = 0;
  uVar7 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
  if (uVar2 < 8) {
    uVar7 = uVar2;
  }
  param_1[7] = uVar7;
  plVar3 = (longlong *)param_1[9];
  lVar11 = param_1[6];
  lVar9 = param_1[7];
  lVar6 = param_1[8];
  *plVar3 = param_1[5];
  plVar3[1] = lVar11;
  plVar3[2] = lVar9;
  plVar3[3] = lVar6;
  return;
}


