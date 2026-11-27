// 004f6b10 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_byte_buf::<serde_json[dc3825464c436029]::error::Error>
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_invalid_type_007997e8)(param_4,&DAT_0078c7e0);
  param_1[1] = uVar1;
  *param_1 = 0xffffffffffffffff;
  if (*param_2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  return;
}


