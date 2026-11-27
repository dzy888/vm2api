// 006b2180 now

/* WARNING: Switch with 1 destination removed at 0x006b21a2 */
/* <hyper[c4782d5b5c5e3493]::common::time::Time>::now */

void __rustcall <hyper[c4782d5b5c5e3493]::common::time::Time>::now(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(1);
    return;
  }
  lVar1 = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x006b219f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x28))(lVar1,*(longlong *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0);
  return;
}


