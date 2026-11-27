// 0051dc50 <str,core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<str,core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
          (char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  char *unaff_R14;
  longlong *unaff_R15;
  
  if (*param_1 == '\x01') {
    lVar4 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      plVar1 = (longlong *)*unaff_RBX;
      lVar4 = plVar1[2];
      if (*plVar1 == lVar4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x2c;
      plVar1[2] = lVar4 + 1;
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (unaff_RBX,param_2,param_2,param_3);
    unaff_R15 = (longlong *)*unaff_RBX;
    lVar4 = unaff_R15[2];
    unaff_R14 = param_4;
    if (*unaff_R15 != lVar4) goto LAB_0051dcb9;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R15,lVar4,1,1,1);
  lVar4 = unaff_R15[2];
LAB_0051dcb9:
  *(undefined1 *)(unaff_R15[1] + lVar4) = 0x3a;
  unaff_R15[2] = lVar4 + 1;
  if (*unaff_R14 == '\0') {
    pcVar3 = "official_full";
    uVar2 = 0xd;
  }
  else {
    if (*unaff_R14 == '\x02') {
      plVar1 = (longlong *)*unaff_RBX;
      lVar4 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar4) < 4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,4,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined4 *)(plVar1[1] + lVar4) = 0x6c6c756e;
      plVar1[2] = lVar4 + 4;
      return 0;
    }
    pcVar3 = (char *)&anon_2c3f00c6db51fc4e52b1607637b553f4_25_llvm_6489901693990513673;
    uVar2 = 4;
  }
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (unaff_RBX,lVar4 + 1,pcVar3,uVar2);
  return 0;
}


