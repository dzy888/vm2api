// 004f0120 <serde_json[dc3825464c436029]::error::Error>

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
  case 6:
    if (((*param_2 == 's') && (param_2[1] == 't')) &&
       ((param_2[2] == 'a' && ((param_2[3] == 't' && (param_2[4] == 'u')))))) {
      uVar2 = 2;
      cVar1 = param_2[5];
joined_r0x004f02f2:
      if (cVar1 == 's') goto LAB_004f0458;
    }
    break;
  case 7:
    if ((((*param_2 == 'h') && (param_2[1] == 'e')) && (param_2[2] == 'a')) &&
       (((param_2[3] == 'd' && (param_2[4] == 'e')) && (param_2[5] == 'r')))) {
      uVar2 = 7;
      cVar1 = param_2[6];
      goto joined_r0x004f02f2;
    }
    break;
  case 10:
    cVar1 = *param_2;
    if (cVar1 == 'a') {
      if (((((param_2[1] == 't') && (param_2[2] == 't')) && (param_2[3] == 'e')) &&
          (((param_2[4] == 'm' && (param_2[5] == 'p')) &&
           ((param_2[6] == 't' && ((param_2[7] == '_' && (param_2[8] == 'i')))))))) &&
         (uVar2 = 1, param_2[9] == 'd')) goto LAB_004f0458;
    }
    else if (cVar1 == 'e') {
      if ((((param_2[1] == 'r') && (param_2[2] == 'r')) && (param_2[3] == 'o')) &&
         (((param_2[4] == 'r' && (param_2[5] == '_')) &&
          (((param_2[6] == 'b' && ((param_2[7] == 'o' && (param_2[8] == 'd')))) &&
           (uVar2 = 5, param_2[9] == 'y')))))) goto LAB_004f0458;
    }
    else if (((((((cVar1 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'q')) &&
               ((param_2[3] == 'u' && (param_2[4] == 'e')))) &&
              ((param_2[5] == 's' && ((param_2[6] == 't' && (param_2[7] == '_')))))) &&
             (param_2[8] == 'i')) && (param_2[9] == 'd')) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if ((((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 't')) &&
         ((param_2[3] == 'r' && (param_2[4] == 'y')))) && (param_2[5] == '_')) &&
       (((param_2[6] == 'a' && (param_2[7] == 'f')) && ((param_2[8] == 't' && (param_2[9] == 'e'))))
       )) {
      uVar2 = 4;
      cVar1 = param_2[10];
joined_r0x004f02a6:
      if (cVar1 == 'r') goto LAB_004f0458;
    }
    break;
  case 0xc:
    if ((((*param_2 == 'c') && (param_2[1] == 'o')) &&
        ((param_2[2] == 'n' && (((param_2[3] == 't' && (param_2[4] == 'e')) && (param_2[5] == 'n')))
         ))) && (((((param_2[6] == 't' && (param_2[7] == '_')) && (param_2[8] == 't')) &&
                  ((param_2[9] == 'y' && (param_2[10] == 'p')))) && (uVar2 = 3, param_2[0xb] == 'e')
                 ))) goto LAB_004f0458;
    break;
  case 0x11:
    if ((((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'q')) &&
         ((param_2[3] == 'u' && (param_2[4] == 'e')))) &&
        (((param_2[5] == 's' && ((param_2[6] == 't' && (param_2[7] == '_')))) && (param_2[8] == 'i')
         ))) && ((((param_2[9] == 'd' && (param_2[10] == '_')) && (param_2[0xb] == 'h')) &&
                 (((param_2[0xc] == 'e' && (param_2[0xd] == 'a')) &&
                  ((param_2[0xe] == 'd' && (param_2[0xf] == 'e')))))))) {
      uVar2 = 6;
      cVar1 = param_2[0x10];
      goto joined_r0x004f02a6;
    }
  }
  uVar2 = 8;
LAB_004f0458:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


