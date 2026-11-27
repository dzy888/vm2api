// 0070a0f0 next_task

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>::next_task */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>::next_task
          (longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  
  if (*(uint *)(param_1 + 0xa4) == 0) {
    uVar15 = (*(code *)PTR_panic_const_rem_by_zero_007997d8)();
    lVar13 = *param_2;
    *param_2 = -1;
    if (lVar13 == -1) {
      (*(code *)PTR_expect_failed_00799440)
                (uVar15,&
                        PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795600
                );
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar12 = param_2[1];
    lVar2 = param_2[2];
    lVar6 = param_2[3];
    lVar7 = param_2[4];
    lVar8 = param_2[5];
    lVar9 = param_2[6];
    lVar10 = param_2[7];
    lVar4 = param_2[8];
    lVar5 = param_2[9];
    lVar3 = param_2[10];
    *(longlong *)(param_3 + 0x10) = param_2[0xf];
    *(longlong *)(param_3 + 0x20) = param_2[0x10];
    *(longlong *)(param_3 + 0x28) = param_2[0x11];
    plVar11 = (longlong *)
              <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park_internal
                        (&
                         PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_007955e8
                         ,param_2);
    if ((int)*plVar11 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver>
                (plVar11);
    }
    plVar11[10] = lVar3;
    plVar11[8] = lVar4;
    plVar11[9] = lVar5;
    plVar11[6] = lVar9;
    plVar11[7] = lVar10;
    plVar11[4] = lVar7;
    plVar11[5] = lVar8;
    plVar11[2] = lVar2;
    plVar11[3] = lVar6;
    *plVar11 = lVar13;
    plVar11[1] = lVar12;
    return plVar11;
  }
  if (*(uint *)(param_1 + 0xa0) % *(uint *)(param_1 + 0xa4) != 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      param_2[3] = 0;
      plVar11 = (longlong *)
                <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
                ::pop(param_2 + 0x12);
      return plVar11;
    }
    lVar13 = *(longlong *)(param_1 + 0x68);
    uVar14 = 0;
    if (*(ulonglong *)(param_1 + 0x58) <= lVar13 + 1U) {
      uVar14 = *(ulonglong *)(param_1 + 0x58);
    }
    *(ulonglong *)(param_1 + 0x68) = (lVar13 - uVar14) + 1;
    lVar12 = *(longlong *)(param_1 + 0x70) + -1;
    *(longlong *)(param_1 + 0x70) = lVar12;
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar13 * 8);
    param_2[3] = lVar12;
    return plVar11;
  }
  plVar11 = (longlong *)
            <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
            ::pop(param_2 + 0x12);
  if (plVar11 != (longlong *)0x0) {
    return plVar11;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar13 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x68);
    uVar14 = 0;
    if (*(ulonglong *)(param_1 + 0x58) <= lVar12 + 1U) {
      uVar14 = *(ulonglong *)(param_1 + 0x58);
    }
    *(ulonglong *)(param_1 + 0x68) = (lVar12 - uVar14) + 1;
    lVar13 = *(longlong *)(param_1 + 0x70) + -1;
    *(longlong *)(param_1 + 0x70) = lVar13;
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar12 * 8);
  }
  param_2[3] = lVar13;
  return plVar11;
}


