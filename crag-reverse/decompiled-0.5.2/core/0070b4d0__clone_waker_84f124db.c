// 0070b4d0 clone_waker

/* tokio[d7d91d38da47d894]::runtime::task::waker::clone_waker */

undefined1  [16] __rustcall
tokio[d7d91d38da47d894]::runtime::task::waker::clone_waker
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  LOCK();
  lVar1 = *param_1;
  *param_1 = *param_1 + 0x40;
  UNLOCK();
  if (lVar1 < 0) {
    (*(code *)PTR_abort_00799748)();
    pcVar2 = (code *)swi(3);
    auVar4._0_8_ = (*pcVar2)();
    auVar4._8_8_ = param_3;
    return auVar4;
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = PTR_WAKER_VTABLE_00799fd0;
  return auVar3;
}


