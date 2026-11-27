// 001cdb30 <isize>

/* std[6c98fd8553dbae28]::rt::handle_rt_panic::<isize> */

void __rustcall std[6c98fd8553dbae28]::rt::handle_rt_panic::<isize>(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 local_9;
  
  uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&local_9,&DAT_0012e1f6,0x7b);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar2);
  (*(code *)PTR_abort_00219ea8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


