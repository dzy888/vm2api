// 00034830 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined8 __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>(char *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((((((param_2 == 10) && (*param_1 == 'r')) && (param_1[1] == 'e')) &&
       ((param_1[2] == 'q' && (param_1[3] == 'u')))) &&
      ((param_1[4] == 'e' && ((param_1[5] == 's' && (param_1[6] == 't')))))) &&
     ((param_1[7] == '_' && ((param_1[8] == 'i' && (param_1[9] == 'd')))))) {
    uVar1 = 0;
  }
  else {
    (*(code *)PTR_from_utf8_lossy_000c3b20)();
    uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
            ::unknown_field(local_20,local_18,
                            &anon_da5c47adb6433ca5f625c1319540aa31_11_llvm_1675394880211241453,1);
    if (0 < local_28) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
      return uVar1;
    }
  }
  return uVar1;
}


