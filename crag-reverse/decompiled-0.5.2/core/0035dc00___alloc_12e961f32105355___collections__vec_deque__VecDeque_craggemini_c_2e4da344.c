// 0035dc00 <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>>

/* WARNING: Switch with 1 destination removed at 0x0035dcd7 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong lVar5;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 != 0) {
    uVar8 = param_1[1];
    uVar4 = uVar1;
    if (param_1[2] < uVar1) {
      uVar4 = 0;
    }
    lVar3 = param_1[2] - uVar4;
    uVar4 = uVar1 - lVar3;
    lVar7 = uVar2 - uVar4;
    bVar9 = lVar7 != 0;
    if (uVar2 < uVar4) {
      lVar7 = 0;
    }
    uVar6 = lVar3 + uVar2;
    if (uVar2 >= uVar4 && bVar9) {
      uVar6 = uVar1;
    }
    lVar5 = uVar6 - lVar3;
    if (lVar5 != 0) {
      lVar3 = lVar3 * 0x128 + uVar8;
      do {
        <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(lVar3);
        lVar3 = lVar3 + 0x128;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (uVar4 < uVar2) {
      do {
        <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(uVar8);
        uVar8 = uVar8 + 0x128;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


