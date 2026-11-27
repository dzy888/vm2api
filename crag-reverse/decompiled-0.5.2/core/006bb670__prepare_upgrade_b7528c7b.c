// 006bb670 prepare_upgrade

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::prepare_upgrade */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::prepare_upgrade(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = hyper[c4782d5b5c5e3493]::upgrade::pending();
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    uVar2 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar2 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007994c8)();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 1;
  *(longlong *)(param_1 + 0x28) = auVar3._0_8_;
  return auVar3._8_8_;
}


