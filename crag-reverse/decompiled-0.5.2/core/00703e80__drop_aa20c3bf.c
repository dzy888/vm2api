// 00703e80 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    puVar4 = (undefined8 *)param_1[1];
    uVar8 = uVar3;
    if (uVar2 < uVar3) {
      uVar8 = 0;
    }
    lVar10 = uVar2 - uVar8;
    uVar9 = uVar3 - lVar10;
    lVar12 = uVar1 - uVar9;
    bVar13 = lVar12 != 0;
    if (uVar1 < uVar9) {
      lVar12 = 0;
    }
    uVar11 = lVar10 + uVar1;
    if (uVar1 >= uVar9 && bVar13) {
      uVar11 = uVar3;
    }
    lVar10 = uVar11 - lVar10;
    if (lVar10 != 0) {
      puVar7 = puVar4 + uVar8 * -2 + uVar2 * 2;
      do {
        puVar5 = (ulonglong *)*puVar7;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 - 0x80;
        UNLOCK();
        if (uVar2 < 0x80) {
          (*(code *)PTR_panic_00799338)();
          goto LAB_00703fa4;
        }
        if (uVar2 < 0xc0) {
          (**(code **)(puVar5[2] + 0x10))();
        }
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 2;
      } while (lVar10 != 0);
    }
    if (uVar9 < uVar1) {
      do {
        puVar5 = (ulonglong *)*puVar4;
        LOCK();
        uVar1 = *puVar5;
        *puVar5 = *puVar5 - 0x80;
        UNLOCK();
        if (uVar1 < 0x80) {
          (*(code *)PTR_panic_00799338)();
LAB_00703fa4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        if (uVar1 < 0xc0) {
          (**(code **)(puVar5[2] + 0x10))();
        }
        lVar12 = lVar12 + -1;
        puVar4 = puVar4 + 2;
      } while (lVar12 != 0);
    }
  }
  return;
}


