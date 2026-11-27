// 0048e460 drop

/* <hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawDrain<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  ulonglong uVar3;
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
          lVar8 = lVar8 + -0x200;
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
      lVar10 = lVar8 - (ulonglong)(uint)(iVar4 << 5);
      lVar11 = lVar11 + -1;
      param_1[4] = lVar11;
      if (*(longlong *)(lVar10 + -0x20) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)((ulonglong)(uint)(iVar4 << 5),1);
      }
      plVar2 = *(longlong **)(lVar10 + -8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(lVar10 + -8);
      }
    } while (lVar11 != 0);
  }
  uVar3 = param_1[6];
  if (uVar3 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  param_1[8] = 0;
  uVar6 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
  if (uVar3 < 8) {
    uVar6 = uVar3;
  }
  param_1[7] = uVar6;
  plVar2 = (longlong *)param_1[9];
  lVar11 = param_1[6];
  lVar8 = param_1[7];
  lVar10 = param_1[8];
  *plVar2 = param_1[5];
  plVar2[1] = lVar11;
  plVar2[2] = lVar8;
  plVar2[3] = lVar10;
  return;
}


