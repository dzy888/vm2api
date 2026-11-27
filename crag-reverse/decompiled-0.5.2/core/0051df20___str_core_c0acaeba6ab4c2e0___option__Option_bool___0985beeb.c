// 0051df20 <str,core[c0acaeba6ab4c2e0]::option::Option<bool>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<bool>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<bool>>
          (char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  byte unaff_BPL;
  longlong lVar3;
  longlong *unaff_R14;
  
  if (*param_1 == '\x01') {
    lVar3 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
LAB_0051e047:
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
    unaff_BPL = *param_4;
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar3 = unaff_R14[2];
    if (*unaff_R14 == lVar3) goto LAB_0051e047;
  }
  *(undefined1 *)(unaff_R14[1] + lVar3) = 0x3a;
  unaff_R14[2] = lVar3 + 1;
  plVar1 = (longlong *)*unaff_RBX;
  if (unaff_BPL == 2) {
    lVar3 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar3) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,4,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar3) = 0x6c6c756e;
  }
  else {
    if ((unaff_BPL & 1) == 0) {
      lVar3 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar3) < 5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,5,1,1);
        lVar3 = plVar1[2];
      }
      lVar2 = plVar1[1];
      *(undefined1 *)(lVar2 + 4 + lVar3) = 0x65;
      *(undefined4 *)(lVar2 + lVar3) = 0x736c6166;
      lVar3 = lVar3 + 5;
      goto LAB_0051e019;
    }
    lVar3 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar3) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,4,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar3) = 0x65757274;
  }
  lVar3 = lVar3 + 4;
LAB_0051e019:
  plVar1[2] = lVar3;
  return 0;
}


