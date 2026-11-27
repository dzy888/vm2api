// 005f93a0 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry>>>

/* WARNING: Switch with 1 destination removed at 0x005f93e1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry>>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*param_1 != '\0') && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007997d0)();
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    **(undefined1 **)(param_1 + 0x10) = 0;
    if (lVar2 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


