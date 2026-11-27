// 006f7d90 fmt

/* <tokio[d7d91d38da47d894]::runtime::task::error::JoinError as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::error::JoinError_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
fmt(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    uStack_50 = PTR_fmt_0079a858;
    puVar5 = &DAT_0018875c;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x18);
    (*pcVar2)();
    auVar6[0] = -((char)local_58 == DAT_00182af0);
    auVar6[1] = -(local_58._1_1_ == UNK_00182af1);
    auVar6[2] = -(local_58._2_1_ == UNK_00182af2);
    auVar6[3] = -(local_58._3_1_ == UNK_00182af3);
    auVar6[4] = -(local_58._4_1_ == UNK_00182af4);
    auVar6[5] = -(local_58._5_1_ == UNK_00182af5);
    auVar6[6] = -(local_58._6_1_ == UNK_00182af6);
    auVar6[7] = -(local_58._7_1_ == UNK_00182af7);
    auVar6[8] = -((char)uStack_50 == UNK_00182af8);
    auVar6[9] = -(uStack_50._1_1_ == UNK_00182af9);
    auVar6[10] = -(uStack_50._2_1_ == UNK_00182afa);
    auVar6[0xb] = -(uStack_50._3_1_ == UNK_00182afb);
    auVar6[0xc] = -(uStack_50._4_1_ == UNK_00182afc);
    auVar6[0xd] = -(uStack_50._5_1_ == UNK_00182afd);
    auVar6[0xe] = -(uStack_50._6_1_ == UNK_00182afe);
    auVar6[0xf] = -(uStack_50._7_1_ == UNK_00182aff);
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        == 0xffff) {
      lVar3 = 0x10;
      puVar4 = puVar1 + 1;
    }
    else {
      (*pcVar2)();
      auVar7[0] = -((char)local_58 == DAT_001831a0);
      auVar7[1] = -(local_58._1_1_ == UNK_001831a1);
      auVar7[2] = -(local_58._2_1_ == UNK_001831a2);
      auVar7[3] = -(local_58._3_1_ == UNK_001831a3);
      auVar7[4] = -(local_58._4_1_ == UNK_001831a4);
      auVar7[5] = -(local_58._5_1_ == UNK_001831a5);
      auVar7[6] = -(local_58._6_1_ == UNK_001831a6);
      auVar7[7] = -(local_58._7_1_ == UNK_001831a7);
      auVar7[8] = -((char)uStack_50 == UNK_001831a8);
      auVar7[9] = -(uStack_50._1_1_ == UNK_001831a9);
      auVar7[10] = -(uStack_50._2_1_ == UNK_001831aa);
      auVar7[0xb] = -(uStack_50._3_1_ == UNK_001831ab);
      auVar7[0xc] = -(uStack_50._4_1_ == UNK_001831ac);
      auVar7[0xd] = -(uStack_50._5_1_ == UNK_001831ad);
      auVar7[0xe] = -(uStack_50._6_1_ == UNK_001831ae);
      auVar7[0xf] = -(uStack_50._7_1_ == UNK_001831af);
      lVar3 = 8;
      puVar4 = puVar1;
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf
                  ) != 0xffff) {
        uStack_50 = PTR_fmt_0079a858;
        puVar5 = &DAT_00188ad9;
        goto LAB_006f7e90;
      }
    }
    local_30 = *puVar4;
    local_28 = *(undefined8 *)((longlong)puVar1 + lVar3);
    uStack_50 = PTR_fmt_0079a858;
    local_48 = &local_30;
    local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
    puVar5 = &DAT_0018bfa3;
  }
LAB_006f7e90:
  PTR_fmt_0079a858 = uStack_50;
  local_58 = param_1;
  (*(code *)PTR_write_007994b0)(&local_58,puVar5);
  return;
}


