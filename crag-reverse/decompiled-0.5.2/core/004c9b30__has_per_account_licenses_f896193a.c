// 004c9b30 has_per_account_licenses

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_per_account_licenses */

bool __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_per_account_licenses(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  
  <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
            (&local_38,*(longlong *)(param_1 + 0x170) + 0x10);
  lVar4 = 0;
  do {
    lVar2 = lVar4;
    if (local_28 * 8 == lVar2) break;
    lVar4 = lVar2 + 8;
  } while (*(longlong *)(*(longlong *)((longlong)local_30 + lVar2) + 0x328) == 0);
  if (local_28 != 0) {
    lVar4 = 1 - local_28;
    puVar3 = local_30;
    do {
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(puVar3);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  if (local_38 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return local_28 * 8 != lVar2;
}


