// 004f4510 <serde_json[dc3825464c436029]::error::Error>

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
    if ((((*param_2 == 's') && (param_2[1] == 't')) && (param_2[2] == 'a')) &&
       (((param_2[3] == 't' && (param_2[4] == 'u')) && (uVar2 = 3, param_2[5] == 's'))))
    goto LAB_004f47b9;
    break;
  case 9:
    if ((((*param_2 == 's') && (param_2[1] == 't')) &&
        ((param_2[2] == 'r' && ((param_2[3] == 'e' && (param_2[4] == 'a')))))) &&
       ((param_2[5] == 'm' && ((param_2[6] == '_' && (param_2[7] == 'i')))))) {
      uVar2 = 1;
      cVar1 = param_2[8];
joined_r0x004f46bd:
      if (cVar1 == 'd') goto LAB_004f47b9;
    }
    break;
  case 10:
    if (*param_2 == 'e') {
      if (((param_2[1] == 'r') && (param_2[2] == 'r')) &&
         (((param_2[3] == 'o' && ((param_2[4] == 'r' && (param_2[5] == '_')))) &&
          ((param_2[6] == 'b' &&
           (((param_2[7] == 'o' && (param_2[8] == 'd')) && (uVar2 = 6, param_2[9] == 'y'))))))))
      goto LAB_004f47b9;
    }
    else if (((((*param_2 == 'r') && (param_2[1] == 'e')) &&
              ((param_2[2] == 'q' && ((param_2[3] == 'u' && (param_2[4] == 'e')))))) &&
             (param_2[5] == 's')) &&
            ((((param_2[6] == 't' && (param_2[7] == '_')) && (param_2[8] == 'i')) &&
             (param_2[9] == 'd')))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*param_2 == 'r') {
      if (((param_2[1] == 'e') && (param_2[2] == 't')) &&
         ((((param_2[3] == 'r' && ((param_2[4] == 'y' && (param_2[5] == '_')))) &&
           (param_2[6] == 'a')) &&
          ((((param_2[7] == 'f' && (param_2[8] == 't')) && (param_2[9] == 'e')) &&
           (uVar2 = 5, param_2[10] == 'r')))))) goto LAB_004f47b9;
    }
    else if ((((*param_2 == 's') && (param_2[1] == 'u')) &&
             ((param_2[2] == 'b' && ((param_2[3] == 'a' && (param_2[4] == 'g')))))) &&
            ((param_2[5] == 'e' &&
             ((((param_2[6] == 'n' && (param_2[7] == 't')) && (param_2[8] == '_')) &&
              (param_2[9] == 'i')))))) {
      uVar2 = 2;
      cVar1 = param_2[10];
      goto joined_r0x004f46bd;
    }
    break;
  case 0xc:
    if (((((*param_2 == 'c') && (param_2[1] == 'o')) && (param_2[2] == 'n')) &&
        ((((param_2[3] == 't' && (param_2[4] == 'e')) &&
          ((param_2[5] == 'n' && ((param_2[6] == 't' && (param_2[7] == '_')))))) &&
         (param_2[8] == 't')))) &&
       (((param_2[9] == 'y' && (param_2[10] == 'p')) && (uVar2 = 4, param_2[0xb] == 'e'))))
    goto LAB_004f47b9;
  }
  uVar2 = 7;
LAB_004f47b9:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


