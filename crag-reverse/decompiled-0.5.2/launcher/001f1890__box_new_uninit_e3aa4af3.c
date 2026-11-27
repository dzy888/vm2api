// 001f1890 box_new_uninit

/* alloc[12e961f32105355]::boxed::box_new_uninit */

longlong __rustcall alloc[12e961f32105355]::boxed::box_new_uninit(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
    pcVar1 = (code *)swi(3);
    lVar2 = (*pcVar1)();
    return lVar2;
  }
  return lVar2;
}


