// 006f6fa0 from

/* <tokio[d7d91d38da47d894]::fs::file::File as
   core[c0acaeba6ab4c2e0]::convert::From<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::from
   <tokio[d7d91d38da47d894]::fs::file::File as
   core[c0acaeba6ab4c2e0]::convert::From<std[6c98fd8553dbae28]::fs::File>>::from */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::fs::file::File_as_core[c0acaeba6ab4c2e0]::convert::From<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
::from(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  uint3 uStack_24;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 2) = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = puVar2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(ulonglong *)((longlong)param_1 + 0xd) = (ulonglong)uStack_24;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0;
  param_1[5] = 2;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  param_1[0xc] = 0x200000;
  return param_1;
}


