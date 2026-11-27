// 001874b0 <str,core[c0acaeba6ab4c2e0]::option::Option<i64>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<i64>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i64>>
          (char *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *unaff_RBX;
  longlong lVar6;
  longlong unaff_R12;
  longlong *unaff_R14;
  longlong unaff_R15;
  undefined8 uStack_60;
  
  if (*param_1 == '\x01') {
    lVar6 = 0x28;
    uStack_60 = 0x1875ec;
    (*(code *)PTR_panic_00219ca8)
              (param_4,&anon_332045f7250553a28f246a459c8389f5_6_llvm_13036271498669302718);
LAB_001875ec:
    uStack_60 = 0x187604;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar6,1,1,1);
    lVar6 = unaff_R14[2];
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_RBX;
      lVar6 = plVar1[2];
      if (*plVar1 == lVar6) {
        uStack_60 = 0x18762e;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar6,1,1,1);
        lVar6 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar6) = 0x2c;
      plVar1[2] = plVar1[2] + 1;
    }
    param_1[1] = '\x02';
    uStack_60 = 0x187509;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    unaff_R12 = *param_4;
    unaff_R15 = param_4[1];
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar6 = unaff_R14[2];
    if (*unaff_R14 == lVar6) goto LAB_001875ec;
  }
  *(undefined1 *)(unaff_R14[1] + lVar6) = 0x3a;
  unaff_R14[2] = unaff_R14[2] + 1;
  plVar1 = (longlong *)*unaff_RBX;
  if (unaff_R12 != 1) {
    lVar6 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar6) < 4) {
      uStack_60 = 0x187656;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar6,4,1,1);
      lVar6 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar6) = 0x6c6c756e;
    plVar1[2] = plVar1[2] + 4;
    return 0;
  }
  uStack_60 = 0x187548;
  uVar3 = (*(code *)PTR_fmt_0021a038)();
  uVar4 = uVar3;
  if (unaff_R15 < 0) {
    uVar4 = uVar3 - 1;
    if (0x13 < uVar4) {
      uStack_60 = 0x18769c;
      (*(code *)PTR_panic_bounds_check_0021a020)();
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    *(undefined1 *)((longlong)&uStack_60 + uVar3 + 7) = 0x2d;
  }
  uVar3 = 0x14 - uVar4;
  lVar6 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar6) < uVar3) {
    uStack_60 = 0x18767b;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar6,uVar3,1,1);
  }
  else if (uVar4 == 0x14) goto LAB_00187595;
  uStack_60 = 0x187591;
  (*(code *)PTR_memcpy_00219c60)();
  lVar6 = plVar1[2];
LAB_00187595:
  plVar1[2] = lVar6 + uVar3;
  return 0;
}


