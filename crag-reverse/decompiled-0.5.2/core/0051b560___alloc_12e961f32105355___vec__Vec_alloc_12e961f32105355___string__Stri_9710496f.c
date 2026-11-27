// 0051b560 <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>

/* WARNING: Switch with 1 destination removed at 0x0051b565 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
          (char *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_1 != '\0') {
    uVar4 = (*(code *)PTR_syntax_00799910)(param_4,0);
    return uVar4;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (param_1[1] != '\x01') {
    plVar2 = (longlong *)*plVar1;
    lVar6 = plVar2[2];
    if (*plVar2 == lVar6) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
      lVar6 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar6) = 0x2c;
    plVar2[2] = lVar6 + 1;
  }
  param_1[1] = '\x02';
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (plVar1,param_2,param_2,param_3);
  plVar2 = (longlong *)*plVar1;
  lVar6 = plVar2[2];
  if (*plVar2 == lVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
    lVar6 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar6) = 0x3a;
  plVar2[2] = lVar6 + 1;
  plVar2 = (longlong *)*plVar1;
  lVar6 = plVar2[2];
  if (*plVar2 == lVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
    lVar6 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar6) = 0x5b;
  plVar2[2] = lVar6 + 1;
  if ((param_5 != 0) &&
     (serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (plVar1,lVar6 + 1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10)),
     param_5 != 1)) {
    lVar6 = 0;
    do {
      uVar4 = *(undefined8 *)(param_4 + 0x20 + lVar6);
      uVar3 = *(undefined8 *)(param_4 + 0x28 + lVar6);
      lVar5 = plVar2[2];
      if (*plVar2 == lVar5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar5,1,1,1);
        lVar5 = plVar2[2];
      }
      *(undefined1 *)(plVar2[1] + lVar5) = 0x2c;
      plVar2[2] = lVar5 + 1;
      serde_json[dc3825464c436029]::ser::format_escaped_str::
      <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                (plVar1,lVar5 + 1,uVar4,uVar3);
      lVar6 = lVar6 + 0x18;
    } while (param_5 * 0x18 + -0x18 != lVar6);
  }
  lVar6 = plVar2[2];
  if (*plVar2 == lVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
    lVar6 = plVar2[2];
  }
  *(undefined1 *)(plVar2[1] + lVar6) = 0x5d;
  plVar2[2] = lVar6 + 1;
  return 0;
}


