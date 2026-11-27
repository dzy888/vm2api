// 0040f0c0 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::CooldownFileV1,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1)

{
  if (*param_1 == 0) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  return;
}


