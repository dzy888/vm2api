// 001fd870 __rust_panic_cleanup

/* __rustc[100742bb89c490cb]::__rust_panic_cleanup */

undefined1  [16] __rustcall
__rustc[100742bb89c490cb]::__rust_panic_cleanup
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if (*param_1 == 0x54535552005a4f4d) {
    if ((undefined1 *)param_1[4] == &panic_unwind[69967eabe7c96ba7]::imp::CANARY) {
      auVar2 = *(undefined1 (*) [16])(param_1 + 5);
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
      return auVar2;
    }
  }
  else {
    (*(code *)PTR__Unwind_DeleteException_0021abf0)();
  }
  (*(code *)PTR___rust_foreign_exception_00219c18)();
  pcVar1 = (code *)swi(3);
  auVar2._0_8_ = (*pcVar1)();
  auVar2._8_8_ = param_3;
  return auVar2;
}


