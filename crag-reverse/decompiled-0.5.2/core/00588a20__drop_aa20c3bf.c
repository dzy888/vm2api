// 00588a20 drop

/* <alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::server::ControlJob>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::server::ControlJob>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    if (CARRY8(uVar2,uVar1)) {
      (*(code *)PTR_slice_index_fail_007993c8)
                (&anon_30b5cef53457a6ea696e8d7e9f6273d6_697_llvm_8436237269785592069,uVar2 + uVar1);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar3 = (ulonglong *)*param_1;
    uVar4 = *puVar3;
    uVar7 = 0;
    if (uVar4 <= puVar3[2] + uVar2) {
      uVar7 = uVar4;
    }
    uVar10 = puVar3[1];
    lVar6 = (puVar3[2] + uVar2) - uVar7;
    uVar7 = lVar6 + uVar1;
    if (uVar4 - lVar6 < uVar1) {
      uVar7 = uVar4;
    }
    lVar8 = uVar7 - lVar6;
    param_1[2] = uVar2 + lVar8;
    param_1[4] = uVar1 - lVar8;
    lVar6 = lVar6 * 0x68 + uVar10;
    for (lVar9 = lVar8 + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::server::ControlJob>(lVar6);
      lVar6 = lVar6 + 0x68;
    }
    param_1[4] = 0;
    for (lVar6 = (uVar1 - lVar8) + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::server::ControlJob>(uVar10);
      uVar10 = uVar10 + 0x68;
    }
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<craggemini_core[66f3c71560d70857]::server::ControlJob,alloc[12e961f32105355]::alloc::Global>>
            (param_1);
  return;
}


