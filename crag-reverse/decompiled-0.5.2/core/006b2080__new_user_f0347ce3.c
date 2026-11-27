// 006b2080 new_user

/* <hyper[c4782d5b5c5e3493]::error::Error>::new_user */

void __rustcall <hyper[c4782d5b5c5e3493]::error::Error>::new_user(undefined1 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined1 *)((longlong)puVar2 + 0x11) = param_1;
  return;
}


