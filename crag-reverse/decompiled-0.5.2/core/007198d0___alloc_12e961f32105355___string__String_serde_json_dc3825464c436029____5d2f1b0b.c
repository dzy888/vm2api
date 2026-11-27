// 007198d0 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* WARNING: Switch with 1 destination removed at 0x00719989 */
/* <serde_json[dc3825464c436029]::ser::Compound<&mut <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::PrettyFormatter> as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::ser::Compound<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_R13;
  longlong lVar8;
  
  if (*param_1 == '\x01') {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_dd81358582bfba60c2fc675a0b056dad_6_llvm_5330800135125066393);
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar4)();
    return puVar7;
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  uVar1 = *puVar7;
  if (param_1[1] == '\x01') {
    lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
            ::write_all(uVar1,"\n",1);
  }
  else {
    lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
            ::write_all(uVar1,",\n",2);
  }
  if (lVar5 == 0) {
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    lVar8 = puVar7[3] + 1;
    do {
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) {
        param_1[1] = '\x02';
        lVar5 = serde_json[dc3825464c436029]::ser::format_escaped_str::
                <&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>
                          (puVar7);
        if ((lVar5 == 0) &&
           (lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                    ::write_all(*puVar7,": ",2), lVar5 == 0)) {
          puVar6 = (undefined8 *)
                   <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                   ::serialize::
                   <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::PrettyFormatter>>
                             (param_3,puVar7);
          if (puVar6 == (undefined8 *)0x0) {
            *(undefined1 *)(puVar7 + 4) = 1;
            puVar6 = (undefined8 *)0x0;
          }
          return puVar6;
        }
        break;
      }
      lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(uVar1,uVar2,uVar3);
    } while (lVar5 == 0);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar7[4] = 0;
  puVar7[2] = unaff_R13;
  puVar7[3] = 0;
  *puVar7 = 1;
  puVar7[1] = lVar5;
  return puVar7;
}


