// 00069b00 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

undefined8 __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  plVar1 = (longlong *)*param_1;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x5b;
  plVar1[2] = lVar2 + 1;
  if (lVar3 != 0) {
    <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
    serialize::
    <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
              (lVar4,param_1);
    plVar1 = (longlong *)*param_1;
    if (lVar3 != 1) {
      lVar3 = lVar3 * 0x20 + -0x20;
      do {
        lVar4 = lVar4 + 0x20;
        lVar2 = plVar1[2];
        if (*plVar1 == lVar2) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
          lVar2 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar2) = 0x2c;
        plVar1[2] = lVar2 + 1;
        <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::
        <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                  (lVar4,param_1);
        plVar1 = (longlong *)*param_1;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
  }
  lVar4 = plVar1[2];
  if (*plVar1 == lVar4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,1,1,1);
    lVar4 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar4) = 0x5d;
  plVar1[2] = lVar4 + 1;
  return 0;
}


