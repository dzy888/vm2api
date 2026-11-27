// 003afbe0 <serde_json[dc3825464c436029]::value::Value>

/* <bool as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde_json[dc3825464c436029]::value::Value>
    */

longlong __rustcall
<bool_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
<serde_json[dc3825464c436029]::value::Value>(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_11;
  
  cVar1 = *param_2;
  if (cVar1 != '\x01') {
    uVar2 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>
                      (param_2,&local_11,
                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_80_llvm_10049508496007902178);
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  else {
    *(char *)(param_1 + 1) = param_2[1];
  }
  *(bool *)param_1 = cVar1 != '\x01';
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
  return param_1;
}


