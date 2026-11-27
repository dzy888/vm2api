// 004a9870 register

/* <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>::register */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>::register
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
          undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  plVar1 = (longlong *)*param_2;
  LOCK();
  bVar9 = (int)plVar1[2] == 0;
  if (bVar9) {
    *(int *)(plVar1 + 2) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
  }
  if (param_4 < 0) {
LAB_004a98c6:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (param_4 == 0) {
      lVar7 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar7 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar7 == 0) goto LAB_004a98c6;
      (*(code *)PTR_memcpy_00799008)();
    }
    plVar2 = (longlong *)*param_5;
    LOCK();
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    local_48 = param_4;
    local_40 = lVar7;
    local_38 = param_4;
    if (*plVar2 != 0 && SCARRY8(lVar8,1) == *plVar2 < 0) {
      local_50 = (longlong *)
                 <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::insert(plVar1 + 3,&local_48);
      puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
          ::drop_slow(&local_50);
        }
      }
      if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
        *(undefined1 *)((longlong)plVar1 + 0x14) = 1;
      }
      LOCK();
      lVar7 = plVar1[2];
      *(int *)(plVar1 + 2) = 0;
      UNLOCK();
      if ((int)lVar7 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (param_4 == 0) {
        lVar8 = 1;
        LOCK();
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (*plVar1 != 0 && SCARRY8(lVar7,1) == *plVar1 < 0) goto LAB_004a99ff;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar8 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>>
                    (plVar1 + 2,bVar5);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        (*(code *)PTR_memcpy_00799008)();
        LOCK();
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (*plVar1 != 0 && SCARRY8(lVar7,1) == *plVar1 < 0) {
LAB_004a99ff:
          *param_1 = param_4;
          param_1[1] = lVar8;
          param_1[2] = param_4;
          param_1[3] = (longlong)plVar1;
          *(undefined1 *)(param_1 + 4) = 1;
          return param_1;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


