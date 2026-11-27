// 000a8f80 exception_cleanup

/* panic_unwind[69967eabe7c96ba7]::imp::panic::exception_cleanup */

void __rustcall
panic_unwind[69967eabe7c96ba7]::imp::panic::exception_cleanup(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::boxed::Box<panic_unwind[69967eabe7c96ba7]::imp::Exception>>(param_2);
  (*(code *)PTR___rust_drop_panic_000c3a58)();
  (*(code *)PTR_panic_cannot_unwind_000c3bd0)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


