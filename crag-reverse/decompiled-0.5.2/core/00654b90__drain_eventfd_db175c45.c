// 00654b90 drain_eventfd

/* craggemini_core[66f3c71560d70857]::shm::drain_eventfd */

undefined1  [16] __rustcall craggemini_core[66f3c71560d70857]::shm::drain_eventfd(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 in_RCX;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = (*(code *)PTR_read_00799e98)(in_RCX,8);
  if ((lVar3 != 8) && (lVar3 < 0)) {
    piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar6 = (longlong)iVar1 << 0x20 | 2;
    lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar2 = (**(code **)(lVar3 + 8))();
    if (cVar2 != '\r') {
      lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar2 = (**(code **)(lVar3 + 8))();
      uVar5 = 1;
      if (cVar2 != '#') goto LAB_00654c11;
    }
  }
  uVar6 = 0;
  uVar5 = 0;
LAB_00654c11:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}


