// 00162d20 <core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>

/* WARNING: Switch with 1 destination removed at 0x00162d25 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>
    */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::
    <str,core[c0acaeba6ab4c2e0]::option::Option<craggemini[b21da2d71f2da7a3]::license::Term>>
              (param_1,&anon_c9247e0b0208fc9c8c019285c3882aec_40_llvm_5798562142159169407,4,param_2)
    ;
    return;
  }
  (*(code *)PTR_syntax_00219cb8)(param_4,0);
  return;
}


