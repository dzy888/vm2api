// 00188220 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

longlong __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  plVar4 = (longlong *)*param_1;
  lVar1 = plVar4[2];
  if (*plVar4 == lVar1) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar4,lVar1,1,1,1);
    lVar1 = plVar4[2];
  }
  *(undefined1 *)(plVar4[1] + lVar1) = 0x5b;
  lVar1 = plVar4[2] + 1;
  plVar4[2] = lVar1;
  if (lVar2 == 0) {
LAB_001882d9:
    if (*plVar4 == lVar1) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar4,lVar1,1,1,1);
      lVar1 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar1) = 0x5d;
    plVar4[2] = plVar4[2] + 1;
    lVar1 = 0;
  }
  else {
    lVar1 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::
            <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                      (lVar3,param_1);
    if (lVar1 == 0) {
      lVar2 = lVar2 * 0x20;
      do {
        lVar3 = lVar3 + 0x20;
        lVar2 = lVar2 + -0x20;
        plVar4 = (longlong *)*param_1;
        if (lVar2 == 0) {
          lVar1 = plVar4[2];
          goto LAB_001882d9;
        }
        lVar1 = plVar4[2];
        if (*plVar4 == lVar1) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar4,lVar1,1,1,1);
          lVar1 = plVar4[2];
        }
        *(undefined1 *)(plVar4[1] + lVar1) = 0x2c;
        plVar4[2] = plVar4[2] + 1;
        lVar1 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                ::serialize::
                <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                          (lVar3,param_1);
      } while (lVar1 == 0);
    }
  }
  return lVar1;
}


