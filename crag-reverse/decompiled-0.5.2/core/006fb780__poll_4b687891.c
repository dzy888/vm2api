// 006fb780 poll

/* <tokio[d7d91d38da47d894]::process::imp::Child as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined4 * __rustcall
<tokio[d7d91d38da47d894]::process::imp::Child_as_core[c0acaeba6ab4c2e0]::future::future::Future>::
poll(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 extraout_RDX;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_38;
  
  if (*param_2 == -1) {
    do {
      lVar2 = (**(code **)(*(longlong *)(param_2 + 4) + 0x18))();
      if (lVar2 != 0) {
        local_38 = 0;
        local_d0 = lVar2;
        local_c8 = param_3;
        <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>>
        ::set::<tokio[d7d91d38da47d894]::signal::make_future::_closure_0_>(param_2 + 2,&local_d0);
        param_3 = extraout_RDX;
      }
      if (param_2[6] == 2) {
        (*(code *)PTR_expect_failed_00799440)
                  (param_4,&anon_d250138afc359909044a05a15195067d_57_llvm_15875357693395155123);
        pcVar1 = (code *)swi(3);
        puVar3 = (undefined4 *)(*pcVar1)();
        return puVar3;
      }
      (*(code *)PTR_try_wait_0079a900)();
      if ((char)local_d0 != '\0') {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 2) = local_c8;
        return param_1;
      }
      if (local_d0._4_4_ == 1) {
        *param_1 = 0;
        param_1[1] = (undefined4)local_c8;
        return param_1;
      }
    } while (lVar2 != 0);
    *param_1 = 2;
  }
  else {
    <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(param_1,param_2,param_3);
  }
  return param_1;
}


