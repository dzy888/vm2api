// 00039830 provider_rejected

/* <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::provider_rejected */

ulonglong __rustcall <agy_bridge[64a9e9deac6c45ce]::StreamSlot>::provider_rejected(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == -1) {
    return 0;
  }
  uVar1 = agy_bridge[64a9e9deac6c45ce]::sse_ok
                    (*(undefined4 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x40));
  return uVar1 ^ 1;
}


