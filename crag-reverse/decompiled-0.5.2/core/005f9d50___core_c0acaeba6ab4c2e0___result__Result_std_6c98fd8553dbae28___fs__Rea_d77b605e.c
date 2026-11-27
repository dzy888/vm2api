// 005f9d50 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x005f9d96 */
/* WARNING: Switch with 1 destination removed at 0x0075771a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if ((char)param_1[1] == '\x02') {
    if ((1 < ((uint)*param_1 & 3) - 2) && ((*param_1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar2 = *param_1;
      (*(code *)PTR_drop_0079ac38)();
      if (*(longlong *)(uVar2 + 0x10) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (uVar2 != 0xffffffffffffffff) {
        LOCK();
        plVar1 = (longlong *)(uVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_free_0079adc8)();
          return;
        }
      }
      return;
    }
  }
  return;
}


