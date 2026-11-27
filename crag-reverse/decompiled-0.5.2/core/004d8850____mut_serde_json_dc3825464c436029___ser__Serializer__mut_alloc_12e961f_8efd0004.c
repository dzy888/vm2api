// 004d8850 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* WARNING: Switch with 1 destination removed at 0x004d88c9 */
/* <craggemini_core[66f3c71560d70857]::protocol::BridgeToolFilter as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::protocol::BridgeToolFilter_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 local_30;
  longlong *local_28;
  
  lVar3 = *param_1;
  plVar1 = (longlong *)*param_2;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  local_30 = 0x100;
  local_28 = param_2;
  lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,bool>
                    (&local_30,anon_2c3f00c6db51fc4e52b1607637b553f4_44_llvm_6489901693990513673,
                     0x10,param_1 + 3);
  if (lVar2 == 0) {
    if ((char)local_30 != '\0') {
LAB_004d88be:
      lVar3 = (*(code *)PTR_syntax_00799910)();
      return lVar3;
    }
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,bool>(&local_30,"allow_read_file",0xf,(longlong)param_1 + 0x19);
    if (lVar2 == 0) {
      if ((char)local_30 != '\0') goto LAB_004d88be;
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,bool>
                        (&local_30,"allow_web_search",0x10,(longlong)param_1 + 0x1a);
      if (lVar2 == 0) {
        if ((char)local_30 != '\0') goto LAB_004d88be;
        lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,bool>
                          (&local_30,"allow_web_fetch",0xf,(longlong)param_1 + 0x1b);
        if (lVar2 == 0) {
          if ((char)local_30 != '\0') goto LAB_004d88be;
          lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,bool>
                            (&local_30,"allow_image_gen",0xf,(longlong)param_1 + 0x1c);
          if (lVar2 == 0) {
            if ((char)local_30 != '\0') goto LAB_004d88be;
            lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                    ::serialize_entry::<str,bool>
                              (&local_30,"allow_subagents",0xf,(longlong)param_1 + 0x1d);
            if (lVar2 == 0) {
              if (lVar3 != -1) {
                if ((char)local_30 != '\0') goto LAB_004d88be;
                lVar3 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                        ::serialize_entry::
                        <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                                  (&local_30,"forced_mcp_tool",0xf,param_1);
                if (lVar3 != 0) {
                  return lVar3;
                }
              }
              lVar2 = 0;
              if (((local_30 & 1) == 0) && (local_30._1_1_ != '\0')) {
                <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(*local_28,"}",1);
                lVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}


