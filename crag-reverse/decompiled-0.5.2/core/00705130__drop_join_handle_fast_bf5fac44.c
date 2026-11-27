// 00705130 drop_join_handle_fast

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::drop_join_handle_fast */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::drop_join_handle_fast(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  LOCK();
  lVar1 = *param_1;
  if (lVar1 == 0xcc) {
    *param_1 = 0x84;
  }
  else {
    lVar2 = lVar1;
  }
  UNLOCK();
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar1 != 0xcc);
}


