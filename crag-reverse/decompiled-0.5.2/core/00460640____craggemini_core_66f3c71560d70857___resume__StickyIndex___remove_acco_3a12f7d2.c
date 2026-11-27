// 00460640 <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::retain::<<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account::{closure#0}>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
::retain::<<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::remove_account::_closure_0_>
          (undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_58;
  longlong local_50;
  
  lVar17 = param_1[3];
  if (lVar17 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    uVar3 = param_1[1];
    auVar19 = *pauVar2;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
    pauVar15 = pauVar2 + 1;
    lVar4 = *(longlong *)(param_2 + 8);
    local_58 = param_1[2];
    pauVar18 = pauVar2;
    local_50 = lVar17;
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar19 = *pauVar15;
          pauVar18 = pauVar18 + -0x38;
          pauVar15 = pauVar15 + 1;
          uVar9 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar9 == 0);
      }
      uVar16 = 0;
      for (uVar8 = uVar9; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      if (*(longlong *)((longlong)pauVar18 + (ulonglong)uVar16 * -0x38 + -0x10) == lVar4) {
        lVar14 = (ulonglong)uVar16 * -0x38 + (longlong)pauVar18;
        iVar10 = (*(code *)PTR_bcmp_00799020)();
        if (iVar10 == 0) {
          lVar11 = ((longlong)pauVar2 - lVar14 >> 3) * 0x6db6db6db6db6db7;
          uVar12 = lVar11 - 0x10U & uVar3;
          pcVar1 = *pauVar2 + uVar12;
          auVar19[0] = -(*pcVar1 == -1);
          auVar19[1] = -(pcVar1[1] == -1);
          auVar19[2] = -(pcVar1[2] == -1);
          auVar19[3] = -(pcVar1[3] == -1);
          auVar19[4] = -(pcVar1[4] == -1);
          auVar19[5] = -(pcVar1[5] == -1);
          auVar19[6] = -(pcVar1[6] == -1);
          auVar19[7] = -(pcVar1[7] == -1);
          auVar19[8] = -(pcVar1[8] == -1);
          auVar19[9] = -(pcVar1[9] == -1);
          auVar19[10] = -(pcVar1[10] == -1);
          auVar19[0xb] = -(pcVar1[0xb] == -1);
          auVar19[0xc] = -(pcVar1[0xc] == -1);
          auVar19[0xd] = -(pcVar1[0xd] == -1);
          auVar19[0xe] = -(pcVar1[0xe] == -1);
          auVar19[0xf] = -(pcVar1[0xf] == -1);
          uVar6 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar19[0xf] >> 7) << 0xf;
          pcVar1 = (char *)((longlong)pauVar2 + lVar11);
          auVar20[0] = -(*pcVar1 == -1);
          auVar20[1] = -(pcVar1[1] == -1);
          auVar20[2] = -(pcVar1[2] == -1);
          auVar20[3] = -(pcVar1[3] == -1);
          auVar20[4] = -(pcVar1[4] == -1);
          auVar20[5] = -(pcVar1[5] == -1);
          auVar20[6] = -(pcVar1[6] == -1);
          auVar20[7] = -(pcVar1[7] == -1);
          auVar20[8] = -(pcVar1[8] == -1);
          auVar20[9] = -(pcVar1[9] == -1);
          auVar20[10] = -(pcVar1[10] == -1);
          auVar20[0xb] = -(pcVar1[0xb] == -1);
          auVar20[0xc] = -(pcVar1[0xc] == -1);
          auVar20[0xd] = -(pcVar1[0xd] == -1);
          auVar20[0xe] = -(pcVar1[0xe] == -1);
          auVar20[0xf] = -(pcVar1[0xf] == -1);
          uVar5 = 0xf;
          if (uVar6 != 0) {
            for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          sVar7 = 0;
          for (uVar16 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar20[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            sVar7 = sVar7 + 1;
          }
          uVar13 = 0x80;
          if ((ushort)(sVar7 + (uVar5 ^ 0xf)) < 0x10) {
            local_58 = local_58 + 1;
            param_1[2] = local_58;
            uVar13 = 0xff;
          }
          *(undefined1 *)((longlong)pauVar2 + lVar11) = uVar13;
          pauVar2[1][uVar12] = uVar13;
          local_50 = local_50 + -1;
          param_1[3] = local_50;
          if (*(longlong *)(lVar14 + -0x38) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
          }
          if (*(longlong *)(lVar14 + -0x20) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}


