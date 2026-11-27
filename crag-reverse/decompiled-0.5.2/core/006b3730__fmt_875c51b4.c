// 006b3730 fmt

/* WARNING: Switch with 1 destination removed at 0x006b377f */
/* WARNING: Switch with 1 destination removed at 0x006b3795 */
/* WARNING: Switch with 1 destination removed at 0x006b37ab */
/* WARNING: Switch with 1 destination removed at 0x006b37c1 */
/* WARNING: Switch with 1 destination removed at 0x006b37d7 */
/* WARNING: Switch with 1 destination removed at 0x006b3812 */
/* WARNING: Switch with 1 destination removed at 0x006b3828 */
/* WARNING: Switch with 1 destination removed at 0x006b383e */
/* WARNING: Switch with 1 destination removed at 0x006b3854 */
/* <hyper[c4782d5b5c5e3493]::error::Kind as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<hyper[c4782d5b5c5e3493]::error::Kind_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined1 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined1 *puStack_8;
  
  puStack_8 = param_1 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&puStack_8,5,&DAT_007921b8);
    return;
  case 1:
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&puStack_8,4,&DAT_007921d8);
    return;
  case 2:
    uVar1 = 0x11;
    break;
  case 3:
    uVar1 = 0x11;
    break;
  case 4:
    uVar1 = 8;
    break;
  case 5:
    uVar1 = 0xd;
    break;
  case 6:
    uVar1 = 2;
    break;
  case 7:
    uVar1 = 0xd;
    break;
  case 8:
    uVar1 = 4;
    break;
  case 9:
    uVar1 = 9;
    break;
  case 10:
    uVar1 = 8;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


