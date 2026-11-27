// 006e60a0 drop

/* <tokio[d7d91d38da47d894]::runtime::runtime::Runtime as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::runtime::Runtime_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(undefined4 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *in_FS_OFFSET;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*param_2 == 1) {
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::shutdown
              (param_2 + 2,param_2 + 0xc);
    return;
  }
  lVar2 = *in_FS_OFFSET;
  cVar1 = *(char *)(lVar2 + -0xf0);
  if (cVar1 == '\0') {
LAB_006e60e9:
    (*(code *)PTR_set_current_007996c0)(param_1,param_2 + 0xc);
    if (CONCAT44(uStack_2c,local_30) != -1) {
      local_48 = CONCAT44(uStack_2c,local_30);
      uStack_40 = uStack_28;
      uStack_3c = uStack_24;
      goto LAB_006e6141;
    }
  }
  else if (cVar1 == '\x01') {
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
    goto LAB_006e60e9;
  }
  local_48 = -1;
LAB_006e6141:
  <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::shutdown
            (param_2 + 2,param_2 + 0xc);
  if (local_48 != -1) {
    <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
    ::with::
    <<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,()>
              ();
    if (local_48 != 2) {
      if (local_48 == 0) {
        plVar3 = (longlong *)CONCAT44(uStack_3c,uStack_40);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar3 = (longlong *)CONCAT44(uStack_3c,uStack_40);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
    }
  }
  return;
}


