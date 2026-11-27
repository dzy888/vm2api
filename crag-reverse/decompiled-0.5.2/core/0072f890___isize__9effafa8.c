// 0072f890 <isize>

/* std[6c98fd8553dbae28]::rt::handle_rt_panic::<isize> */

void __rustcall std[6c98fd8553dbae28]::rt::handle_rt_panic::<isize>(void)

{
  code *pcVar1;
  undefined1 local_9;
  
  <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_fmt
            (&local_9,&DAT_001bfc52,0x7b);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>();
  (*(code *)PTR_abort_00799748)();
  (*(code *)PTR_<std[6c98fd8553dbae28]::panicking::begin_panic<&str>::_closure_0_,_>_0079ac30)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


