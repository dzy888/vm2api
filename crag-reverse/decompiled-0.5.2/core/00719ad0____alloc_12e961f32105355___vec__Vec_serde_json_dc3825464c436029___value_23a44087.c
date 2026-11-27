// 00719ad0 <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* WARNING: Switch with 1 destination removed at 0x00719baf */
/* <&mut serde_json[dc3825464c436029]::ser::Serializer<&mut
   <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter> as
   serde_core[48776c27239fa21f]::ser::Serializer>::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter>as_serde_core[48776c27239fa21f]::ser::Serializer>
::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar1 = *param_1;
  lVar3 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
          ::write_all(uVar1,"[",1);
  if (lVar3 != 0) {
LAB_00719ba1:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar4[4] = 0;
    puVar4[2] = unaff_RBX;
    puVar4[3] = 0;
    *puVar4 = 1;
    puVar4[1] = lVar3;
    return puVar4;
  }
  if (lVar5 == 0) {
    lVar3 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
            ::write_all(uVar1,"]",1);
joined_r0x00719b7b:
    if (lVar3 != 0) goto LAB_00719ba1;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
             ::serialize::
             <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter>>
                       (lVar6,param_1);
    if (puVar4 == (undefined8 *)0x0) {
      lVar5 = lVar5 * 0x20;
      do {
        lVar6 = lVar6 + 0x20;
        lVar5 = lVar5 + -0x20;
        if (lVar5 == 0) {
          lVar3 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                  ::write_all(*param_1,"]",1);
          goto joined_r0x00719b7b;
        }
        lVar3 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                ::write_all(*param_1,",",1);
        if (lVar3 != 0) goto LAB_00719ba1;
        puVar4 = (undefined8 *)
                 <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                 ::serialize::
                 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter>>
                           (lVar6,param_1);
      } while (puVar4 == (undefined8 *)0x0);
    }
  }
  return puVar4;
}


