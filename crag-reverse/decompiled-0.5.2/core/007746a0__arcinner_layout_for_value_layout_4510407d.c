// 007746a0 arcinner_layout_for_value_layout

/* WARNING: Removing unreachable block (ram,0x00774725) */
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
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_00798100,&local_9,
               &PTR_anon_3e483e6b3ccbdca1751358c89510dd96_22_llvm_15764310632135838254_00798140);
    (*(code *)PTR___rust_alloc_error_handler_00798fb0)();
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


