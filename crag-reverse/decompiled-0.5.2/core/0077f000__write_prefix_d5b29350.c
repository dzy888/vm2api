// 0077f000 write_prefix

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_integral::write_prefix */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_integral::write_prefix
          (undefined8 param_1,longlong param_2,int param_3,ulonglong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4;
  if (param_3 != -1) {
    uVar1 = (**(code **)(param_2 + 0x20))();
    uVar1 = uVar1 & 0xffffffff;
    if ((char)uVar1 != '\0') {
      return 1;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077f049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_2 + 0x18))(uVar1,param_5);
  return uVar2;
}


