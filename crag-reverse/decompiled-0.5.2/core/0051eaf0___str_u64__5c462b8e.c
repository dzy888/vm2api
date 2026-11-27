// 0051eaf0 <str,u64>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, u64>
   <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, usize> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,u64>(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  longlong *unaff_R14;
  ulonglong uVar4;
  
  if (*param_1 == '\x01') {
    lVar3 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
LAB_0051ebd9:
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar3,1,1,1);
    lVar3 = unaff_R14[2];
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_RBX;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x2c;
      plVar1[2] = lVar3 + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar3 = unaff_R14[2];
    if (*unaff_R14 == lVar3) goto LAB_0051ebd9;
  }
  *(undefined1 *)(unaff_R14[1] + lVar3) = 0x3a;
  unaff_R14[2] = lVar3 + 1;
  plVar1 = (longlong *)*unaff_RBX;
  lVar2 = (*(code *)PTR_fmt_00799cd0)();
  uVar4 = 0x14 - lVar2;
  lVar3 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar3) < uVar4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,uVar4,1,1);
    lVar3 = plVar1[2];
  }
  else if (lVar2 == 0x14) goto LAB_0051eba8;
  (*(code *)PTR_memcpy_00799008)();
LAB_0051eba8:
  plVar1[2] = lVar3 + uVar4;
  return 0;
}


