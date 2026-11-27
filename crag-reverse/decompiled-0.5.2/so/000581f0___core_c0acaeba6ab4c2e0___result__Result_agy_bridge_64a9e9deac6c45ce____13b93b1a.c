// 000581f0 <core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x00058212 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload,serde_json[dc3825464c436029]::error::Error>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_2);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,1);
  return;
}


