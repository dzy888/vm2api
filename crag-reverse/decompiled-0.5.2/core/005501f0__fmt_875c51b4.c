// 005501f0 fmt

/* WARNING: Switch with 1 destination removed at 0x00550215 */
/* WARNING: Switch with 1 destination removed at 0x0055022a */
/* WARNING: Switch with 1 destination removed at 0x0055023f */
/* WARNING: Switch with 1 destination removed at 0x00550254 */
/* WARNING: Switch with 1 destination removed at 0x00550269 */
/* WARNING: Switch with 1 destination removed at 0x0055027e */
/* WARNING: Switch with 1 destination removed at 0x00550293 */
/* <craggemini_core[66f3c71560d70857]::license::LicenseError as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<craggemini_core[66f3c71560d70857]::license::LicenseError_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
fmt(undefined1 *param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


