// 006b2010 new_io

/* <hyper[c4782d5b5c5e3493]::error::Error>::new_io */

void __rustcall <hyper[c4782d5b5c5e3493]::error::Error>::new_io(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 2) = 6;
  with::<core[c0acaeba6ab4c2e0]::io::error::Error>(puVar2,param_1);
  return;
}


