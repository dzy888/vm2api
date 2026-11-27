// 002de2c0 register

/* <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::register
    */

void __rustcall
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::
register(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_34;
  undefined4 *local_30;
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = &local_34;
  local_34 = param_2;
  uVar1 = (*(code *)PTR_current_00799480)();
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
  <mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>
            (&local_28,&local_30,3,uVar1,param_3,
             &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00784ae0);
  if (local_28 == 2) {
    param_1[1] = uStack_20;
    *(undefined4 *)(param_1 + 2) = param_2;
    *param_1 = 2;
    return;
  }
  param_1[2] = local_18;
  *param_1 = CONCAT44(uStack_24,local_28);
  param_1[1] = uStack_20;
  *(undefined4 *)(param_1 + 3) = param_2;
  return;
}


