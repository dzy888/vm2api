// 0066b340 <core[c0acaeba6ab4c2e0]::result::Result<(u16,serde_json[dc3825464c436029]::value::Value),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(u16,
   serde_json[dc3825464c436029]::value::Value), core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(u16,serde_json[dc3825464c436029]::value::Value),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (ulonglong *param_1)

{
  if ((char)param_1[1] != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
    return;
  }
  if ((1 < ((uint)*param_1 & 3) - 2) && ((*param_1 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


