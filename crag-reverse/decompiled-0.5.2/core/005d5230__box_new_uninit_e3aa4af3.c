// 005d5230 box_new_uninit

/* alloc[12e961f32105355]::boxed::box_new_uninit */

void __rustcall alloc[12e961f32105355]::boxed::box_new_uninit(void)

{
  code *pcVar1;
  longlong lVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


