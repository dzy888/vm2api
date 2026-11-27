// 00731780 <std[6c98fd8553dbae28]::sys::fs::unix::DirEntry>

/* WARNING: Switch with 1 destination removed at 0x007317b5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::fs::unix::DirEntry> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::fs::unix::DirEntry>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007997d0)();
  }
  *(undefined1 *)param_1[1] = 0;
  if (param_1[2] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


