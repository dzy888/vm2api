// 0048e8e0 drop

/* <hashbrown[b5c94476ffc33875]::raw::RawDrain<(u64,
   tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>)> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawDrain<(u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ushort uVar6;
  undefined *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined8 *puVar13;
  
  puVar7 = PTR_set_complete_00799058;
  lVar8 = param_1[4];
  while (lVar8 != 0) {
    uVar10 = (uint)*(ushort *)(param_1 + 3);
    lVar12 = *param_1;
    if (*(ushort *)(param_1 + 3) == 0) {
      pauVar11 = (undefined1 (*) [16])param_1[1];
      do {
        auVar1 = *pauVar11;
        lVar12 = lVar12 + -0x100;
        pauVar11 = pauVar11 + 1;
        uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      } while (uVar10 == 0);
      param_1[1] = (longlong)pauVar11;
      *param_1 = lVar12;
    }
    uVar6 = (ushort)uVar10;
    iVar5 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *(ushort *)(param_1 + 3) = uVar6 - 1 & uVar6;
    lVar12 = lVar12 - (ulonglong)(uint)(iVar5 << 4);
    lVar8 = lVar8 + -1;
    param_1[4] = lVar8;
    lVar2 = *(longlong *)(lVar12 + -8);
    if (lVar2 != 0) {
      puVar13 = (undefined8 *)(lVar12 + -8);
      uVar10 = (*(code *)puVar7)();
      if ((uVar10 & 5) == 1) {
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x10))();
      }
      plVar3 = (longlong *)*puVar13;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
          ::drop_slow(puVar13);
        }
      }
      lVar8 = param_1[4];
    }
  }
  uVar4 = param_1[6];
  if (uVar4 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  param_1[8] = 0;
  uVar9 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
  if (uVar4 < 8) {
    uVar9 = uVar4;
  }
  param_1[7] = uVar9;
  plVar3 = (longlong *)param_1[9];
  lVar8 = param_1[6];
  lVar12 = param_1[7];
  lVar2 = param_1[8];
  *plVar3 = param_1[5];
  plVar3[1] = lVar8;
  plVar3[2] = lVar12;
  plVar3[3] = lVar2;
  return;
}


