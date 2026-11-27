// 001930f0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_78 = 0;
  lStack_70 = 8;
  local_68 = 0;
  local_60 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  while( true ) {
    uVar6 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_58,&local_40);
    if ((char)local_58 == '\x01') break;
    if (local_58._1_1_ != '\x01') {
      local_60[2] = local_68;
      *local_60 = local_78;
      local_60[1] = lStack_70;
      return local_60;
    }
    uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini[b21da2d71f2da7a3]::license::host::HostGrant_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_58,local_40,"HostGrant",9,
                       &anon_1b24917ebd097f132e7c2fe0e448a3c0_24_llvm_6508052046112256635,2);
    uVar4 = local_48;
    lVar3 = local_50;
    lVar1 = local_68;
    if (local_58 == 1) break;
    if (local_68 == local_78) {
      <alloc[12e961f32105355]::raw_vec::RawVec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>>
      ::grow_one(&local_78);
    }
    lVar5 = lVar1 * 0x10;
    *(longlong *)(lStack_70 + lVar5) = lVar3;
    *(undefined4 *)(lStack_70 + 8 + lVar5) = uVar4;
    local_68 = lVar1 + 1;
  }
  plVar2 = local_60;
  local_60[1] = local_50;
  *local_60 = -1;
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar6,8);
  }
  return plVar2;
}


