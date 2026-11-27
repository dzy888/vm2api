// 00460470 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#0}>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::retain::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}::{closure#0}>
    */

void __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession,std[6c98fd8553dbae28]::hash::random::RandomState>>
::retain::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::_closure_0_::_closure_0_>
          (undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_50;
  longlong local_48;
  
  lVar19 = param_1[3];
  if (lVar19 != 0) {
    pauVar3 = (undefined1 (*) [16])*param_1;
    uVar4 = param_1[1];
    auVar20 = *pauVar3;
    uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
    pauVar15 = pauVar3 + 1;
    lVar5 = *param_2;
    uVar2 = *(uint *)(param_2 + 1);
    local_50 = param_1[2];
    pauVar18 = pauVar3;
    local_48 = lVar19;
    do {
      if ((short)uVar14 == 0) {
        do {
          auVar20 = *pauVar15;
          pauVar18 = pauVar18 + -0x80;
          pauVar15 = pauVar15 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
        } while (uVar14 == 0);
      }
      iVar9 = 0;
      for (uVar16 = uVar14; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      lVar17 = (longlong)pauVar18 - (ulonglong)(uint)(iVar9 << 7);
      if (lVar5 == *(longlong *)(lVar17 + -0x50)) {
        if (uVar2 < *(uint *)(lVar17 + -0x48)) goto LAB_00460552;
LAB_0046056b:
        lVar11 = (longlong)pauVar3 - lVar17 >> 7;
        uVar12 = lVar11 - 0x10U & uVar4;
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
        uVar7 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
        pcVar1 = *pauVar3 + lVar11;
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
        uVar6 = 0xf;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        sVar8 = 0;
        for (uVar16 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                              (ushort)(auVar21[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
            uVar16 = uVar16 >> 1 | 0x80000000) {
          sVar8 = sVar8 + 1;
        }
        uVar13 = 0x80;
        if ((ushort)(sVar8 + (uVar6 ^ 0xf)) < 0x10) {
          local_50 = local_50 + 1;
          param_1[2] = local_50;
          uVar13 = 0xff;
        }
        (*pauVar3)[lVar11] = uVar13;
        pauVar3[1][uVar12] = uVar13;
        local_48 = local_48 + -1;
        param_1[3] = local_48;
        if (*(longlong *)(lVar17 + -0x80) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::pool::AcpSuspendedSession>(lVar17 + -0x68);
      }
      else {
        if (*(longlong *)(lVar17 + -0x50) <= lVar5) goto LAB_0046056b;
LAB_00460552:
        cVar10 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::
                 has_suspended_session
                           (*(longlong *)(lVar17 + -0x40) + 0x10,*(undefined8 *)(lVar17 + -0x60),
                            *(undefined8 *)(lVar17 + -0x58));
        if (cVar10 == '\0') goto LAB_0046056b;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}


