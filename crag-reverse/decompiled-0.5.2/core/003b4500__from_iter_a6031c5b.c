// 003b4500 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::str::iter::Split<char>>>::from_iter */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::str::iter::Split<char>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_48 [2];
  longlong local_40;
  longlong local_38;
  
  if (*(char *)((longlong)param_2 + 0x41) == '\0') {
    lVar5 = param_2[2];
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_98,param_2 + 2);
    if ((int)local_98 == 1) {
      lVar6 = CONCAT44(uStack_8c,uStack_90) - *param_2;
      lVar5 = lVar5 + *param_2;
      *param_2 = local_88;
LAB_003b456f:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar4 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar4 == (longlong *)0x0) {
        uVar8 = (*(code *)PTR_handle_error_00798ff0)();
        if (local_b0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      *plVar4 = lVar5;
      plVar4[1] = lVar6;
      local_b0 = 4;
      local_a0 = 1;
      local_98 = *param_2;
      uStack_90 = (undefined4)param_2[1];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_88 = param_2[2];
      lStack_80 = param_2[3];
      local_78 = param_2[4];
      lStack_70 = param_2[5];
      local_68 = param_2[6];
      lStack_60 = param_2[7];
      local_58._1_1_ = (char)((ulonglong)param_2[8] >> 8);
      local_a8 = plVar4;
      if (local_58._1_1_ == '\0') {
        lVar5 = 0x18;
        local_58 = param_2[8];
        do {
          lVar6 = local_88;
          lVar2 = local_a0;
          <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
          ::next_match(local_48,&local_88);
          uVar3 = local_58;
          if (local_48[0] == 1) {
            lVar7 = local_40 - local_98;
            lVar1 = local_38;
          }
          else {
            if (local_58._1_1_ != '\0') break;
            local_58._0_2_ = CONCAT11(1,(undefined1)local_58);
            lVar7 = CONCAT44(uStack_8c,uStack_90) - local_98;
            lVar1 = local_98;
            lVar6 = local_88;
            if (lVar7 == 0 && (uVar3 & 1) == 0) break;
          }
          lVar6 = local_98 + lVar6;
          local_98 = lVar1;
          if (lVar2 == local_b0) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_b0,lVar2,1,8,0x10);
            plVar4 = local_a8;
          }
          *(longlong *)((longlong)plVar4 + lVar5 + -8) = lVar6;
          *(longlong *)((longlong)plVar4 + lVar5) = lVar7;
          local_a0 = lVar2 + 1;
          lVar5 = lVar5 + 0x10;
        } while (local_58._1_1_ == '\0');
      }
      param_1[2] = local_a0;
      *param_1 = local_b0;
      param_1[1] = (longlong)local_a8;
      return param_1;
    }
    if (*(char *)((longlong)param_2 + 0x41) == '\0') {
      *(undefined1 *)((longlong)param_2 + 0x41) = 1;
      lVar6 = param_2[1] - *param_2;
      if ((lVar6 != 0 | *(byte *)(param_2 + 8)) == 1) {
        lVar5 = *param_2 + param_2[2];
        goto LAB_003b456f;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


