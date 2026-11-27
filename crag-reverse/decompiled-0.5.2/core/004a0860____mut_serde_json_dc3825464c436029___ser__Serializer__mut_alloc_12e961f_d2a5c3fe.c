// 004a0860 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>

/* <craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
          (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_2;
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  uStack_30 = param_2;
  lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::
          <str,std[6c98fd8553dbae28]::collections::hash::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry>>
                    (&local_38,"families",8,param_1 + 0x30);
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((char)local_38 == '\0') {
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,bool>
                      (&local_38,"validation_requiredauth_permanentrate_limited_generic",0x13,
                       param_1 + 0x60);
    if (lVar2 != 0) {
      return lVar2;
    }
    if ((char)local_38 == '\0') {
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::
              <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                        (&local_38,"validation_url",0xe,param_1);
      if (lVar2 != 0) {
        return lVar2;
      }
      if ((char)local_38 == '\0') {
        lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::
                <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                          (&local_38,"auth_permanent_error",0x14,param_1 + 0x18);
        if (lVar2 == 0) {
          local_28 = local_38;
          uStack_24 = uStack_34;
          uStack_20 = (undefined4)uStack_30;
          uStack_1c = uStack_30._4_4_;
          <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::end(&local_28);
          return 0;
        }
        return lVar2;
      }
    }
  }
  lVar2 = (*(code *)PTR_invalid_raw_value_00799700)();
  return lVar2;
}


