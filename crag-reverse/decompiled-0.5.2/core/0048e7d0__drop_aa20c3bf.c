// 0048e7d0 drop

/* <hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String, usize)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,usize)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  
  puVar6 = PTR___rust_dealloc_00798fc8;
  lVar11 = param_1[4];
  if (lVar11 != 0) {
    lVar12 = *param_1;
    pauVar10 = (undefined1 (*) [16])param_1[1];
    uVar8 = (uint)*(ushort *)(param_1 + 3);
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar1 = *pauVar10;
          lVar12 = lVar12 + -0x200;
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
        *param_1 = lVar12;
      }
      uVar9 = uVar8 - 1 & uVar8;
      *(short *)(param_1 + 3) = (short)uVar9;
      lVar11 = lVar11 + -1;
      param_1[4] = lVar11;
      iVar4 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      if (*(longlong *)((lVar12 - (ulonglong)(uint)(iVar4 << 5)) + -0x20) != 0) {
        (*(code *)puVar6)((ulonglong)(uint)(iVar4 << 5),1);
      }
      uVar8 = uVar9;
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
  lVar12 = param_1[7];
  lVar5 = param_1[8];
  *plVar3 = param_1[5];
  plVar3[1] = lVar11;
  plVar3[2] = lVar12;
  plVar3[3] = lVar5;
  return;
}


