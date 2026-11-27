// 002504b0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#1}>

/* WARNING: Switch with 1 destination removed at 0x002506ff */
/* <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::or_else::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#1}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::or_else::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_1_>
          (undefined4 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (*param_3 != -1) {
    param_2[2] = param_3[2];
    local_60._0_4_ = (undefined4)*param_3;
    local_60._4_4_ = *(undefined4 *)((longlong)param_3 + 4);
    uStack_58 = (undefined4)param_3[1];
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0xc);
LAB_002504d2:
    *(undefined4 *)param_2 = (undefined4)local_60;
    *(undefined4 *)((longlong)param_2 + 4) = local_60._4_4_;
    *(undefined4 *)(param_2 + 1) = uStack_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    return;
  }
  if (*(longlong *)*param_4 == -1) {
    local_60 = -1;
  }
  else {
    param_1 = (*(code *)PTR_clone_00798fd0)();
    if (local_60 != -1) {
      param_2[2] = local_50;
      goto LAB_002504d2;
    }
  }
  plVar3 = (longlong *)param_4[2];
  lVar4 = *(longlong *)param_4[1];
  piVar1 = (int *)(lVar4 + 0x160);
  LOCK();
  bVar11 = *(int *)(lVar4 + 0x160) == 0;
  if (bVar11) {
    *(int *)(lVar4 + 0x160) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(lVar4 + 0x164);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(lVar4 + 0x164);
    param_1 = extraout_XMM0_Da;
  }
  if (cVar8 == '\0') {
    if (((*plVar3 == -1) ||
        (lVar9 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find
                           (lVar4 + 0x168,plVar3[1],plVar3[2]), param_1 = extraout_XMM0_Da_00,
        lVar9 == 0)) ||
       ((*(longlong *)(lVar9 + 0x128) == -1 ||
        (param_1 = (*(code *)PTR_clone_00798fd0)(), local_48 == -1)))) {
      if (*(longlong *)(lVar4 + 0x1f8) == -1) {
        *param_2 = -1;
      }
      else {
        lVar9 = *(longlong *)(lVar4 + 0x208);
        if (lVar9 < 0) {
LAB_00250640:
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (lVar9 == 0) {
          lVar10 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar10 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar10 == 0) goto LAB_00250640;
          param_1 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar9);
        }
        *param_2 = lVar9;
        param_2[1] = lVar10;
        param_2[2] = lVar9;
      }
    }
    else {
      *param_2 = local_48;
      param_2[1] = local_40;
      param_2[2] = local_38;
    }
    if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da_03,
       cVar8 == '\0')) {
      *(undefined1 *)(lVar4 + 0x164) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      param_1 = (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da_02,
       cVar8 == '\0')) {
      *(undefined1 *)(lVar4 + 0x164) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      param_1 = (*(code *)PTR_wake_00799010)();
    }
    *param_2 = -1;
  }
  if ((local_60 == -1) || (local_60 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_1,1);
  return;
}


