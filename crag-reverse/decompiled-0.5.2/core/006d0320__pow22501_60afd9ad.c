// 006d0320 pow22501

/* <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::pow22501 */

void __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::pow22501
          (undefined4 param_1,longlong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined1 local_2b0 [40];
  undefined1 local_288 [40];
  undefined1 local_260 [40];
  undefined1 local_238 [80];
  undefined1 local_1e8 [80];
  undefined1 local_198 [160];
  undefined1 local_f8 [80];
  undefined1 local_a8 [120];
  
  puVar1 = PTR_pow2k_0079a600;
  uVar3 = (*(code *)PTR_pow2k_0079a600)(param_1,1);
  uVar3 = (*(code *)puVar1)(uVar3,1);
  uVar3 = (*(code *)puVar1)(uVar3,1);
  puVar2 = PTR_mul_0079a608;
  uVar3 = (*(code *)PTR_mul_0079a608)(uVar3,local_2b0);
  uVar3 = (*(code *)puVar2)(uVar3,local_288);
  uVar3 = (*(code *)puVar1)(uVar3,1);
  uVar3 = (*(code *)puVar2)(uVar3,local_260);
  uVar3 = (*(code *)puVar1)(uVar3,5);
  uVar3 = (*(code *)puVar2)(uVar3,local_238);
  uVar3 = (*(code *)puVar1)(uVar3,10);
  uVar3 = (*(code *)puVar2)(uVar3,local_1e8);
  uVar3 = (*(code *)puVar1)(uVar3,0x14);
  uVar3 = (*(code *)puVar2)(uVar3,local_198);
  uVar3 = (*(code *)puVar1)(uVar3,10);
  uVar3 = (*(code *)puVar2)(uVar3,local_1e8);
  uVar3 = (*(code *)puVar1)(uVar3,0x32);
  uVar3 = (*(code *)puVar2)(uVar3,local_f8);
  uVar3 = (*(code *)puVar1)(uVar3,100);
  uVar3 = (*(code *)puVar2)(uVar3,local_a8);
  uVar3 = (*(code *)puVar1)(uVar3,0x32);
  (*(code *)puVar2)(uVar3,local_f8);
  *(undefined8 *)(param_2 + 0x48) = local_308;
  *(undefined8 *)(param_2 + 0x38) = local_318;
  *(undefined8 *)(param_2 + 0x40) = uStack_310;
  *(undefined8 *)(param_2 + 0x28) = local_328;
  *(undefined8 *)(param_2 + 0x30) = uStack_320;
  return;
}


