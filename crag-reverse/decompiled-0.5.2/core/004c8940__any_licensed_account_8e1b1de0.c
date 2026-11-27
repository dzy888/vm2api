// 004c8940 any_licensed_account

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::any_licensed_account */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::any_licensed_account
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  
  <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
            (&local_40,*(longlong *)(param_1 + 0x170) + 0x10);
  if (local_30 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)((longlong)local_38 + lVar6) + 0x328);
      if (lVar1 != 0) {
        cVar3 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::check(lVar1 + 0x10);
        if (cVar3 == -1) {
          uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
          goto LAB_004c89e5;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                  (0);
      }
      lVar6 = lVar6 + 8;
    } while (local_30 * 8 != lVar6);
    uVar5 = 0;
LAB_004c89e5:
    lVar6 = 1 - local_30;
    puVar4 = local_38;
    do {
      plVar2 = (longlong *)*puVar4;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(puVar4);
      }
      puVar4 = puVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 1);
  }
  if (local_40 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  return uVar5 & 0xffffffff;
}


