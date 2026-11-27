// 004c3210 has_accounts

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_accounts */

bool __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_accounts
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
            (&local_40,*(longlong *)(param_1 + 0x170) + 0x10);
  if (local_30 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(local_38 + lVar2);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(local_38 + lVar2);
      }
      lVar2 = lVar2 + 8;
    } while (local_30 * 8 != lVar2);
  }
  if (local_40 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  return local_30 != 0;
}


