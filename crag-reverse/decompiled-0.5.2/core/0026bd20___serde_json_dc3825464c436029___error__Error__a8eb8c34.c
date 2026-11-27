// 0026bd20 <serde_json[dc3825464c436029]::error::Error>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1 = (longlong *)*param_1;
  if (*param_1 == 1) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR___rust_dealloc_00798fc8)();
  return;
}


