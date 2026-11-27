// 00460810 <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::retain::<<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::{closure#0}>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
::retain::<<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::_closure_0_>
          (undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_58;
  longlong local_40;
  
  lVar18 = param_1[3];
  if (lVar18 != 0) {
    pauVar3 = (undefined1 (*) [16])*param_1;
    uVar4 = param_1[1];
    auVar20 = *pauVar3;
    uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
    pauVar17 = pauVar3 + 1;
    uVar5 = *param_2;
    uVar6 = *param_3;
    local_58 = param_1[2];
    pauVar19 = pauVar3;
    local_40 = lVar18;
    do {
      if ((short)uVar11 == 0) {
        do {
          auVar20 = *pauVar17;
          pauVar19 = pauVar19 + -0x38;
          pauVar17 = pauVar17 + 1;
          uVar11 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar11 == 0);
      }
      uVar15 = 0;
      for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      puVar2 = (ulonglong *)((longlong)pauVar19 + (ulonglong)uVar15 * -0x38 + -8);
      uVar12 = uVar5 - *puVar2;
      if (uVar5 < *puVar2) {
        uVar12 = 0;
      }
      if (uVar6 < uVar12) {
        lVar16 = (ulonglong)uVar15 * -0x38 + (longlong)pauVar19;
        lVar13 = ((longlong)pauVar3 - lVar16 >> 3) * 0x6db6db6db6db6db7;
        uVar12 = lVar13 - 0x10U & uVar4;
        pcVar1 = *pauVar3 + uVar12;
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
        uVar8 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        pcVar1 = (char *)((longlong)pauVar3 + lVar13);
        auVar21[0] = -(*pcVar1 == -1);
        auVar21[1] = -(pcVar1[1] == -1);
        auVar21[2] = -(pcVar1[2] == -1);
        auVar21[3] = -(pcVar1[3] == -1);
        auVar21[4] = -(pcVar1[4] == -1);
        auVar21[5] = -(pcVar1[5] == -1);
        auVar21[6] = -(pcVar1[6] == -1);
        auVar21[7] = -(pcVar1[7] == -1);
        auVar21[8] = -(pcVar1[8] == -1);
        auVar21[9] = -(pcVar1[9] == -1);
        auVar21[10] = -(pcVar1[10] == -1);
        auVar21[0xb] = -(pcVar1[0xb] == -1);
        auVar21[0xc] = -(pcVar1[0xc] == -1);
        auVar21[0xd] = -(pcVar1[0xd] == -1);
        auVar21[0xe] = -(pcVar1[0xe] == -1);
        auVar21[0xf] = -(pcVar1[0xf] == -1);
        uVar7 = 0xf;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar7 == 0; uVar7 = uVar7 - 1) {
          }
        }
        sVar9 = 0;
        for (uVar15 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar21[0xf] >> 7) << 0xf) | 0x10000; (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x80000000) {
          sVar9 = sVar9 + 1;
        }
        uVar14 = 0x80;
        if ((ushort)(sVar9 + (uVar7 ^ 0xf)) < 0x10) {
          local_58 = local_58 + 1;
          param_1[2] = local_58;
          uVar14 = 0xff;
        }
        *(undefined1 *)((longlong)pauVar3 + lVar13) = uVar14;
        pauVar3[1][uVar12] = uVar14;
        local_40 = local_40 + -1;
        param_1[3] = local_40;
        if (*(longlong *)(lVar16 + -0x38) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        if (*(longlong *)(lVar16 + -0x20) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      uVar11 = uVar11 - 1 & uVar11;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}


