// 00410090 <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>

/* WARNING: Switch with 1 destination removed at 0x00410152 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar5 = PTR___rust_dealloc_00798fc8;
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar1;
    if (uVar4 < uVar1) {
      uVar6 = 0;
    }
    lVar9 = uVar4 - uVar6;
    uVar10 = uVar1 - lVar9;
    lVar11 = uVar2 - uVar10;
    bVar12 = lVar11 != 0;
    if (uVar2 < uVar10) {
      lVar11 = 0;
    }
    uVar7 = lVar9 + uVar2;
    if (uVar2 >= uVar10 && bVar12) {
      uVar7 = uVar1;
    }
    lVar9 = uVar7 - lVar9;
    if (lVar9 != 0) {
      lVar8 = uVar4 * 0x18 + uVar6 * -0x18 + uVar3 + 8;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar8 = lVar8 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    if (uVar10 < uVar2) {
      lVar9 = uVar3 + 8;
      do {
        if (*(longlong *)(lVar9 + -8) != 0) {
          (*(code *)puVar5)();
        }
        lVar9 = lVar9 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


