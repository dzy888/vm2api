// 006d9ff0 default

/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken as
   core[c0acaeba6ab4c2e0]::default::Default>::default
   <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>::new */

void __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken_as_core[c0acaeba6ab4c2e0]::default::Default>
::default(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  uint uStack_64;
  uint7 uStack_2f;
  uint uStack_1c;
  
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_1c = uStack_1c & 0xffffff00;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = (ulonglong)uStack_1c << 0x20;
  puVar2[8] = 1;
  puVar2[9] = (ulonglong)uStack_2f << 8;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 8;
  puVar2[5] = 0;
  puVar2[2] = (ulonglong)uStack_64 << 0x20;
  puVar2[3] = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  return;
}


