// 00269ff0 <craggemini_core[66f3c71560d70857]::resume::TurnCommitMeta>

/* WARNING: Switch with 1 destination removed at 0x0026a05c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::TurnCommitMeta>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::TurnCommitMeta>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    lVar2 = param_1[1];
    for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar2);
      lVar2 = lVar2 + 200;
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


