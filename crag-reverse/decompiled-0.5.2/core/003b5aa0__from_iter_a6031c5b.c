// 003b5aa0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace>>::from_iter */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace>>
::from_iter(longlong *param_1,undefined4 *param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  longlong local_98;
  undefined1 (*pauStack_90) [16];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  auVar5 = <core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
           ::next(param_2);
  local_80 = param_1;
  if (auVar5._0_8_ == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pauVar1 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
    if (pauVar1 == (undefined1 (*) [16])0x0) {
      uVar4 = (*(code *)PTR_handle_error_00798ff0)();
      if (local_98 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,8);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    *pauVar1 = auVar5;
    local_98 = 4;
    local_88 = 1;
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_68 = param_2[4];
    uStack_64 = param_2[5];
    uStack_60 = param_2[6];
    uStack_5c = param_2[7];
    local_58 = param_2[8];
    uStack_54 = param_2[9];
    uStack_50 = param_2[10];
    uStack_4c = param_2[0xb];
    local_48 = param_2[0xc];
    uStack_44 = param_2[0xd];
    uStack_40 = param_2[0xe];
    uStack_3c = param_2[0xf];
    pauStack_90 = pauVar1;
    auVar5 = <core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
             ::next(&local_78,8);
    if (auVar5._0_8_ != 0) {
      lVar3 = 1;
      lVar2 = 0x18;
      do {
        if (lVar3 == local_98) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_98,lVar3,1,8,0x10);
          pauVar1 = pauStack_90;
        }
        *(longlong *)(pauVar1[-1] + lVar2 + 8) = auVar5._0_8_;
        *(longlong *)(*pauVar1 + lVar2) = auVar5._8_8_;
        lVar3 = lVar3 + 1;
        local_88 = lVar3;
        auVar5 = <core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                 ::next(&local_78);
        lVar2 = lVar2 + 0x10;
      } while (auVar5._0_8_ != 0);
    }
    local_80[2] = local_88;
    *local_80 = local_98;
    local_80[1] = (longlong)pauStack_90;
  }
  return local_80;
}


