// 005faad0 <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>

/* WARNING: Switch with 1 destination removed at 0x005fac92 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[3];
  if (lVar5 != -1) {
    lVar4 = param_1[9];
    if ((lVar4 != -1) && (lVar4 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      lVar3 = param_1[4] + 8;
      do {
        lVar4 = *(longlong *)(lVar3 + -8);
        if (lVar4 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x18;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar5 != 0) {
      lVar4 = lVar5 * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar5 = param_1[8];
    if (lVar5 != 0) {
      lVar2 = param_1[7] + 8;
      do {
        lVar4 = *(longlong *)(lVar2 + -8);
        if (lVar4 != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[6] != 0) {
      lVar4 = param_1[6] * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    if ((char)param_1[0xd] != -1) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xd,lVar4);
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::WebFetchConfig>>
            (param_1 + 0x11);
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>>
            (param_1 + 0x1c);
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>>
            (param_1 + 0x2c);
  lVar5 = param_1[1];
  for (lVar4 = param_1[2] + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    <craggemini_core[66f3c71560d70857]::tools::ClientTool>(lVar5);
    lVar5 = lVar5 + 0xa8;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar5 = param_1[0x37];
  if (((lVar5 < -0x7ffffffffffffffd) || (lVar5 == -1)) || (lVar5 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


