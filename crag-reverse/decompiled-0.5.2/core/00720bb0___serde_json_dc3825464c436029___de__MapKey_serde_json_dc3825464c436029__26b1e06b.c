// 00720bb0 <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>

/* <alloc[12e961f32105355]::string::String as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
    */

longlong * __rustcall
<alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f0)();
  if (local_40 == 2) {
    param_1[1] = local_38;
    *param_1 = -1;
  }
  else {
    uVar3 = local_30 == 0;
    if (-1 < local_30) goto LAB_00720c17;
    do {
      uVar3 = 1;
      (*(code *)PTR_handle_error_00798ff0)();
LAB_00720c17:
      if ((bool)uVar3) {
        lVar1 = 1;
        lVar2 = 0;
        goto LAB_00720c57;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar1 == 0);
    (*(code *)PTR_memcpy_00799008)(param_4,local_30);
    lVar2 = local_30;
LAB_00720c57:
    *param_1 = lVar2;
    param_1[1] = lVar1;
    param_1[2] = local_30;
  }
  return param_1;
}


