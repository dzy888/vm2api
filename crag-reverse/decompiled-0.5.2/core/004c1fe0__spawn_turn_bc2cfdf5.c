// 004c1fe0 spawn_turn

/* WARNING: Switch with 1 destination removed at 0x004c21cc */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 local_73f8 [104];
  ulonglong local_7390;
  undefined8 local_7388;
  undefined1 local_7378 [368];
  undefined1 local_7208 [472];
  undefined8 local_7030;
  undefined4 local_6ce8;
  undefined4 uStack_6ce4;
  undefined4 uStack_6ce0;
  undefined4 uStack_6cdc;
  undefined8 local_6cd8;
  undefined8 local_6cd0;
  undefined8 local_6cc8;
  undefined8 local_6cc0;
  undefined8 local_6cb8;
  undefined8 local_6cb0;
  undefined8 local_6ca8;
  longlong local_6ca0;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4030;
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  undefined1 local_38;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  local_7030 = 0;
  effective_global_config(local_7378,param_1);
  uVar7 = (*(code *)PTR_clone_00799208)();
  sample_memory_snapshot(local_73f8,param_1);
  uVar8 = total_live_slots(param_1);
  plVar1 = *(longlong **)(param_1 + 0x188);
  LOCK();
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar9,1) == *plVar1 < 0) {
    plVar1 = *(longlong **)(param_1 + 0x180);
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    LOCK();
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + 1;
    puVar5 = PTR_memcpy_00799008;
    UNLOCK();
    if (*plVar1 != 0 && SCARRY8(lVar9,1) == *plVar1 < 0) {
      lVar9 = 0;
      if (uVar8 <= local_7390) {
        lVar9 = local_7390 - uVar8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x180);
      local_6cd0 = param_3;
      local_6cc8 = param_2;
      (*(code *)PTR_memcpy_00799008)(plVar1,0x170);
      local_6ce8 = *param_4;
      uStack_6ce4 = param_4[1];
      uStack_6ce0 = param_4[2];
      uStack_6cdc = param_4[3];
      local_6cd8 = *(undefined8 *)(param_4 + 4);
      (*(code *)puVar5)(local_6ce8,0x3b0);
      local_6ca8 = local_7388;
      local_38 = 0;
      local_6cc0 = uVar2;
      local_6cb8 = uVar3;
      local_6cb0 = uVar7;
      local_6ca0 = lVar9;
      lVar9 = tokio[d7d91d38da47d894]::task::spawn::spawn::
              <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::_closure_0_>
                        (local_7208,
                         &anon_572fb51faa0db1e51baf8d00d92dd3e9_365_llvm_7677212527096675952);
      cVar6 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar6 == '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x20))();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


