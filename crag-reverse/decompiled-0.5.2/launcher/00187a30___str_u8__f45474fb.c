// 00187a30 <str,u8>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str, u8> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::<str,u8>(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong *unaff_RBX;
  byte unaff_BPL;
  longlong lVar3;
  longlong *unaff_R14;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uStack_60;
  undefined2 local_57;
  
  if (*param_1 == '\x01') {
    lVar3 = 0x28;
    uStack_60 = 0x187b57;
    (*(code *)PTR_panic_00219ca8)
              (param_4,&anon_332045f7250553a28f246a459c8389f5_6_llvm_13036271498669302718);
LAB_00187b57:
    uStack_60 = 0x187b6f;
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
        uStack_60 = 0x187bbb;
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x2c;
      plVar1[2] = plVar1[2] + 1;
    }
    param_1[1] = '\x02';
    uStack_60 = 0x187a89;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    unaff_BPL = *param_4;
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar3 = unaff_R14[2];
    if (*unaff_R14 == lVar3) goto LAB_00187b57;
  }
  *(undefined1 *)(unaff_R14[1] + lVar3) = 0x3a;
  unaff_R14[2] = unaff_R14[2] + 1;
  uVar5 = 3;
  bVar2 = unaff_BPL;
  if (9 < unaff_BPL) {
    bVar2 = unaff_BPL / 100;
    local_57 = *(undefined2 *)(PTR_DECIMAL_PAIRS_0021a140 + (ulonglong)((uint)unaff_BPL % 100) * 2);
    uVar5 = 1;
  }
  plVar1 = (longlong *)*unaff_RBX;
  if ((unaff_BPL == 0) || (bVar2 != 0)) {
    *(byte *)((longlong)&uStack_60 + uVar5 + 7) = bVar2 + 0x30;
    uVar5 = uVar5 - 1;
  }
  uVar4 = uVar5 ^ 3;
  lVar3 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar3) < uVar4) {
    uStack_60 = 0x187b91;
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar3,uVar4,1,1);
  }
  else if ((int)uVar5 == 3) goto LAB_00187b26;
  uStack_60 = 0x187b22;
  (*(code *)PTR_memcpy_00219c60)();
  lVar3 = plVar1[2];
LAB_00187b26:
  plVar1[2] = lVar3 + uVar4;
  return 0;
}


