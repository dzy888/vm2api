// 00474070 <std[6c98fd8553dbae28]::collections::hash::set::HashSet<&str>>

/* WARNING: Switch with 1 destination removed at 0x00474091 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::collections::hash::set::HashSet<&str>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::collections::hash::set::HashSet<&str>>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 == 0) || (param_2 * 0x11 == -0x21)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


