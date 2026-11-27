// 002ddf20 memory_policy

/* <craggemini_core[66f3c71560d70857]::Config>::memory_policy */

void __rustcall
<craggemini_core[66f3c71560d70857]::Config>::memory_policy(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x10000000;
  if (*(char *)(param_2 + 0xf0) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0xf8);
  }
  uVar3 = 0xc000000;
  if (*(char *)(param_2 + 0x100) != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x108);
  }
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *param_1 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  param_1[2] = *(undefined8 *)(param_2 + 0x110);
  param_1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  param_1[4] = *(undefined8 *)(param_2 + 0x120);
  param_1[5] = uVar2;
  return;
}


