// 0009f352 default_alloc_error_hook

/* std[6c98fd8553dbae28]::alloc::default_alloc_error_hook */

void __rustcall std[6c98fd8553dbae28]::alloc::default_alloc_error_hook(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte extraout_DL;
  byte bVar4;
  undefined1 local_21;
  
  cVar1 = default_alloc_error_hook::PREV_ALLOC_FAILURE;
  LOCK();
  default_alloc_error_hook::PREV_ALLOC_FAILURE = 1;
  UNLOCK();
  if (cVar1 != '\0') {
    uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_21,&DAT_0000ab77);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar2);
    return;
  }
  uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&local_21,&DAT_00009945);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar2);
  bVar4 = extraout_DL;
  uVar2 = (*(code *)PTR_lock_000c4228)();
  cVar1 = (*(code *)PTR_get_backtrace_style_000c4410)();
  if (cVar1 == '\0') {
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_21,&DAT_0000a44b);
  }
  else if (cVar1 == '\x01') {
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_21,&DAT_0000a44b);
  }
  else {
    if (cVar1 != '\x02') goto LAB_0009f466;
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_fmt(&local_21,&DAT_00015df7,0x9d);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar3);
LAB_0009f466:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
            (uVar2,bVar4 & 1);
  return;
}


