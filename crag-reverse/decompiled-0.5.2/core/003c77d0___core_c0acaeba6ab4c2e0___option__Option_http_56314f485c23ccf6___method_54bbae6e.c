// 003c77d0 <core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::method::Method>>

/* WARNING: Switch with 1 destination removed at 0x003c77ed */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::method::Method>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::method::Method>>
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (((*param_1 == 0xff) || (*param_1 < 0xb)) || (*(longlong *)(param_1 + 0x10) == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


