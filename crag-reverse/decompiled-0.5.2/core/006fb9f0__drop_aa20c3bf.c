// 006fb9f0 drop

/* <tokio[d7d91d38da47d894]::util::wake_list::WakeList as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::util::wake_list::WakeList_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + 8;
  for (lVar3 = *(longlong *)(param_1 + 0x200) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    plVar1 = (longlong *)(lVar2 + -8);
    lVar2 = lVar2 + 0x10;
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}


