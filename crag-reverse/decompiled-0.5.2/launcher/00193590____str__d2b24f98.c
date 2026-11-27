// 00193590 <&str>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<&str> */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::custom::
<&str>(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = param_2 == 0;
  if (-1 < param_2) goto LAB_001935b2;
  do {
    uVar2 = 1;
    (*(code *)PTR_handle_error_00219c78)();
LAB_001935b2:
    if ((bool)uVar2) goto LAB_001935f0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar1 = (*(code *)PTR___rust_alloc_00219c88)();
  } while (lVar1 == 0);
  (*(code *)PTR_memcpy_00219c60)(param_4,param_2);
LAB_001935f0:
  (*(code *)PTR_make_error_0021a290)();
  return;
}


