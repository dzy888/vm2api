// 004f2810 <serde_json[dc3825464c436029]::error::Error>

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
  case 3:
    if (((*param_2 == 's') && (param_2[1] == 'e')) && (uVar2 = 2, param_2[2] == 'q')) {
LAB_004f284d:
      param_1[1] = uVar2;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if (((*param_2 == 't') && ((param_2[1] == 'o' && (param_2[2] == 'o')))) &&
       (uVar2 = 1, param_2[3] == 'l')) goto LAB_004f284d;
    break;
  case 6:
    cVar1 = *param_2;
    if (cVar1 == 'l') {
      if ((((param_2[1] == 'e') && (param_2[2] == 'n')) && (param_2[3] == 'g')) &&
         ((param_2[4] == 't' && (uVar2 = 4, param_2[5] == 'h')))) goto LAB_004f284d;
    }
    else if (cVar1 == 's') {
      if (((param_2[1] == 'h') && (param_2[2] == 'a')) &&
         ((param_2[3] == '2' && ((param_2[4] == '5' && (uVar2 = 5, param_2[5] == '6'))))))
      goto LAB_004f284d;
    }
    else if ((cVar1 == 'o') &&
            ((((param_2[1] == 'f' && (param_2[2] == 'f')) && (param_2[3] == 's')) &&
             ((param_2[4] == 'e' && (uVar2 = 3, param_2[5] == 't')))))) goto LAB_004f284d;
    break;
  case 10:
    if (((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'q')) &&
        (((param_2[3] == 'u' && (param_2[4] == 'e')) &&
         ((param_2[5] == 's' && ((param_2[6] == 't' && (param_2[7] == '_')))))))) &&
       ((param_2[8] == 'i' && (param_2[9] == 'd')))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0;
  return;
}


