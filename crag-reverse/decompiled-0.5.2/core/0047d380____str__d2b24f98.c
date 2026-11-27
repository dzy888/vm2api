// 0047d380 <&str>

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::ser::Error>::custom::<&str>
   <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::custom::<&str> */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>::custom::
<&str>(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = param_2 == 0;
  if (-1 < param_2) goto LAB_0047d3a2;
  do {
    uVar2 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0047d3a2:
    if ((bool)uVar2) goto LAB_0047d3e0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar1 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar1 == 0);
  (*(code *)PTR_memcpy_00799008)(param_4,param_2);
LAB_0047d3e0:
  (*(code *)PTR_make_error_007999e8)();
  return;
}


