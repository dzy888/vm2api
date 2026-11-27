// 00186dd0 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  longlong *unaff_R14;
  longlong *unaff_R15;
  
  if (*param_1 == '\x01') {
    lVar4 = 0x28;
    (*(code *)PTR_panic_00219ca8)
              (param_4,&anon_332045f7250553a28f246a459c8389f5_6_llvm_13036271498669302718);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    unaff_R14 = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar3 = (longlong *)*unaff_R14;
      param_2 = plVar3[2];
      if (*plVar3 == param_2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar3,param_2,1,1,1);
        param_2 = plVar3[2];
      }
      *(undefined1 *)(plVar3[1] + param_2) = 0x2c;
      plVar3[2] = plVar3[2] + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_R14,param_2,uVar1,uVar2);
    unaff_R15 = (longlong *)*unaff_R14;
    lVar4 = unaff_R15[2];
    unaff_RBX = param_3;
    if (*unaff_R15 != lVar4) goto LAB_00186e29;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R15,lVar4,1,1,1);
  lVar4 = unaff_R15[2];
LAB_00186e29:
  *(undefined1 *)(unaff_R15[1] + lVar4) = 0x3a;
  unaff_R15[2] = unaff_R15[2] + 1;
  <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
  serialize::
  <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
            (unaff_RBX,unaff_R14);
  return;
}


