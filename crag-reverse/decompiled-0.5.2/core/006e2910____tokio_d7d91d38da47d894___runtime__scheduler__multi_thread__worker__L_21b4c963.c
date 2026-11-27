// 006e2910 <<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0},()>

/* tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0},
   ()> */

longlong __rustcall
tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_,()>
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  ulonglong local_220;
  longlong *local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined *local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong *local_188;
  ulonglong local_180;
  
  local_208 = param_1;
  local_220 = (*(code *)PTR_current_00799880)();
  puVar2 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    lVar5 = *(longlong *)puVar2;
    *(longlong *)puVar2 = *(longlong *)puVar2 + 1;
    UNLOCK();
  } while (lVar5 == 0);
  uVar4 = (ulonglong)(uint)((int)local_220 << 8);
  plVar7 = *(longlong **)((longlong)param_3 + uVar4 + 0x210);
  local_218 = param_3;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar6,1) != *plVar7 < 0) goto LAB_006e299f;
    plVar7 = *(longlong **)((longlong)param_3 + (uVar4 | 0x200) + 0x10);
    uVar4 = *(ulonglong *)((longlong)param_3 + (uVar4 | 0x200) + 0x18);
    LOCK();
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar6,1) != *plVar7 < 0) goto LAB_006e299f;
  }
  local_200 = (longlong *)0xcc;
  local_1f8 = (undefined *)0x0;
  local_1f0 = &anon_8e901ac342272c81d7b37a6ae0143219_34_llvm_8038038081886927865;
  local_1e8 = 0;
  local_1c8 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_1e0 = plVar7;
  local_1d8 = uVar4;
  local_1d0 = lVar5;
  local_1c0 = param_1;
  local_188 = plVar7;
  local_180 = uVar4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar5 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar5 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x100);
    lVar6 = 1;
    bVar3 = (*(code *)PTR_spawn_task_00799888)(&local_220);
    if ((lVar6 != 0 & bVar3) != 1) {
      if ((char)local_220 == '\0') {
        LOCK();
        *local_218 = *local_218 + -1;
        UNLOCK();
        if (*local_218 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        LOCK();
        *local_218 = *local_218 + -1;
        UNLOCK();
        if (*local_218 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      return lVar5;
    }
    local_200 = &local_210;
    local_1f8 = PTR_fmt_007991d0;
    local_210 = lVar6;
    (*(code *)PTR_panic_fmt_007991a8)(1,param_2);
  }
LAB_006e299f:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


