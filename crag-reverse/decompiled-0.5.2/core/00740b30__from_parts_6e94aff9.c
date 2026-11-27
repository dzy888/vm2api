// 00740b30 from_parts

/* <std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr>::from_parts */

void __rustcall
<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr>::from_parts
          (undefined4 *param_1,short *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    param_3 = 2;
  }
  else if (*param_2 != 1) {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_007967b0;
    *param_1 = 1;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x33);
  *(undefined8 *)((longlong)param_1 + 0x66) = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)((longlong)param_1 + 0x6e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 6) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[1] = param_3;
  *param_1 = 0;
  return;
}


