// 001a8420 <serde_json[dc3825464c436029]::error::ErrorCode>

/* WARNING: Switch with 1 destination removed at 0x001a8476 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorCode> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorCode>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,1);
      return;
    }
  }
  else if ((((int)*param_1 == 1) && (1 < ((uint)param_1[1] & 3) - 2)) && ((param_1[1] & 3U) != 0)) {
    (*(code *)PTR_drop_00219c58)();
    return;
  }
  return;
}


