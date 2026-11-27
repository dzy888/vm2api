// 0051b390 <alloc[12e961f32105355]::string::String>

/* WARNING: Switch with 1 destination removed at 0x0051b395 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<alloc[12e961f32105355]::string::String>
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<alloc[12e961f32105355]::string::String>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_1 != '\0') {
    uVar5 = (*(code *)PTR_syntax_00799910)(param_4,0);
    return uVar5;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar2 = (longlong *)*plVar1;
  if (param_1[1] == '\x01') {
    lVar6 = plVar2[2];
    if (*plVar2 == lVar6) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,1,1,1);
      lVar6 = plVar2[2];
    }
    *(undefined1 *)(plVar2[1] + lVar6) = 10;
    lVar6 = lVar6 + 1;
  }
  else {
    lVar6 = plVar2[2];
    if ((ulonglong)(*plVar2 - lVar6) < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,2,1,1);
      lVar6 = plVar2[2];
    }
    *(undefined2 *)(plVar2[1] + lVar6) = 0xa2c;
    lVar6 = lVar6 + 2;
  }
  plVar2[2] = lVar6;
  puVar4 = PTR_memcpy_00799008;
  lVar7 = plVar1[3];
  if (lVar7 != 0) {
    uVar3 = plVar1[2];
    if (uVar3 == 0) {
      plVar2[2] = lVar6;
    }
    else {
      do {
        if ((ulonglong)(*plVar2 - lVar6) < uVar3) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,uVar3,1,1);
          lVar6 = plVar2[2];
        }
        (*(code *)puVar4)();
        lVar6 = lVar6 + uVar3;
        plVar2[2] = lVar6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  param_1[1] = '\x02';
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
            (plVar1);
  plVar2 = (longlong *)*plVar1;
  lVar6 = plVar2[2];
  if ((ulonglong)(*plVar2 - lVar6) < 2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar6,2,1,1);
    lVar6 = plVar2[2];
  }
  *(undefined2 *)(plVar2[1] + lVar6) = 0x203a;
  plVar2[2] = lVar6 + 2;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
            (plVar1,lVar6 + 2,param_4,param_5);
  *(undefined1 *)(plVar1 + 4) = 1;
  return 0;
}


