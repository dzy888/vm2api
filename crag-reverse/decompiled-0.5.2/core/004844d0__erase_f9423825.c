// 004844d0 erase

/* WARNING: Switch with 1 destination removed at 0x00484594 */
/* <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>::erase */

void __rustcall
<hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>
::erase(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar2 = *param_1;
  lVar6 = (lVar2 - param_2 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar7 = lVar6 - 0x10U & param_1[1];
  pcVar1 = (char *)(lVar2 + uVar7);
  auVar10[0] = -(*pcVar1 == -1);
  auVar10[1] = -(pcVar1[1] == -1);
  auVar10[2] = -(pcVar1[2] == -1);
  auVar10[3] = -(pcVar1[3] == -1);
  auVar10[4] = -(pcVar1[4] == -1);
  auVar10[5] = -(pcVar1[5] == -1);
  auVar10[6] = -(pcVar1[6] == -1);
  auVar10[7] = -(pcVar1[7] == -1);
  auVar10[8] = -(pcVar1[8] == -1);
  auVar10[9] = -(pcVar1[9] == -1);
  auVar10[10] = -(pcVar1[10] == -1);
  auVar10[0xb] = -(pcVar1[0xb] == -1);
  auVar10[0xc] = -(pcVar1[0xc] == -1);
  auVar10[0xd] = -(pcVar1[0xd] == -1);
  auVar10[0xe] = -(pcVar1[0xe] == -1);
  auVar10[0xf] = -(pcVar1[0xf] == -1);
  uVar4 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
  pcVar1 = (char *)(lVar2 + lVar6);
  auVar11[0] = -(*pcVar1 == -1);
  auVar11[1] = -(pcVar1[1] == -1);
  auVar11[2] = -(pcVar1[2] == -1);
  auVar11[3] = -(pcVar1[3] == -1);
  auVar11[4] = -(pcVar1[4] == -1);
  auVar11[5] = -(pcVar1[5] == -1);
  auVar11[6] = -(pcVar1[6] == -1);
  auVar11[7] = -(pcVar1[7] == -1);
  auVar11[8] = -(pcVar1[8] == -1);
  auVar11[9] = -(pcVar1[9] == -1);
  auVar11[10] = -(pcVar1[10] == -1);
  auVar11[0xb] = -(pcVar1[0xb] == -1);
  auVar11[0xc] = -(pcVar1[0xc] == -1);
  auVar11[0xd] = -(pcVar1[0xd] == -1);
  auVar11[0xe] = -(pcVar1[0xe] == -1);
  auVar11[0xf] = -(pcVar1[0xf] == -1);
  uVar3 = 0xf;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  sVar5 = 0;
  for (uVar9 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
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
                       (ushort)(auVar11[0xf] >> 7) << 0xf) | 0x10000; (uVar9 & 1) == 0;
      uVar9 = uVar9 >> 1 | 0x80000000) {
    sVar5 = sVar5 + 1;
  }
  uVar8 = 0x80;
  if ((ushort)(sVar5 + (uVar3 ^ 0xf)) < 0x10) {
    param_1[2] = param_1[2] + 1;
    uVar8 = 0xff;
  }
  *(undefined1 *)(lVar2 + lVar6) = uVar8;
  *(undefined1 *)(lVar2 + 0x10 + uVar7) = uVar8;
  param_1[3] = param_1[3] + -1;
  if (*(longlong *)(param_2 + -0x58) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(lVar6,1);
  }
  if (*(longlong *)(param_2 + -0x40) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_2 + -0x28) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


