// 004f4900 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  switch(param_3) {
  case 5:
    if ((((*param_2 == 'f') && (param_2[1] == 'r')) && (param_2[2] == 'a')) &&
       ((param_2[3] == 'm' && (uVar2 = 3, param_2[4] == 'e')))) goto LAB_004f4a40;
    break;
  case 9:
    if ((((*param_2 == 's') && (param_2[1] == 't')) && (param_2[2] == 'r')) &&
       (((param_2[3] == 'e' && (param_2[4] == 'a')) &&
        ((param_2[5] == 'm' && ((param_2[6] == '_' && (param_2[7] == 'i')))))))) {
      uVar2 = 1;
      cVar1 = param_2[8];
joined_r0x004f4a3c:
      if (cVar1 == 'd') goto LAB_004f4a40;
    }
    break;
  case 10:
    if ((((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'q')) &&
         ((param_2[3] == 'u' && (param_2[4] == 'e')))) && (param_2[5] == 's')) &&
       (((param_2[6] == 't' && (param_2[7] == '_')) && ((param_2[8] == 'i' && (param_2[9] == 'd'))))
       )) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if ((((((*param_2 == 's') && (param_2[1] == 'u')) && (param_2[2] == 'b')) &&
         (((param_2[3] == 'a' && (param_2[4] == 'g')) &&
          ((param_2[5] == 'e' && ((param_2[6] == 'n' && (param_2[7] == 't')))))))) &&
        (param_2[8] == '_')) && (param_2[9] == 'i')) {
      uVar2 = 2;
      cVar1 = param_2[10];
      goto joined_r0x004f4a3c;
    }
  }
  uVar2 = 4;
LAB_004f4a40:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


