// 004f0630 <core[c0acaeba6ab4c2e0]::option::Option<i32>>

/* WARNING: Switch with 1 destination removed at 0x004f0635 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
    */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<i32>>
              (param_1,"thinking_level",0xe,param_2);
    return;
  }
  (*(code *)PTR_syntax_00799910)(param_4,0);
  return;
}


