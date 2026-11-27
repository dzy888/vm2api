// 00034580 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  switch(param_3) {
  case 6:
    if (((((*param_2 == 'a') && (param_2[1] == 'c')) && (param_2[2] == 't')) &&
        ((param_2[3] == 'i' && (param_2[4] == 'o')))) && (param_2[5] == 'n')) {
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 8:
    if ((((*param_2 == 'a') && (param_2[1] == 'r')) && (param_2[2] == 'g')) &&
       (((param_2[3] == 'u' && (param_2[4] == 'm')) &&
        ((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))))))) {
      *param_1 = 0x300;
      return param_1;
    }
    break;
  case 9:
    if ((((((*param_2 == 't') && (param_2[1] == 'a')) && (param_2[2] == 'r')) &&
         ((param_2[3] == 'g' && (param_2[4] == 'e')))) && (param_2[5] == 't')) &&
       (((param_2[6] == '_' && (param_2[7] == 'i')) && (param_2[8] == 'd')))) {
      *param_1 = 0x200;
      return param_1;
    }
    break;
  case 10:
    if ((((((*param_2 == 'c') && (param_2[1] == 'o')) && (param_2[2] == 'n')) &&
         (((param_2[3] == 't' && (param_2[4] == 'r')) &&
          ((param_2[5] == 'o' && ((param_2[6] == 'l' && (param_2[7] == '_')))))))) &&
        (param_2[8] == 'i')) && (param_2[9] == 'd')) {
      *param_1 = 0;
      return param_1;
    }
  }
  (*(code *)PTR_from_utf8_lossy_000c3b20)();
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(local_20,local_18,
                        &anon_da5c47adb6433ca5f625c1319540aa31_54_llvm_1675394880211241453,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar1,1);
  return param_1;
}


