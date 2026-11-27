// 006b1e40 new_incomplete

/* <hyper[c4782d5b5c5e3493]::error::Error>::new_incomplete */

void __rustcall <hyper[c4782d5b5c5e3493]::error::Error>::new_incomplete(void)

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
  *(undefined1 *)(puVar2 + 2) = 2;
  return;
}


