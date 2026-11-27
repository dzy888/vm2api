// 0039a050 <<craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::feed::{closure#2}>

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::shm::InFlightChunk>>::retain::<<craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::feed::{closure#2}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::shm::InFlightChunk>>::retain::
<<craggemini_core[66f3c71560d70857]::shm::ChunkReassembler>::feed::_closure_2_>
          (undefined4 param_1,longlong param_2,short *param_3,int *param_4,undefined8 param_5)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 != 0) {
    plVar4 = *(longlong **)(param_2 + 8);
    sVar1 = *param_3;
    iVar2 = *param_4;
    uVar10 = 0;
    plVar5 = plVar4;
    do {
      plVar12 = plVar5 + 5;
      if ((*(short *)((longlong)plVar5 + 0x24) == sVar1) && ((int)plVar5[3] == iVar2)) {
        if (*plVar5 != 0) {
          param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_5,1);
        }
        if (uVar10 + 1 < uVar3) {
          lVar11 = (uVar3 - 1) - uVar10;
          do {
            if ((*(short *)((longlong)plVar12 + 0x24) == sVar1) && ((int)plVar12[3] == iVar2)) {
              if (*plVar12 != 0) {
                param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
              }
            }
            else {
              plVar4[uVar10 * 5 + 4] = plVar12[4];
              param_1 = (undefined4)*plVar12;
              uVar6 = *(undefined4 *)((longlong)plVar12 + 4);
              lVar9 = plVar12[1];
              uVar7 = *(undefined4 *)((longlong)plVar12 + 0xc);
              lVar8 = plVar12[3];
              plVar4[uVar10 * 5 + 2] = plVar12[2];
              (plVar4 + uVar10 * 5 + 2)[1] = lVar8;
              plVar5 = plVar4 + uVar10 * 5;
              *(undefined4 *)plVar5 = param_1;
              *(undefined4 *)((longlong)plVar5 + 4) = uVar6;
              *(int *)(plVar5 + 1) = (int)lVar9;
              *(undefined4 *)((longlong)plVar5 + 0xc) = uVar7;
              uVar10 = uVar10 + 1;
            }
            plVar12 = plVar12 + 5;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        *(ulonglong *)(param_2 + 0x10) = uVar10;
        return;
      }
      uVar10 = uVar10 + 1;
      plVar5 = plVar12;
    } while (uVar3 != uVar10);
  }
  return;
}


