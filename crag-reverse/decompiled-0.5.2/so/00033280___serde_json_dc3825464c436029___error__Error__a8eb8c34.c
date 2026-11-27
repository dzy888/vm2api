// 00033280 <serde_json[dc3825464c436029]::error::Error>

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
    if (*(short *)((longlong)param_2 + 4) == 0x7469 && (int)*param_2 == 0x6d627573) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (int)*param_2 == 0x636e6163) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6c6f7274 && (int)*param_2 == 0x746e6f63) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x6465686361747461) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6d68 && *param_2 == 0x735f74696d627573) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_da5c47adb6433ca5f625c1319540aa31_19_llvm_1675394880211241453,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


