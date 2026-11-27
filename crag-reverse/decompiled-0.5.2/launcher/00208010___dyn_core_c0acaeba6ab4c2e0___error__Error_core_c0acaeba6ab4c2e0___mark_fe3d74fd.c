// 00208010 <dyn_core[c0acaeba6ab4c2e0]::error::Error+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>

/* WARNING: Switch with 1 destination removed at 0x00208047 */
/* alloc[12e961f32105355]::io::error::custom_owner_from_box::drop_box_raw::<dyn
   core[c0acaeba6ab4c2e0]::error::Error + core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync> */

void __rustcall
alloc[12e961f32105355]::io::error::custom_owner_from_box::drop_box_raw::
<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)();
  }
  if (param_2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,param_2[2]);
  return;
}


