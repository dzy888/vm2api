// 0047caf0 <serde_json[dc3825464c436029]::error::Error>

/* <<craggemini_core[66f3c71560d70857]::subagents::SubagentStatus as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_str::<serde_json[dc3825464c436029]::error::Error>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::subagents::SubagentStatus_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_str::<serde_json[dc3825464c436029]::error::Error>
          (undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 6) {
    if (*(short *)((longlong)param_2 + 4) == 0x6465 && (int)*param_2 == 0x6c6c696b) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x6465 && (int)*param_2 == 0x6c696166) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if ((char)param_2[1] == 'd' && *param_2 == 0x6574656c706d6f63) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 7) &&
          (*(int *)((longlong)param_2 + 3) == 0x676e696e && (int)*param_2 == 0x6e6e7572)) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar1 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
          unknown_variant(param_2,param_3,
                          &anon_d4d3cd51d1d91a17bb767b00236b3a9b_32_llvm_17589326713533067298,4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return;
}


