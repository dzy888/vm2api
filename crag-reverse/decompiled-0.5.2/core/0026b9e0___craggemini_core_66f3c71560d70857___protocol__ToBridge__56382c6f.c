// 0026b9e0 <craggemini_core[66f3c71560d70857]::protocol::ToBridge>

/* WARNING: Switch with 1 destination removed at 0x0026ba32 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::ToBridge>
          (ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = uVar1 ^ 0x8000000000000000;
  uVar2 = 2;
  if (uVar3 < 5) {
    uVar2 = uVar3;
  }
  if (uVar2 == 1) {
    uVar1 = param_1[1];
  }
  else if (uVar2 != 2) {
    return;
  }
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    (*(code *)PTR_free_0079adc8)(uVar3,1);
    return;
  }
  return;
}


