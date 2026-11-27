// 00640100 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  switch(param_3) {
  case 5:
    cVar1 = *param_2;
    if (cVar1 == 'v') {
      if (((param_2[1] == 'm') && (param_2[2] == '_')) &&
         ((param_2[3] == 'i' && (param_2[4] == 'd')))) {
        *param_1 = 0x1400;
        return param_1;
      }
    }
    else if (cVar1 == 'n') {
      if ((((param_2[1] == 'e') && (param_2[2] == 't')) && (param_2[3] == 'n')) &&
         (param_2[4] == 's')) {
        *param_1 = 0x1000;
        return param_1;
      }
    }
    else if (((cVar1 == 'm') && (param_2[1] == 'o')) &&
            ((param_2[2] == 'd' && ((param_2[3] == 'e' && (param_2[4] == 'l')))))) {
      *param_1 = 0xc00;
      return param_1;
    }
    break;
  case 6:
    if (((((*param_2 == 'e') && (param_2[1] == 'n')) && (param_2[2] == 'v')) &&
        ((param_2[3] == '_' && (param_2[4] == 'i')))) && (param_2[5] == 'd')) {
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 7:
    cVar1 = *param_2;
    if (cVar1 == 'a') {
      if (((((param_2[1] == 'g') && (param_2[2] == 'y')) && (param_2[3] == '_')) &&
          ((param_2[4] == 'b' && (param_2[5] == 'i')))) && (param_2[6] == 'n')) {
        *param_1 = 0xd00;
        return param_1;
      }
    }
    else if (cVar1 == 'e') {
      if (((param_2[1] == 'n') && (param_2[2] == 'a')) &&
         ((param_2[3] == 'b' &&
          (((param_2[4] == 'l' && (param_2[5] == 'e')) && (param_2[6] == 'd')))))) {
        *param_1 = 0x1600;
        return param_1;
      }
    }
    else if ((((cVar1 == 'r') && (param_2[1] == 'u')) &&
             ((param_2[2] == 'n' && ((param_2[3] == '_' && (param_2[4] == 'd')))))) &&
            ((param_2[5] == 'i' && (param_2[6] == 'r')))) {
      *param_1 = 0x400;
      return param_1;
    }
    break;
  case 8:
    cVar1 = *param_2;
    if (cVar1 == 'w') {
      if (((param_2[1] == 'o') && (param_2[2] == 'r')) &&
         (((param_2[3] == 'k' &&
           (((param_2[4] == '_' && (param_2[5] == 'd')) && (param_2[6] == 'i')))) &&
          (param_2[7] == 'r')))) {
        *param_1 = 0x300;
        return param_1;
      }
    }
    else if (cVar1 == 'p') {
      if (((((param_2[1] == 'r') && (param_2[2] == 'o')) &&
           ((param_2[3] == 'x' && ((param_2[4] == 'y' && (param_2[5] == '_')))))) &&
          (param_2[6] == 'i')) && (param_2[7] == 'd')) {
        *param_1 = 0x500;
        return param_1;
      }
    }
    else if ((((cVar1 == 'a') && (param_2[1] == 'g')) && (param_2[2] == 'y')) && (param_2[3] == '_')
            ) {
      if (param_2[4] == 'a') {
        if (((param_2[5] == 'r') && (param_2[6] == 'g')) && (param_2[7] == 's')) {
          *param_1 = 0xf00;
          return param_1;
        }
      }
      else if (((param_2[4] == 'h') && (param_2[5] == 'o')) &&
              ((param_2[6] == 'm' && (param_2[7] == 'e')))) {
        *param_1 = 0x200;
        return param_1;
      }
    }
    break;
  case 9:
    if (*param_2 == 'b') {
      if (((param_2[1] == 'r') && (param_2[2] == 'i')) &&
         (((param_2[3] == 'd' &&
           (((param_2[4] == 'g' && (param_2[5] == 'e')) && (param_2[6] == '_')))) &&
          ((param_2[7] == 's' && (param_2[8] == 'o')))))) {
        *param_1 = 0xe00;
        return param_1;
      }
    }
    else if (((*param_2 == 'p') && (param_2[1] == 'r')) &&
            ((param_2[2] == 'o' &&
             (((((param_2[3] == 'x' && (param_2[4] == 'y')) && (param_2[5] == '_')) &&
               ((param_2[6] == 'u' && (param_2[7] == 'r')))) && (param_2[8] == 'l')))))) {
      *param_1 = 0x600;
      return param_1;
    }
    break;
  case 10:
    if ((((*param_2 == 'a') && (param_2[1] == 'c')) &&
        ((param_2[2] == 'c' && (((param_2[3] == 'o' && (param_2[4] == 'u')) && (param_2[5] == 'n')))
         ))) && ((((param_2[6] == 't' && (param_2[7] == '_')) && (param_2[8] == 'i')) &&
                 (param_2[9] == 'd')))) {
      *param_1 = 0;
      return param_1;
    }
    break;
  case 0xb:
    if (((((*param_2 == 'l') && (param_2[1] == 'i')) &&
         ((param_2[2] == 'c' && ((param_2[3] == 'e' && (param_2[4] == 'n')))))) &&
        (param_2[5] == 's')) &&
       ((((param_2[6] == 'e' && (param_2[7] == '_')) && (param_2[8] == 'd')) &&
        ((param_2[9] == 'i' && (param_2[10] == 'r')))))) {
      *param_1 = 0x1500;
      return param_1;
    }
    break;
  case 0xc:
    if ((((((*param_2 == 'p') && (param_2[1] == 'r')) && (param_2[2] == 'o')) &&
         ((param_2[3] == 'x' && (param_2[4] == 'y')))) &&
        (((param_2[5] == '_' && ((param_2[6] == 's' && (param_2[7] == 'h')))) && (param_2[8] == 'a')
         ))) && (((param_2[9] == '2' && (param_2[10] == '5')) && (param_2[0xb] == '6')))) {
      *param_1 = 0x700;
      return param_1;
    }
    break;
  case 0xe:
    if ((((*param_2 == 'm') && (param_2[1] == 'i')) &&
        ((param_2[2] == 'n' && (((param_2[3] == '_' && (param_2[4] == 'w')) && (param_2[5] == 'a')))
         ))) && (((param_2[6] == 'r' && (param_2[7] == 'm')) &&
                 ((param_2[8] == '_' &&
                  (((param_2[9] == 's' && (param_2[10] == 'l')) &&
                   ((param_2[0xb] == 'o' && ((param_2[0xc] == 't' && (param_2[0xd] == 's')))))))))))
       ) {
      *param_1 = 0xa00;
      return param_1;
    }
    break;
  case 0xf:
    if ((((*param_2 == 'm') && (param_2[1] == 'a')) && (param_2[2] == 'x')) &&
       ((((param_2[3] == '_' && (param_2[4] == 'c')) &&
         ((param_2[5] == 'o' && ((param_2[6] == 'n' && (param_2[7] == 'c')))))) &&
        ((param_2[8] == 'u' &&
         (((((param_2[9] == 'r' && (param_2[10] == 'r')) && (param_2[0xb] == 'e')) &&
           ((param_2[0xc] == 'n' && (param_2[0xd] == 'c')))) && (param_2[0xe] == 'y')))))))) {
      *param_1 = 0x900;
      return param_1;
    }
    break;
  case 0x12:
    if (((((*param_2 == 'c') && (param_2[1] == 'a')) && (param_2[2] == 'l')) &&
        ((param_2[3] == 'i' && (param_2[4] == 'b')))) &&
       ((((param_2[5] == 'r' && ((param_2[6] == 'a' && (param_2[7] == 't')))) &&
         ((param_2[8] == 'i' &&
          ((((param_2[9] == 'o' && (param_2[10] == 'n')) && (param_2[0xb] == '_')) &&
           (((param_2[0xc] == 't' && (param_2[0xd] == 'a')) &&
            ((param_2[0xe] == 'r' && ((param_2[0xf] == 'g' && (param_2[0x10] == 'e')))))))))))) &&
        (param_2[0x11] == 't')))) {
      *param_1 = 0x1300;
      return param_1;
    }
    break;
  case 0x14:
    if (*param_2 == 'a') {
      if (((((param_2[1] == 'l') && (param_2[2] == 'l')) && (param_2[3] == 'o')) &&
          ((param_2[4] == 'w' && (param_2[5] == '_')))) &&
         (((param_2[6] == 'l' && ((param_2[7] == 'o' && (param_2[8] == 'o')))) &&
          ((param_2[9] == 'p' &&
           (((((((param_2[10] == 'b' && (param_2[0xb] == 'a')) && (param_2[0xc] == 'c')) &&
               ((param_2[0xd] == 'k' && (param_2[0xe] == '_')))) && (param_2[0xf] == 'p')) &&
             ((param_2[0x10] == 'r' && (param_2[0x11] == 'o')))) &&
            ((param_2[0x12] == 'x' && (param_2[0x13] == 'y')))))))))) {
        *param_1 = 0x1200;
        return param_1;
      }
    }
    else if ((((((*param_2 == 'o') && (param_2[1] == 'a')) && (param_2[2] == 'u')) &&
              (((param_2[3] == 't' && (param_2[4] == 'h')) &&
               ((param_2[5] == '_' && ((param_2[6] == 'p' && (param_2[7] == 'r')))))))) &&
             (((param_2[8] == 'o' &&
               (((param_2[9] == 'x' && (param_2[10] == 'y')) && (param_2[0xb] == '_')))) &&
              ((param_2[0xc] == 'r' && (param_2[0xd] == 'e')))))) &&
            ((((param_2[0xe] == 'q' && ((param_2[0xf] == 'u' && (param_2[0x10] == 'i')))) &&
              (param_2[0x11] == 'r')) && ((param_2[0x12] == 'e' && (param_2[0x13] == 'd')))))) {
      *param_1 = 0x1100;
      return param_1;
    }
    break;
  case 0x15:
    if (((((((*param_2 == 's') && (param_2[1] == 'e')) &&
           ((param_2[2] == 's' &&
            ((((param_2[3] == 's' && (param_2[4] == 'i')) && (param_2[5] == 'o')) &&
             ((param_2[6] == 'n' && (param_2[7] == '_')))))))) && (param_2[8] == 'i')) &&
         ((param_2[9] == 'd' && (param_2[10] == 'l')))) &&
        ((((param_2[0xb] == 'e' &&
           (((param_2[0xc] == '_' && (param_2[0xd] == 't')) && (param_2[0xe] == 't')))) &&
          (((param_2[0xf] == 'l' && (param_2[0x10] == '_')) && (param_2[0x11] == 's')))) &&
         ((param_2[0x12] == 'e' && (param_2[0x13] == 'c')))))) && (param_2[0x14] == 's')) {
      *param_1 = 0xb00;
      return param_1;
    }
    break;
  case 0x18:
    if (((((((*param_2 == 'n') && (param_2[1] == 'e')) && (param_2[2] == 't')) &&
          ((param_2[3] == 'n' && (param_2[4] == 's')))) &&
         ((param_2[5] == '_' && ((param_2[6] == 't' && (param_2[7] == 'r')))))) &&
        ((param_2[8] == 'a' &&
         ((((((param_2[9] == 'n' && (param_2[10] == 's')) && (param_2[0xb] == 'p')) &&
            (((param_2[0xc] == 'a' && (param_2[0xd] == 'r')) &&
             ((param_2[0xe] == 'e' && ((param_2[0xf] == 'n' && (param_2[0x10] == 't')))))))) &&
           (param_2[0x11] == '_')) &&
          (((param_2[0x12] == 'e' && (param_2[0x13] == 'g')) && (param_2[0x14] == 'r')))))))) &&
       (((param_2[0x15] == 'e' && (param_2[0x16] == 's')) && (param_2[0x17] == 's')))) {
      *param_1 = 0x800;
      return param_1;
    }
  }
  (*(code *)PTR_from_utf8_lossy_0079a198)();
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(local_20,local_18,
                        &anon_63b06cc94833867f683611f039574387_59_llvm_6903579140370050947,0x17);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
  return param_1;
}


