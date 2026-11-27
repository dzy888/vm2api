// 001def20 join

/* <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::join */

void __rustcall <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::join(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_pthread_join_0021a990)();
  if (iVar2 == 0) {
    return;
  }
  if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
    (*(code *)PTR_set_functions_inner_00219f28)();
  }
  (*(code *)PTR_panic_fmt_0021a010)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


