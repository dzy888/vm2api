// 003ae7e0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_210;
  longlong lStack_208;
  longlong local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  char local_1e0;
  char cStack_1df;
  undefined6 uStack_1de;
  longlong local_1d8;
  undefined1 local_1d0 [208];
  longlong local_100;
  
  puVar1 = PTR_memcpy_00799008;
  local_210 = 0;
  lStack_208 = 8;
  local_200 = 0;
  local_1f8 = param_1;
  local_1f0 = param_2;
  local_1e8 = param_3;
  while (uVar5 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_1e0,&local_1f0),
        local_1e0 != '\x01') {
    if (cStack_1df != '\x01') {
      local_1f8[2] = local_200;
      *local_1f8 = local_210;
      local_1f8[1] = lStack_208;
      return local_1f8;
    }
    uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_1e0,local_1f0,
                       anon_ec7f14c74815bf4c93b295cfd0665412_88_llvm_7806621557641746444,0x13,
                       &anon_ec7f14c74815bf4c93b295cfd0665412_100_llvm_7806621557641746444,0xd);
    lVar3 = local_1d8;
    if (CONCAT62(uStack_1de,CONCAT11(cStack_1df,local_1e0)) == -1) break;
    uVar5 = (*(code *)puVar1)(uVar5,200);
    lVar4 = local_200;
    local_100 = lVar3;
    if (local_200 == local_210) {
      uVar5 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>>
              ::grow_one(&local_210,local_1d0);
    }
    (*(code *)puVar1)(uVar5,0xd8);
    local_200 = lVar4 + 1;
  }
  plVar2 = local_1f8;
  local_1f8[1] = local_1d8;
  *local_1f8 = -1;
  if (local_200 != 0) {
    lVar3 = lStack_208;
    lVar4 = local_200;
    do {
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar3);
      lVar3 = lVar3 + 0xd8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (local_210 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
  }
  return plVar2;
}


