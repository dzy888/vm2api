// 0014c480 <serde_json[dc3825464c436029]::raw::BoxedFromString>

/* <&mut serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
    */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
          (longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < uVar1) {
    do {
      uVar2 = uVar2 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2);
      if (0x22 < uVar5) {
LAB_0014c5b1:
        uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_invalid_type(param_2,&local_41);
        lVar3 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::fix_position::_closure_0_>
                          (uVar4,param_2);
        goto LAB_0014c4f8;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x22) goto LAB_0014c5b1;
        *(ulonglong *)(param_2 + 0x28) = uVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_00219c70)(-uVar1,param_2);
        if ((int)local_40 == 2) {
          param_1[1] = local_38;
          *param_1 = 0;
          return param_1;
        }
        uVar6 = local_30 == 0;
        if (-1 < local_30) goto LAB_0014c55e;
        uVar6 = true;
        goto LAB_0014c552;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != uVar1);
  }
  local_40 = 5;
  lVar3 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
          ::peek_error(param_2,&local_40);
LAB_0014c4f8:
  param_1[1] = lVar3;
  *param_1 = 0;
  return param_1;
LAB_0014c552:
  (*(code *)PTR_handle_error_00219c78)();
LAB_0014c55e:
  if ((bool)uVar6) {
    lVar3 = 1;
    goto LAB_0014c599;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  lVar3 = (*(code *)PTR___rust_alloc_00219c88)();
  uVar6 = lVar3 == 0;
  if (!(bool)uVar6) {
    (*(code *)PTR_memcpy_00219c60)();
LAB_0014c599:
    *param_1 = lVar3;
    param_1[1] = local_30;
    return param_1;
  }
  goto LAB_0014c552;
}


