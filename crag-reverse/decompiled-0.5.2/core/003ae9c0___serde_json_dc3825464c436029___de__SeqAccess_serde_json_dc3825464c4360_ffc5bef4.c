// 003ae9c0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_560;
  longlong lStack_558;
  longlong local_550;
  longlong *local_548;
  undefined8 local_540;
  undefined1 local_538;
  char local_530;
  char cStack_52f;
  undefined6 uStack_52e;
  longlong local_528;
  undefined1 local_520 [632];
  longlong local_2a8;
  
  puVar1 = PTR_memcpy_00799008;
  local_560 = 0;
  lStack_558 = 8;
  local_550 = 0;
  local_548 = param_1;
  local_540 = param_2;
  local_538 = param_3;
  while (uVar5 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_530,&local_540),
        local_530 != '\x01') {
    if (cStack_52f != '\x01') {
      local_548[2] = local_550;
      *local_548 = local_560;
      local_548[1] = lStack_558;
      return local_548;
    }
    uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_530,local_540,
                       anon_ec7f14c74815bf4c93b295cfd0665412_52_llvm_7806621557641746444,0x14,
                       &anon_ec7f14c74815bf4c93b295cfd0665412_76_llvm_7806621557641746444,0x19);
    lVar3 = local_528;
    if (CONCAT62(uStack_52e,CONCAT11(cStack_52f,local_530)) == -1) break;
    uVar5 = (*(code *)puVar1)(uVar5,0x270);
    lVar4 = local_550;
    local_2a8 = lVar3;
    if (local_550 == local_560) {
      uVar5 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>>
              ::grow_one(&local_560,local_520);
    }
    (*(code *)puVar1)(uVar5,0x280);
    local_550 = lVar4 + 1;
  }
  plVar2 = local_548;
  local_548[1] = local_528;
  *local_548 = -1;
  if (local_550 != 0) {
    lVar3 = lStack_558;
    lVar4 = local_550;
    do {
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>(lVar3);
      lVar3 = lVar3 + 0x280;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (local_560 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
  }
  return plVar2;
}


