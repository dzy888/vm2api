// 006f6670 join

/* <std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  
  (*(code *)PTR_join_00799d80)();
  plVar2 = (longlong *)param_1[1];
  LOCK();
  bVar6 = plVar2[1] == 1;
  if (bVar6) {
    plVar2[1] = -1;
  }
  UNLOCK();
  if ((bVar6) && (plVar2[1] = 1, *plVar2 == 1)) {
    lVar3 = param_1[1];
    auVar5 = *(undefined1 (*) [16])(lVar3 + 0x20);
    bVar1 = *(byte *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if ((bVar1 & 1) != 0) {
      plVar2 = (longlong *)*param_1;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_007996e8)();
      }
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799c58)();
      }
      return auVar5;
    }
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    (*(code *)PTR_expect_failed_00799440)
              (plVar2,&anon_d250138afc359909044a05a15195067d_37_llvm_15875357693395155123);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


