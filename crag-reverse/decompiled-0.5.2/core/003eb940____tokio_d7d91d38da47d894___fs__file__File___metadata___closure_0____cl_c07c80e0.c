// 003eb940 <<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

longlong __rustcall
tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
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
  ulonglong local_2a0;
  longlong *local_298;
  longlong local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined *local_278;
  undefined **local_270;
  undefined8 local_268;
  longlong *local_260;
  ulonglong local_258;
  longlong local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong *local_170;
  ulonglong local_168;
  
  local_288 = param_1;
  local_2a0 = (*(code *)PTR_current_00799880)();
  puVar2 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    lVar5 = *(longlong *)puVar2;
    *(longlong *)puVar2 = *(longlong *)puVar2 + 1;
    UNLOCK();
  } while (lVar5 == 0);
  uVar4 = (ulonglong)(uint)((int)local_2a0 << 8);
  plVar7 = *(longlong **)((longlong)param_3 + uVar4 + 0x210);
  local_298 = param_3;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar6,1) != *plVar7 < 0) goto LAB_003eb9cf;
    plVar7 = *(longlong **)((longlong)param_3 + (uVar4 | 0x200) + 0x10);
    uVar4 = *(ulonglong *)((longlong)param_3 + (uVar4 | 0x200) + 0x18);
    LOCK();
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar6,1) != *plVar7 < 0) goto LAB_003eb9cf;
  }
  local_280 = (longlong *)0xcc;
  local_278 = (undefined *)0x0;
  local_270 = &anon_759b25d0f49402244ed1d2ce4dc43d04_267_llvm_4022685846690702743;
  local_268 = 0;
  local_248 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_260 = plVar7;
  local_258 = uVar4;
  local_250 = lVar5;
  local_240 = param_1;
  local_170 = plVar7;
  local_168 = uVar4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar5 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar5 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x180);
    lVar6 = 1;
    bVar3 = (*(code *)PTR_spawn_task_00799888)(&local_2a0);
    if ((lVar6 != 0 & bVar3) != 1) {
      if ((char)local_2a0 == '\0') {
        LOCK();
        *local_298 = *local_298 + -1;
        UNLOCK();
        if (*local_298 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        LOCK();
        *local_298 = *local_298 + -1;
        UNLOCK();
        if (*local_298 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      return lVar5;
    }
    local_280 = &local_290;
    local_278 = PTR_fmt_007991d0;
    local_290 = lVar6;
    (*(code *)PTR_panic_fmt_007991a8)(1,param_2);
  }
LAB_003eb9cf:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


