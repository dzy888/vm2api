// 004efe40 <serde_json[dc3825464c436029]::error::Error>

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
  
  if (param_3 == 0x16) {
    if (((((((*param_2 == 'n') && (param_2[1] == 'a')) && (param_2[2] == 't')) &&
          (((param_2[3] == 'i' && (param_2[4] == 'v')) &&
           ((param_2[5] == 'e' && ((param_2[6] == '_' && (param_2[7] == 'c')))))))) &&
         (param_2[8] == 'o')) &&
        ((((((param_2[9] == 'n' && (param_2[10] == 'v')) && (param_2[0xb] == 'e')) &&
           ((param_2[0xc] == 'r' && (param_2[0xd] == 's')))) && (param_2[0xe] == 'a')) &&
         ((param_2[0xf] == 't' && (param_2[0x10] == 'i')))))) &&
       (((param_2[0x11] == 'o' &&
         (((param_2[0x12] == 'n' && (param_2[0x13] == '_')) && (param_2[0x14] == 'i')))) &&
        (uVar1 = 1, param_2[0x15] == 'd')))) goto LAB_004eff47;
  }
  else if (((((param_3 == 10) && (*param_2 == 'r')) &&
            ((param_2[1] == 'e' && ((param_2[2] == 'q' && (param_2[3] == 'u')))))) &&
           ((param_2[4] == 'e' &&
            (((param_2[5] == 's' && (param_2[6] == 't')) && (param_2[7] == '_')))))) &&
          ((param_2[8] == 'i' && (param_2[9] == 'd')))) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar1 = 2;
LAB_004eff47:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


