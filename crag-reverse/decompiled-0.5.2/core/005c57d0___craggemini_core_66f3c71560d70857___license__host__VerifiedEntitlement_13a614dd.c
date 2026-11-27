// 005c57d0 <craggemini_core[66f3c71560d70857]::license::host::VerifiedEntitlement>

/* WARNING: Switch with 1 destination removed at 0x005c5815 */
/* WARNING: Switch with 1 destination removed at 0x005c5861 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::license::host::VerifiedEntitlement>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::license::host::VerifiedEntitlement>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    if ((int)*param_1 == 1) {
      <craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>();
      return;
    }
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = 8;
  }
  (*(code *)PTR_free_0079adc8)(param_4,uVar1);
  return;
}


