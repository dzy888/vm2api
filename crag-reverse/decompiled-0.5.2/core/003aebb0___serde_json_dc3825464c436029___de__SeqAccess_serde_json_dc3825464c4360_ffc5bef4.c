// 003aebb0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_3a0;
  longlong lStack_398;
  longlong local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined1 local_378;
  char local_370;
  char cStack_36f;
  undefined6 uStack_36e;
  longlong local_368;
  undefined1 local_360 [408];
  longlong local_1c8;
  
  puVar1 = PTR_memcpy_00799008;
  local_3a0 = 0;
  lStack_398 = 8;
  local_390 = 0;
  local_388 = param_1;
  local_380 = param_2;
  local_378 = param_3;
  while (uVar5 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_370,&local_380),
        local_370 != '\x01') {
    if (cStack_36f != '\x01') {
      local_388[2] = local_390;
      *local_388 = local_3a0;
      local_388[1] = lStack_398;
      return local_388;
    }
    uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_370,local_380,
                       anon_63b06cc94833867f683611f039574387_35_llvm_6903579140370050947,0x14,
                       &anon_63b06cc94833867f683611f039574387_59_llvm_6903579140370050947,0x17);
    lVar3 = local_368;
    if (CONCAT62(uStack_36e,CONCAT11(cStack_36f,local_370)) == -1) break;
    uVar5 = (*(code *)puVar1)(uVar5,400);
    lVar4 = local_390;
    local_1c8 = lVar3;
    if (local_390 == local_3a0) {
      uVar5 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>>
              ::grow_one(&local_3a0,local_360);
    }
    (*(code *)puVar1)(uVar5,0x1a0);
    local_390 = lVar4 + 1;
  }
  plVar2 = local_388;
  local_388[1] = local_368;
  *local_388 = -1;
  if (local_390 != 0) {
    lVar3 = lStack_398;
    lVar4 = local_390;
    do {
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar3);
      lVar3 = lVar3 + 0x1a0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (local_3a0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
  }
  return plVar2;
}


