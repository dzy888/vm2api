// 0009f620 exit

/* std[6c98fd8553dbae28]::process::exit */

void __rustcall std[6c98fd8553dbae28]::process::exit(undefined4 param_1)

{
  code *pcVar1;
  
  rt::cleanup();
  sys::exit::exit(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


