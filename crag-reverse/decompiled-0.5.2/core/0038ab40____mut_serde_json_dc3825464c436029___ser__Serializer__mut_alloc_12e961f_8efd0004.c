// 0038ab40 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* WARNING: Switch with 1 destination removed at 0x0038abab */
/* <craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 local_28;
  longlong *local_20;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  local_28 = 0x100;
  local_20 = param_2;
  lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                    (&local_28,"call_id",7,param_1);
  if (lVar2 == 0) {
    if ((char)local_28 != '\0') {
LAB_0038aba2:
      local_20 = (longlong *)0x71a429;
      lVar2 = (*(code *)PTR_syntax_00799910)();
      return lVar2;
    }
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                      (&local_28,&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178
                       ,4,param_1 + 0x18);
    if (lVar2 == 0) {
      if ((char)local_28 != '\0') goto LAB_0038aba2;
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                        (&local_28,"safe_name",9,param_1 + 0x30);
      if (((lVar2 == 0) && (lVar2 = 0, (local_28 & 1) == 0)) && (local_28._1_1_ != '\0')) {
        <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(*local_20,"}",1);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


