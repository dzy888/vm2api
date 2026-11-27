// 00494570 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::bridge::DeferredSocketEnd>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::bridge::DeferredSocketEnd>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::bridge::DeferredSocketEnd>>
          (longlong param_1,ulonglong param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((1 < ((uint)param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


