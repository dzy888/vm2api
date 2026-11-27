// 001b3e20 mul_clamped

/* <curve25519_dalek[8828c522c30c513]::montgomery::MontgomeryPoint>::mul_clamped */

undefined8 __rustcall
<curve25519_dalek[8828c522c30c513]::montgomery::MontgomeryPoint>::mul_clamped
          (undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  byte local_a;
  byte local_9;
  
  *param_3 = *param_3 & 0xf8;
  param_3[0x1f] = param_3[0x1f] & 0x3f | 0x40;
  local_28 = *(undefined4 *)param_3;
  uStack_24 = *(undefined4 *)(param_3 + 4);
  uStack_20 = *(undefined4 *)(param_3 + 8);
  uStack_1c = *(undefined4 *)(param_3 + 0xc);
  local_18 = *(undefined8 *)(param_3 + 0x10);
  local_10 = *(undefined4 *)(param_3 + 0x18);
  local_c = *(undefined2 *)(param_3 + 0x1c);
  local_a = param_3[0x1e];
  local_9 = param_3[0x1f];
  (*(code *)PTR_mul_0021a560)(local_28,&local_28);
  return param_1;
}


