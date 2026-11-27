// 006fa240 <<tokio[d7d91d38da47d894]::util::wake_list::WakeList>::wake_all::DropGuard>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::util::wake_list::WakeList>::wake_all::DropGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::util::wake_list::WakeList>::wake_all::DropGuard>
          (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 8;
  for (lVar2 = (param_2 - param_1 >> 4) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + 0x10;
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}


