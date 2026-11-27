// 005362f0 remove_account

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 local_40;
  longlong local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x60);
  local_40 = param_2;
  local_38 = param_3;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::<<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account::_closure_0_>
            (param_1 + 0x18,&local_40);
  lVar9 = *(longlong *)(param_1 + 0x60);
  if (lVar9 == 0) {
    lVar9 = 0;
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  else {
    pauVar10 = *(undefined1 (**) [16])(param_1 + 0x48);
    auVar11 = *pauVar10;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
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
    pauVar8 = pauVar10 + 1;
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar11 = *pauVar8;
          pauVar10 = pauVar10 + -0x58;
          pauVar8 = pauVar8 + 1;
          uVar6 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
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
        } while (uVar6 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (*(longlong *)((longlong)pauVar10 + (ulonglong)uVar4 * -0x58 + -0x30) == param_3) {
        iVar7 = (*(code *)PTR_bcmp_00799020)(auVar11._0_8_,param_3,param_5,param_6,param_2);
        auVar11._8_8_ = extraout_XMM0_Qb;
        auVar11._0_8_ = extraout_XMM0_Qa;
        if (iVar7 == 0) {
          auVar11._0_8_ =
               <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>
               ::erase((undefined8 *)(param_1 + 0x48),(ulonglong)uVar4 * -0x58 + (longlong)pauVar10)
          ;
          auVar11._8_8_ = extraout_XMM0_Qb_00;
        }
      }
      uVar6 = uVar6 - 1 & uVar6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = *(longlong *)(param_1 + 0x60);
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  if ((lVar3 != lVar1) || (lVar9 != lVar2)) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}


