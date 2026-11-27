// 0018c550 join

/* <std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::thread::lifecycle::JoinInner<()>>::join(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  
  (*(code *)PTR_join_0021a1e0)();
  plVar2 = (longlong *)param_1[1];
  LOCK();
  bVar7 = plVar2[1] == 1;
  if (bVar7) {
    plVar2[1] = -1;
  }
  UNLOCK();
  if ((bVar7) && (plVar2[1] = 1, *plVar2 == 1)) {
    plVar2 = param_1 + 1;
    lVar3 = *plVar2;
    auVar6 = *(undefined1 (*) [16])(lVar3 + 0x20);
    bVar1 = *(byte *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if ((bVar1 & 1) != 0) {
      plVar4 = (longlong *)*param_1;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00219e28)();
      }
      plVar4 = (longlong *)*plVar2;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
        drop_slow(plVar2);
      }
      return auVar6;
    }
    (*(code *)PTR_unwrap_failed_00219e58)();
  }
  else {
    (*(code *)PTR_expect_failed_0021a0e0)
              (plVar2,&anon_c7f97ca7de608b4d7a735a6c32ca97ae_11_llvm_15581412977740537520);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


