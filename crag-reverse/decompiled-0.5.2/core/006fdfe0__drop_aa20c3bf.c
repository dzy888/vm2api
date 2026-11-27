// 006fdfe0 drop

/* <std[6c98fd8553dbae28]::sys::thread_local::abort_on_dtor_unwind::DtorUnwindGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::abort_on_dtor_unwind::DtorUnwindGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 local_1;
  
  uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&local_1,"fatal runtime error: thread local panicked on drop, aborting\n",0x7b);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar2);
  (*(code *)PTR_abort_00799748)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


