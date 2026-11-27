// 0071f370 <serde_json[dc3825464c436029]::error::ErrorImpl>

/* WARNING: Switch with 1 destination removed at 0x0071f390 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorImpl> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::ErrorImpl>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 1) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  return;
}


