// 0005e9b0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
    */

undefined2 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
          (undefined2 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  switch(param_3) {
  case 1:
    if (*param_2 == '0') {
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 4:
    if (((*param_2 == 'z') && (param_2[1] == 'e')) && ((param_2[2] == 'r' && (param_2[3] == 'o'))))
    {
LAB_0005eb36:
      *param_1 = 0x100;
      return param_1;
    }
    break;
  case 6:
    if ((((*param_2 != 'a') || (param_2[1] != 'p')) || (param_2[2] != 'p')) ||
       (((param_2[3] != 'e' || (param_2[4] != 'n')) || (param_2[5] != 'd')))) break;
    goto LAB_0005eb12;
  case 7:
    if (((((*param_2 == 'r') && (param_2[1] == 'e')) && (param_2[2] == 'p')) &&
        ((param_2[3] == 'l' && (param_2[4] == 'a')))) &&
       ((param_2[5] == 'c' && (param_2[6] == 'e')))) goto LAB_0005eb36;
    break;
  case 8:
    if ((((*param_2 != 'o') || (param_2[1] != 'f')) ||
        ((param_2[2] != 'f' || ((param_2[3] != 'i' || (param_2[4] != 'c')))))) ||
       ((param_2[5] != 'i' || (param_2[6] != 'a')))) break;
    cVar1 = param_2[7];
    goto joined_r0x0005eb10;
  case 0xd:
    if ((((*param_2 != 'o') || (param_2[1] != 'f')) || (param_2[2] != 'f')) ||
       (((((param_2[3] != 'i' || (param_2[4] != 'c')) ||
          ((param_2[5] != 'i' || ((param_2[6] != 'a' || (param_2[7] != 'l')))))) ||
         (param_2[8] != '_')) ||
        (((param_2[9] != 'f' || (param_2[10] != 'u')) || (param_2[0xb] != 'l')))))) break;
    cVar1 = param_2[0xc];
joined_r0x0005eb10:
    if (cVar1 == 'l') {
LAB_0005eb12:
      *param_1 = 0;
      return param_1;
    }
  }
  (*(code *)PTR_from_utf8_lossy_000c3b20)();
  uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(local_20,local_18,
                          &anon_34149b187fc8a78ca9bac708ccea6bb6_13_llvm_9637358227933645321,6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined1 *)param_1 = 1;
  if (local_28 < 1) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar2,1);
  return param_1;
}


