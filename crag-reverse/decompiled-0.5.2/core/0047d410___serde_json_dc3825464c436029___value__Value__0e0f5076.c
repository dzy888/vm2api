// 0047d410 <serde_json[dc3825464c436029]::value::Value>

/* <alloc[12e961f32105355]::string::String as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde_json[dc3825464c436029]::value::Value>
    */

undefined8 * __rustcall
<alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::<serde_json[dc3825464c436029]::value::Value>(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined1 local_11;
  
  if (*param_2 == '\x03') {
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = uVar1;
  }
  else {
    uVar1 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>
                      (param_2,&local_11,
                       anon_1b4a85c95499e1b671cf4fa96a1b6d0f_81_llvm_10049508496007902178);
    param_1[1] = uVar1;
    *param_1 = 0xffffffffffffffff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
  }
  return param_1;
}


