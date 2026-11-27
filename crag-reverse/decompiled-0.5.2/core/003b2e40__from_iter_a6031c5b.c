// 003b2e40 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,
   <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::claim::{closure#1}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::claim::{closure#1}>>>
::from_iter(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_80;
  undefined4 *puStack_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_clone_00798fd0;
  do {
    while( true ) {
      plVar6 = param_2;
      if (plVar6 == param_3) {
        *param_1 = 0;
        param_1[1] = 8;
        param_1[2] = 0;
        return param_1;
      }
      if (*plVar6 != -1) break;
      local_60 = -1;
      param_2 = plVar6 + 0xb;
    }
    (*(code *)puVar3)();
    param_2 = plVar6 + 0xb;
  } while (local_60 == -1);
  local_68 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(puVar4 + 4) = local_50;
  *puVar4 = (undefined4)local_60;
  puVar4[1] = local_60._4_4_;
  puVar4[2] = uStack_58;
  puVar4[3] = uStack_54;
  local_80 = 4;
  local_70 = 1;
  lVar5 = 1;
  plVar6 = plVar6 + 0xb;
  puStack_78 = puVar4;
  while (plVar7 = plVar6, plVar7 != param_3) {
    if (*plVar7 == -1) {
      local_48 = -1;
      plVar6 = plVar7 + 0xb;
    }
    else {
      (*(code *)puVar3)();
      plVar6 = plVar7 + 0xb;
      if (local_48 != -1) {
        if (lVar5 == local_80) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>
                    (&local_80,lVar5,1,8,0x18,param_6,CONCAT44(uStack_3c,uStack_40));
          puVar4 = puStack_78;
        }
        *(undefined8 *)(puVar4 + lVar5 * 6 + 4) = local_38;
        puVar1 = puVar4 + lVar5 * 6;
        *puVar1 = (undefined4)local_48;
        puVar1[1] = local_48._4_4_;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        lVar5 = lVar5 + 1;
        plVar6 = plVar7 + 0xb;
        local_70 = lVar5;
      }
    }
  }
  local_68[2] = local_70;
  *local_68 = local_80;
  local_68[1] = (longlong)puStack_78;
  return local_68;
}


