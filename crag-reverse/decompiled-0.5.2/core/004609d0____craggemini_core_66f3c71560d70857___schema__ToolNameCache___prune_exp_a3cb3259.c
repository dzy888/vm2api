// 004609d0 <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired_at::{closure#1}>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::retain::<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired_at::{closure#1}>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::schema::ToolNameEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
::retain::
<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::prune_expired_at::_closure_1_>
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_60;
  longlong local_50;
  
  lVar14 = param_1[3];
  if (lVar14 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    uVar3 = param_1[1];
    auVar19 = *pauVar2;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
    pauVar12 = pauVar2 + 1;
    local_60 = param_1[2];
    pauVar15 = pauVar2;
    local_50 = lVar14;
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar19 = *pauVar12;
          pauVar15 = pauVar15 + -0x40;
          pauVar12 = pauVar12 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
        } while (uVar8 == 0);
      }
      iVar7 = 0;
      for (uVar13 = uVar8; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      lVar16 = (longlong)pauVar15 - (ulonglong)(uint)(iVar7 << 6);
      uVar13 = *(uint *)(lVar16 + -8);
      uVar9 = (*(code *)PTR_duration_since_007992b0)();
      bVar17 = uVar9 < *(ulonglong *)(param_3 + 0x60);
      bVar18 = false;
      if (uVar9 == *(ulonglong *)(param_3 + 0x60)) {
        bVar17 = uVar13 < *(uint *)(param_3 + 0x68);
        bVar18 = uVar13 == *(uint *)(param_3 + 0x68);
      }
      if (!bVar17 && !bVar18) {
        lVar10 = (longlong)pauVar2 - lVar16 >> 6;
        uVar9 = lVar10 - 0x10U & uVar3;
        pcVar1 = *pauVar2 + uVar9;
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
        uVar5 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
        pcVar1 = *pauVar2 + lVar10;
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
        uVar4 = 0xf;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        sVar6 = 0;
        for (uVar13 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                              (ushort)(auVar20[0xf] >> 7) << 0xf) | 0x10000; (uVar13 & 1) == 0;
            uVar13 = uVar13 >> 1 | 0x80000000) {
          sVar6 = sVar6 + 1;
        }
        uVar11 = 0x80;
        if ((ushort)(sVar6 + (uVar4 ^ 0xf)) < 0x10) {
          local_60 = local_60 + 1;
          param_1[2] = local_60;
          uVar11 = 0xff;
        }
        (*pauVar2)[lVar10] = uVar11;
        pauVar2[1][uVar9] = uVar11;
        local_50 = local_50 + -1;
        param_1[3] = local_50;
        if (*(longlong *)(lVar16 + -0x40) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
        }
        if (*(longlong *)(lVar16 + -0x28) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}


