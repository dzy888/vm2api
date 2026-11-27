// 0073f9a0 notify_one

/* <std[6c98fd8553dbae28]::sync::nonpoison::condvar::Condvar>::notify_one
   <std[6c98fd8553dbae28]::sync::poison::condvar::Condvar>::notify_one */

void __rustcall <std[6c98fd8553dbae28]::sync::nonpoison::condvar::Condvar>::notify_one(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  (*(code *)PTR_syscall_00799e60)(1,0x81);
  return;
}


