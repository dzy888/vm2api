// 0051e9e0 <str,str>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, str> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,str>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          )

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong lVar2;
  longlong *unaff_R12;
  undefined8 unaff_R14;
  longlong *unaff_R15;
  
  if (*param_1 == '\x01') {
    lVar2 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
  }
  else {
    unaff_R15 = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_R15;
      lVar2 = plVar1[2];
      if (*plVar1 == lVar2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,1,1,1);
        lVar2 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar2) = 0x2c;
      plVar1[2] = lVar2 + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_R15,param_2,param_2,param_3);
    unaff_R12 = (longlong *)*unaff_R15;
    lVar2 = unaff_R12[2];
    unaff_RBX = param_5;
    unaff_R14 = param_4;
    if (*unaff_R12 != lVar2) goto LAB_0051ea47;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R12,lVar2,1,1,1);
  lVar2 = unaff_R12[2];
LAB_0051ea47:
  *(undefined1 *)(unaff_R12[1] + lVar2) = 0x3a;
  unaff_R12[2] = lVar2 + 1;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (unaff_R15,lVar2 + 1,unaff_R14,unaff_RBX);
  return 0;
}


