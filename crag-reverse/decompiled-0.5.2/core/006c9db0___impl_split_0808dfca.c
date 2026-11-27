// 006c9db0 _impl_split

/* <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4 as
   <curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4>::split::__Impl_split__>::_impl_split
    */

void __rustcall
<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4_as<curve25519_dalek[8828c522c30c513]::backend::vector::avx2::field::FieldElement2625x4>::split::__Impl_split__>
::_impl_split(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  *param_1 = (ulonglong)param_2[2] * 0x4000000 + (ulonglong)*param_2;
  param_1[5] = (ulonglong)uVar2 * 0x4000000 + (ulonglong)uVar1;
  param_1[10] = (ulonglong)uVar5 * 0x4000000 + (ulonglong)uVar3;
  param_1[0xf] = (ulonglong)uVar6 * 0x4000000 + (ulonglong)uVar4;
  uVar1 = param_2[9];
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[1] = (ulonglong)param_2[10] * 0x4000000 + (ulonglong)param_2[8];
  param_1[6] = (ulonglong)uVar2 * 0x4000000 + (ulonglong)uVar1;
  param_1[0xb] = (ulonglong)uVar5 * 0x4000000 + (ulonglong)uVar3;
  param_1[0x10] = (ulonglong)uVar6 * 0x4000000 + (ulonglong)uVar4;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x13];
  uVar3 = param_2[0x14];
  uVar4 = param_2[0x15];
  uVar5 = param_2[0x16];
  uVar6 = param_2[0x17];
  param_1[2] = (ulonglong)param_2[0x12] * 0x4000000 + (ulonglong)param_2[0x10];
  param_1[7] = (ulonglong)uVar2 * 0x4000000 + (ulonglong)uVar1;
  param_1[0xc] = (ulonglong)uVar5 * 0x4000000 + (ulonglong)uVar3;
  param_1[0x11] = (ulonglong)uVar6 * 0x4000000 + (ulonglong)uVar4;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1b];
  uVar3 = param_2[0x1c];
  uVar4 = param_2[0x1d];
  uVar5 = param_2[0x1e];
  uVar6 = param_2[0x1f];
  param_1[3] = (ulonglong)param_2[0x1a] * 0x4000000 + (ulonglong)param_2[0x18];
  param_1[8] = (ulonglong)uVar2 * 0x4000000 + (ulonglong)uVar1;
  param_1[0xd] = (ulonglong)uVar5 * 0x4000000 + (ulonglong)uVar3;
  param_1[0x12] = (ulonglong)uVar6 * 0x4000000 + (ulonglong)uVar4;
  uVar1 = param_2[0x21];
  uVar2 = param_2[0x23];
  uVar3 = param_2[0x24];
  uVar4 = param_2[0x25];
  uVar5 = param_2[0x26];
  uVar6 = param_2[0x27];
  param_1[4] = (ulonglong)param_2[0x22] * 0x4000000 + (ulonglong)param_2[0x20];
  param_1[9] = (ulonglong)uVar2 * 0x4000000 + (ulonglong)uVar1;
  param_1[0xe] = (ulonglong)uVar5 * 0x4000000 + (ulonglong)uVar3;
  param_1[0x13] = (ulonglong)uVar6 * 0x4000000 + (ulonglong)uVar4;
  return;
}


