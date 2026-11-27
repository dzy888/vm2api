// 00412f20 <craggemini_core[66f3c71560d70857]::server::McpCancelRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::McpCancelRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::McpCancelRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  longlong local_70 [4];
  ulonglong local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30 [3];
  
  local_70[0] = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_70[1] = 1;
  local_70[2] = 0;
  local_38 = 0x80;
  local_70[3] = param_2;
  local_50 = param_3;
  uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::McpCancelRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_70);
  lVar1 = *param_1;
  if ((lVar1 != -1) && (local_48 < local_50)) {
    do {
      uVar3 = local_48 + 1;
      uVar4 = (ulonglong)*(byte *)(local_70[3] + -1 + uVar3);
      if ((0x20 < uVar4) || ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0)) {
        local_30[0] = 0x16;
        lVar2 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(local_70,local_30);
        param_1[1] = lVar2;
        *param_1 = -1;
        uVar5 = extraout_XMM0_Da;
        if (lVar1 != 0) {
          uVar5 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
        }
        break;
      }
      local_48 = uVar3;
    } while (uVar3 != local_50);
  }
  if (local_70[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
  }
  return param_1;
}


