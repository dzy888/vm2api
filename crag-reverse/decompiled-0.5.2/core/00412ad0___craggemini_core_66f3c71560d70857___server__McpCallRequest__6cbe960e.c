// 00412ad0 <craggemini_core[66f3c71560d70857]::server::McpCallRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::McpCallRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::McpCallRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_b8 [4];
  ulonglong local_98;
  ulonglong local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28 [3];
  
  local_b8[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b8[1] = 1;
  local_b8[2] = 0;
  local_80 = 0x80;
  local_b8[3] = param_2;
  local_98 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::McpCallRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_b8);
  if (*param_1 != -1) {
    local_38 = param_1[8];
    lStack_30 = param_1[9];
    uVar4 = (undefined4)*param_1;
    uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_70 = (undefined4)param_1[1];
    uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_68 = (undefined4)param_1[2];
    uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_60 = (undefined4)param_1[3];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_58 = (undefined4)param_1[4];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_50 = (undefined4)param_1[5];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_48 = (undefined4)param_1[6];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_40 = (undefined4)param_1[7];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_78 = uVar4;
    if (local_90 < local_98) {
      do {
        uVar2 = local_90 + 1;
        uVar3 = (ulonglong)*(byte *)(local_b8[3] + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_28[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_b8,local_28);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = extraout_XMM0_Da;
          if ((CONCAT44(uStack_5c,uStack_60) != -1) && (CONCAT44(uStack_5c,uStack_60) != 0)) {
            uVar4 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
          }
          if (CONCAT44(uStack_74,local_78) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
          }
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_48);
          break;
        }
        local_90 = uVar2;
      } while (uVar2 != local_98);
    }
  }
  if (local_b8[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


