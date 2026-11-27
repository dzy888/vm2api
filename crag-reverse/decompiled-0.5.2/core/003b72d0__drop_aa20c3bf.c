// 003b72d0 drop

/* <alloc[12e961f32105355]::vec::drain::Drain<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

longlong __rustcall
<alloc[12e961f32105355]::vec::drain::Drain<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar1 = param_1[1];
  uVar4 = (ulonglong)(lVar1 - lVar6) >> 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  lVar5 = SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),0);
  *param_1 = 8;
  param_1[1] = 8;
  lVar2 = param_1[2];
  if (lVar1 != lVar6) {
    uVar4 = uVar4 / 0x19;
    do {
      lVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar6);
      lVar6 = lVar6 + 200;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    lVar5 = param_1[3];
    if (lVar5 != lVar1) {
      lVar5 = (*(code *)PTR_memmove_00799258)(*(undefined8 *)(lVar2 + 8),lVar6 * 200);
    }
    *(longlong *)(lVar2 + 0x10) = lVar1 + lVar6;
  }
  return lVar5;
}


