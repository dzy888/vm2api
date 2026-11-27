// 003aef70 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::license::host::RosterEntry>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::license::host::RosterEntry>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  char local_68;
  char cStack_67;
  undefined6 uStack_66;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_98 = 0;
  lStack_90 = 8;
  local_88 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  while (uVar8 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_68,&local_78),
        local_68 != '\x01') {
    if (cStack_67 != '\x01') {
      local_80[2] = local_88;
      *local_80 = local_98;
      local_80[1] = lStack_90;
      return local_80;
    }
    uVar8 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::license::host::RosterEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_68,local_78,
                       anon_30b5cef53457a6ea696e8d7e9f6273d6_30_llvm_8436237269785592069,0xb,
                       &anon_30b5cef53457a6ea696e8d7e9f6273d6_33_llvm_8436237269785592069,2);
    lVar4 = local_60;
    lVar7 = local_88;
    lVar6 = CONCAT62(uStack_66,CONCAT11(cStack_67,local_68));
    if (lVar6 == -1) break;
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (local_88 == local_98) {
      <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::string::String,usize)>>::
      grow_one(&local_98);
    }
    lVar5 = lVar7 * 0x20;
    *(longlong *)(lStack_90 + lVar5) = lVar6;
    *(longlong *)(lStack_90 + 8 + lVar5) = lVar4;
    puVar1 = (undefined4 *)(lStack_90 + 0x10 + lVar5);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    local_88 = lVar7 + 1;
  }
  plVar3 = local_80;
  local_80[1] = local_60;
  *local_80 = -1;
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_88 != 0) {
    lVar7 = lStack_90 + 8;
    lVar6 = local_88;
    do {
      if (*(longlong *)(lVar7 + -8) != 0) {
        uVar8 = (*(code *)puVar2)(uVar8,1);
      }
      lVar7 = lVar7 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_98 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,8);
  }
  return plVar3;
}


