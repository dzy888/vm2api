// 003b1aa0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::pool::AgySlot> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<craggemini_core[66f3c71560d70857]::pool::AgySlot,
   alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::pool::AgySlot>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<craggemini_core[66f3c71560d70857]::pool::AgySlot,alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::pool::AgySlot>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  ulonglong local_8d0;
  ulonglong uStack_8c8;
  ulonglong local_8c0;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  longlong local_8a8;
  longlong lStack_8a0;
  longlong local_898;
  ulonglong *local_890;
  longlong local_888;
  longlong local_880;
  longlong local_878 [265];
  
  uVar7 = param_2[4];
  if (uVar7 != 0) {
    puVar2 = (ulonglong *)*param_2;
    uVar6 = puVar2[2] + param_2[2];
    uVar4 = 0;
    if (*puVar2 <= uVar6) {
      uVar4 = *puVar2;
    }
    param_2[2] = param_2[2] + 1;
    param_2[4] = uVar7 - 1;
    lVar5 = (uVar6 - uVar4) * 0x848;
    local_878[0] = *(longlong *)(puVar2[1] + lVar5);
    if (local_878[0] != 2) {
      uVar10 = (*(code *)PTR_memcpy_00799008)(lVar5,0x840);
      if (0xf74e3fc22c700 < uVar7) {
LAB_003b1b6b:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_890 = param_1;
      if (uVar7 * 0x848 == 0) {
        uVar4 = 8;
        uVar7 = 0;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar4 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar4 == 0) goto LAB_003b1b6b;
        uVar10 = extraout_XMM0_Da;
      }
      plVar8 = local_878;
      (*(code *)PTR_memcpy_00799008)(uVar10,0x848);
      local_8c0 = 1;
      lVar5 = param_2[4];
      local_8b8 = (undefined4)*param_2;
      uStack_8b4 = *(undefined4 *)((longlong)param_2 + 4);
      puVar2 = (ulonglong *)*param_2;
      uStack_8b0 = (undefined4)param_2[1];
      uStack_8ac = *(undefined4 *)((longlong)param_2 + 0xc);
      local_8a8 = param_2[2];
      lStack_8a0 = param_2[3];
      local_8d0 = uVar7;
      uStack_8c8 = uVar4;
      local_898 = lVar5;
      if (lVar5 != 0) {
        local_888 = -lVar5;
        local_880 = local_8a8;
        do {
          uVar7 = local_8c0;
          lVar1 = local_880 + local_8c0;
          plVar8 = (longlong *)*puVar2;
          if ((longlong *)((puVar2[2] + lVar1) - 1) < plVar8) {
            plVar8 = (longlong *)0x0;
          }
          lVar9 = *(longlong *)
                   (((puVar2[2] - (longlong)plVar8) + lVar1) * 0x848 + -0x848 + puVar2[1]);
          if (lVar9 == 2) {
            lVar9 = lVar5 + -1;
            break;
          }
          local_878[0] = lVar9;
          uVar10 = (*(code *)PTR_memcpy_00799008)(lVar9,0x840);
          if (uVar7 == local_8d0) {
            uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_8d0,uVar7,lVar5,8,0x848);
          }
          plVar8 = local_878;
          (*(code *)PTR_memcpy_00799008)(uVar10,0x848);
          local_8c0 = uVar7 + 1;
          lVar5 = lVar5 + -1;
          lVar9 = 0;
        } while (local_888 + uVar7 != 0);
        local_8a8 = lVar1;
        local_898 = lVar9;
      }
      <alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_8b8,plVar8);
      local_890[2] = local_8c0;
      *local_890 = local_8d0;
      local_890[1] = uStack_8c8;
      return local_890;
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  <alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2);
  return param_1;
}


