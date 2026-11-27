// 004f3140 <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::TagOrContentVisitor as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
    */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::TagOrContentVisitor_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  *(longlong *)(param_4 + 0x28) = *(longlong *)(param_4 + 0x28) + 1;
  *(undefined8 *)(param_4 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f8)(param_4,param_4);
  if (local_40 == 2) {
    *(undefined8 *)(param_1 + 8) = local_38;
    *param_1 = 0xfe;
    return param_1;
  }
  if ((int)local_40 == 1) {
    if ((local_30 == param_3) && (iVar1 = (*(code *)PTR_bcmp_00799020)(), iVar1 == 0))
    goto LAB_004f3220;
    if (-1 < local_30) {
      if (local_30 == 0) {
        lVar2 = 1;
LAB_004f322b:
        *param_1 = 0xc;
        *(longlong *)(param_1 + 8) = local_30;
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(longlong *)(param_1 + 0x18) = local_30;
        return param_1;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar2 != 0) {
        (*(code *)PTR_memcpy_00799008)();
        goto LAB_004f322b;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  if ((local_30 != param_3) || (iVar1 = (*(code *)PTR_bcmp_00799020)(), iVar1 != 0)) {
    *param_1 = 0xd;
    *(undefined8 *)(param_1 + 8) = local_38;
    *(longlong *)(param_1 + 0x10) = local_30;
    return param_1;
  }
LAB_004f3220:
  *param_1 = 0xff;
  return param_1;
}


