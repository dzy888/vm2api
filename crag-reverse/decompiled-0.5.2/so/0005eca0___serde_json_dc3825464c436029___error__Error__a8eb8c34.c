// 0005eca0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_3 == 0xf) {
    if (*param_2 == 'f') {
      if ((((param_2[1] == 'o') && (param_2[2] == 'r')) && (param_2[3] == 'c')) &&
         ((((param_2[4] == 'e' && (param_2[5] == 'd')) &&
           ((param_2[6] == '_' && ((param_2[7] == 'm' && (param_2[8] == 'c')))))) &&
          ((param_2[9] == 'p' &&
           ((((param_2[10] == '_' && (param_2[0xb] == 't')) && (param_2[0xc] == 'o')) &&
            ((param_2[0xd] == 'o' && (uVar2 = 6, param_2[0xe] == 'l')))))))))) goto LAB_0005efc9;
    }
    else if ((((*param_2 == 'a') && ((param_2[1] == 'l' && (param_2[2] == 'l')))) &&
             (param_2[3] == 'o')) && ((param_2[4] == 'w' && (param_2[5] == '_')))) {
      switch(param_2[6]) {
      case 'i':
        if ((((param_2[7] == 'm') && (param_2[8] == 'a')) && (param_2[9] == 'g')) &&
           (((param_2[10] == 'e' && (param_2[0xb] == '_')) &&
            ((param_2[0xc] == 'g' && ((param_2[0xd] == 'e' && (uVar2 = 4, param_2[0xe] == 'n')))))))
           ) goto LAB_0005efc9;
        break;
      case 'r':
        if ((param_2[7] == 'e') &&
           (((param_2[8] == 'a' && (param_2[9] == 'd')) &&
            ((param_2[10] == '_' &&
             ((((param_2[0xb] == 'f' && (param_2[0xc] == 'i')) && (param_2[0xd] == 'l')) &&
              (uVar2 = 1, param_2[0xe] == 'e')))))))) goto LAB_0005efc9;
        break;
      case 's':
        if ((((param_2[7] == 'u') && (param_2[8] == 'b')) &&
            ((param_2[9] == 'a' &&
             (((param_2[10] == 'g' && (param_2[0xb] == 'e')) && (param_2[0xc] == 'n')))))) &&
           ((param_2[0xd] == 't' && (uVar2 = 5, param_2[0xe] == 's')))) goto LAB_0005efc9;
        break;
      case 'w':
        if ((((param_2[7] == 'e') && (param_2[8] == 'b')) && (param_2[9] == '_')) &&
           (((param_2[10] == 'f' && (param_2[0xb] == 'e')) &&
            ((param_2[0xc] == 't' && (param_2[0xd] == 'c')))))) {
          uVar2 = 3;
          cVar1 = param_2[0xe];
          goto joined_r0x0005efc5;
        }
      }
    }
  }
  else if ((((param_3 == 0x10) &&
            (((*param_2 == 'a' && (param_2[1] == 'l')) && (param_2[2] == 'l')))) &&
           ((param_2[3] == 'o' && (param_2[4] == 'w')))) && (param_2[5] == '_')) {
    if (param_2[6] == 'w') {
      if ((((param_2[7] == 'e') && (param_2[8] == 'b')) &&
          ((param_2[9] == '_' &&
           (((param_2[10] == 's' && (param_2[0xb] == 'e')) && (param_2[0xc] == 'a')))))) &&
         ((param_2[0xd] == 'r' && (param_2[0xe] == 'c')))) {
        uVar2 = 2;
        cVar1 = param_2[0xf];
joined_r0x0005efc5:
        if (cVar1 == 'h') goto LAB_0005efc9;
      }
    }
    else if ((((param_2[6] == 'c') && (param_2[7] == 'l')) &&
             ((param_2[8] == 'i' &&
              (((((param_2[9] == 'e' && (param_2[10] == 'n')) && (param_2[0xb] == 't')) &&
                ((param_2[0xc] == '_' && (param_2[0xd] == 'm')))) && (param_2[0xe] == 'c')))))) &&
            (param_2[0xf] == 'p')) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
  }
  uVar2 = 7;
LAB_0005efc9:
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


