// 0005ebd0 <serde_json[dc3825464c436029]::error::Error>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 1:
    if ((char)*param_2 == '0') {
LAB_0005ec66:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x6f72657a) goto LAB_0005ec66;
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x646e && (int)*param_2 == 0x65707061) {
LAB_0005ec55:
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6563616c && (int)*param_2 == 0x6c706572)
    goto LAB_0005ec66;
    break;
  case 8:
    if (*param_2 == 0x6c6169636966666f) goto LAB_0005ec55;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6c6c75665f6c6169 && *param_2 == 0x6c6169636966666f
       ) goto LAB_0005ec55;
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_34149b187fc8a78ca9bac708ccea6bb6_13_llvm_9637358227933645321,6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


