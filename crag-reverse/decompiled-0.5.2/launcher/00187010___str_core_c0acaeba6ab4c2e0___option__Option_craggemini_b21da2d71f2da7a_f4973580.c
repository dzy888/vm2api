// 00187010 <str,core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<str,core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  undefined1 *unaff_R14;
  longlong *unaff_R15;
  
  if (*param_1 == '\x01') {
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
    unaff_R15 = (longlong *)*unaff_RBX;
    lVar3 = unaff_R15[2];
    unaff_R14 = param_4;
    if (*unaff_R15 != lVar3) goto LAB_00187076;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R15,lVar3,1,1,1);
  lVar3 = unaff_R15[2];
LAB_00187076:
  *(undefined1 *)(unaff_R15[1] + lVar3) = 0x3a;
  unaff_R15[2] = unaff_R15[2] + 1;
  switch(*unaff_R14) {
  case 0:
    puVar2 = &anon_c9247e0b0208fc9c8c019285c3882aec_15_llvm_5798562142159169407;
    break;
  case 1:
    puVar2 = &anon_c9247e0b0208fc9c8c019285c3882aec_16_llvm_5798562142159169407;
    break;
  case 2:
    puVar2 = &anon_c9247e0b0208fc9c8c019285c3882aec_17_llvm_5798562142159169407;
    break;
  case 3:
    puVar2 = &anon_c9247e0b0208fc9c8c019285c3882aec_18_llvm_5798562142159169407;
    break;
  default:
    plVar1 = (longlong *)*unaff_RBX;
    lVar3 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar3) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,4,1,1);
      lVar3 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar3) = 0x6c6c756e;
    plVar1[2] = plVar1[2] + 4;
    return 0;
  }
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (unaff_RBX,lVar3,puVar2,2);
  return 0;
}


