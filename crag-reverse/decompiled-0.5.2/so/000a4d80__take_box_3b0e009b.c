// 000a4d80 take_box

/* <std[6c98fd8553dbae28]::panicking::panic_handler::StaticStrPayload as
   core[c0acaeba6ab4c2e0]::panic::PanicPayload>::take_box */

void __rustcall
<std[6c98fd8553dbae28]::panicking::panic_handler::StaticStrPayload_as_core[c0acaeba6ab4c2e0]::panic::PanicPayload>
::take_box(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (puVar4 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  return;
}


