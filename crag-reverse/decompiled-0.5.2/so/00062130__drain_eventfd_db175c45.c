// 00062130 drain_eventfd

/* agy_bridge[64a9e9deac6c45ce]::shm::drain_eventfd */

undefined1  [16] __rustcall agy_bridge[64a9e9deac6c45ce]::shm::drain_eventfd(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 in_RCX;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = (*(code *)PTR_read_000c3d20)(in_RCX,8);
  if ((lVar3 != 8) && (lVar3 < 0)) {
    piVar4 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
        &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar6 = (longlong)iVar1 << 0x20 | 2;
    lVar3 = (*(code *)PTR_get_os_functions_000c3c18)();
    cVar2 = (**(code **)(lVar3 + 8))();
    if (cVar2 != '\r') {
      lVar3 = (*(code *)PTR_get_os_functions_000c3c18)();
      cVar2 = (**(code **)(lVar3 + 8))();
      uVar5 = 1;
      if (cVar2 != '#') goto LAB_000621b1;
    }
  }
  uVar6 = 0;
  uVar5 = 0;
LAB_000621b1:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}


