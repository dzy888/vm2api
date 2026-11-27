// 0017b2b0 box_new_uninit

/* alloc[12e961f32105355]::boxed::box_new_uninit */

void __rustcall alloc[12e961f32105355]::boxed::box_new_uninit(void)

{
  code *pcVar1;
  longlong lVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  lVar2 = (*(code *)PTR___rust_alloc_00219c88)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


