// 004a0740 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>

/* WARNING: Switch with 1 destination removed at 0x004a07b3 */
/* <craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
          (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 local_28 [4];
  longlong *local_20;
  
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
  local_28[0] = 0x100;
  local_20 = param_2;
  lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,u64>(local_28,"until_epoch_ms",0xe,param_1);
  if (lVar2 == 0) {
    if ((char)local_28[0] != '\0') {
LAB_004a07aa:
      local_20 = (longlong *)0x71a429;
      lVar2 = (*(code *)PTR_syntax_00799910)();
      return lVar2;
    }
    lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u32>(local_28,"consecutive",0xb,param_1 + 0x10);
    if (lVar2 == 0) {
      if ((char)local_28[0] != '\0') goto LAB_004a07aa;
      lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,craggemini_core[66f3c71560d70857]::pool::CooldownKind>
                        (local_28,"kind",4,param_1 + 0x14);
      if (lVar2 == 0) {
        if ((char)local_28[0] != '\0') goto LAB_004a07aa;
        lVar2 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                ::serialize_entry::<str,u64>(local_28,"last_updated_ms",0xf,param_1 + 8);
        if (lVar2 == 0) {
          <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::end(local_28);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}


