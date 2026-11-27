// 004ef190 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 1:
    if ((char)*param_2 == '0') {
LAB_004ef226:
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 4:
    if ((int)*param_2 == 0x6f72657a) goto LAB_004ef226;
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x646e && (int)*param_2 == 0x65707061) {
LAB_004ef215:
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6563616c && (int)*param_2 == 0x6c706572)
    goto LAB_004ef226;
    break;
  case 8:
    if (*param_2 == 0x6c6169636966666f) goto LAB_004ef215;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6c6c75665f6c6169 && *param_2 == 0x6c6169636966666f
       ) goto LAB_004ef215;
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_2c3f00c6db51fc4e52b1607637b553f4_30_llvm_6489901693990513673,6);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


