// 0064c990 register

/* <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::register
    */

void __rustcall
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::
register(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_38 = &local_3c;
  uVar2 = param_3;
  local_3c = param_2;
  uVar1 = (*(code *)PTR_current_00799480)();
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
  <mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>(&local_30,&local_38,3,uVar1,uVar2,param_3);
  if (local_30 == 2) {
    param_1[1] = uStack_28;
    *(undefined4 *)(param_1 + 2) = param_2;
    *param_1 = 2;
  }
  else {
    param_1[2] = local_20;
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[1] = uStack_28;
    *(undefined4 *)(param_1 + 3) = param_2;
  }
  return;
}


