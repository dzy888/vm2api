// 006537b0 reset

/* <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::reset */

void __rustcall <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::reset(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined4 *)(lVar1 + 0x180) = 0;
  *(undefined4 *)(lVar1 + 0x184) = 0;
  auVar3 = craggemini_core[66f3c71560d70857]::shm::drain_eventfd
                     (*(undefined4 *)((longlong)param_1 + 0x34));
  if (auVar3._0_8_ != 0) {
    if ((1 < (auVar3._8_4_ & 3) - 2) && ((auVar3._8_8_ & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  auVar3 = craggemini_core[66f3c71560d70857]::shm::drain_eventfd((int)param_1[7]);
  if (auVar3._0_8_ != 0) {
    if ((1 < (auVar3._8_4_ & 3) - 2) && ((auVar3._8_8_ & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  auVar3 = craggemini_core[66f3c71560d70857]::shm::drain_eventfd
                     (*(undefined4 *)((longlong)param_1 + 0x3c));
  if (auVar3._0_8_ != 0) {
    if ((1 < (auVar3._8_4_ & 3) - 2) && ((auVar3._8_8_ & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  auVar3 = craggemini_core[66f3c71560d70857]::shm::drain_eventfd((int)param_1[8]);
  if (auVar3._0_8_ != 0) {
    if ((1 < (auVar3._8_4_ & 3) - 2) && ((auVar3._8_8_ & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  if (param_1[1] + -0x1000 != 0) {
    iVar2 = (*(code *)PTR_fallocate_00799098)(param_1[1] + -0x1000,0x1000);
    if (iVar2 != 0) {
      (*(code *)PTR___errno_location_007990a0)();
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      (*(code *)PTR_madvise_007990b0)();
    }
  }
  return;
}


