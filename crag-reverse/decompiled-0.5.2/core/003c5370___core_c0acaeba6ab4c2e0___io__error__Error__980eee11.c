// 003c5370 <core[c0acaeba6ab4c2e0]::io::error::Error>

/* <hyper[c4782d5b5c5e3493]::error::Error>::with::<core[c0acaeba6ab4c2e0]::io::error::Error> */

longlong * __rustcall
<hyper[c4782d5b5c5e3493]::error::Error>::with::<core[c0acaeba6ab4c2e0]::io::error::Error>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *puVar3 = param_2;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
    }
  }
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)&anon_759b25d0f49402244ed1d2ce4dc43d04_315_llvm_4022685846690702743;
  return param_1;
}


