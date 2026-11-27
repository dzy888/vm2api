// 003eb5e0 <tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

undefined8 __rustcall
tokio[d7d91d38da47d894]::runtime::blocking::pool::spawn_blocking::
<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined *local_28;
  
  local_48 = (*(code *)PTR_current_00799880)();
  puVar3 = PTR_NEXT_ID_00799878;
  do {
    LOCK();
    lVar7 = *(longlong *)puVar3;
    *(longlong *)puVar3 = *(longlong *)puVar3 + 1;
    UNLOCK();
  } while (lVar7 == 0);
  uVar5 = (ulonglong)(uint)((int)local_48 << 8);
  plVar1 = *(longlong **)((longlong)param_3 + uVar5 + 0x210);
  local_40 = param_3;
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    LOCK();
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar7,1) != *plVar1 < 0) goto LAB_003eb702;
    uVar6 = *(undefined8 *)((longlong)param_3 + (uVar5 | 0x200) + 0x10);
  }
  uVar6 = <tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
          ::new(param_1,uVar6);
  lVar7 = 1;
  bVar4 = (*(code *)PTR_spawn_task_00799888)(&local_48);
  if ((lVar7 != 0 & bVar4) != 1) {
    if ((char)local_48 == '\0') {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    return uVar6;
  }
  local_30 = &local_38;
  local_28 = PTR_fmt_007991d0;
  local_38 = lVar7;
  (*(code *)PTR_panic_fmt_007991a8)(1,param_2);
LAB_003eb702:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


