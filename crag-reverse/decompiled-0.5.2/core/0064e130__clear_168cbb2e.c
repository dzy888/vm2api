// 0064e130 clear

/* <craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::clear */

void __rustcall
<craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::clear
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 8) + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


