// 00746c90 kind

/* <core[c0acaeba6ab4c2e0]::io::error::Error>::kind */

ulonglong __rustcall <core[c0acaeba6ab4c2e0]::io::error::Error>::kind(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    param_1 = (ulonglong)*(byte *)(param_1 + 0x10);
    break;
  case 1:
    param_1 = (ulonglong)*(byte *)(param_1 + 0x1f);
    break;
  case 2:
    lVar1 = (*(code *)PTR_get_os_functions_007992e0)();
                    /* WARNING: Could not recover jumptable at 0x00746cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 8))();
    return uVar2;
  case 3:
    param_1 = param_1 >> 0x20;
  }
  return param_1;
}


