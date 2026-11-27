// 00039620 from_utf8

/* <alloc[12e961f32105355]::string::String>::from_utf8 */

void __rustcall
<alloc[12e961f32105355]::string::String>::from_utf8
          (undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  (*(code *)PTR_from_utf8_000c3bd8)(param_1,param_3[2]);
  if (local_30 == 1) {
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[4] = uStack_20;
    param_2[2] = uVar1;
    param_2[3] = local_28;
  }
  else {
    param_2[3] = param_3[2];
    uVar1 = param_3[1];
    param_2[1] = *param_3;
    param_2[2] = uVar1;
    *param_2 = 0xffffffffffffffff;
  }
  return;
}


