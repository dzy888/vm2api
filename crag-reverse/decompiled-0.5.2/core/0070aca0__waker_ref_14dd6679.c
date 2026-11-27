// 0070aca0 waker_ref

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>::waker_ref */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>::waker_ref(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1d8) = 1;
  auVar2._8_8_ = lVar1 + 0x80;
  auVar2._0_8_ = &PTR_<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>_00795630
  ;
  return auVar2;
}


