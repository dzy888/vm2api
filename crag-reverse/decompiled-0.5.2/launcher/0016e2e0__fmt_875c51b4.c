// 0016e2e0 fmt

/* WARNING: Switch with 1 destination removed at 0x0016e305 */
/* WARNING: Switch with 1 destination removed at 0x0016e31a */
/* WARNING: Switch with 1 destination removed at 0x0016e32f */
/* WARNING: Switch with 1 destination removed at 0x0016e344 */
/* WARNING: Switch with 1 destination removed at 0x0016e359 */
/* WARNING: Switch with 1 destination removed at 0x0016e36e */
/* WARNING: Switch with 1 destination removed at 0x0016e383 */
/* <craggemini[b21da2d71f2da7a3]::license::LicenseError as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseError_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined1 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar1 = 0x4b;
    break;
  case 1:
    uVar1 = 0x4b;
    break;
  case 2:
    uVar1 = 0x4c;
    break;
  case 3:
    uVar1 = 0x37;
    break;
  case 4:
    uVar1 = 0x46;
    break;
  case 5:
    uVar1 = 0x48;
    break;
  case 6:
    uVar1 = 99;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


