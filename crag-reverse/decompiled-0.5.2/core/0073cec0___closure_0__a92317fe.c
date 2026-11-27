// 0073cec0 {closure#0}

/* std[6c98fd8553dbae28]::panicking::begin_panic::<&str>::{closure#0} */

void __rustcall std[6c98fd8553dbae28]::panicking::begin_panic::<&str>::_closure_0_(longlong param_1)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_with_hook_0079ace8)(1,*(undefined8 *)(param_1 + 0x10),0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


