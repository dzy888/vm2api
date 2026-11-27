// 0039ff00 <core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>

/* WARNING: Switch with 1 destination removed at 0x0039ff83 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>
          (longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar3) {
    uVar2 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3) / 0x18;
    lVar3 = lVar3 + 8;
    do {
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar1)();
      }
      lVar3 = lVar3 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


