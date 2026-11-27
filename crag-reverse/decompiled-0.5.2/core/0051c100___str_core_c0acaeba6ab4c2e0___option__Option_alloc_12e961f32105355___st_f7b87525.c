// 0051c100 <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<str,
   core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
          (char *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  longlong *unaff_R14;
  longlong lVar5;
  longlong *local_58;
  
  if (*param_1 == '\x01') {
    lVar5 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    plVar1 = (longlong *)*unaff_RBX;
    if (param_1[1] == '\x01') {
      lVar5 = plVar1[2];
      if (*plVar1 == lVar5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,1,1,1);
        lVar5 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar5) = 10;
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar5) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,2,1,1);
        lVar5 = plVar1[2];
      }
      *(undefined2 *)(plVar1[1] + lVar5) = 0xa2c;
      lVar5 = lVar5 + 2;
    }
    plVar1[2] = lVar5;
    puVar3 = PTR_memcpy_00799008;
    lVar4 = unaff_RBX[3];
    if (lVar4 != 0) {
      uVar2 = unaff_RBX[2];
      if (uVar2 == 0) {
        plVar1[2] = lVar5;
      }
      else {
        do {
          if ((ulonglong)(*plVar1 - lVar5) < uVar2) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,uVar2,1,1);
            lVar5 = plVar1[2];
          }
          (*(code *)puVar3)();
          lVar5 = lVar5 + uVar2;
          plVar1[2] = lVar5;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
              (unaff_RBX);
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar5 = unaff_R14[2];
    local_58 = param_4;
    if (1 < (ulonglong)(*unaff_R14 - lVar5)) goto LAB_0051c233;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar5,2,1,1);
  lVar5 = unaff_R14[2];
LAB_0051c233:
  *(undefined2 *)(unaff_R14[1] + lVar5) = 0x203a;
  unaff_R14[2] = lVar5 + 2;
  if (*local_58 == -1) {
    plVar1 = (longlong *)*unaff_RBX;
    lVar5 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar5) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar5,4,1,1);
      lVar5 = plVar1[2];
    }
    *(undefined4 *)(plVar1[1] + lVar5) = 0x6c6c756e;
    plVar1[2] = lVar5 + 4;
  }
  else {
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
              (unaff_RBX,lVar5 + 2,local_58[1],local_58[2]);
  }
  *(undefined1 *)(unaff_RBX + 4) = 1;
  return 0;
}


