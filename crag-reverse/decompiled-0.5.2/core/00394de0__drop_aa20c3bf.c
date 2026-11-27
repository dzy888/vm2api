// 00394de0 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  puVar5 = PTR_ref_dec_00799640;
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = *param_1;
    uVar7 = uVar2;
    if (param_1[2] < uVar2) {
      uVar7 = 0;
    }
    lVar8 = param_1[2] - uVar7;
    uVar7 = uVar2 - lVar8;
    lVar10 = uVar1 - uVar7;
    bVar11 = lVar10 != 0;
    if (uVar1 < uVar7) {
      lVar10 = 0;
    }
    uVar9 = lVar8 + uVar1;
    if (uVar1 >= uVar7 && bVar11) {
      uVar9 = uVar2;
    }
    pcVar3 = (code *)PTR_dealloc_00799648;
    pcVar4 = (code *)PTR_ref_dec_00799640;
    for (lVar8 = uVar9 - lVar8; PTR_ref_dec_00799640 = pcVar4, PTR_dealloc_00799648 = pcVar3,
        lVar8 != 0; lVar8 = lVar8 + -1) {
      cVar6 = (*(code *)puVar5)();
      if (cVar6 != '\0') {
        (*(code *)PTR_dealloc_00799648)();
      }
      pcVar3 = (code *)PTR_dealloc_00799648;
      pcVar4 = (code *)PTR_ref_dec_00799640;
    }
    if (uVar7 < uVar1) {
      do {
        cVar6 = (*pcVar4)();
        if (cVar6 != '\0') {
          (*pcVar3)();
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}


