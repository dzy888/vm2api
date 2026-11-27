// 0040f000 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::collections::hash::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry>,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040f030 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::collections::hash::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,
   craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry>,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::collections::hash::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry>,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  if ((param_1[1] == 0) || (param_1[1] * 0x21 == -0x31)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


