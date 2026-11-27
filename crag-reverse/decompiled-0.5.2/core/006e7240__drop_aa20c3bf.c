// 006e7240 drop

/* WARNING: Switch with 1 destination removed at 0x006e72f3 */
/* <hashbrown[b5c94476ffc33875]::raw::RawIntoIter<(usize,
   std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawIntoIter<(usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[7];
  if (lVar6 != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 6);
    lVar7 = param_1[3];
    pauVar5 = (undefined1 (*) [16])param_1[4];
    do {
      if ((short)uVar4 == 0) {
        do {
          auVar1 = *pauVar5;
          lVar7 = lVar7 + -0x200;
          pauVar5 = pauVar5 + 1;
          uVar4 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar4 == 0);
        param_1[4] = (longlong)pauVar5;
        param_1[3] = lVar7;
      }
      iVar2 = 0;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 - 1 & uVar4;
      *(short *)(param_1 + 6) = (short)uVar4;
      param_1[7] = lVar6 + -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
                ((lVar7 - (ulonglong)(uint)(iVar2 << 5)) + -0x18);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


