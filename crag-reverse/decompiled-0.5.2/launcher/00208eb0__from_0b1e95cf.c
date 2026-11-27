// 00208eb0 from

/* <alloc[12e961f32105355]::boxed::Box<dyn core[c0acaeba6ab4c2e0]::error::Error> as
   core[c0acaeba6ab4c2e0]::convert::From<&str>>::from */

void __rustcall
<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error>as_core[c0acaeba6ab4c2e0]::convert::From<&str>>
::from(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      if (param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00219c60)(param_4,param_2);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00219c88)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *plVar3 = param_2;
  plVar3[1] = lVar2;
  plVar3[2] = param_2;
  return;
}


