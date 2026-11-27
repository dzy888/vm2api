// 0003f490 provider_rejected

/* <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected */

ulonglong __rustcall <agy_bridge[64a9e9deac6c45ce]::Turn>::provider_rejected(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0xa0) == -1) {
    return 0;
  }
  uVar1 = agy_bridge[64a9e9deac6c45ce]::sse_ok
                    (*(undefined4 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0xa8),
                     *(undefined8 *)(param_1 + 0xb0));
  return uVar1 ^ 1;
}


