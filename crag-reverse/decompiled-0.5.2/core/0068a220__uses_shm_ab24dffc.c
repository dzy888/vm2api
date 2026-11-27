// 0068a220 uses_shm

/* <craggemini_core[66f3c71560d70857]::bridge::Bridge>::uses_shm */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::bridge::Bridge>::uses_shm(longlong param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(longlong *)(param_1 + 0x140) == 0x11) {
    pcVar1 = *(char **)(param_1 + 0x138);
    auVar5[0] = -(*pcVar1 == DAT_001843e0);
    auVar5[1] = -(pcVar1[1] == UNK_001843e1);
    auVar5[2] = -(pcVar1[2] == UNK_001843e2);
    auVar5[3] = -(pcVar1[3] == UNK_001843e3);
    auVar5[4] = -(pcVar1[4] == UNK_001843e4);
    auVar5[5] = -(pcVar1[5] == UNK_001843e5);
    auVar5[6] = -(pcVar1[6] == UNK_001843e6);
    auVar5[7] = -(pcVar1[7] == UNK_001843e7);
    auVar5[8] = -(pcVar1[8] == UNK_001843e8);
    auVar5[9] = -(pcVar1[9] == UNK_001843e9);
    auVar5[10] = -(pcVar1[10] == UNK_001843ea);
    auVar5[0xb] = -(pcVar1[0xb] == UNK_001843eb);
    auVar5[0xc] = -(pcVar1[0xc] == UNK_001843ec);
    auVar5[0xd] = -(pcVar1[0xd] == UNK_001843ed);
    auVar5[0xe] = -(pcVar1[0xe] == UNK_001843ee);
    auVar5[0xf] = -(pcVar1[0xf] == UNK_001843ef);
    auVar6[0] = -(pcVar1[0x10] == DAT_001829f0);
    auVar6[1] = -(UNK_001829f1 == '\0');
    auVar6[2] = -(UNK_001829f2 == '\0');
    auVar6[3] = -(UNK_001829f3 == '\0');
    auVar6[4] = -(UNK_001829f4 == '\0');
    auVar6[5] = -(UNK_001829f5 == '\0');
    auVar6[6] = -(UNK_001829f6 == '\0');
    auVar6[7] = -(UNK_001829f7 == '\0');
    auVar6[8] = -(UNK_001829f8 == '\0');
    auVar6[9] = -(UNK_001829f9 == '\0');
    auVar6[10] = -(UNK_001829fa == '\0');
    auVar6[0xb] = -(UNK_001829fb == '\0');
    auVar6[0xc] = -(UNK_001829fc == '\0');
    auVar6[0xd] = -(UNK_001829fd == '\0');
    auVar6[0xe] = -(UNK_001829fe == '\0');
    auVar6[0xf] = -(UNK_001829ff == '\0');
    auVar6 = auVar6 & auVar5;
    uVar3 = 1;
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
       ((int)*(undefined8 *)(param_1 + 0x70) != 2)) {
      return uVar3;
    }
    auVar8[0] = -(pcVar1[0x10] == s_2_00182790[0]);
    auVar8[1] = -(s_2_00182790[1] == '\0');
    auVar8[2] = -(s_2_00182790[2] == '\0');
    auVar8[3] = -(s_2_00182790[3] == '\0');
    auVar8[4] = -(UNK_00182794 == '\0');
    auVar8[5] = -(UNK_00182795 == '\0');
    auVar8[6] = -(UNK_00182796 == '\0');
    auVar8[7] = -(UNK_00182797 == '\0');
    auVar8[8] = -(UNK_00182798 == '\0');
    auVar8[9] = -(UNK_00182799 == '\0');
    auVar8[10] = -(UNK_0018279a == '\0');
    auVar8[0xb] = -(UNK_0018279b == '\0');
    auVar8[0xc] = -(UNK_0018279c == '\0');
    auVar8[0xd] = -(UNK_0018279d == '\0');
    auVar8[0xe] = -(UNK_0018279e == '\0');
    auVar8[0xf] = -(UNK_0018279f == '\0');
    auVar7[0] = -(*pcVar1 == 'a');
    auVar7[1] = -(pcVar1[1] == 'g');
    auVar7[2] = -(pcVar1[2] == 'y');
    auVar7[3] = -(pcVar1[3] == '_');
    auVar7[4] = -(pcVar1[4] == 't');
    auVar7[5] = -(pcVar1[5] == 'u');
    auVar7[6] = -(pcVar1[6] == 'i');
    auVar7[7] = -(pcVar1[7] == '_');
    auVar7[8] = -(pcVar1[8] == 'b');
    auVar7[9] = -(pcVar1[9] == 'r');
    auVar7[10] = -(pcVar1[10] == 'i');
    auVar7[0xb] = -(pcVar1[0xb] == 'd');
    auVar7[0xc] = -(pcVar1[0xc] == 'g');
    auVar7[0xd] = -(pcVar1[0xd] == 'e');
    auVar7[0xe] = -(pcVar1[0xe] == '_');
    auVar7[0xf] = -(pcVar1[0xf] == 'v');
    auVar8 = auVar8 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        return uVar3;
      }
      lVar4 = 0;
      do {
        if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x10 + lVar4) == 6) &&
           (piVar2 = *(int **)(*(longlong *)(param_1 + 0xd0) + 8 + lVar4),
           (short)piVar2[1] == 0x3176 && *piVar2 == 0x5f6d6873)) {
          return uVar3;
        }
        lVar4 = lVar4 + 0x18;
      } while (*(longlong *)(param_1 + 0xd8) * 0x18 != lVar4);
    }
  }
  return 0;
}


