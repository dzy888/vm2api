// 003561f0 new

/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>::new
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
::new(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar6[4] = uVar4;
  puVar6[5] = uVar5;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  *puVar6 = 1;
  puVar6[1] = 1;
  return;
}


