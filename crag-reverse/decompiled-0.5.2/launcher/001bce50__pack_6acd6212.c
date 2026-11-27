// 001bce50 pack

/* <curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::pack */

void __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::u64::scalar::Scalar52>::pack
          (undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = (char)uVar1;
  param_1[1] = (char)((ulonglong)uVar1 >> 8);
  param_1[2] = (char)((ulonglong)uVar1 >> 0x10);
  param_1[3] = (char)((ulonglong)uVar1 >> 0x18);
  param_1[4] = (char)((ulonglong)uVar1 >> 0x20);
  param_1[5] = (char)((ulonglong)uVar1 >> 0x28);
  param_1[6] = (byte)((ulonglong)uVar1 >> 0x30) | (byte)((int)uVar2 << 4);
  param_1[7] = (char)(uVar2 >> 4);
  param_1[8] = (char)(uVar2 >> 0xc);
  param_1[9] = (char)(uVar2 >> 0x14);
  param_1[10] = (char)(uVar2 >> 0x1c);
  param_1[0xb] = (char)(uVar2 >> 0x24);
  param_1[0xc] = (char)(uVar2 >> 0x2c);
  param_1[0xd] = (char)uVar3;
  param_1[0xe] = (char)((ulonglong)uVar3 >> 8);
  param_1[0xf] = (char)((ulonglong)uVar3 >> 0x10);
  param_1[0x10] = (char)((ulonglong)uVar3 >> 0x18);
  param_1[0x11] = (char)((ulonglong)uVar3 >> 0x20);
  param_1[0x12] = (char)((ulonglong)uVar3 >> 0x28);
  param_1[0x13] = (byte)((ulonglong)uVar3 >> 0x30) | (byte)((int)uVar4 << 4);
  param_1[0x14] = (char)(uVar4 >> 4);
  param_1[0x15] = (char)(uVar4 >> 0xc);
  param_1[0x16] = (char)(uVar4 >> 0x14);
  param_1[0x17] = (char)(uVar4 >> 0x1c);
  param_1[0x18] = (char)(uVar4 >> 0x24);
  uVar1 = param_2[4];
  param_1[0x19] = (char)(uVar4 >> 0x2c);
  param_1[0x1a] = (char)uVar1;
  param_1[0x1b] = (char)((ulonglong)uVar1 >> 8);
  param_1[0x1c] = (char)((ulonglong)uVar1 >> 0x10);
  param_1[0x1d] = (char)((ulonglong)uVar1 >> 0x18);
  param_1[0x1e] = (char)((ulonglong)uVar1 >> 0x20);
  param_1[0x1f] = (char)((ulonglong)uVar1 >> 0x28);
  return;
}


