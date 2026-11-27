// 0038d940 truncate

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::truncate
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::
truncate(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar9 = uVar2 - uVar6;
    uVar11 = uVar3 - lVar9;
    lVar7 = uVar1 - uVar11;
    bVar12 = lVar7 != 0;
    if (uVar1 < uVar11) {
      lVar7 = 0;
    }
    uVar10 = lVar9 + uVar1;
    if (uVar1 >= uVar11 && bVar12) {
      uVar10 = uVar3;
    }
    uVar10 = uVar10 - lVar9;
    param_1[3] = param_2;
    puVar5 = PTR___rust_dealloc_00798fc8;
    if (param_2 < uVar10 || param_2 - uVar10 == 0) {
      lVar9 = uVar10 - param_2;
      if (lVar9 != 0) {
        lVar8 = param_2 * 0x18 + uVar2 * 0x18 + uVar6 * -0x18 + uVar4 + 8;
        do {
          if (*(longlong *)(lVar8 + -8) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          lVar8 = lVar8 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      puVar5 = PTR___rust_dealloc_00798fc8;
      if (uVar11 < uVar1) {
        lVar9 = uVar4 + 8;
        do {
          if (*(longlong *)(lVar9 + -8) != 0) {
            (*(code *)puVar5)();
          }
          lVar9 = lVar9 + 0x18;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else {
      lVar7 = lVar7 - (param_2 - uVar10);
      if (lVar7 != 0) {
        lVar9 = uVar4 + param_2 * 0x18 + uVar10 * -0x18 + 8;
        do {
          if (*(longlong *)(lVar9 + -8) != 0) {
            (*(code *)puVar5)();
          }
          lVar9 = lVar9 + 0x18;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
  }
  return;
}


