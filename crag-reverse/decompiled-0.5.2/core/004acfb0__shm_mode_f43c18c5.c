// 004acfb0 shm_mode

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::shm_mode */

undefined1  [16] __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot>::shm_mode(longlong param_1)

{
  char *pcVar1;
  char (*pacVar2) [4];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (*(longlong *)(param_1 + 0x150) != 0x11) {
    auVar9._8_8_ = 0x10;
    auVar9._0_8_ = "inline_socket_v1";
    return auVar9;
  }
  pcVar1 = *(char **)(param_1 + 0x148);
  auVar4[0] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0] == *pcVar1);
  auVar4[1] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[1] == pcVar1[1]);
  auVar4[2] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[2] == pcVar1[2]);
  auVar4[3] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[3] == pcVar1[3]);
  auVar4[4] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[4] == pcVar1[4]);
  auVar4[5] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[5] == pcVar1[5]);
  auVar4[6] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[6] == pcVar1[6]);
  auVar4[7] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[7] == pcVar1[7]);
  auVar4[8] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[8] == pcVar1[8]);
  auVar4[9] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[9] == pcVar1[9]);
  auVar4[10] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[10] ==
                pcVar1[10]);
  auVar4[0xb] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xb] ==
                 pcVar1[0xb]);
  auVar4[0xc] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xc] ==
                 pcVar1[0xc]);
  auVar4[0xd] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xd] ==
                 pcVar1[0xd]);
  auVar4[0xe] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xe] ==
                 pcVar1[0xe]);
  auVar4[0xf] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xf] ==
                 pcVar1[0xf]);
  auVar6[0] = -(s_3_001a503a[0] == pcVar1[0x10]);
  auVar6[1] = 0xff;
  auVar6[2] = 0xff;
  auVar6[3] = 0xff;
  auVar6[4] = 0xff;
  auVar6[5] = 0xff;
  auVar6[6] = 0xff;
  auVar6[7] = 0xff;
  auVar6[8] = 0xff;
  auVar6[9] = 0xff;
  auVar6[10] = 0xff;
  auVar6[0xb] = 0xff;
  auVar6[0xc] = 0xff;
  auVar6[0xd] = 0xff;
  auVar6[0xe] = 0xff;
  auVar6[0xf] = 0xff;
  auVar6 = auVar6 & auVar4;
  if (((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) &&
     ((int)*(undefined8 *)(param_1 + 0x80) != 2)) {
    auVar8._8_8_ = 0xd;
    auVar8._0_8_ = "memfd_ring_v2";
    return auVar8;
  }
  auVar5[0] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0] == *pcVar1);
  auVar5[1] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[1] == pcVar1[1]);
  auVar5[2] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[2] == pcVar1[2]);
  auVar5[3] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[3] == pcVar1[3]);
  auVar5[4] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[4] == pcVar1[4]);
  auVar5[5] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[5] == pcVar1[5]);
  auVar5[6] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[6] == pcVar1[6]);
  auVar5[7] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[7] == pcVar1[7]);
  auVar5[8] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[8] == pcVar1[8]);
  auVar5[9] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[9] == pcVar1[9]);
  auVar5[10] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[10] ==
                pcVar1[10]);
  auVar5[0xb] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xb] ==
                 pcVar1[0xb]);
  auVar5[0xc] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xc] ==
                 pcVar1[0xc]);
  auVar5[0xd] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xd] ==
                 pcVar1[0xd]);
  auVar5[0xe] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xe] ==
                 pcVar1[0xe]);
  auVar5[0xf] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xf] ==
                 pcVar1[0xf]);
  auVar7[0] = -(s_2_001a504b[0] == pcVar1[0x10]);
  auVar7[1] = 0xff;
  auVar7[2] = 0xff;
  auVar7[3] = 0xff;
  auVar7[4] = 0xff;
  auVar7[5] = 0xff;
  auVar7[6] = 0xff;
  auVar7[7] = 0xff;
  auVar7[8] = 0xff;
  auVar7[9] = 0xff;
  auVar7[10] = 0xff;
  auVar7[0xb] = 0xff;
  auVar7[0xc] = 0xff;
  auVar7[0xd] = 0xff;
  auVar7[0xe] = 0xff;
  auVar7[0xf] = 0xff;
  auVar7 = auVar7 & auVar5;
  if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
    if (*(longlong *)(param_1 + 0xe8) == 0) {
LAB_004ad0c6:
      auVar11._8_8_ = 0xb;
      auVar11._0_8_ = "file_shm_v1";
      return auVar11;
    }
    lVar3 = 0;
    do {
      if ((*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10 + lVar3) == 6) &&
         (pacVar2 = *(char (**) [4])(*(longlong *)(param_1 + 0xe0) + 8 + lVar3),
         *(char (*) [2])pacVar2[1] == s_v1_001a4a46 &&
         *pacVar2 == anon_d3057478e380898db632effa827bd31f_84_llvm_2674179329317868992))
      goto LAB_004ad0c6;
      lVar3 = lVar3 + 0x18;
    } while (*(longlong *)(param_1 + 0xe8) * 0x18 != lVar3);
  }
  auVar10._8_8_ = 0x10;
  auVar10._0_8_ = "inline_socket_v1";
  return auVar10;
}


