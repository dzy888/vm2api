// 004eeda0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  switch(param_3) {
  case 10:
    if (((*param_2 == 'r') &&
        (((((param_2[1] == 'e' && (param_2[2] == 'q')) && (param_2[3] == 'u')) &&
          ((param_2[4] == 'e' && (param_2[5] == 's')))) && (param_2[6] == 't')))) &&
       (((param_2[7] == '_' && (param_2[8] == 'i')) && (uVar2 = 2, param_2[9] == 'd'))))
    goto LAB_004ef067;
    break;
  case 0xb:
    if (*param_2 == 'g') {
      if (((((param_2[1] == 'r') && (param_2[2] == 'p')) && (param_2[3] == 'c')) &&
          ((((param_2[4] == '_' && (param_2[5] == 's')) &&
            ((param_2[6] == 't' && ((param_2[7] == 'a' && (param_2[8] == 't')))))) &&
           (param_2[9] == 'u')))) && (uVar2 = 3, param_2[10] == 's')) goto LAB_004ef067;
    }
    else if ((((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 't')) &&
              ((param_2[3] == 'r' && (param_2[4] == 'y')))) &&
             (((param_2[5] == '_' && ((param_2[6] == 'a' && (param_2[7] == 'f')))) &&
              (param_2[8] == 't')))) && ((param_2[9] == 'e' && (uVar2 = 1, param_2[10] == 'r'))))
    goto LAB_004ef067;
    break;
  case 0xc:
    if (*param_2 == 'c') {
      if (((((param_2[1] == 'o') && (param_2[2] == 'n')) &&
           ((param_2[3] == 't' &&
            (((param_2[4] == 'e' && (param_2[5] == 'n')) && (param_2[6] == 't')))))) &&
          ((param_2[7] == '_' && (param_2[8] == 't')))) &&
         ((param_2[9] == 'y' && ((param_2[10] == 'p' && (param_2[0xb] == 'e')))))) {
        param_1[1] = 0;
        *param_1 = 0;
        return;
      }
    }
    else if ((((((*param_2 == 'g') && (param_2[1] == 'r')) && (param_2[2] == 'p')) &&
              ((param_2[3] == 'c' && (param_2[4] == '_')))) &&
             ((param_2[5] == 'm' && ((param_2[6] == 'e' && (param_2[7] == 's')))))) &&
            ((param_2[8] == 's' && ((param_2[9] == 'a' && (param_2[10] == 'g')))))) {
      uVar2 = 4;
      cVar1 = param_2[0xb];
      goto joined_r0x004eefcd;
    }
    break;
  case 0x10:
    if (((((*param_2 == 'w') && (param_2[1] == 'w')) && (param_2[2] == 'w')) &&
        ((param_2[3] == '_' && (param_2[4] == 'a')))) &&
       (((((param_2[5] == 'u' && ((param_2[6] == 't' && (param_2[7] == 'h')))) &&
          (param_2[8] == 'e')) &&
         (((param_2[9] == 'n' && (param_2[10] == 't')) && (param_2[0xb] == 'i')))) &&
        (((param_2[0xc] == 'c' && (param_2[0xd] == 'a')) && (param_2[0xe] == 't')))))) {
      uVar2 = 5;
      cVar1 = param_2[0xf];
joined_r0x004eefcd:
      if (cVar1 == 'e') goto LAB_004ef067;
    }
  }
  uVar2 = 6;
LAB_004ef067:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


