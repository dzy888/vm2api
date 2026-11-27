// 00744f10 components

/* <std[6c98fd8553dbae28]::path::Path>::components */

void __rustcall
<std[6c98fd8553dbae28]::path::Path>::components(undefined8 *param_1,char *param_2,longlong param_3)

{
  bool bVar1;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == '/';
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(bool *)((longlong)param_1 + 0x3a) = bVar1;
  *(undefined2 *)(param_1 + 7) = 0x201;
  return;
}


