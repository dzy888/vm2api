// 004ef710 <serde_json[dc3825464c436029]::error::Error>

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
    if ((*param_2 != 'p') || (param_2[1] != 'i')) break;
    uVar2 = 2;
    cVar1 = param_2[2];
    goto joined_r0x004ef917;
  case 8:
    if ((((*param_2 == 'p') && (param_2[1] == 'r')) &&
        ((param_2[2] == 'o' && (((param_2[3] == 't' && (param_2[4] == 'o')) && (param_2[5] == 'c')))
         ))) && ((param_2[6] == 'o' && (param_2[7] == 'l')))) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((((*param_2 != 's') || (param_2[1] != 'e')) ||
        ((param_2[2] != 's' || (((param_2[3] != 's' || (param_2[4] != 'i')) || (param_2[5] != 'o')))
         ))) || (((param_2[6] != 'n' || (param_2[7] != '_')) ||
                 ((param_2[8] != 'i' || (uVar2 = 1, param_2[9] != 'd')))))) break;
    goto LAB_004ef74d;
  case 0xc:
    if ((((*param_2 == 'c') && (param_2[1] == 'a')) &&
        ((param_2[2] == 'p' && ((param_2[3] == 'a' && (param_2[4] == 'b')))))) &&
       ((param_2[5] == 'i' &&
        (((((param_2[6] == 'l' && (param_2[7] == 'i')) && (param_2[8] == 't')) &&
          ((param_2[9] == 'i' && (param_2[10] == 'e')))) && (uVar2 = 3, param_2[0xb] == 's'))))))
    goto LAB_004ef74d;
    break;
  case 0x16:
    if (((((((*param_2 != 'n') || (param_2[1] != 'a')) || (param_2[2] != 't')) ||
          ((param_2[3] != 'i' || (param_2[4] != 'v')))) || (param_2[5] != 'e')) ||
        ((((param_2[6] != '_' || (param_2[7] != 'c')) ||
          ((param_2[8] != 'o' ||
           (((param_2[9] != 'n' || (param_2[10] != 'v')) || (param_2[0xb] != 'e')))))) ||
         ((param_2[0xc] != 'r' || (param_2[0xd] != 's')))))) ||
       ((param_2[0xe] != 'a' ||
        (((param_2[0xf] != 't' || (param_2[0x10] != 'i')) ||
         ((param_2[0x11] != 'o' ||
          (((param_2[0x12] != 'n' || (param_2[0x13] != '_')) || (param_2[0x14] != 'i'))))))))))
    break;
    uVar2 = 4;
    cVar1 = param_2[0x15];
joined_r0x004ef917:
    if (cVar1 == 'd') {
LAB_004ef74d:
      param_1[1] = uVar2;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0;
  return;
}


