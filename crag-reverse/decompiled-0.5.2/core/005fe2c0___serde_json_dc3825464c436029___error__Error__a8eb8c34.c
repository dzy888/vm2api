// 005fe2c0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::server::OAuthCompleteRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x65646f63) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'e' && (int)*param_2 == 0x74617473) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x64695f79786f7270) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6469 && *param_2 == 0x5f74706d65747461) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x36353261 && *param_2 == 0x68735f79786f7270) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(param_2,param_3,
                        &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_24_llvm_10049508496007902178,5);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


