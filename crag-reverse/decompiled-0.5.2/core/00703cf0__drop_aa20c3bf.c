// 00703cf0 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    puVar4 = (undefined8 *)param_1[1];
    uVar7 = uVar3;
    if (uVar2 < uVar3) {
      uVar7 = 0;
    }
    lVar9 = uVar2 - uVar7;
    uVar8 = uVar3 - lVar9;
    lVar11 = uVar1 - uVar8;
    bVar13 = lVar11 != 0;
    if (uVar1 < uVar8) {
      lVar11 = 0;
    }
    uVar10 = lVar9 + uVar1;
    if (uVar1 >= uVar8 && bVar13) {
      uVar10 = uVar3;
    }
    lVar9 = uVar10 - lVar9;
    if (lVar9 != 0) {
      puVar12 = puVar4 + (uVar2 - uVar7);
      do {
        puVar5 = (ulonglong *)*puVar12;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 - 0x40;
        UNLOCK();
        if (uVar2 >> 6 == 1) {
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar2 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)();
          goto LAB_00703e0c;
        }
        lVar9 = lVar9 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar9 != 0);
    }
    if (uVar8 < uVar1) {
      do {
        puVar5 = (ulonglong *)*puVar4;
        LOCK();
        uVar1 = *puVar5;
        *puVar5 = *puVar5 - 0x40;
        UNLOCK();
        if (uVar1 >> 6 == 1) {
          (**(code **)(puVar5[2] + 0x10))();
        }
        else if (uVar1 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)();
LAB_00703e0c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar11 = lVar11 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar11 != 0);
    }
  }
  return;
}


