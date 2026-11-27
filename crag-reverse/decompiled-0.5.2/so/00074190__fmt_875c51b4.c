// 00074190 fmt

/* WARNING: Switch with 1 destination removed at 0x000741b8 */
/* WARNING: Switch with 1 destination removed at 0x000741cd */
/* WARNING: Switch with 1 destination removed at 0x000741e2 */
/* WARNING: Switch with 1 destination removed at 0x000741f7 */
/* WARNING: Switch with 1 destination removed at 0x0007420c */
/* WARNING: Switch with 1 destination removed at 0x00074221 */
/* <serde_json[dc3825464c436029]::value::index::Type as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    */

void __rustcall
<serde_json[dc3825464c436029]::value::index::Type_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)*param_1) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 7;
    break;
  case 2:
    uVar1 = 6;
    break;
  case 3:
    uVar1 = 6;
    break;
  case 4:
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 6;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


