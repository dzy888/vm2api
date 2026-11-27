// 004d46e0 call_mut

/* <&mut <craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>::call_mut
    */

undefined4 * __rustcall
<&mut<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>
::call_mut(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = *(undefined8 *)*param_2;
  local_50 = param_3;
  plVar3 = (longlong *)
           <craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_pool
                     (uVar2,param_3[0x1e],param_3[0x1f]);
  if (plVar3 == (longlong *)0x0) {
    *(undefined1 *)param_1 = 0xff;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar1 = *param_3;
    UNLOCK();
  }
  else {
    local_48 = plVar3;
    <craggemini_core[66f3c71560d70857]::pool::PoolManager>::account_view
              (&local_40,uVar2,param_3 + 2,plVar3 + 2);
    param_1[4] = local_30;
    param_1[5] = uStack_2c;
    param_1[6] = uStack_28;
    param_1[7] = uStack_24;
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(&local_48);
    }
    LOCK();
    *local_50 = *local_50 + -1;
    lVar1 = *local_50;
    UNLOCK();
  }
  if (lVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(&local_50);
  }
  return param_1;
}


