// 00060220 drain_req_wakeup

/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::drain_req_wakeup */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::drain_req_wakeup(longlong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = agy_bridge[64a9e9deac6c45ce]::shm::drain_eventfd(*(undefined4 *)(param_1 + 0x34));
  if (auVar1._0_8_ != 0) {
    if ((1 < (auVar1._8_4_ & 3) - 2) && ((auVar1._8_8_ & 3) != 0)) {
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  return;
}


