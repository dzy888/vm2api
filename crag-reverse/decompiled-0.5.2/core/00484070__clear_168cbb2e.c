// 00484070 clear

/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>)>>::clear
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>)>>
::clear(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar10 = param_1[3];
  if (lVar10 != 0) {
    pauVar8 = (undefined1 (*) [16])*param_1;
    auVar13 = *pauVar8;
    pauVar9 = pauVar8 + 1;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar13[0xf] >> 7) << 0xf);
    do {
      uVar12 = auVar13._0_8_;
      if ((short)uVar7 == 0) {
        do {
          auVar13 = *pauVar9;
          uVar12 = auVar13._0_8_;
          pauVar8 = pauVar8 + -0x20;
          pauVar9 = pauVar9 + 1;
          uVar7 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar7 == 0);
      }
      iVar3 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      if (*(longlong *)((longlong)pauVar8 + (-0x20 - (ulonglong)(uint)(iVar3 << 5))) != 0) {
        (*(code *)puVar5)(uVar12,1);
      }
      puVar11 = (undefined8 *)((longlong)pauVar8 + (-8 - (ulonglong)(uint)(iVar3 << 5)));
      auVar13._0_8_ =
           <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(puVar11);
      auVar13._8_8_ = extraout_XMM0_Qb;
      plVar1 = (longlong *)*puVar11;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar13._0_8_ =
             <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
             ::drop_slow(puVar11);
        auVar13._8_8_ = extraout_XMM0_Qb_00;
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar2 = param_1[1];
    if (uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      (*(code *)PTR_memset_00799090)(auVar13._0_8_,uVar2 + 0x11);
      uVar6 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
      if (uVar2 < 8) {
        uVar6 = uVar2;
      }
    }
    param_1[3] = 0;
    param_1[2] = uVar6;
  }
  return;
}


