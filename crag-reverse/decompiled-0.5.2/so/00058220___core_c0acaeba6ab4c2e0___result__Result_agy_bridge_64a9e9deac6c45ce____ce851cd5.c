// 00058220 <core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1)

{
  if (*param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  <agy_bridge[64a9e9deac6c45ce]::protocol::RingSubmitMeta>();
  return;
}


