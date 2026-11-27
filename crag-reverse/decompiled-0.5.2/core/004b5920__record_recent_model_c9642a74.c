// 004b5920 record_recent_model

/* WARNING: Switch with 1 destination removed at 0x004b5b9f */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_recent_model */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_recent_model
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  byte local_4c;
  undefined8 local_40;
  longlong local_38;
  
  if (param_3 == 0) {
    return;
  }
  LOCK();
  bVar13 = *(int *)(param_1 + 0x70) == 0;
  if (bVar13) {
    *(int *)(param_1 + 0x70) = 1;
  }
  UNLOCK();
  local_40 = param_2;
  local_38 = param_3;
  if (!bVar13) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_4c = 0;
    bVar5 = local_4c;
    local_4c = 0;
    if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_004b59e2;
LAB_004b599d:
    local_4c = bVar5;
    uVar8 = 0;
    if (*(ulonglong *)(param_1 + 0x78) <= *(ulonglong *)(param_1 + 0x88)) {
      uVar8 = *(ulonglong *)(param_1 + 0x78);
    }
    lVar9 = *(ulonglong *)(param_1 + 0x88) - uVar8;
    if ((*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10 + lVar9 * 0x18) != param_3) ||
       (iVar7 = (*(code *)PTR_bcmp_00799020)(lVar9 * 3,param_3), iVar7 != 0)) goto LAB_004b59e2;
    if (local_4c != 0) goto LAB_004b5b3b;
    uVar8 = *(ulonglong *)puVar3;
  }
  else {
    local_4c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_4c = local_4c ^ 1;
    bVar5 = local_4c;
    if (*(longlong *)(param_1 + 0x90) != 0) goto LAB_004b599d;
LAB_004b59e2:
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
    ::retain::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_recent_model::_closure_2_>
              (param_1 + 0x78,&local_40);
    if (param_3 < 0) {
LAB_004b59fa:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) goto LAB_004b59fa;
    (*(code *)PTR_memcpy_00799008)();
    uVar8 = *(ulonglong *)(param_1 + 0x78);
    uVar12 = *(ulonglong *)(param_1 + 0x90);
    if (uVar12 == uVar8) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
      ::grow(param_1 + 0x78,param_2);
      uVar8 = *(ulonglong *)(param_1 + 0x78);
      uVar12 = *(ulonglong *)(param_1 + 0x90);
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    uVar11 = *(longlong *)(param_1 + 0x88) - 1;
    uVar10 = uVar8 + uVar11;
    if (!CARRY8(uVar8,uVar11)) {
      uVar10 = uVar11;
    }
    *(ulonglong *)(param_1 + 0x88) = uVar10;
    *(ulonglong *)(param_1 + 0x90) = uVar12 + 1;
    *(longlong *)(lVar1 + uVar10 * 0x18) = param_3;
    *(longlong *)(lVar1 + 8 + uVar10 * 0x18) = lVar9;
    *(longlong *)(lVar1 + 0x10 + uVar10 * 0x18) = param_3;
    puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    puVar3 = PTR___rust_dealloc_00798fc8;
    uVar8 = *(ulonglong *)(param_1 + 0x90);
    while (4 < uVar8) {
      uVar8 = uVar8 - 1;
      *(ulonglong *)(param_1 + 0x90) = uVar8;
      uVar10 = *(longlong *)(param_1 + 0x88) + uVar8;
      uVar12 = *(ulonglong *)(param_1 + 0x78);
      if (uVar10 < uVar12) {
        uVar12 = 0;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (uVar10 - uVar12) * 0x18) - 1U <
          0xfffffffffffffffe) {
        (*(code *)puVar3)(*(longlong *)(param_1 + 0x80),1);
        uVar8 = *(ulonglong *)(param_1 + 0x90);
      }
    }
    if (local_4c != 0) goto LAB_004b5b3b;
    uVar8 = *(ulonglong *)puVar4;
  }
  if (((uVar8 & 0x7fffffffffffffff) != 0) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0x74) = 1;
  }
LAB_004b5b3b:
  LOCK();
  iVar7 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = 0;
  UNLOCK();
  if (iVar7 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


