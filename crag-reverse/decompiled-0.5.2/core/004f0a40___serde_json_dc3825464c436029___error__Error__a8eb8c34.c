// 004f0a40 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_3 == 9) {
    if ((((((*param_2 == 'r') && (param_2[1] == 's')) && (param_2[2] == 's')) &&
         ((param_2[3] == '_' && (param_2[4] == 'b')))) && (param_2[5] == 'y')) &&
       ((param_2[6] == 't' && (param_2[7] == 'e')))) {
      uVar2 = 2;
      cVar1 = param_2[8];
joined_r0x004f0b40:
      if (cVar1 == 's') goto LAB_004f0b44;
    }
  }
  else if (param_3 == 0xb) {
    if (((((*param_2 == 'a') && (param_2[1] == 'r')) && (param_2[2] == 'e')) &&
        (((param_2[3] == 'n' && (param_2[4] == 'a')) &&
         ((param_2[5] == '_' && ((param_2[6] == 'b' && (param_2[7] == 'y')))))))) &&
       ((param_2[8] == 't' && (param_2[9] == 'e')))) {
      uVar2 = 1;
      cVar1 = param_2[10];
      goto joined_r0x004f0b40;
    }
  }
  else if ((((param_3 == 10) && (*param_2 == 'r')) && (param_2[1] == 'e')) &&
          ((((param_2[2] == 'q' && (param_2[3] == 'u')) &&
            ((param_2[4] == 'e' && ((param_2[5] == 's' && (param_2[6] == 't')))))) &&
           ((param_2[7] == '_' && ((param_2[8] == 'i' && (param_2[9] == 'd')))))))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = 3;
LAB_004f0b44:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


