// 005844e0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x005845b4 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = *(longlong *)(lVar2 + 0x18);
  (*(code *)PTR_memset_00799090)(param_4,0x1000);
  lVar5 = lVar5 + -0x1000;
  if ((lVar5 != 0) && (iVar4 = (*(code *)PTR_fallocate_00799098)(lVar5,0x1000), iVar4 != 0)) {
    (*(code *)PTR___errno_location_007990a0)();
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    (*(code *)PTR_madvise_007990b0)();
  }
  puVar3 = PTR_close_00799030;
  (*(code *)PTR_close_00799030)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  (*(code *)PTR_munmap_007990b8)();
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


