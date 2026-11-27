// 001ac410 from

/* <signature[857a9cacd65d2bdb]::error::Error as
   core[c0acaeba6ab4c2e0]::convert::From<ed25519_dalek[c4d14793384b02cc]::errors::InternalError>>::from
    */

void __rustcall
<signature[857a9cacd65d2bdb]::error::Error_as_core[c0acaeba6ab4c2e0]::convert::From<ed25519_dalek[c4d14793384b02cc]::errors::InternalError>>
::from(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[3];
  puVar5[2] = param_1[2];
  puVar5[3] = uVar4;
  *puVar5 = uVar2;
  puVar5[1] = uVar3;
  return;
}


