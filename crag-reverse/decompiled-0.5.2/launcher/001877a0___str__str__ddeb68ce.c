// 001877a0 <str,&str>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, &str> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,&str>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  longlong *unaff_R14;
  
  if (*param_1 == '\x01') {
    ppuVar2 = &anon_332045f7250553a28f246a459c8389f5_6_llvm_13036271498669302718;
    lVar3 = 0x28;
    (*(code *)PTR_panic_00219ca8)
              (param_4,&anon_332045f7250553a28f246a459c8389f5_6_llvm_13036271498669302718);
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
      plVar1[2] = plVar1[2] + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    ppuVar2 = (undefined **)*param_4;
    param_4 = (undefined8 *)param_4[1];
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar3 = unaff_R14[2];
    if (*unaff_R14 != lVar3) goto LAB_00187805;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar3,1,1,1);
  lVar3 = unaff_R14[2];
LAB_00187805:
  *(undefined1 *)(unaff_R14[1] + lVar3) = 0x3a;
  unaff_R14[2] = unaff_R14[2] + 1;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (unaff_RBX,lVar3,ppuVar2,param_4);
  return 0;
}


