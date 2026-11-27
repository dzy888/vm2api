// 0051e100 <str,core[c0acaeba6ab4c2e0]::option::Option<i32>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<i32>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i32>>
          (char *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *unaff_RBX;
  int unaff_EBP;
  longlong lVar5;
  longlong *unaff_R14;
  ulonglong uVar6;
  int unaff_R15D;
  undefined1 auStack_58 [40];
  
  if (*param_1 == '\x01') {
    lVar5 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
LAB_0051e244:
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar5,1,1,1);
    lVar5 = unaff_R14[2];
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_RBX;
      lVar5 = plVar1[2];
      if (*plVar1 == lVar5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,1,1,1);
        lVar5 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar5) = 0x2c;
      plVar1[2] = lVar5 + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    unaff_R15D = *param_4;
    unaff_EBP = param_4[1];
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar5 = unaff_R14[2];
    if (*unaff_R14 == lVar5) goto LAB_0051e244;
  }
  *(undefined1 *)(unaff_R14[1] + lVar5) = 0x3a;
  unaff_R14[2] = lVar5 + 1;
  plVar1 = (longlong *)*unaff_RBX;
  if (unaff_R15D != 1) {
    lVar5 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar5) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,4,1,1);
      lVar5 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar5) = 0x6c6c756e;
    plVar1[2] = lVar5 + 4;
    return 0;
  }
  uVar3 = (*(code *)PTR_fmt_00799cc8)();
  if (unaff_EBP < 0) {
    if (10 < uVar3) {
      (*(code *)PTR_panic_bounds_check_00799520)();
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    auStack_58[uVar3] = 0x2d;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  uVar6 = 0xb - uVar3;
  lVar5 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar5) < uVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,uVar6,1,1);
    lVar5 = plVar1[2];
  }
  else if (uVar3 == 0xb) goto LAB_0051e213;
  (*(code *)PTR_memcpy_00799008)();
LAB_0051e213:
  plVar1[2] = lVar5 + uVar6;
  return 0;
}


