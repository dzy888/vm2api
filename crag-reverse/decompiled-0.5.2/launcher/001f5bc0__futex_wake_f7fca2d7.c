// 001f5bc0 futex_wake

/* std[6c98fd8553dbae28]::sys::pal::unix::futex::futex_wake */

bool __rustcall std[6c98fd8553dbae28]::sys::pal::unix::futex::futex_wake(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0021a0a0)(1,0x81);
  return 0 < lVar1;
}


