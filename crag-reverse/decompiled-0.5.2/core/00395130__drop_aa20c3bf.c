// 00395130 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar5 = PTR___rust_dealloc_00798fc8;
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar8 = uVar2 - uVar6;
    uVar9 = uVar3 - lVar8;
    lVar11 = uVar1 - uVar9;
    bVar12 = lVar11 != 0;
    if (uVar1 < uVar9) {
      lVar11 = 0;
    }
    uVar10 = lVar8 + uVar1;
    if (uVar1 >= uVar9 && bVar12) {
      uVar10 = uVar3;
    }
    lVar8 = uVar10 - lVar8;
    if (lVar8 != 0) {
      lVar7 = uVar2 * 0x18 + uVar6 * -0x18 + uVar4 + 8;
      do {
        if (*(longlong *)(lVar7 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar7 = lVar7 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    if (uVar9 < uVar1) {
      lVar8 = uVar4 + 8;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar8 = lVar8 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}


