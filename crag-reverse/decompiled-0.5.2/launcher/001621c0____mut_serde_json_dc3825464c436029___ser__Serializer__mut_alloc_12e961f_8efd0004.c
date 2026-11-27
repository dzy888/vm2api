// 001621c0 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* WARNING: Switch with 1 destination removed at 0x0016222c */
/* <craggemini[b21da2d71f2da7a3]::license::MachineCodeInfo as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini[b21da2d71f2da7a3]::license::MachineCodeInfo_as_serde_core[48776c27239fa21f]::ser::Serialize>
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
          ::serialize_entry::<str,&str>
                    (&local_28,&anon_c9247e0b0208fc9c8c019285c3882aec_21_llvm_5798562142159169407,7,
                     param_1 + 0x60);
  if (lVar2 == 0) {
    if ((char)local_28 != '\0') {
LAB_00162223:
      local_20 = (longlong *)0x1a4f69;
      lVar2 = (*(code *)PTR_syntax_00219cb8)();
      return lVar2;
    }
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                      (&local_28,anon_c9247e0b0208fc9c8c019285c3882aec_28_llvm_5798562142159169407,
                       0xc,param_1);
    if (lVar2 == 0) {
      if ((char)local_28 != '\0') goto LAB_00162223;
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                        (&local_28,
                         &anon_c9247e0b0208fc9c8c019285c3882aec_22_llvm_5798562142159169407,5,
                         param_1 + 0x18);
      if (lVar2 == 0) {
        if ((char)local_28 != '\0') goto LAB_00162223;
        lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                          (&local_28,
                           anon_c9247e0b0208fc9c8c019285c3882aec_27_llvm_5798562142159169407,0x11,
                           param_1 + 0x30);
        if (lVar2 == 0) {
          if ((char)local_28 != '\0') goto LAB_00162223;
          lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                            (&local_28,
                             anon_c9247e0b0208fc9c8c019285c3882aec_23_llvm_5798562142159169407,0xf,
                             param_1 + 0x48);
          if (((lVar2 == 0) && (lVar2 = 0, (local_28 & 1) == 0)) && (local_28._1_1_ != '\0')) {
            <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                      (*local_20,&anon_c9247e0b0208fc9c8c019285c3882aec_58_llvm_5798562142159169407,
                       1);
            lVar2 = 0;
          }
        }
      }
    }
  }
  return lVar2;
}


