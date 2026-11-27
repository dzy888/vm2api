// 0051bf10 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined *puVar3;
  longlong *unaff_RBX;
  longlong *unaff_R14;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_58;
  
  if (*param_1 == '\x01') {
    lVar4 = 0x28;
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_ec7f14c74815bf4c93b295cfd0665412_164_llvm_7806621557641746444);
  }
  else {
    unaff_RBX = *(longlong **)(param_1 + 8);
    plVar1 = (longlong *)*unaff_RBX;
    if (param_1[1] == '\x01') {
      lVar4 = plVar1[2];
      if (*plVar1 == lVar4) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 10;
      lVar4 = lVar4 + 1;
    }
    else {
      lVar4 = plVar1[2];
      if ((ulonglong)(*plVar1 - lVar4) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,2,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined2 *)(plVar1[1] + lVar4) = 0xa2c;
      lVar4 = lVar4 + 2;
    }
    plVar1[2] = lVar4;
    puVar3 = PTR_memcpy_00799008;
    lVar5 = unaff_RBX[3];
    if (lVar5 != 0) {
      uVar2 = unaff_RBX[2];
      if (uVar2 == 0) {
        plVar1[2] = lVar4;
      }
      else {
        do {
          if ((ulonglong)(*plVar1 - lVar4) < uVar2) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar4,uVar2,1,1);
            lVar4 = plVar1[2];
          }
          (*(code *)puVar3)();
          lVar4 = lVar4 + uVar2;
          plVar1[2] = lVar4;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    param_1[1] = '\x02';
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
              (unaff_RBX);
    unaff_R14 = (longlong *)*unaff_RBX;
    lVar4 = unaff_R14[2];
    local_58 = param_3;
    if (1 < (ulonglong)(*unaff_R14 - lVar4)) goto LAB_0051c03f;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(unaff_R14,lVar4,2,1,1);
  lVar4 = unaff_R14[2];
LAB_0051c03f:
  *(undefined2 *)(unaff_R14[1] + lVar4) = 0x203a;
  unaff_R14[2] = lVar4 + 2;
  lVar4 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::
          <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                    (local_58,unaff_RBX);
  if (lVar4 == 0) {
    *(undefined1 *)(unaff_RBX + 4) = 1;
  }
  return;
}


