// 00413900 <craggemini_core[66f3c71560d70857]::protocol::Cancel>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::protocol::Cancel>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::protocol::Cancel>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  longlong local_80 [4];
  ulonglong local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40 [3];
  
  local_80[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80[1] = 1;
  local_80[2] = 0;
  local_48 = 0x80;
  local_80[3] = param_2;
  local_60 = param_3;
  uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::protocol::Cancel_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_80);
  if (*param_1 != -1) {
    if (local_58 < local_60) {
      lVar1 = *param_1;
      lVar2 = param_1[3];
      do {
        uVar4 = local_58 + 1;
        uVar5 = (ulonglong)*(byte *)(local_80[3] + -1 + uVar4);
        if ((0x20 < uVar5) || ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0)) {
          local_40[0] = 0x16;
          lVar3 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_80,local_40);
          param_1[1] = lVar3;
          *param_1 = -1;
          uVar6 = extraout_XMM0_Da;
          if (lVar1 != 0) {
            uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
          }
          if (lVar2 - 1U < 0xfffffffffffffffe) {
            uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
          }
          break;
        }
        local_58 = uVar4;
      } while (uVar4 != local_60);
    }
  }
  if (local_80[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  return param_1;
}


