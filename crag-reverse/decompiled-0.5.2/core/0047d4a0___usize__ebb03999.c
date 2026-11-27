// 0047d4a0 <usize>

/* WARNING: Switch with 1 destination removed at 0x0047d4a5 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut alloc[12e961f32105355]::vec::Vec<u8>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<usize> */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<usize>(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
    ::serialize_entry::<str,u64>
              (param_1,anon_d4d3cd51d1d91a17bb767b00236b3a9b_42_llvm_17589326713533067298,9,param_2)
    ;
    return;
  }
  (*(code *)PTR_syntax_00799910)(param_4,0);
  return;
}


