// 00602760 <serde_json[dc3825464c436029]::error::Error>

/* <<serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_borrowed_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_borrowed_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = param_3 == 0;
  if (-1 < param_3) goto LAB_00602780;
  uVar3 = true;
  puVar1 = (undefined1 *)0x0;
  while( true ) {
    param_1 = puVar1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00602780:
    if ((bool)uVar3) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar3 = lVar2 == 0;
    puVar1 = (undefined1 *)0x1;
    if (!(bool)uVar3) {
      (*(code *)PTR_memcpy_00799008)(param_4,param_3);
LAB_006027c4:
      *param_1 = 3;
      *(longlong *)(param_1 + 8) = param_3;
      *(longlong *)(param_1 + 0x10) = lVar2;
      *(longlong *)(param_1 + 0x18) = param_3;
      return;
    }
  }
  lVar2 = 1;
  goto LAB_006027c4;
}


