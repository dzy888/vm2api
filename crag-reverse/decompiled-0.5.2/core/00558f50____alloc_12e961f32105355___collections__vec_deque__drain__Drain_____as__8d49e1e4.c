// 00558f50 <<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<craggemini_core[66f3c71560d70857]::pool::AgySlot,alloc[12e961f32105355]::alloc::Global>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,
   _> as 
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<craggemini_core[66f3c71560d70857]::pool::AgySlot,
   alloc[12e961f32105355]::alloc::Global>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<craggemini_core[66f3c71560d70857]::pool::AgySlot,alloc[12e961f32105355]::alloc::Global>>
          (longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong unaff_R13;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong unaff_R15;
  
  puVar9 = (ulonglong *)*param_1;
  plVar6 = (longlong *)param_1[4];
  if (plVar6 == (longlong *)0x0) {
LAB_00559000:
    unaff_R15 = param_1[1];
    param_1 = (longlong *)param_1[3];
    plVar6 = (longlong *)puVar9[3];
    unaff_R13 = (longlong)param_1 + (longlong)plVar6;
    if ((plVar6 == (longlong *)0x0) || (param_1 == (longlong *)0x0)) goto joined_r0x00559061;
  }
  else {
    uVar3 = param_1[2];
    if (!CARRY8(uVar3,(ulonglong)plVar6)) {
      uVar1 = *puVar9;
      uVar2 = 0;
      if (uVar1 <= uVar3 + puVar9[2]) {
        uVar2 = uVar1;
      }
      uVar8 = puVar9[1];
      lVar4 = (uVar3 + puVar9[2]) - uVar2;
      uVar3 = lVar4 + (longlong)plVar6;
      if ((longlong *)(uVar1 - lVar4) < plVar6) {
        uVar3 = uVar1;
      }
      lVar5 = lVar4 * 0x848 + uVar8;
      for (lVar7 = (uVar3 - lVar4) + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar5);
        lVar5 = lVar5 + 0x848;
      }
      for (lVar4 = (longlong)plVar6 + (1 - (uVar3 - lVar4)); lVar4 != 1; lVar4 = lVar4 + -1) {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(uVar8);
        uVar8 = uVar8 + 0x848;
      }
      puVar9 = (ulonglong *)*param_1;
      goto LAB_00559000;
    }
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_30b5cef53457a6ea696e8d7e9f6273d6_697_llvm_8436237269785592069,
               uVar3 + (longlong)plVar6);
  }
  <<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop::join_head_and_tail_wrapping::
  <craggemini_core[66f3c71560d70857]::pool::AgySlot,alloc[12e961f32105355]::alloc::Global>
            (puVar9,unaff_R15,plVar6);
joined_r0x00559061:
  if (unaff_R13 == 0) {
    puVar9[2] = 0;
  }
  else if (plVar6 < param_1) {
    uVar3 = 0;
    if (*puVar9 <= unaff_R15 + puVar9[2]) {
      uVar3 = *puVar9;
    }
    puVar9[2] = (unaff_R15 + puVar9[2]) - uVar3;
  }
  puVar9[3] = unaff_R13;
  return;
}


