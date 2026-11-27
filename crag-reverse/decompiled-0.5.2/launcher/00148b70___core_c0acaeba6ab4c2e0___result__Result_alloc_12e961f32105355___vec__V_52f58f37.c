// 00148b70 <core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,serde_json[dc3825464c436029]::error::Error>>

/* WARNING: Switch with 1 destination removed at 0x00148b96 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::Vec<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,serde_json[dc3825464c436029]::error::Error>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 == -1) {
    <serde_json[dc3825464c436029]::error::Error>(param_2);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


