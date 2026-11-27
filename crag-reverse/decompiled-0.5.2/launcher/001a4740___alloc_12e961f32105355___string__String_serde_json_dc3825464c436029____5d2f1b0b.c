// 001a4740 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* WARNING: Switch with 1 destination removed at 0x001a47d4 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::CompactFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

void __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 unaff_R12;
  
  if (*param_1 == '\x01') {
    (*(code *)PTR_panic_00219ca8)
              (param_4,&anon_dd81358582bfba60c2fc675a0b056dad_6_llvm_5330800135125066393);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((param_1[1] == '\x01') ||
     (lVar2 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(*puVar3,",",1), lVar2 == 0)) {
    param_1[1] = '\x02';
    lVar2 = serde_json[dc3825464c436029]::ser::format_escaped_str::
            <&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::CompactFormatter>
                      (puVar3);
    if ((lVar2 == 0) &&
       (lVar2 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                ::write_all(*puVar3,":",1), lVar2 == 0)) {
      <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
      serialize::
      <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter>>
                (param_3,puVar3);
      return;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar3[4] = 0;
  puVar3[2] = unaff_R12;
  puVar3[3] = 0;
  *puVar3 = 1;
  puVar3[1] = lVar2;
  return;
}


