// 003c4bc0 drop

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  plVar3 = *(longlong **)(param_1 + 8);
  for (lVar4 = *(longlong *)(param_1 + 0x10) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    if (*plVar3 != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    if (plVar3[3] != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    plVar1 = plVar3 + 6;
    plVar3 = plVar3 + 10;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  return;
}


