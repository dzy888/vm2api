// 00412850 <craggemini_core[66f3c71560d70857]::server::ScaleRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::ScaleRequest>
    */

int * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::ScaleRequest>
          (int *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_60 [4];
  ulonglong local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20 [3];
  
  local_60[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_60[1] = 1;
  local_60[2] = 0;
  local_28 = 0x80;
  local_60[3] = param_2;
  local_40 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::ScaleRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_60);
  if ((*param_1 != 2) && (local_38 < local_40)) {
    do {
      uVar2 = local_38 + 1;
      uVar3 = (ulonglong)*(byte *)(local_60[3] + -1 + uVar2);
      if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
        local_20[0] = 0x16;
        uVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(local_60,local_20);
        *(undefined8 *)(param_1 + 2) = uVar1;
        param_1[0] = 2;
        param_1[1] = 0;
        uVar4 = extraout_XMM0_Da;
        if (local_60[0] == 0) {
          return param_1;
        }
        goto LAB_004128f0;
      }
      local_38 = uVar2;
    } while (uVar2 != local_40);
  }
  if (local_60[0] != 0) {
LAB_004128f0:
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


