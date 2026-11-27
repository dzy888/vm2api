// 00148d70 <core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::error::Error>>
          (char *param_1)

{
  if (*param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(*(undefined8 *)(param_1 + 8));
    return;
  }
  <serde_json[dc3825464c436029]::value::Value>();
  return;
}


