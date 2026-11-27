// 0040f0e0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040f16b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  if ((param_1[7] != 0) && (param_1[7] * 0x21 != -0x31)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,0x10);
  }
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[3] == -1) || (param_1[3] == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


