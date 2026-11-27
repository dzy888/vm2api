// 00781520 cause

/* <core[c0acaeba6ab4c2e0]::io::error::Error as core[c0acaeba6ab4c2e0]::error::Error>::cause */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error_as_core[c0acaeba6ab4c2e0]::error::Error>::cause
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
    uVar2 = (**(code **)(*(longlong *)(uVar1 + 7) + 0x48))();
  }
  return uVar2;
}


