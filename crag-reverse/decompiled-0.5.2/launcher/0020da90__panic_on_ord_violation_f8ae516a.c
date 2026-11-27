// 0020da90 panic_on_ord_violation

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::panic_on_ord_violation */

void __rustcall core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::panic_on_ord_violation(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_panic_fmt_0021a010)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219270);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


