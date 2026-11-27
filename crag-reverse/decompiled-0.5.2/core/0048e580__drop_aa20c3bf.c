// 0048e580 drop

/* <hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = param_1[4];
  if (lVar11 != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 3);
    lVar8 = *param_1;
    pauVar9 = (undefined1 (*) [16])param_1[1];
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar1 = *pauVar9;
          lVar8 = lVar8 + -0x800;
          pauVar9 = pauVar9 + 1;
          uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar7 == 0);
        param_1[1] = (longlong)pauVar9;
        *param_1 = lVar8;
      }
      iVar4 = 0;
      for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar7 = uVar7 - 1 & uVar7;
      *(short *)(param_1 + 3) = (short)uVar7;
      lVar10 = lVar8 - (ulonglong)(uint)(iVar4 << 7);
      lVar11 = lVar11 + -1;
      param_1[4] = lVar11;
      if (*(longlong *)(lVar10 + -0x80) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)((ulonglong)(uint)(iVar4 << 7),1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession>(lVar10 + -0x68);
    } while (lVar11 != 0);
  }
  uVar2 = param_1[6];
  if (uVar2 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  param_1[8] = 0;
  uVar6 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
  if (uVar2 < 8) {
    uVar6 = uVar2;
  }
  param_1[7] = uVar6;
  plVar3 = (longlong *)param_1[9];
  lVar11 = param_1[6];
  lVar8 = param_1[7];
  lVar10 = param_1[8];
  *plVar3 = param_1[5];
  plVar3[1] = lVar11;
  plVar3[2] = lVar8;
  plVar3[3] = lVar10;
  return;
}


