// 006bda00 parse_headers

/* httparse[622c0e90ae307373]::parse_headers */

undefined1 * __rustcall
httparse[622c0e90ae307373]::parse_headers
          (undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_18 = param_3 + param_2;
  local_44 = 0;
  local_40 = param_4;
  uStack_38 = param_5;
  local_20 = param_2;
  local_10 = param_2;
  parse_headers_iter_uninit(&local_30,&local_40,&local_20,&local_44);
  if (local_30 == 2) {
    param_1[1] = local_28;
    *param_1 = 1;
    return param_1;
  }
  if ((int)local_30 == 1) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    return param_1;
  }
  *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_27,local_28);
  *(undefined8 *)(param_1 + 0x10) = local_40;
  *(undefined8 *)(param_1 + 0x18) = uStack_38;
  *param_1 = 0;
  return param_1;
}


