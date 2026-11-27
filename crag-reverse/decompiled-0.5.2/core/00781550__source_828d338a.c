// 00781550 source

/* <core[c0acaeba6ab4c2e0]::io::error::Error as core[c0acaeba6ab4c2e0]::error::Error>::source */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error_as_core[c0acaeba6ab4c2e0]::error::Error>::source
          (ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if (((uint)uVar1 & 3) - 2 < 2) {
    return 0;
  }
  if ((uVar1 & 3) != 0) {
    uVar2 = (**(code **)(*(longlong *)(uVar1 + 7) + 0x30))();
  }
  return uVar2;
}


