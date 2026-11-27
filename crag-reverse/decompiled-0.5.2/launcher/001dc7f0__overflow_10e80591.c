// 001dc7f0 overflow

/* <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::overflow */

void __rustcall <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::overflow(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_decrement_num_running_threads_0021a1f0)();
  (*(code *)PTR_panic_fmt_0021a010)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217870);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


