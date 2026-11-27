// 0040f2a0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x0040f30c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar2);
    lVar2 = lVar2 + 0xd8;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


