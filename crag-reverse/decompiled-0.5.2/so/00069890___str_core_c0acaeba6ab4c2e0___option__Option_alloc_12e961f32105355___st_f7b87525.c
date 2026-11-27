// 00069890 <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
          (char *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  longlong lVar2;
  longlong *unaff_R14;
  longlong *unaff_R15;
  
  if (*param_1 == '\x01') {
    lVar2 = 0x28;
    (*(code *)PTR_panic_000c3b00)
              (param_4,&anon_b97e8fe108c519eb1fdfa1db9ebc6205_2_llvm_13308062243494371806);
  }
  else {
    unaff_R14 = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_R14;
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
              (unaff_R14,param_2,param_2,param_3);
    unaff_R15 = (longlong *)*unaff_R14;
    lVar2 = unaff_R15[2];
    unaff_RBX = param_4;
    if (*unaff_R15 != lVar2) goto LAB_000698f5;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R15,lVar2,1,1,1);
  lVar2 = unaff_R15[2];
LAB_000698f5:
  *(undefined1 *)(unaff_R15[1] + lVar2) = 0x3a;
  unaff_R15[2] = lVar2 + 1;
  if (*unaff_RBX == -1) {
    plVar1 = (longlong *)*unaff_R14;
    lVar2 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar2) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar2,4,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar2) = 0x6c6c756e;
    plVar1[2] = lVar2 + 4;
  }
  else {
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_R14,lVar2 + 1,unaff_RBX[1],unaff_RBX[2]);
  }
  return 0;
}


