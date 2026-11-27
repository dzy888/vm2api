// 001dbd30 rust_panic

/* __rustc[100742bb89c490cb]::rust_panic */

void __rustcall __rustc[100742bb89c490cb]::rust_panic(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *local_20;
  undefined *local_18;
  undefined4 local_10;
  undefined1 local_9;
  
  local_10 = (*(code *)PTR___rust_start_panic_00219c28)();
  local_20 = &local_10;
  local_18 = PTR_fmt_00219df0;
  uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_fmt(&local_9,&DAT_00116242,&local_20);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar2);
  (*(code *)PTR_abort_00219ea8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


