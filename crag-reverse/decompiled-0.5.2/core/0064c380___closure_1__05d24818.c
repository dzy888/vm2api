// 0064c380 {closure#1}

/* WARNING: Switch with 1 destination removed at 0x0064c3ed */
/* craggemini_core[66f3c71560d70857]::binding::validate_account_config::{closure#1} */

void __rustcall
craggemini_core[66f3c71560d70857]::binding::validate_account_config::_closure_1_
          (undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  longlong local_38;
  undefined8 local_28;
  
  puVar1 = PTR__join_00799210;
  (*(code *)PTR__join_00799210)("accounts",*(undefined8 *)(param_2 + 8),8);
  (*(code *)puVar1)(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8),local_28,
                    *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  if (local_38 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


