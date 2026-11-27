// 00162330 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* <craggemini[b21da2d71f2da7a3]::license::LicenseStatus as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 local_88;
  longlong *local_80;
  char local_71;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar6 = param_1[0x14];
  lVar1 = param_1[0x16];
  lVar2 = param_1[0x18];
  lVar4 = param_1[0xf];
  local_38 = param_1[9];
  local_40 = param_1[0xc];
  local_71 = *(char *)((longlong)param_1 + 0xf1);
  local_48 = *param_1;
  local_50 = param_1[2];
  local_58 = param_1[4];
  local_60 = param_1[0x1a];
  local_68 = param_1[0x1c];
  plVar3 = (longlong *)*param_2;
  lVar5 = plVar3[2];
  if (*plVar3 == lVar5) {
    local_70 = param_2;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar3,lVar5,1,1,1);
    lVar5 = plVar3[2];
    param_2 = local_70;
  }
  *(undefined1 *)(plVar3[1] + lVar5) = 0x7b;
  plVar3[2] = lVar5 + 1;
  local_88 = 0x100;
  local_80 = param_2;
  lVar5 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,&str>
                    (&local_88,&anon_c9247e0b0208fc9c8c019285c3882aec_21_llvm_5798562142159169407,7,
                     param_1 + 0x10);
  if (lVar5 != 0) {
    return lVar5;
  }
  if ((char)local_88 == '\0') {
    lVar5 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_88,&DAT_00117800,6,param_1 + 0x12);
    if (lVar5 != 0) {
      return lVar5;
    }
    if ((char)local_88 == '\0') {
      lVar5 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,bool>(&local_88,&DAT_00117806,5,param_1 + 0x1e);
      if (lVar5 != 0) {
        return lVar5;
      }
      if ((char)local_88 == '\0') {
        lVar5 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                          (&local_88,
                           &anon_c9247e0b0208fc9c8c019285c3882aec_22_llvm_5798562142159169407,5,
                           param_1 + 6);
        if (lVar5 != 0) {
          return lVar5;
        }
        if (lVar6 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_88,&DAT_0011780b,7,param_1 + 0x14);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (lVar1 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_88,"kind",4,param_1 + 0x16);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (lVar2 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_88,&DAT_00117812,5,param_1 + 0x18);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (((int)lVar4 != 0) &&
           (lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u32>>
                              (&local_88,param_1 + 0xf), lVar6 != 0)) {
          return lVar6;
        }
        if (local_38 != -1) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::
                  <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                            (&local_88,
                             anon_c9247e0b0208fc9c8c019285c3882aec_36_llvm_5798562142159169407,10,
                             param_1 + 9);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (local_40 != -1) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::
                  <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                            (&local_88,
                             anon_c9247e0b0208fc9c8c019285c3882aec_41_llvm_5798562142159169407,0xe,
                             param_1 + 0xc);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if ((local_71 != -1) &&
           (lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                    ::serialize_field::
                    <core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>
                              (&local_88,(longlong)param_1 + 0xf1), lVar6 != 0)) {
          return lVar6;
        }
        if (local_48 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i64>>
                            (&local_88,
                             anon_c9247e0b0208fc9c8c019285c3882aec_37_llvm_5798562142159169407,9,
                             param_1);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (local_50 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i64>>
                            (&local_88,
                             anon_c9247e0b0208fc9c8c019285c3882aec_38_llvm_5798562142159169407,10,
                             param_1 + 2);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (local_58 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i64>>
                            (&local_88,
                             anon_c9247e0b0208fc9c8c019285c3882aec_39_llvm_5798562142159169407,10,
                             param_1 + 4);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (local_60 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_88,"code",4,param_1 + 0x1a);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if (local_68 != 0) {
          if ((char)local_88 != '\0') goto LAB_001623f9;
          lVar6 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                  ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                            (&local_88,&DAT_00117817,7,param_1 + 0x1c);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
        if ((local_88 & 1) != 0) {
          return 0;
        }
        if (local_88._1_1_ == '\0') {
          return 0;
        }
        <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
                  (*local_80,&anon_c9247e0b0208fc9c8c019285c3882aec_58_llvm_5798562142159169407,1);
        return 0;
      }
    }
  }
LAB_001623f9:
  lVar6 = (*(code *)PTR_invalid_raw_value_00219d20)();
  return lVar6;
}


