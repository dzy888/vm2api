// 0070bf90 register_sigaction_impl

/* signal_hook_registry[9dd8ecc3788bb260]::register_sigaction_impl */

undefined8 __rustcall
signal_hook_registry[9dd8ecc3788bb260]::register_sigaction_impl
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  uint *local_20;
  undefined *local_18;
  
  local_34 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  if ((param_2 < 0x14) && ((0x80b10U >> (param_2 & 0x1f) & 1) != 0)) {
    local_20 = &local_34;
    local_18 = PTR_fmt_007999c0;
    (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__vendor_signal_hook_registry_1_4_00795740);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (*(code *)PTR_register_unchecked_impl_0079aa00)();
  return param_1;
}


