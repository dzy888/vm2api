// 00033b60 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  switch(param_3) {
  case 3:
    if (((*param_2 == 's') && (param_2[1] == 'e')) && (param_2[2] == 'q')) {
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 6:
    cVar1 = *param_2;
    if (cVar1 == 'l') {
      if (((param_2[1] == 'e') && (param_2[2] == 'n')) &&
         ((param_2[3] == 'g' && ((param_2[4] == 't' && (param_2[5] == 'h')))))) {
        *param_1 = 0x300;
        return param_1;
      }
    }
    else if (cVar1 == 's') {
      if ((((param_2[1] == 'h') && (param_2[2] == 'a')) && (param_2[3] == '2')) &&
         ((param_2[4] == '5' && (param_2[5] == '6')))) {
        *param_1 = 0x400;
        return param_1;
      }
    }
    else if (((cVar1 == 'o') && (param_2[1] == 'f')) &&
            ((param_2[2] == 'f' &&
             (((param_2[3] == 's' && (param_2[4] == 'e')) && (param_2[5] == 't')))))) {
      *param_1 = 0x200;
      return param_1;
    }
    break;
  case 10:
    if ((((*param_2 == 'r') && (param_2[1] == 'e')) &&
        ((param_2[2] == 'q' && (((param_2[3] == 'u' && (param_2[4] == 'e')) && (param_2[5] == 's')))
         ))) && (((param_2[6] == 't' && (param_2[7] == '_')) &&
                 ((param_2[8] == 'i' && (param_2[9] == 'd')))))) {
      *param_1 = 0;
      return param_1;
    }
    break;
  case 0xb:
    if (((*param_2 == 't') && (param_2[1] == 'o')) &&
       (((param_2[2] == 'o' && ((param_2[3] == 'l' && (param_2[4] == '_')))) &&
        ((param_2[5] == 'f' &&
         ((((param_2[6] == 'i' && (param_2[7] == 'l')) && (param_2[8] == 't')) &&
          ((param_2[9] == 'e' && (param_2[10] == 'r')))))))))) {
      *param_1 = 0xc00;
      return param_1;
    }
    break;
  case 0xd:
    if (((((*param_2 == 's') && (param_2[1] == 'y')) && (param_2[2] == 's')) &&
        ((((param_2[3] == 't' && (param_2[4] == 'e')) &&
          ((param_2[5] == 'm' && ((param_2[6] == '_' && (param_2[7] == 'p')))))) &&
         (param_2[8] == 'r')))) &&
       ((((param_2[9] == 'o' && (param_2[10] == 'm')) && (param_2[0xb] == 'p')) &&
        (param_2[0xc] == 't')))) {
      *param_1 = 0x900;
      return param_1;
    }
    break;
  case 0xe:
    if ((((*param_2 == 't') && (param_2[1] == 'h')) &&
        ((param_2[2] == 'i' &&
         ((((((param_2[3] == 'n' && (param_2[4] == 'k')) && (param_2[5] == 'i')) &&
            ((param_2[6] == 'n' && (param_2[7] == 'g')))) && (param_2[8] == '_')) &&
          ((param_2[9] == 'l' && (param_2[10] == 'e')))))))) &&
       ((param_2[0xb] == 'v' && ((param_2[0xc] == 'e' && (param_2[0xd] == 'l')))))) {
      *param_1 = 0xa00;
      return param_1;
    }
    break;
  case 0xf:
    if ((((*param_2 == 'a') && (param_2[1] == 'l')) && (param_2[2] == 'l')) &&
       (((param_2[3] == 'o' && (param_2[4] == 'w')) &&
        ((((param_2[5] == '_' && ((param_2[6] == 's' && (param_2[7] == 'u')))) &&
          (param_2[8] == 'b')) &&
         ((((param_2[9] == 'a' && (param_2[10] == 'g')) && (param_2[0xb] == 'e')) &&
          (((param_2[0xc] == 'n' && (param_2[0xd] == 't')) && (param_2[0xe] == 's')))))))))) {
      *param_1 = 0x600;
      return param_1;
    }
    break;
  case 0x10:
    if (((((*param_2 == 'i') && (param_2[1] == 'n')) &&
         ((param_2[2] == 'c' && ((param_2[3] == 'l' && (param_2[4] == 'u')))))) &&
        ((param_2[5] == 'd' &&
         ((((((param_2[6] == 'e' && (param_2[7] == '_')) && (param_2[8] == 't')) &&
            ((param_2[9] == 'h' && (param_2[10] == 'o')))) &&
           ((param_2[0xb] == 'u' && ((param_2[0xc] == 'g' && (param_2[0xd] == 'h')))))) &&
          (param_2[0xe] == 't')))))) && (param_2[0xf] == 's')) {
      *param_1 = 0xb00;
      return param_1;
    }
    break;
  case 0x12:
    if ((((*param_2 == 's') && (param_2[1] == 'y')) &&
        ((param_2[2] == 's' && ((param_2[3] == 't' && (param_2[4] == 'e')))))) &&
       ((((param_2[5] == 'm' &&
          ((((param_2[6] == '_' && (param_2[7] == 'p')) && (param_2[8] == 'r')) &&
           ((param_2[9] == 'o' && (param_2[10] == 'm')))))) &&
         (((param_2[0xb] == 'p' && ((param_2[0xc] == 't' && (param_2[0xd] == '_')))) &&
          (param_2[0xe] == 'm')))) &&
        (((param_2[0xf] == 'o' && (param_2[0x10] == 'd')) && (param_2[0x11] == 'e')))))) {
      *param_1 = 0x800;
      return param_1;
    }
    break;
  case 0x13:
    if (((((*param_2 == 'a') && (param_2[1] == 'l')) &&
         (((param_2[2] == 'l' && ((param_2[3] == 'o' && (param_2[4] == 'w')))) &&
          (param_2[5] == '_')))) &&
        (((((param_2[6] == 'm' && (param_2[7] == 'u')) && (param_2[8] == 'l')) &&
          ((param_2[9] == 't' && (param_2[10] == 'i')))) &&
         ((param_2[0xb] == '_' && ((param_2[0xc] == 'a' && (param_2[0xd] == 't')))))))) &&
       (((param_2[0xe] == 't' &&
         (((param_2[0xf] == 'e' && (param_2[0x10] == 'm')) && (param_2[0x11] == 'p')))) &&
        (param_2[0x12] == 't')))) {
      *param_1 = 0x500;
      return param_1;
    }
    break;
  case 0x1f:
    if ((((((((*param_2 == 'e') && (param_2[1] == 'x')) && (param_2[2] == 'p')) &&
           (((param_2[3] == 'e' && (param_2[4] == 'c')) &&
            ((param_2[5] == 't' && ((param_2[6] == 'e' && (param_2[7] == 'd')))))))) &&
          (param_2[8] == '_')) &&
         ((((((param_2[9] == 'n' && (param_2[10] == 'a')) && (param_2[0xb] == 't')) &&
            ((param_2[0xc] == 'i' && (param_2[0xd] == 'v')))) && (param_2[0xe] == 'e')) &&
          ((param_2[0xf] == '_' && (param_2[0x10] == 'c')))))) &&
        ((param_2[0x11] == 'o' &&
         (((param_2[0x12] == 'n' && (param_2[0x13] == 'v')) && (param_2[0x14] == 'e')))))) &&
       ((((((param_2[0x15] == 'r' && (param_2[0x16] == 's')) && (param_2[0x17] == 'a')) &&
          ((param_2[0x18] == 't' && (param_2[0x19] == 'i')))) &&
         ((param_2[0x1a] == 'o' &&
          (((param_2[0x1b] == 'n' && (param_2[0x1c] == '_')) && (param_2[0x1d] == 'i')))))) &&
        (param_2[0x1e] == 'd')))) {
      *param_1 = 0x700;
      return param_1;
    }
  }
  (*(code *)PTR_from_utf8_lossy_000c3b20)();
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(local_20,local_18,
                        &anon_da5c47adb6433ca5f625c1319540aa31_47_llvm_1675394880211241453,0xd);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar2,1);
  return param_1;
}


