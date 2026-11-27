// 004f0670 <serde_json[dc3825464c436029]::error::Error>

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
  
  if (param_3 == 5) {
    if ((((*param_2 == 'f') && (param_2[1] == 'r')) && (param_2[2] == 'a')) &&
       ((param_2[3] == 'm' && (uVar1 = 2, param_2[4] == 'e')))) goto LAB_004f073b;
  }
  else if (param_3 == 10) {
    if (*param_2 == 'a') {
      if ((((param_2[1] == 't') && (param_2[2] == 't')) &&
          ((param_2[3] == 'e' &&
           ((((param_2[4] == 'm' && (param_2[5] == 'p')) && (param_2[6] == 't')) &&
            ((param_2[7] == '_' && (param_2[8] == 'i')))))))) && (uVar1 = 1, param_2[9] == 'd'))
      goto LAB_004f073b;
    }
    else if ((((*param_2 == 'r') && (param_2[1] == 'e')) &&
             ((param_2[2] == 'q' &&
              (((param_2[3] == 'u' && (param_2[4] == 'e')) && (param_2[5] == 's')))))) &&
            ((((param_2[6] == 't' && (param_2[7] == '_')) && (param_2[8] == 'i')) &&
             (param_2[9] == 'd')))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = 3;
LAB_004f073b:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


