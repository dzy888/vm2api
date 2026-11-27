// 00701710 wake_join

/* <tokio[d7d91d38da47d894]::runtime::task::core::Trailer>::wake_join */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Trailer>::wake_join
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_8e901ac342272c81d7b37a6ae0143219_17_llvm_8038038081886927865);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0070171d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))();
  return;
}


