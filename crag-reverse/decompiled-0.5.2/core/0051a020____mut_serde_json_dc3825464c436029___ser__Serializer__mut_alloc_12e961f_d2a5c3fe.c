// 0051a020 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>

/* WARNING: Switch with 1 destination removed at 0x0051a1f4 */
/* <craggemini_core[66f3c71560d70857]::mcp_stdio::McpBridgeFileConfig as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::PrettyFormatter>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::mcp_stdio::McpBridgeFileConfig_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
          (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char local_70 [8];
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = *(longlong *)(param_1 + 0x48);
  plVar1 = (longlong *)*param_2;
  lVar6 = param_2[3] + 1;
  param_2[3] = lVar6;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar7 = plVar1[2];
  local_60 = param_1;
  if (*plVar1 == lVar7) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,1,1,1);
    lVar7 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar7) = 0x7b;
  lVar7 = lVar7 + 1;
  plVar1[2] = lVar7;
  local_70[0] = '\0';
  local_68 = param_2;
  local_58 = param_2;
  if (*plVar1 == lVar7) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,1,1,1);
    lVar7 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar7) = 10;
  lVar7 = lVar7 + 1;
  plVar1[2] = lVar7;
  puVar4 = PTR_memcpy_00799008;
  if (lVar6 != 0) {
    uVar2 = local_58[2];
    if (uVar2 == 0) {
      plVar1[2] = lVar7;
    }
    else {
      do {
        if ((ulonglong)(*plVar1 - lVar7) < uVar2) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,uVar2,1,1);
          lVar7 = plVar1[2];
        }
        (*(code *)puVar4)();
        lVar7 = lVar7 + uVar2;
        plVar1[2] = lVar7;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  plVar5 = local_58;
  local_70[1] = 2;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
            (local_58);
  plVar1 = (longlong *)*plVar5;
  lVar7 = plVar1[2];
  if ((ulonglong)(*plVar1 - lVar7) < 2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(plVar1,lVar7,2,1,1);
    lVar7 = plVar1[2];
  }
  lVar6 = local_60;
  *(undefined2 *)(plVar1[1] + lVar7) = 0x203a;
  plVar1[2] = lVar7 + 2;
  uVar3 = *(undefined8 *)(local_60 + 8);
  (*(code *)PTR_from_utf8_00799468)();
  if (local_48 == 1) {
    lVar7 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
            ::custom::<&str>("path contains invalid UTF-8 characters",0x26);
    return lVar7;
  }
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>
            (plVar5,uVar3,local_40,local_38);
  *(undefined1 *)(plVar5 + 4) = 1;
  lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
          ::serialize_field::<alloc[12e961f32105355]::string::String>
                    (local_70,anon_ec7f14c74815bf4c93b295cfd0665412_160_llvm_7806621557641746444,0xe
                     ,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
  if ((lVar7 == 0) &&
     (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
              ::serialize_field::<alloc[12e961f32105355]::string::String>
                        (local_70,anon_ec7f14c74815bf4c93b295cfd0665412_161_llvm_7806621557641746444
                         ,0xb,*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x40)),
     lVar7 == 0)) {
    if (local_50 != -1) {
      if (local_70[0] != '\0') {
        lVar7 = (*(code *)PTR_syntax_00799910)();
        return lVar7;
      }
      <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
      ::serialize_entry::
      <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                (local_70,&anon_ec7f14c74815bf4c93b295cfd0665412_162_llvm_7806621557641746444,7,
                 lVar6 + 0x48);
    }
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
    ::end(local_70);
    lVar7 = 0;
  }
  return lVar7;
}


