// 00730c00 <core[c0acaeba6ab4c2e0]::mem::drop_guard::DropGuard<&mut_core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<libc[bd0ec16757d687cc]::unix::linux_like::linux::gnu::b64::x86_64::pthread_attr_t>,<std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::mem::drop_guard::DropGuard<&mut
   core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<libc[bd0ec16757d687cc]::unix::linux_like::linux::gnu::b64::x86_64::pthread_attr_t>,
   <std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::{closure#0}>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::mem::drop_guard::DropGuard<&mut_core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<libc[bd0ec16757d687cc]::unix::linux_like::linux::gnu::b64::x86_64::pthread_attr_t>,<std[6c98fd8553dbae28]::sys::thread::unix::Thread>::new::_closure_0_>>
          (void)

{
  code *pcVar1;
  int iVar2;
  undefined8 in_R8;
  
  iVar2 = (*(code *)PTR_pthread_attr_destroy_0079ac40)();
  if (iVar2 == 0) {
    return;
  }
  (*(code *)PTR_<i32,i32>_0079ac48)(0,"",in_R8,&PTR_s__rustc_48a229ceaefd4985c50990b14_007965a8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


