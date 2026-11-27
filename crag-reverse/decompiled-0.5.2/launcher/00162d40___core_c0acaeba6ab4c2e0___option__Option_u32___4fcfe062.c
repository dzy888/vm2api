// 00162d40 <core[c0acaeba6ab4c2e0]::option::Option<u32>>

/* WARNING: Switch with 1 destination removed at 0x00162d45 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u32>>
    */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<u32>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<u32>>
              (param_1,&anon_1b24917ebd097f132e7c2fe0e448a3c0_9_llvm_6508052046112256635,4,param_2);
    return;
  }
  (*(code *)PTR_syntax_00219cb8)(param_4,0);
  return;
}


