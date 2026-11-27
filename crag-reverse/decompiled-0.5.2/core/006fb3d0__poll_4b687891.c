// 006fb3d0 poll

/* <tokio[d7d91d38da47d894]::net::addr::sealed::MaybeReady as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined4 * __rustcall
<tokio[d7d91d38da47d894]::net::addr::sealed::MaybeReady_as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined4 *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*param_2 != -1) {
    uVar3 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 7) = uVar2;
    *(undefined8 *)(param_1 + 1) = uVar3;
    *(undefined8 *)(param_1 + 3) = uVar1;
    *param_2 = 2;
    *param_1 = 0;
    return param_1;
  }
  plVar5 = &local_30;
  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(plVar5,param_2 + 4);
  if (local_30 == 2) {
    *param_1 = 0xffffffff;
    return param_1;
  }
  if ((int)local_30 == 1) {
    uVar3 = (*(code *)PTR_from_0079a940)();
    *param_1 = 2;
    *(undefined8 *)(param_1 + 2) = uVar3;
    return param_1;
  }
  if (local_28 == 0) {
    uVar4 = 2;
    local_28 = local_20;
  }
  else {
    uVar4 = 1;
    plVar5 = local_10;
  }
  *param_1 = uVar4;
  *(longlong *)(param_1 + 2) = local_28;
  *(longlong *)(param_1 + 4) = local_20;
  *(undefined8 *)(param_1 + 6) = local_18;
  *(longlong **)(param_1 + 8) = plVar5;
  return param_1;
}


