// 0073da20 {closure#0}

/* std[6c98fd8553dbae28]::panicking::panic_handler::{closure#0} */

void __rustcall std[6c98fd8553dbae28]::panicking::panic_handler::_closure_0_(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 in_R9;
  
  if ((((longlong *)*param_1)[1] & 1U) == 0) {
    (*(code *)PTR_panic_with_hook_0079ace8)
              (*(undefined1 *)(param_1[2] + 0x10),param_1[1],*(undefined1 *)(param_1[2] + 0x11),
               in_R9,param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(longlong *)*param_1;
  (*(code *)PTR_panic_with_hook_0079ace8)
            (*(undefined1 *)(param_1[2] + 0x10),param_1[1],*(undefined1 *)(param_1[2] + 0x11));
  if (0 < lVar1) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


