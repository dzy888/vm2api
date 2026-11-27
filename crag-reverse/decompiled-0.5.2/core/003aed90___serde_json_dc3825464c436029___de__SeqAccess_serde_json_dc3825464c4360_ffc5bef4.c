// 003aed90 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  char local_1c0;
  char cStack_1bf;
  undefined6 uStack_1be;
  longlong local_1b8;
  undefined1 local_1b0 [192];
  longlong local_f0;
  
  puVar1 = PTR_memcpy_00799008;
  local_1f0 = 0;
  lStack_1e8 = 8;
  local_1e0 = 0;
  local_1d8 = param_1;
  local_1d0 = param_2;
  local_1c8 = param_3;
  while (uVar5 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_1c0,&local_1d0),
        local_1c0 != '\x01') {
    if (cStack_1bf != '\x01') {
      local_1d8[2] = local_1e0;
      *local_1d8 = local_1f0;
      local_1d8[1] = lStack_1e8;
      return local_1d8;
    }
    uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_1c0,local_1d0,
                       anon_d4d3cd51d1d91a17bb767b00236b3a9b_33_llvm_17589326713533067298,0xe,
                       &anon_d4d3cd51d1d91a17bb767b00236b3a9b_45_llvm_17589326713533067298,0xb);
    lVar3 = local_1b8;
    if (CONCAT62(uStack_1be,CONCAT11(cStack_1bf,local_1c0)) == -1) break;
    uVar5 = (*(code *)puVar1)(uVar5,0xb8);
    lVar4 = local_1e0;
    local_f0 = lVar3;
    if (local_1e0 == local_1f0) {
      uVar5 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
              ::grow_one(&local_1f0,local_1b0);
    }
    (*(code *)puVar1)(uVar5,200);
    local_1e0 = lVar4 + 1;
  }
  plVar2 = local_1d8;
  local_1d8[1] = local_1b8;
  *local_1d8 = -1;
  if (local_1e0 != 0) {
    lVar3 = lStack_1e8;
    lVar4 = local_1e0;
    do {
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar3);
      lVar3 = lVar3 + 200;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (local_1f0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
  }
  return plVar2;
}


