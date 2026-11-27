// 0048e360 drop

/* WARNING: Switch with 1 destination removed at 0x0048e440 */
/* <hashbrown[b5c94476ffc33875]::raw::RawIntoIter<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawIntoIter<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  
  lVar8 = param_1[7];
  if (lVar8 != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 6);
    lVar6 = param_1[3];
    pauVar7 = (undefined1 (*) [16])param_1[4];
    do {
      if ((short)uVar5 == 0) {
        do {
          auVar1 = *pauVar7;
          lVar6 = lVar6 + -0xe00;
          pauVar7 = pauVar7 + 1;
          uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar5 == 0);
        param_1[4] = (longlong)pauVar7;
        param_1[3] = lVar6;
      }
      uVar2 = 0;
      for (uVar3 = uVar5; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uVar5 = uVar5 - 1 & uVar5;
      *(short *)(param_1 + 6) = (short)uVar5;
      lVar4 = (ulonglong)uVar2 * -0xe0;
      lVar8 = lVar8 + -1;
      param_1[7] = lVar8;
      if (*(longlong *)(lVar6 + -0xe0 + lVar4) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(-(ulonglong)uVar2,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar6 + lVar4 + -200);
    } while (lVar8 != 0);
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


