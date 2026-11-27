// 005108f0 content_unexpected

/* serde[8f836fbdfa2c5b5d]::private::de::content::content_unexpected */

void __rustcall
serde[8f836fbdfa2c5b5d]::private::de::content::content_unexpected
          (undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    param_1[1] = param_2[1];
    *param_1 = 0;
    return;
  case 1:
    *(ulonglong *)(param_1 + 8) = (ulonglong)(byte)param_2[1];
    *param_1 = 1;
    return;
  case 2:
    *(ulonglong *)(param_1 + 8) = (ulonglong)*(ushort *)(param_2 + 2);
    *param_1 = 1;
    return;
  case 3:
    *(ulonglong *)(param_1 + 8) = (ulonglong)*(uint *)(param_2 + 4);
    *param_1 = 1;
    return;
  case 4:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_1 = 1;
    return;
  case 5:
    *(longlong *)(param_1 + 8) = (longlong)(char)param_2[1];
    *param_1 = 2;
    return;
  case 6:
    *(longlong *)(param_1 + 8) = (longlong)*(short *)(param_2 + 2);
    *param_1 = 2;
    return;
  case 7:
    *(longlong *)(param_1 + 8) = (longlong)*(int *)(param_2 + 4);
    *param_1 = 2;
    return;
  case 8:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_1 = 2;
    return;
  case 9:
    *(double *)(param_1 + 8) = (double)*(float *)(param_2 + 4);
    *param_1 = 3;
    return;
  case 10:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_1 = 3;
    return;
  case 0xb:
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *param_1 = 4;
    return;
  case 0xc:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 5;
    return;
  case 0xd:
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 5;
    return;
  case 0xe:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 6;
    return;
  case 0xf:
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *param_1 = 6;
    return;
  default:
    *param_1 = 8;
    return;
  case 0x12:
    *param_1 = 7;
    return;
  case 0x13:
    *param_1 = 9;
    return;
  case 0x14:
    *param_1 = 10;
    return;
  case 0x15:
    *param_1 = 0xb;
    return;
  }
}


