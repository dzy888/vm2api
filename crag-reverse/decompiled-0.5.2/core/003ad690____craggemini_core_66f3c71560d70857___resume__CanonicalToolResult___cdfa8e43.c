// 003ad690 <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  for (param_2 = param_2 + 1; param_2 != 1; param_2 = param_2 + -1) {
    if ((*param_1 != -1) && (*param_1 != 0)) {
      (*(code *)puVar2)(param_4,1);
    }
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)puVar2)(param_4,1);
    }
    plVar1 = param_1 + 6;
    param_1 = param_1 + 0xb;
    <serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  return;
}


