// 001dc9d0 notify_all

/* <std[6c98fd8553dbae28]::sync::nonpoison::condvar::Condvar>::notify_all
   <std[6c98fd8553dbae28]::sync::poison::condvar::Condvar>::notify_all */

void __rustcall <std[6c98fd8553dbae28]::sync::nonpoison::condvar::Condvar>::notify_all(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  (*(code *)PTR_syscall_0021a0a0)(0x7fffffff,0x81);
  return;
}


