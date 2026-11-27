// 004942a0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ToolChoice>>

/* WARNING: Switch with 1 destination removed at 0x004942c8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ToolChoice>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ToolChoice>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 < -0x7ffffffffffffffd) || (param_1 + 1U < 2)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


