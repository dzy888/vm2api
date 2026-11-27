// 00496030 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>>

/* WARNING: Switch with 1 destination removed at 0x00496102 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>>
          (longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar4 = PTR___rust_dealloc_00798fc8;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    uVar5 = uVar1;
    if (uVar3 < uVar1) {
      uVar5 = 0;
    }
    lVar8 = uVar3 - uVar5;
    uVar9 = uVar1 - lVar8;
    lVar10 = uVar2 - uVar9;
    bVar12 = lVar10 != 0;
    if (uVar2 < uVar9) {
      lVar10 = 0;
    }
    uVar6 = lVar8 + uVar2;
    if (uVar2 >= uVar9 && bVar12) {
      uVar6 = uVar1;
    }
    lVar8 = uVar6 - lVar8;
    if (lVar8 != 0) {
      lVar7 = uVar3 * 0x18 + uVar5 * -0x18 + lVar11 + 8;
      do {
        if (*(longlong *)(lVar7 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar7 = lVar7 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar4 = PTR___rust_dealloc_00798fc8;
    if (uVar9 < uVar2) {
      lVar11 = lVar11 + 8;
      do {
        if (*(longlong *)(lVar11 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar11 = lVar11 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


