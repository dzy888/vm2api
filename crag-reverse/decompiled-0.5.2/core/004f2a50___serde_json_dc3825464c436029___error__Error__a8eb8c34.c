// 004f2a50 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,char *param_2,longlong param_3)

{
  undefined1 uVar1;
  
  if (param_3 == 4) {
    if ((((*param_2 == 't') && (param_2[1] == 'o')) && (param_2[2] == 'o')) &&
       (uVar1 = 1, param_2[3] == 'l')) goto LAB_004f2afa;
  }
  else if (param_3 == 7) {
    if (((((*param_2 == 'p') && (param_2[1] == 'a')) &&
         ((param_2[2] == 'y' && ((param_2[3] == 'l' && (param_2[4] == 'o')))))) &&
        (param_2[5] == 'a')) && (uVar1 = 2, param_2[6] == 'd')) goto LAB_004f2afa;
  }
  else if (((((param_3 == 10) && (*param_2 == 'r')) && (param_2[1] == 'e')) &&
           ((param_2[2] == 'q' && (param_2[3] == 'u')))) &&
          (((param_2[4] == 'e' && ((param_2[5] == 's' && (param_2[6] == 't')))) &&
           ((param_2[7] == '_' && ((param_2[8] == 'i' && (param_2[9] == 'd')))))))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar1 = 3;
LAB_004f2afa:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


