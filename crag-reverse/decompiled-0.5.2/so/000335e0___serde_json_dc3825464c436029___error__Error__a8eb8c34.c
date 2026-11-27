// 000335e0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  switch(param_3) {
  case 4:
    if (((*param_2 == 't') && (param_2[1] == 'e')) && ((param_2[2] == 'x' && (param_2[3] == 't'))))
    {
      *param_1 = 0x100;
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
    if ((((((*param_2 == 't') && (param_2[1] == 'o')) &&
          ((param_2[2] == 'o' && ((param_2[3] == 'l' && (param_2[4] == '_')))))) &&
         (param_2[5] == 'f')) &&
        (((param_2[6] == 'i' && (param_2[7] == 'l')) && (param_2[8] == 't')))) &&
       ((param_2[9] == 'e' && (param_2[10] == 'r')))) {
      *param_1 = 0x600;
      return param_1;
    }
    break;
  case 0xd:
    if ((((((*param_2 == 's') && (param_2[1] == 'y')) && (param_2[2] == 's')) &&
         ((param_2[3] == 't' && (param_2[4] == 'e')))) &&
        (((param_2[5] == 'm' && ((param_2[6] == '_' && (param_2[7] == 'p')))) && (param_2[8] == 'r')
         ))) && ((((param_2[9] == 'o' && (param_2[10] == 'm')) && (param_2[0xb] == 'p')) &&
                 (param_2[0xc] == 't')))) {
      *param_1 = 0x300;
      return param_1;
    }
    break;
  case 0xe:
    if (((((*param_2 == 't') && (param_2[1] == 'h')) &&
         ((param_2[2] == 'i' &&
          (((param_2[3] == 'n' && (param_2[4] == 'k')) && (param_2[5] == 'i')))))) &&
        ((param_2[6] == 'n' && (param_2[7] == 'g')))) &&
       ((param_2[8] == '_' &&
        (((param_2[9] == 'l' && (param_2[10] == 'e')) &&
         ((param_2[0xb] == 'v' && ((param_2[0xc] == 'e' && (param_2[0xd] == 'l')))))))))) {
      *param_1 = 0x400;
      return param_1;
    }
    break;
  case 0x10:
    if (((((*param_2 == 'i') && (param_2[1] == 'n')) && (param_2[2] == 'c')) &&
        (((param_2[3] == 'l' && (param_2[4] == 'u')) &&
         (((param_2[5] == 'd' && ((param_2[6] == 'e' && (param_2[7] == '_')))) &&
          ((param_2[8] == 't' &&
           ((((param_2[9] == 'h' && (param_2[10] == 'o')) && (param_2[0xb] == 'u')) &&
            ((param_2[0xc] == 'g' && (param_2[0xd] == 'h')))))))))))) &&
       ((param_2[0xe] == 't' && (param_2[0xf] == 's')))) {
      *param_1 = 0x500;
      return param_1;
    }
    break;
  case 0x12:
    if ((((((((*param_2 == 's') && (param_2[1] == 'y')) && (param_2[2] == 's')) &&
           ((param_2[3] == 't' && (param_2[4] == 'e')))) && (param_2[5] == 'm')) &&
         ((param_2[6] == '_' && (param_2[7] == 'p')))) &&
        ((param_2[8] == 'r' &&
         (((param_2[9] == 'o' && (param_2[10] == 'm')) && (param_2[0xb] == 'p')))))) &&
       ((((param_2[0xc] == 't' && (param_2[0xd] == '_')) && (param_2[0xe] == 'm')) &&
        (((param_2[0xf] == 'o' && (param_2[0x10] == 'd')) && (param_2[0x11] == 'e')))))) {
      *param_1 = 0x200;
      return param_1;
    }
  }
  (*(code *)PTR_from_utf8_lossy_000c3b20)();
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_field(local_20,local_18,
                        &anon_da5c47adb6433ca5f625c1319540aa31_34_llvm_1675394880211241453,7);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar1,1);
  return param_1;
}


