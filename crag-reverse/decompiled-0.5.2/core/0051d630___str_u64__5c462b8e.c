// 0051d630 <str,u64>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, u64> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,u64>(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *unaff_R14;
  longlong lVar4;
  ulonglong uVar5;
  longlong *local_80;
  
  if (*param_1 == '\x01') {
    lVar4 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
LAB_0051d7f6:
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar4,2,1,1);
    lVar4 = unaff_R14[2];
  }
  else {
    local_80 = *(longlong **)(param_1 + 8);
    plVar1 = (longlong *)*local_80;
    if (param_1[1] == '\x01') {
      lVar4 = plVar1[2];
      if (*plVar1 == lVar4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 10;
      lVar4 = lVar4 + 1;
    }
    else {
      lVar4 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar4) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,2,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined2 *)(plVar1[1] + lVar4) = 0xa2c;
      lVar4 = lVar4 + 2;
    }
    plVar1[2] = lVar4;
    puVar2 = PTR_memcpy_00799008;
    lVar3 = local_80[3];
    if (lVar3 != 0) {
      uVar5 = local_80[2];
      if (uVar5 == 0) {
        plVar1[2] = lVar4;
      }
      else {
        do {
          if ((ulonglong)(*plVar1 - lVar4) < uVar5) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,uVar5,1,1);
            lVar4 = plVar1[2];
          }
          (*(code *)puVar2)();
          lVar4 = lVar4 + uVar5;
          plVar1[2] = lVar4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
              (local_80);
    unaff_R14 = (longlong *)*local_80;
    lVar4 = unaff_R14[2];
    if ((ulonglong)(*unaff_R14 - lVar4) < 2) goto LAB_0051d7f6;
  }
  *(undefined2 *)(unaff_R14[1] + lVar4) = 0x203a;
  unaff_R14[2] = lVar4 + 2;
  plVar1 = (longlong *)*local_80;
  lVar3 = (*(code *)PTR_fmt_00799cd0)();
  uVar5 = 0x14 - lVar3;
  lVar4 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar4) < uVar5) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,uVar5,1,1);
    lVar4 = plVar1[2];
  }
  else if (lVar3 == 0x14) goto LAB_0051d7c1;
  (*(code *)PTR_memcpy_00799008)();
LAB_0051d7c1:
  plVar1[2] = lVar4 + uVar5;
  *(undefined1 *)(local_80 + 4) = 1;
  return 0;
}


