// 001f3770 exit

/* std[6c98fd8553dbae28]::sys::exit::exit */

void __rustcall std[6c98fd8553dbae28]::sys::exit::exit(void)

{
  unique_thread_exit();
  (*(code *)PTR_exit_0021aad8)();
  return;
}


