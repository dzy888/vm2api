// 002e5900 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::WebSearchConfig>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::WebSearchConfig>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::WebSearchConfig>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != -1) {
    lVar2 = param_1[6];
    if ((lVar2 != -1) && (lVar2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar4 = param_1[1] + 8;
      do {
        lVar2 = *(longlong *)(lVar4 + -8);
        if (lVar2 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 != 0) {
      lVar2 = lVar5 * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar5 = param_1[5];
    if (lVar5 != 0) {
      lVar3 = param_1[4] + 8;
      do {
        lVar2 = *(longlong *)(lVar3 + -8);
        if (lVar2 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[3] != 0) {
      lVar2 = param_1[3] * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    if ((char)param_1[10] != -1) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 10,lVar2);
      return;
    }
  }
  return;
}


