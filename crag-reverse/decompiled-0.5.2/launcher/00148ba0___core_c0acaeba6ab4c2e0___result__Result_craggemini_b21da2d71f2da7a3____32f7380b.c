// 00148ba0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini[b21da2d71f2da7a3]::ContextAccount,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x00148c08 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini[b21da2d71f2da7a3]::ContextAccount,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini[b21da2d71f2da7a3]::ContextAccount,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[6] == -1) || (param_1[6] == 0)) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


