// 006e01d0 notified

/* <tokio[d7d91d38da47d894]::sync::notify::Notify>::notified */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::notify::Notify>::notified(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = uVar1 >> 2;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}


