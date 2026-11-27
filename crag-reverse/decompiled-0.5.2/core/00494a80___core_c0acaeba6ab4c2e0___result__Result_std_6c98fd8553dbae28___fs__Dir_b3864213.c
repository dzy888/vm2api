// 00494a80 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x00494abd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007997d0)();
    }
    lVar2 = param_1[2];
    *(undefined1 *)param_1[1] = 0;
    if (lVar2 != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


