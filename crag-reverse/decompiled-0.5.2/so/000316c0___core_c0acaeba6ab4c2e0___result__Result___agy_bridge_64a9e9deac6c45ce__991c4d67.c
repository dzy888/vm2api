// 000316c0 <core[c0acaeba6ab4c2e0]::result::Result<(<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field,serde_core[48776c27239fa21f]::private::content::Content),serde_json[dc3825464c436029]::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(<agy_bridge[64a9e9deac6c45ce]::Command
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field,
   serde_core[48776c27239fa21f]::private::content::Content),
   serde_json[dc3825464c436029]::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field,serde_core[48776c27239fa21f]::private::content::Content),serde_json[dc3825464c436029]::error::Error>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    <serde_core[48776c27239fa21f]::private::content::Content>();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (*plVar1 == 1) {
    if ((1 < ((uint)plVar1[1] & 3) - 2) && ((plVar1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)();
  return;
}


