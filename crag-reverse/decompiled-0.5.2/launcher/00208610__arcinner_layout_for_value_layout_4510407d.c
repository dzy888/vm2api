// 00208610 arcinner_layout_for_value_layout

/* WARNING: Removing unreachable block (ram,0x00208695) */
/* alloc[12e961f32105355]::sync::arcinner_layout_for_value_layout */

void __rustcall
alloc[12e961f32105355]::sync::arcinner_layout_for_value_layout(ulonglong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 local_9;
  
  uVar2 = 8;
  if (8 < param_1) {
    uVar2 = param_1;
  }
  if (0x8000000000000000 - uVar2 < (-param_1 & param_1 + 0xf) + param_2) {
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&DAT_00218f10,&local_9,&PTR_s__rustc_48a229ceaefd4985c50990b14_00218f50);
    (*(code *)PTR___rust_alloc_error_handler_00219c20)();
    (*(code *)PTR_handle_alloc_error_00219eb0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


