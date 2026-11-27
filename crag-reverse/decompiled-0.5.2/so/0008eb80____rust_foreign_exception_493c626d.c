// 0008eb80 __rust_foreign_exception

/* __rustc[100742bb89c490cb]::__rust_foreign_exception */

void __rustcall __rustc[100742bb89c490cb]::__rust_foreign_exception(undefined8 param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_all(param_1,&DAT_00015e8a,0x44);
  if (uVar2 != 0) {
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  (*(code *)PTR_abort_000c3e60)();
  (*(code *)PTR_panic_cannot_unwind_000c3bd0)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


