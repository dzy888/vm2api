// 000826b0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>

/* WARNING: Switch with 1 destination removed at 0x00082778 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  puVar1 = PTR_munmap_000c3ac0;
  for (lVar3 = param_1[5]; lVar3 != 0; lVar3 = lVar3 + -1) {
    (*(code *)puVar1)();
  }
  if (param_1[3] == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


