// 004749e0 <craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>

/* WARNING: Switch with 1 destination removed at 0x00474a49 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1[7] != 0) && (param_1[7] * 0x21 != -0x31)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,0x10);
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[3] == -1) || (param_1[3] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


