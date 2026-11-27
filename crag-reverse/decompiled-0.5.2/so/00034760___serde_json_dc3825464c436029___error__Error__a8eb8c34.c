// 00034760 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x6e6f && (int)*param_2 == 0x69746361) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x746e656d75677261) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x695f746567726174) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f6c6f72746e6f63) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_da5c47adb6433ca5f625c1319540aa31_54_llvm_1675394880211241453,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


