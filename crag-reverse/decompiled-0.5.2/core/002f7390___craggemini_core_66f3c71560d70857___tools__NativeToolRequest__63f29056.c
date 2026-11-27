// 002f7390 <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>

/* WARNING: Switch with 1 destination removed at 0x002f7462 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::WebSearchConfig>>
            (param_1 + 3);
  if (param_1[0x11] != -1) {
    <craggemini_core[66f3c71560d70857]::tools::WebFetchConfig>(param_1 + 0x11);
  }
  if (param_1[0x1c] != -1) {
    <craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>(param_1 + 0x1c);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>>
            (param_1 + 0x2c);
  lVar1 = param_1[1];
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <craggemini_core[66f3c71560d70857]::tools::ClientTool>(lVar1);
    lVar1 = lVar1 + 0xa8;
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar1 = param_1[0x37];
  if (((lVar1 < -0x7ffffffffffffffd) || (lVar1 == -1)) || (lVar1 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


