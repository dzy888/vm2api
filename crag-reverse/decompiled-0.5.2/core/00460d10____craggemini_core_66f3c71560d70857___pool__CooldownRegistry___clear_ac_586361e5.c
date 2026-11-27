// 00460d10 <<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String, u64,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::retain::<<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all::{closure#0}>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::clear_account_all::_closure_0_>
          (undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_58;
  longlong local_50;
  
  lVar16 = param_1[3];
  if (lVar16 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    uVar3 = param_1[1];
    auVar18 = *pauVar2;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
    pauVar14 = pauVar2 + 1;
    uVar4 = *(ulonglong *)(param_2 + 0x10);
    local_58 = param_1[2];
    pauVar17 = pauVar2;
    local_50 = lVar16;
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar18 = *pauVar14;
          pauVar17 = pauVar17 + -0x20;
          pauVar14 = pauVar14 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar8 == 0);
      }
      iVar9 = 0;
      for (uVar15 = uVar8; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      lVar13 = (longlong)pauVar17 - (ulonglong)(uint)(iVar9 << 5);
      if ((uVar4 <= *(ulonglong *)(lVar13 + -0x10)) &&
         (iVar9 = (*(code *)PTR_bcmp_00799020)(), iVar9 == 0)) {
        lVar10 = (longlong)pauVar2 - lVar13 >> 5;
        uVar11 = lVar10 - 0x10U & uVar3;
        pcVar1 = *pauVar2 + uVar11;
        auVar18[0] = -(*pcVar1 == -1);
        auVar18[1] = -(pcVar1[1] == -1);
        auVar18[2] = -(pcVar1[2] == -1);
        auVar18[3] = -(pcVar1[3] == -1);
        auVar18[4] = -(pcVar1[4] == -1);
        auVar18[5] = -(pcVar1[5] == -1);
        auVar18[6] = -(pcVar1[6] == -1);
        auVar18[7] = -(pcVar1[7] == -1);
        auVar18[8] = -(pcVar1[8] == -1);
        auVar18[9] = -(pcVar1[9] == -1);
        auVar18[10] = -(pcVar1[10] == -1);
        auVar18[0xb] = -(pcVar1[0xb] == -1);
        auVar18[0xc] = -(pcVar1[0xc] == -1);
        auVar18[0xd] = -(pcVar1[0xd] == -1);
        auVar18[0xe] = -(pcVar1[0xe] == -1);
        auVar18[0xf] = -(pcVar1[0xf] == -1);
        uVar6 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
        pcVar1 = *pauVar2 + lVar10;
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
        uVar5 = 0xf;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
          }
        }
        sVar7 = 0;
        for (uVar15 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
                              (ushort)(auVar19[0xf] >> 7) << 0xf) | 0x10000; (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x80000000) {
          sVar7 = sVar7 + 1;
        }
        uVar12 = 0x80;
        if ((ushort)(sVar7 + (uVar5 ^ 0xf)) < 0x10) {
          local_58 = local_58 + 1;
          param_1[2] = local_58;
          uVar12 = 0xff;
        }
        (*pauVar2)[lVar10] = uVar12;
        pauVar2[1][uVar11] = uVar12;
        local_50 = local_50 + -1;
        param_1[3] = local_50;
        if (*(longlong *)(lVar13 + -0x20) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
        }
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}


