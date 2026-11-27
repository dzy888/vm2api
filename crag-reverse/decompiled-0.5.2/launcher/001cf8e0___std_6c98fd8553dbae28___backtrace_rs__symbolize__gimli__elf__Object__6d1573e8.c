// 001cf8e0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>

/* WARNING: Switch with 1 destination removed at 0x001cf8f8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


