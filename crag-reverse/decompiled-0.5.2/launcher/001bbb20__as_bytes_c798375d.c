// 001bbb20 as_bytes

/* <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::as_bytes */

void __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::as_bytes
          (undefined1 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = *param_2 & 0x7ffffffffffff;
  lVar10 = (param_2[1] & 0x7ffffffffffff) + (*param_2 >> 0x33);
  lVar3 = (param_2[2] & 0x7ffffffffffff) + (param_2[1] >> 0x33);
  lVar2 = (param_2[3] & 0x7ffffffffffff) + (param_2[2] >> 0x33);
  lVar9 = (param_2[4] & 0x7ffffffffffff) + (param_2[3] >> 0x33);
  lVar1 = (param_2[4] >> 0x33) * 0x13;
  uVar5 = (((((lVar1 + uVar7 + 0x13 >> 0x33) + lVar10 >> 0x33) + lVar3 >> 0x33) + lVar2 >> 0x33) +
           lVar9 >> 0x33) * 0x13 + lVar1 + uVar7;
  uVar8 = (uVar5 >> 0x33) + lVar10;
  uVar6 = (uVar8 >> 0x33) + lVar3;
  uVar4 = (uVar6 >> 0x33) + lVar2;
  uVar7 = (uVar4 >> 0x33) + lVar9;
  *param_1 = (char)uVar5;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  param_1[6] = ((byte)(uVar5 >> 0x30) & 7) + (char)uVar8 * '\b';
  param_1[7] = (char)(uVar8 >> 5);
  param_1[8] = (char)(uVar8 >> 0xd);
  param_1[9] = (char)(uVar8 >> 0x15);
  param_1[10] = (char)(uVar8 >> 0x1d);
  param_1[0xb] = (char)(uVar8 >> 0x25);
  param_1[0xc] = (byte)((int)uVar6 << 6) | (byte)(uVar8 >> 0x2d) & 0x3f;
  param_1[0xd] = (char)(uVar6 >> 2);
  param_1[0xe] = (char)(uVar6 >> 10);
  param_1[0xf] = (char)(uVar6 >> 0x12);
  param_1[0x10] = (char)(uVar6 >> 0x1a);
  param_1[0x11] = (char)(uVar6 >> 0x22);
  param_1[0x12] = (char)(uVar6 >> 0x2a);
  param_1[0x13] = ((byte)(uVar6 >> 0x32) & 1) + (char)uVar4 * '\x02';
  param_1[0x14] = (char)(uVar4 >> 7);
  param_1[0x15] = (char)(uVar4 >> 0xf);
  param_1[0x16] = (char)(uVar4 >> 0x17);
  param_1[0x17] = (char)(uVar4 >> 0x1f);
  param_1[0x18] = (char)(uVar4 >> 0x27);
  param_1[0x19] = (byte)((int)uVar7 << 4) | (byte)(uVar4 >> 0x2f) & 0xf;
  param_1[0x1a] = (char)(uVar7 >> 4);
  param_1[0x1b] = (char)(uVar7 >> 0xc);
  param_1[0x1c] = (char)(uVar7 >> 0x14);
  param_1[0x1d] = (char)(uVar7 >> 0x1c);
  param_1[0x1e] = (char)(uVar7 >> 0x24);
  param_1[0x1f] = (byte)(uVar7 >> 0x2c) & 0x7f;
  return;
}


