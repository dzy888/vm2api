// 00413320 <craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  longlong local_90 [4];
  ulonglong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  longlong local_50;
  undefined8 local_48 [3];
  
  local_90[0] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_90[1] = 1;
  local_90[2] = 0;
  local_58 = 0x80;
  local_90[3] = param_2;
  local_70 = param_3;
  uVar7 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::ProxyRebindRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_90);
  if (*param_1 != -1) {
    if (local_68 < local_70) {
      lVar1 = *param_1;
      lVar2 = param_1[3];
      lVar3 = param_1[6];
      do {
        uVar5 = local_68 + 1;
        uVar6 = (ulonglong)*(byte *)(local_90[3] + -1 + uVar5);
        if ((0x20 < uVar6) || ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0)) {
          local_48[0] = 0x16;
          local_50 = param_1[7];
          lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_90,local_48);
          param_1[1] = lVar4;
          *param_1 = -1;
          uVar7 = extraout_XMM0_Da;
          if (lVar1 != 0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
          }
          if (lVar2 != 0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          if (lVar3 - 1U < 0xfffffffffffffffe) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
          }
          break;
        }
        local_68 = uVar5;
      } while (uVar5 != local_70);
    }
  }
  if (local_90[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
  }
  return param_1;
}


