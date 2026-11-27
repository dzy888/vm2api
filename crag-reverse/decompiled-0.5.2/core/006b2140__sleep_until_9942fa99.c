// 006b2140 sleep_until

/* <hyper[c4782d5b5c5e3493]::common::time::Time>::sleep_until */

void __rustcall
<hyper[c4782d5b5c5e3493]::common::time::Time>::sleep_until
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__vendor_hyper_1_12_0_src_common__007920a8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b2162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*(code **)(param_1[1] + 0x20));
  return;
}


