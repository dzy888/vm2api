// 003e7e50 <craggemini_core[66f3c71560d70857]::protocol::ToBridge>

/* WARNING: Switch with 1 destination removed at 0x003e7ea0 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1 ^ 0x8000000000000000;
  uVar1 = 2;
  if (uVar2 < 5) {
    uVar1 = uVar2;
  }
  if (uVar1 == 1) {
    if (0 < (longlong)param_1[1]) goto LAB_003e7e97;
  }
  else if ((uVar1 == 2) && (uVar2 = *param_1 - 1, uVar2 < 0xfffffffffffffffd)) {
LAB_003e7e97:
    (*(code *)PTR_free_0079adc8)(uVar2,1);
    return;
  }
  return;
}


