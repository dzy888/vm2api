// 006956b0 is_safety_finish_reason

/* craggemini_core[66f3c71560d70857]::multiprotocol::is_safety_finish_reason */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::is_safety_finish_reason
          (ulonglong *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = 0;
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  switch(param_2) {
  case 4:
    bVar4 = (uint)*param_1 == 0x49495053;
    break;
  default:
    goto switchD_006956d7_caseD_5;
  case 6:
    uVar2 = (uint)*param_1 ^ 0x45464153;
    uVar3 = (ulonglong)uVar2;
    bVar4 = *(short *)((longlong)param_1 + 4) == 0x5954 && uVar2 == 0;
    break;
  case 9:
    uVar3 = *param_1 ^ 0x53494c4b434f4c42;
    uVar2 = (byte)param_1[1] ^ 0x54;
    goto LAB_006957a0;
  case 10:
    uVar3 = *param_1 ^ 0x4954415449434552;
    uVar2 = (ushort)param_1[1] ^ 0x4e4f;
    goto LAB_006957a0;
  case 0xc:
    uVar3 = *param_1 ^ 0x41535f4547414d49;
    uVar2 = (uint)param_1[1] ^ 0x59544546;
LAB_006957a0:
    bVar4 = uVar2 == 0 && uVar3 == 0;
    break;
  case 0x10:
    auVar7[0] = -((char)*param_1 == DAT_001838c0);
    auVar7[1] = -(*(char *)((longlong)param_1 + 1) == UNK_001838c1);
    auVar7[2] = -(*(char *)((longlong)param_1 + 2) == UNK_001838c2);
    auVar7[3] = -(*(char *)((longlong)param_1 + 3) == UNK_001838c3);
    auVar7[4] = -(*(char *)((longlong)param_1 + 4) == UNK_001838c4);
    auVar7[5] = -(*(char *)((longlong)param_1 + 5) == UNK_001838c5);
    auVar7[6] = -(*(char *)((longlong)param_1 + 6) == UNK_001838c6);
    auVar7[7] = -(*(char *)((longlong)param_1 + 7) == UNK_001838c7);
    auVar7[8] = -((char)param_1[1] == UNK_001838c8);
    auVar7[9] = -(*(char *)((longlong)param_1 + 9) == UNK_001838c9);
    auVar7[10] = -(*(char *)((longlong)param_1 + 10) == UNK_001838ca);
    auVar7[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_001838cb);
    auVar7[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_001838cc);
    auVar7[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_001838cd);
    auVar7[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_001838ce);
    auVar7[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_001838cf);
    goto LAB_0069574d;
  case 0x12:
    auVar5[0] = -((char)*param_1 == DAT_00183e00);
    auVar5[1] = -(*(char *)((longlong)param_1 + 1) == UNK_00183e01);
    auVar5[2] = -(*(char *)((longlong)param_1 + 2) == UNK_00183e02);
    auVar5[3] = -(*(char *)((longlong)param_1 + 3) == UNK_00183e03);
    auVar5[4] = -(*(char *)((longlong)param_1 + 4) == UNK_00183e04);
    auVar5[5] = -(*(char *)((longlong)param_1 + 5) == UNK_00183e05);
    auVar5[6] = -(*(char *)((longlong)param_1 + 6) == UNK_00183e06);
    auVar5[7] = -(*(char *)((longlong)param_1 + 7) == UNK_00183e07);
    auVar5[8] = -((char)param_1[1] == UNK_00183e08);
    auVar5[9] = -(*(char *)((longlong)param_1 + 9) == UNK_00183e09);
    auVar5[10] = -(*(char *)((longlong)param_1 + 10) == UNK_00183e0a);
    auVar5[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_00183e0b);
    auVar5[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_00183e0c);
    auVar5[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_00183e0d);
    auVar5[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_00183e0e);
    auVar5[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_00183e0f);
    auVar8[0] = -((char)param_1[2] == s_NT_001842d0[0]);
    auVar8[1] = -((char)(param_1[2] >> 8) == s_NT_001842d0[1]);
    auVar8[2] = -(s_NT_001842d0[2] == '\0');
    auVar8[3] = -(s_NT_001842d0[3] == '\0');
    auVar8[4] = -(UNK_001842d4 == '\0');
    auVar8[5] = -(UNK_001842d5 == '\0');
    auVar8[6] = -(UNK_001842d6 == '\0');
    auVar8[7] = -(UNK_001842d7 == '\0');
    auVar8[8] = -(UNK_001842d8 == '\0');
    auVar8[9] = -(UNK_001842d9 == '\0');
    auVar8[10] = -(UNK_001842da == '\0');
    auVar8[0xb] = -(UNK_001842db == '\0');
    auVar8[0xc] = -(UNK_001842dc == '\0');
    auVar8[0xd] = -(UNK_001842dd == '\0');
    auVar8[0xe] = -(UNK_001842de == '\0');
    auVar8[0xf] = -(UNK_001842df == '\0');
    auVar8 = auVar8 & auVar5;
    uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
    goto LAB_00695751;
  case 0x18:
    uVar3 = param_1[2];
    auVar9[0] = -((char)uVar3 == s__CONTENT_00184110[0]);
    auVar9[1] = -((char)(uVar3 >> 8) == s__CONTENT_00184110[1]);
    auVar9[2] = -((char)(uVar3 >> 0x10) == s__CONTENT_00184110[2]);
    auVar9[3] = -((char)(uVar3 >> 0x18) == s__CONTENT_00184110[3]);
    auVar9[4] = -((char)(uVar3 >> 0x20) == s__CONTENT_00184110[4]);
    auVar9[5] = -((char)(uVar3 >> 0x28) == s__CONTENT_00184110[5]);
    auVar9[6] = -((char)(uVar3 >> 0x30) == s__CONTENT_00184110[6]);
    auVar9[7] = -((char)(uVar3 >> 0x38) == s__CONTENT_00184110[7]);
    auVar9[8] = -(s__CONTENT_00184110[8] == '\0');
    auVar9[9] = -(s__CONTENT_00184110[9] == '\0');
    auVar9[10] = -(s__CONTENT_00184110[10] == '\0');
    auVar9[0xb] = -(s__CONTENT_00184110[0xb] == '\0');
    auVar9[0xc] = -(UNK_0018411c == '\0');
    auVar9[0xd] = -(UNK_0018411d == '\0');
    auVar9[0xe] = -(UNK_0018411e == '\0');
    auVar9[0xf] = -(UNK_0018411f == '\0');
    auVar6[0] = -((char)*param_1 == s_IMAGE_PROHIBITED_00184490[0]);
    auVar6[1] = -(*(char *)((longlong)param_1 + 1) == s_IMAGE_PROHIBITED_00184490[1]);
    auVar6[2] = -(*(char *)((longlong)param_1 + 2) == s_IMAGE_PROHIBITED_00184490[2]);
    auVar6[3] = -(*(char *)((longlong)param_1 + 3) == s_IMAGE_PROHIBITED_00184490[3]);
    auVar6[4] = -(*(char *)((longlong)param_1 + 4) == s_IMAGE_PROHIBITED_00184490[4]);
    auVar6[5] = -(*(char *)((longlong)param_1 + 5) == s_IMAGE_PROHIBITED_00184490[5]);
    auVar6[6] = -(*(char *)((longlong)param_1 + 6) == s_IMAGE_PROHIBITED_00184490[6]);
    auVar6[7] = -(*(char *)((longlong)param_1 + 7) == s_IMAGE_PROHIBITED_00184490[7]);
    auVar6[8] = -((char)param_1[1] == s_IMAGE_PROHIBITED_00184490[8]);
    auVar6[9] = -(*(char *)((longlong)param_1 + 9) == s_IMAGE_PROHIBITED_00184490[9]);
    auVar6[10] = -(*(char *)((longlong)param_1 + 10) == s_IMAGE_PROHIBITED_00184490[10]);
    auVar6[0xb] = -(*(char *)((longlong)param_1 + 0xb) == s_IMAGE_PROHIBITED_00184490[0xb]);
    auVar6[0xc] = -(*(char *)((longlong)param_1 + 0xc) == s_IMAGE_PROHIBITED_00184490[0xc]);
    auVar6[0xd] = -(*(char *)((longlong)param_1 + 0xd) == s_IMAGE_PROHIBITED_00184490[0xd]);
    auVar6[0xe] = -(*(char *)((longlong)param_1 + 0xe) == s_IMAGE_PROHIBITED_00184490[0xe]);
    auVar6[0xf] = -(*(char *)((longlong)param_1 + 0xf) == s_IMAGE_PROHIBITED_00184490[0xf]);
    auVar7 = auVar6 & auVar9;
LAB_0069574d:
    uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar7[0xf] >> 7) << 0xf;
LAB_00695751:
    uVar3 = (ulonglong)uVar1;
    bVar4 = uVar1 == 0xffff;
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar4);
switchD_006956d7_caseD_5:
  return uVar3;
}


