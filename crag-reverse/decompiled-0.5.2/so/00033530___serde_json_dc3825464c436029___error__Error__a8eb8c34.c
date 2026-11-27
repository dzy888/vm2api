// 00033530 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 10) {
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f6e6f6973736573) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 8) {
    if (*param_2 == 0x6c6f636f746f7270) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x687461705f6d6873) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*param_2 == 0x65646f6d5f6d6873) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_da5c47adb6433ca5f625c1319540aa31_24_llvm_1675394880211241453,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


