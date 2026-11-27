// 006fba70 next

/* <tokio[d7d91d38da47d894]::net::addr::sealed::OneOrMore as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

void __rustcall
<tokio[d7d91d38da47d894]::net::addr::sealed::OneOrMore_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*param_2 != 1) {
    uVar2 = *(undefined8 *)(param_2 + 1);
    uVar3 = *(undefined8 *)(param_2 + 3);
    uVar4 = *(undefined8 *)(param_2 + 7);
    param_1[2] = *(undefined8 *)(param_2 + 5);
    param_1[3] = uVar4;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    *(undefined2 *)(param_2 + 1) = 2;
    return;
  }
  puVar1 = *(undefined8 **)(param_2 + 4);
  if (puVar1 == *(undefined8 **)(param_2 + 8)) {
    *(undefined2 *)param_1 = 2;
    return;
  }
  *(undefined8 **)(param_2 + 4) = puVar1 + 4;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}


