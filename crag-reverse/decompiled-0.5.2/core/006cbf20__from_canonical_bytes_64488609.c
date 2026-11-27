// 006cbf20 from_canonical_bytes

/* <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_canonical_bytes */

undefined8 * __rustcall
<curve25519_dalek[8828c522c30c513]::scalar::Scalar>::from_canonical_bytes
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 local_58 [32];
  undefined8 *local_38;
  
  puVar4 = PTR_<u8>_00799268;
  local_38 = param_1;
  (*(code *)PTR_<u8>_00799268)();
  reduce(local_58,param_2);
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  (*(code *)puVar4)();
  uVar5 = (*(code *)puVar4)();
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *local_38 = *param_2;
  local_38[1] = uVar1;
  local_38[2] = uVar2;
  local_38[3] = uVar3;
  *(undefined1 *)(local_38 + 4) = uVar5;
  return local_38;
}


