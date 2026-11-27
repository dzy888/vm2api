// 00034ea0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
    */

undefined8 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_invalid_type_000c3b18)
                    (param_4,anon_da5c47adb6433ca5f625c1319540aa31_66_llvm_1675394880211241453);
  param_1[1] = uVar1;
  *param_1 = 0xffffffffffffffff;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  return param_1;
}


