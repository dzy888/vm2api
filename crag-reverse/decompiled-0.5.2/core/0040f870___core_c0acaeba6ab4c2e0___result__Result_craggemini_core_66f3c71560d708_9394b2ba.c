// 0040f870 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::protocol::Envelope,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::protocol::Envelope,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::protocol::Envelope,serde_json[dc3825464c436029]::error::Error>>
          (int *param_1)

{
  if (*param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(*(undefined8 *)(param_1 + 2));
    return;
  }
  <craggemini_core[66f3c71560d70857]::protocol::Envelope>();
  return;
}


