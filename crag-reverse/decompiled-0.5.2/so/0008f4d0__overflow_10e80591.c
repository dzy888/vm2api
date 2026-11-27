// 0008f4d0 overflow

/* <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::overflow */

void __rustcall <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::overflow(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_decrement_num_running_threads_000c3e50)();
  (*(code *)PTR_panic_fmt_000c3e90)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1880);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


