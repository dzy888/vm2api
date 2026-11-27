// 00067410 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong lVar5;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = *param_1;
    uVar4 = param_1[1];
    uVar7 = uVar2;
    if (param_1[2] < uVar2) {
      uVar7 = 0;
    }
    lVar3 = param_1[2] - uVar7;
    uVar7 = uVar2 - lVar3;
    lVar8 = uVar1 - uVar7;
    bVar9 = lVar8 != 0;
    if (uVar1 < uVar7) {
      lVar8 = 0;
    }
    uVar6 = lVar3 + uVar1;
    if (uVar1 >= uVar7 && bVar9) {
      uVar6 = uVar2;
    }
    lVar5 = uVar6 - lVar3;
    if (lVar5 != 0) {
      lVar3 = lVar3 * 0x98 + uVar4;
      do {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>
                  (lVar3);
        lVar3 = lVar3 + 0x98;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (uVar7 < uVar1) {
      do {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>
                  (uVar4);
        uVar4 = uVar4 + 0x98;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}


