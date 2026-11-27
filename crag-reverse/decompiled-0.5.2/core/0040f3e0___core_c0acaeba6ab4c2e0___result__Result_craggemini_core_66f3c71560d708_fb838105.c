// 0040f3e0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040f407 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,serde_json[dc3825464c436029]::error::Error>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 + 1U < 2) {
    return;
  }
  if (param_1 == -2) {
    <serde_json[dc3825464c436029]::error::Error>(param_2);
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


