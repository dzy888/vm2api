// 001883b0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>>
::from_iter(undefined4 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 *puStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_38;
  
  if (*(longlong *)(param_3 + 8) == 0) {
    plVar10 = *(longlong **)(param_3 + 2);
    plVar8 = *(longlong **)(param_3 + 6);
    if (plVar10 == plVar8) goto LAB_001886a4;
    *(longlong **)(param_3 + 2) = plVar10 + 3;
    local_68 = plVar10[2];
    param_1 = (undefined4)*plVar10;
    uStack_74 = *(undefined4 *)((longlong)plVar10 + 4);
    lVar11 = *plVar10;
    uStack_70 = (undefined4)plVar10[1];
    uStack_6c = *(undefined4 *)((longlong)plVar10 + 0xc);
    local_78 = param_1;
  }
  else {
    *(undefined8 *)(param_3 + 8) = 0;
    param_1 = <std[6c98fd8553dbae28]::env::ArgsOs_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
              ::nth(&local_78,param_3);
    lVar11 = CONCAT44(uStack_74,local_78);
  }
  if (lVar11 == -1) {
    plVar10 = *(longlong **)(param_3 + 2);
    plVar8 = *(longlong **)(param_3 + 6);
LAB_001886a4:
    *param_2 = 0;
    param_2[1] = 8;
    param_2[2] = 0;
    puVar3 = PTR___rust_dealloc_00219c40;
    if (plVar8 != plVar10) {
      uVar5 = (ulonglong)((longlong)plVar8 - (longlong)plVar10) / 0x18;
      plVar10 = plVar10 + 1;
      do {
        if (plVar10[-1] != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        plVar10 = plVar10 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (*(longlong *)(param_3 + 4) != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_1,8);
    }
    return param_2;
  }
  local_38 = CONCAT44(uStack_6c,uStack_70);
  uVar5 = ((ulonglong)(*(longlong *)(param_3 + 6) - *(longlong *)(param_3 + 2)) >> 3) *
          -0x5555555555555555;
  uVar6 = uVar5 - *(ulonglong *)(param_3 + 8);
  if (uVar5 < *(ulonglong *)(param_3 + 8)) {
    uVar6 = 0;
  }
  uVar5 = 3;
  if (3 < uVar6) {
    uVar5 = uVar6;
  }
  if (0x555555555555554 < uVar6) {
LAB_00188460:
    (*(code *)PTR_handle_error_00219c78)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar5 * 8 + 8) * 3 == 0) {
    puVar7 = (undefined8 *)&DAT_00000008;
    local_90 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar7 == (undefined8 *)0x0) goto LAB_00188460;
    local_90 = uVar5 + 1;
  }
  puVar7[2] = local_68;
  *puVar7 = CONCAT44(uStack_74,local_78);
  puVar7[1] = CONCAT44(uStack_6c,uStack_70);
  local_80 = 1;
  local_98 = *(ulonglong *)(param_3 + 8);
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  plStack_b0 = *(longlong **)(param_3 + 2);
  local_a8 = *(longlong *)(param_3 + 4);
  plStack_a0 = *(longlong **)(param_3 + 6);
  lVar11 = 0x18;
  uVar12 = local_b8;
  puStack_88 = puVar7;
  do {
    lVar4 = local_80;
    if (local_98 == 0) {
      if (plStack_b0 == plStack_a0) {
LAB_001885ef:
        puVar3 = PTR___rust_dealloc_00219c40;
        if (plStack_a0 != plStack_b0) {
          uVar5 = (ulonglong)((longlong)plStack_a0 - (longlong)plStack_b0) / 0x18;
          plVar10 = plStack_b0 + 1;
          do {
            if (plVar10[-1] != 0) {
              uVar12 = (*(code *)puVar3)(uVar12,1);
            }
            plVar10 = plVar10 + 3;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (local_a8 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar12,8);
        }
        param_2[2] = local_80;
        *param_2 = local_90;
        param_2[1] = (longlong)puStack_88;
        return param_2;
      }
      uVar12 = (undefined4)*plStack_b0;
      uStack_54 = *(undefined4 *)((longlong)plStack_b0 + 4);
      lVar9 = *plStack_b0;
      uStack_50 = (undefined4)plStack_b0[1];
      uStack_4c = *(undefined4 *)((longlong)plStack_b0 + 0xc);
      local_48 = plStack_b0[2];
      plStack_b0 = plStack_b0 + 3;
      local_58 = uVar12;
    }
    else {
      local_98 = 0;
      uVar12 = <std[6c98fd8553dbae28]::env::ArgsOs_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
               ::nth(&local_58,&local_b8);
      lVar9 = CONCAT44(uStack_54,local_58);
    }
    if (lVar9 == -1) goto LAB_001885ef;
    if (lVar4 == local_90) {
      uVar5 = ((ulonglong)((longlong)plStack_a0 - (longlong)plStack_b0) >> 3) * -0x5555555555555555;
      lVar9 = uVar5 - local_98;
      if (uVar5 < local_98) {
        lVar9 = 0;
      }
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_90,lVar4,lVar9 + 1,8,0x18);
      puVar7 = puStack_88;
    }
    *(longlong *)((longlong)puVar7 + lVar11 + 0x10) = local_48;
    puVar1 = (undefined4 *)((longlong)puVar7 + lVar11);
    *puVar1 = local_58;
    puVar1[1] = uStack_54;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    local_80 = lVar4 + 1;
    lVar11 = lVar11 + 0x18;
    uVar12 = local_58;
  } while( true );
}


