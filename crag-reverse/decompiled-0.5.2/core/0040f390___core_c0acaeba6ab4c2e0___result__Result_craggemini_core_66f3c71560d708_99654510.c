// 0040f390 <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedSessions,serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedSessions,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::resume::PersistedSessions,serde_json[dc3825464c436029]::error::Error>>
          (longlong *param_1)

{
  if (*param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_1[1]);
    return;
  }
  <craggemini_core[66f3c71560d70857]::resume::PersistedSessions>();
  return;
}


