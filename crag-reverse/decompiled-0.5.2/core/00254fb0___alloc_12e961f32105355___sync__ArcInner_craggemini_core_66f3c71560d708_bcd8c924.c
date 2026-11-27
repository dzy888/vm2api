// 00254fb0 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  (*(code *)PTR_memset_00799090)(param_4,0x1000);
  lVar3 = lVar3 + -0x1000;
  if (lVar3 != 0) {
    iVar2 = (*(code *)PTR_fallocate_00799098)(lVar3,0x1000);
    if (iVar2 != 0) {
      (*(code *)PTR___errno_location_007990a0)();
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      (*(code *)PTR_madvise_007990b0)();
    }
  }
  puVar1 = PTR_close_00799030;
  (*(code *)PTR_close_00799030)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)PTR_munmap_007990b8)();
  return;
}


