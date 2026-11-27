// 0041f690 <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_seq::<<alloc[12e961f32105355]::vec::Vec<_>
   as 
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>
    */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_seq::
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    while( true ) {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0))
      break;
      *(ulonglong *)(param_2 + 0x28) = uVar4;
      if (uVar4 == *(ulonglong *)(param_2 + 0x20)) goto LAB_0041f6ea;
    }
    if (bVar2 != 0x5b) {
      local_40 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_invalid_type(param_2,&local_59,&DAT_0078a220);
      goto LAB_0041f7bb;
    }
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      local_48 = 0x18;
      goto LAB_0041f6f3;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar4;
    <<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_seq::
    <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_48,param_2,1);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_seq(param_2);
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (local_48 == -1) {
      if (lVar5 != 0) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar5);
      }
    }
    else {
      if (lVar5 == 0) {
        *param_1 = local_48;
        param_1[1] = local_40;
        param_1[2] = local_38;
        return param_1;
      }
      local_58 = local_40;
      local_50 = lVar5;
      if (local_38 != 0) {
        lVar5 = local_40 + 0x38;
        lVar6 = local_38;
        do {
          if (*(longlong *)(lVar5 + -0x38) != 0) {
            (*(code *)puVar3)();
          }
          if (*(longlong *)(lVar5 + -0x20) != 0) {
            (*(code *)puVar3)();
          }
          if (*(longlong *)(lVar5 + -8) != 0) {
            (*(code *)puVar3)();
          }
          lVar5 = lVar5 + 0x48;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (local_48 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      local_40 = local_50;
    }
LAB_0041f7bb:
    lVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
            <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                      (local_40,param_2);
  }
  else {
LAB_0041f6ea:
    local_48 = 5;
LAB_0041f6f3:
    lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(param_2,&local_48);
  }
  param_1[1] = lVar5;
  *param_1 = -1;
  return param_1;
}


