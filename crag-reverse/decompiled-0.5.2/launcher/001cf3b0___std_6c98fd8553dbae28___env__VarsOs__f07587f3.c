// 001cf3b0 <std[6c98fd8553dbae28]::env::VarsOs>

/* WARNING: Switch with 1 destination removed at 0x001cf455 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::env::VarsOs> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::env::VarsOs>(longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00219c40;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) != lVar3) {
    uVar2 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3) / 0x30;
    lVar3 = lVar3 + 0x20;
    do {
      if (*(longlong *)(lVar3 + -0x20) != 0) {
        (*(code *)puVar1)();
      }
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar1)();
      }
      lVar3 = lVar3 + 0x30;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)();
  return;
}


