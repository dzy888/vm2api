// 0047c8b0 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* WARNING: Switch with 1 destination removed at 0x0047c91b */
/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_serde_core[48776c27239fa21f]::ser::Serialize>
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
                    (&local_28,anon_d4d3cd51d1d91a17bb767b00236b3a9b_34_llvm_17589326713533067298,
                     0xb,param_1);
  if (lVar2 == 0) {
    if ((char)local_28 != '\0') {
LAB_0047c912:
      local_20 = (longlong *)0x71a429;
      lVar2 = (*(code *)PTR_syntax_00799910)();
      return lVar2;
    }
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::
            <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                      (&local_28,anon_d4d3cd51d1d91a17bb767b00236b3a9b_35_llvm_17589326713533067298,
                       0x16,param_1 + 0x48);
    if (lVar2 == 0) {
      if ((char)local_28 != '\0') goto LAB_0047c912;
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::
              <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_28,
                         anon_d4d3cd51d1d91a17bb767b00236b3a9b_36_llvm_17589326713533067298,10,
                         param_1 + 0x60);
      if (lVar2 == 0) {
        if ((char)local_28 != '\0') goto LAB_0047c912;
        lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<u32>>
                          (&local_28,
                           anon_d4d3cd51d1d91a17bb767b00236b3a9b_37_llvm_17589326713533067298,9,
                           param_1 + 0xa8);
        if (lVar2 == 0) {
          if ((char)local_28 != '\0') goto LAB_0047c912;
          lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::
                  <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                            (&local_28,
                             anon_d4d3cd51d1d91a17bb767b00236b3a9b_38_llvm_17589326713533067298,9,
                             param_1 + 0x78);
          if (lVar2 == 0) {
            if ((char)local_28 != '\0') goto LAB_0047c912;
            lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                    ::serialize_entry::
                    <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                              (&local_28,
                               &anon_d4d3cd51d1d91a17bb767b00236b3a9b_39_llvm_17589326713533067298,4
                               ,param_1 + 0x90);
            if ((((lVar2 == 0) &&
                 (lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                          ::serialize_field::
                          <craggemini_core[66f3c71560d70857]::subagents::SubagentStatus>
                                    (&local_28,param_1 + 0xc0), lVar2 == 0)) &&
                (lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                         ::serialize_field::<u64>(&local_28,param_1 + 0xb0), lVar2 == 0)) &&
               (lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                        ::serialize_field::<usize>(&local_28,param_1 + 0xb8), lVar2 == 0)) {
              if ((char)local_28 != '\0') goto LAB_0047c912;
              lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                      ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                (&local_28,
                                 anon_d4d3cd51d1d91a17bb767b00236b3a9b_43_llvm_17589326713533067298,
                                 10,param_1 + 0x18);
              if (lVar2 == 0) {
                if ((char)local_28 != '\0') goto LAB_0047c912;
                lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                        ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                                  (&local_28,
                                   anon_d4d3cd51d1d91a17bb767b00236b3a9b_44_llvm_17589326713533067298
                                   ,10,param_1 + 0x30);
                if (((lVar2 == 0) && (lVar2 = 0, (local_28 & 1) == 0)) && (local_28._1_1_ != '\0'))
                {
                  <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                            (*local_20,
                             &anon_d4d3cd51d1d91a17bb767b00236b3a9b_46_llvm_17589326713533067298,1);
                  lVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}


