// 0051ef70 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

longlong __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  plVar7 = (longlong *)*param_1;
  lVar5 = param_1[3];
  param_1[3] = lVar5 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar4 = plVar7[2];
  if (*plVar7 == lVar4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar4,1,1,1);
    lVar4 = plVar7[2];
  }
  *(undefined1 *)(plVar7[1] + lVar4) = 0x5b;
  lVar4 = lVar4 + 1;
  plVar7[2] = lVar4;
  if (lVar3 == 0) {
    param_1[3] = lVar5;
  }
  else {
    lVar3 = lVar3 * 0x20 + lVar6;
    bVar2 = true;
    do {
      plVar7 = (longlong *)*param_1;
      if (bVar2) {
        lVar5 = plVar7[2];
        if (*plVar7 == lVar5) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar5,1,1,1);
          lVar5 = plVar7[2];
        }
        *(undefined1 *)(plVar7[1] + lVar5) = 10;
        lVar5 = lVar5 + 1;
        plVar7[2] = lVar5;
        lVar4 = param_1[3];
      }
      else {
        lVar5 = plVar7[2];
        if ((ulonglong)(*plVar7 - lVar5) < 2) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar5,2,1,1);
          lVar5 = plVar7[2];
        }
        *(undefined2 *)(plVar7[1] + lVar5) = 0xa2c;
        lVar5 = lVar5 + 2;
        plVar7[2] = lVar5;
        lVar4 = param_1[3];
      }
      if (lVar4 != 0) {
        uVar1 = param_1[2];
        if (uVar1 == 0) {
          plVar7[2] = lVar5;
        }
        else {
          do {
            if ((ulonglong)(*plVar7 - lVar5) < uVar1) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar5,uVar1,1,1);
              lVar5 = plVar7[2];
            }
            (*(code *)PTR_memcpy_00799008)();
            lVar5 = lVar5 + uVar1;
            plVar7[2] = lVar5;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      lVar5 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
              ::serialize::
              <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                        (lVar6,param_1);
      if (lVar5 != 0) {
        return lVar5;
      }
      lVar6 = lVar6 + 0x20;
      *(undefined1 *)(param_1 + 4) = 1;
      bVar2 = false;
    } while (lVar6 != lVar3);
    plVar7 = (longlong *)*param_1;
    lVar6 = param_1[3] + -1;
    param_1[3] = lVar6;
    lVar4 = plVar7[2];
    if (*plVar7 == lVar4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar4,1,1,1);
      lVar4 = plVar7[2];
    }
    *(undefined1 *)(plVar7[1] + lVar4) = 10;
    lVar4 = lVar4 + 1;
    plVar7[2] = lVar4;
    if (lVar6 != 0) {
      uVar1 = param_1[2];
      if (uVar1 == 0) {
        plVar7[2] = lVar4;
      }
      else {
        do {
          if ((ulonglong)(*plVar7 - lVar4) < uVar1) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar4,uVar1,1,1);
            lVar4 = plVar7[2];
          }
          (*(code *)PTR_memcpy_00799008)();
          lVar4 = lVar4 + uVar1;
          plVar7[2] = lVar4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
  }
  if (*plVar7 == lVar4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar7,lVar4,1,1,1);
    lVar4 = plVar7[2];
  }
  *(undefined1 *)(plVar7[1] + lVar4) = 0x5d;
  plVar7[2] = lVar4 + 1;
  return 0;
}


