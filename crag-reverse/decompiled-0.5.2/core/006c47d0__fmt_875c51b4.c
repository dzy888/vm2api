// 006c47d0 fmt

/* WARNING: Switch with 1 destination removed at 0x006c47f5 */
/* WARNING: Switch with 1 destination removed at 0x006c480d */
/* WARNING: Switch with 1 destination removed at 0x006c4825 */
/* WARNING: Switch with 1 destination removed at 0x006c483d */
/* WARNING: Switch with 1 destination removed at 0x006c4855 */
/* <http[56314f485c23ccf6]::version::Version as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<http[56314f485c23ccf6]::version::Version_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined1 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    (*(code *)PTR_panic_00799338)
              (&switchD_006c47e1::switchdataD_001a8638,
               &PTR_s__vendor_http_1_5_0_src_version_r_007931f0);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,8);
  return;
}


