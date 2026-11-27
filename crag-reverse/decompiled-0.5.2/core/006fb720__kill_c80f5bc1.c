// 006fb720 kill

/* WARNING: Switch with 1 destination removed at 0x006fb735 */
/* WARNING: Switch with 1 destination removed at 0x006fb745 */
/* <tokio[d7d91d38da47d894]::process::imp::Child as
   tokio[d7d91d38da47d894]::process::kill::Kill>::kill */

void __rustcall
<tokio[d7d91d38da47d894]::process::imp::Child_as_tokio[d7d91d38da47d894]::process::kill::Kill>::kill
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  if (*param_1 == -1) {
    if ((int)param_1[3] == 2) {
LAB_006fb764:
      (*(code *)PTR_expect_failed_00799440)
                (param_4,&anon_4a510ad2c2ece6409108a5920cec5cc2_17_llvm_1700297362806677381);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1 = param_1 + 3;
  }
  else {
    if ((int)*param_1 == 2) {
      (*(code *)PTR_expect_failed_00799440)
                (param_4,&anon_4a510ad2c2ece6409108a5920cec5cc2_18_llvm_1700297362806677381);
      goto LAB_006fb764;
    }
    param_1 = param_1 + 4;
  }
  <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::send_signal(param_1,9);
  return;
}


