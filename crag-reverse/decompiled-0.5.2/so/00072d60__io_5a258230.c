// 00072d60 io

/* <serde_json[dc3825464c436029]::error::Error>::io */

void __rustcall <serde_json[dc3825464c436029]::error::Error>::io(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_20;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2[4] = 0;
  puVar2[2] = uStack_20;
  puVar2[3] = 0;
  *puVar2 = 1;
  puVar2[1] = param_1;
  return;
}


