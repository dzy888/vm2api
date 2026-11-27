// 004906d0 drop

/* WARNING: Switch with 1 destination removed at 0x004907da */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>)>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_00;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      pauVar7 = (undefined1 (*) [16])*param_1;
      auVar11 = *pauVar7;
      pauVar5 = pauVar7 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar11[0xf] >> 7) << 0xf);
      do {
        uVar10 = auVar11._0_8_;
        if ((short)uVar8 == 0) {
          do {
            auVar11 = *pauVar5;
            uVar10 = auVar11._0_8_;
            pauVar7 = pauVar7 + -0x20;
            pauVar5 = pauVar5 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        iVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        if (*(longlong *)((longlong)pauVar7 + (-0x20 - (ulonglong)(uint)(iVar3 << 5))) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
        puVar9 = (undefined8 *)((longlong)pauVar7 + (-8 - (ulonglong)(uint)(iVar3 << 5)));
        auVar11._0_8_ =
             <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(puVar9);
        auVar11._8_8_ = extraout_XMM0_Qb;
        plVar2 = (longlong *)*puVar9;
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          auVar11._0_8_ =
               <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
               ::drop_slow(puVar9);
          auVar11._8_8_ = extraout_XMM0_Qb_00;
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


