// 00033370 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3 == 8) {
    if (*param_2 == 'p') {
      if (((((param_2[1] == 'r') && (param_2[2] == 'o')) && (param_2[3] == 't')) &&
          ((param_2[4] == 'o' && (param_2[5] == 'c')))) &&
         ((param_2[6] == 'o' && (param_2[7] == 'l')))) {
        *param_1 = 0;
        return param_1;
      }
    }
    else if (((*param_2 == 's') && (param_2[1] == 'h')) &&
            ((param_2[2] == 'm' && (param_2[3] == '_')))) {
      if (param_2[4] == 'm') {
        if (((param_2[5] == 'o') && (param_2[6] == 'd')) && (param_2[7] == 'e')) {
          *param_1 = 0x300;
          return param_1;
        }
      }
      else if (((param_2[4] == 'p') && (param_2[5] == 'a')) &&
              ((param_2[6] == 't' && (param_2[7] == 'h')))) {
        *param_1 = 0x200;
        return param_1;
      }
    }
  }
  else if ((((((param_3 == 10) && (*param_2 == 's')) && (param_2[1] == 'e')) &&
            (((param_2[2] == 's' && (param_2[3] == 's')) &&
             ((param_2[4] == 'i' && ((param_2[5] == 'o' && (param_2[6] == 'n')))))))) &&
           (param_2[7] == '_')) && ((param_2[8] == 'i' && (param_2[9] == 'd')))) {
    *param_1 = 0x100;
    return param_1;
  }
  (*(code *)PTR_from_utf8_lossy_000c3b20)();
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(local_20,local_18,
                        &anon_da5c47adb6433ca5f625c1319540aa31_24_llvm_1675394880211241453,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar1,1);
  return param_1;
}


