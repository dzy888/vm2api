// 0040f5c0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::McpCallRequest,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::McpCallRequest,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::McpCallRequest,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  lVar2 = param_1[3];
  if ((lVar2 != -1) && (lVar2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (lVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    lVar2 = lVar1;
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 6,lVar2);
  return;
}


