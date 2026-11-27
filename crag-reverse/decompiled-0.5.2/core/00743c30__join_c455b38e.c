// 00743c30 join

/* <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::join */

void __rustcall <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::join(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_pthread_join_0079aef8)();
  if (iVar2 == 0) {
    return;
  }
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  (*(code *)PTR_panic_fmt_007991a8)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


