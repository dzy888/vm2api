// 002de530 push

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>::push */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>::push
          (longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    (*(code *)PTR_grow_one_00799328)();
  }
  lVar3 = param_1[1];
  *(undefined8 *)(lVar3 + 0x10 + lVar2 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  param_1[2] = lVar2 + 1;
  return;
}


