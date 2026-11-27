// 004c3330 oauth_status

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::oauth_status */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::oauth_status
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)
           <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::get
                     (*(longlong *)(param_2 + 0x170) + 0x10,param_3,param_4);
  if (plVar1 == (longlong *)0x0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = "account_not_found";
    param_1[2] = 0x11;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = "bound account not found";
    param_1[5] = 0x17;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x6020194;
  }
  else {
    local_40 = plVar1;
    <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::status
              (&local_38,*(longlong *)(param_2 + 0x178) + 0x10,plVar1 + 2);
    *(undefined4 *)(param_1 + 3) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_24;
    *(undefined4 *)(param_1 + 4) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_1c;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_2c;
    *param_1 = 0xfffffffffffffffe;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(&local_40);
    }
  }
  return param_1;
}


