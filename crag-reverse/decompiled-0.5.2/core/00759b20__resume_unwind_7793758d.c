// 00759b20 resume_unwind

/* std[6c98fd8553dbae28]::panic::resume_unwind */

void __rustcall std[6c98fd8553dbae28]::panic::resume_unwind(void)

{
  code *pcVar1;
  
  panicking::resume_unwind();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


