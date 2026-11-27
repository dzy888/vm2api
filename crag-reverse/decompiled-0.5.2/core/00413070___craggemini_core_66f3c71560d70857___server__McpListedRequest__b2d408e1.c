// 00413070 <craggemini_core[66f3c71560d70857]::server::McpListedRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::McpListedRequest>
    */

undefined8 __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::McpListedRequest>(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_68 [4];
  ulonglong local_48;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_28 [3];
  
  local_68[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_68[1] = 1;
  local_68[2] = 0;
  local_30 = 0x80;
  local_68[3] = param_1;
  local_48 = param_2;
  uVar1 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::McpListedRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (local_68);
  uVar2 = 1;
  uVar4 = extraout_XMM0_Da;
  if ((uVar1 & 1) == 0) {
    if (local_40 < local_48) {
      do {
        uVar1 = local_40 + 1;
        uVar3 = (ulonglong)*(byte *)(local_68[3] + -1 + uVar1);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_28[0] = 0x16;
          uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_68,local_28);
          goto LAB_00413109;
        }
        local_40 = uVar1;
      } while (uVar1 != local_48);
    }
    uVar2 = 0;
  }
LAB_00413109:
  if (local_68[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return uVar2;
}


