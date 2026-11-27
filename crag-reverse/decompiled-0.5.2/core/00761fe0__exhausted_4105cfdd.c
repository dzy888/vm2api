// 00761fe0 exhausted

/* <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted */

void __rustcall <std[6c98fd8553dbae28]::thread::id::ThreadId>::new::exhausted(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_panic_fmt_007991a8)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_007971a8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


