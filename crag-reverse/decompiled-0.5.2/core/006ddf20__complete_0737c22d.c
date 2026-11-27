// 006ddf20 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::complete */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::complete(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined4 local_58 [16];
  
  uVar3 = *param_1;
  do {
    uVar4 = uVar3 ^ 3;
    LOCK();
    uVar1 = *param_1;
    bVar6 = uVar3 == uVar1;
    if (bVar6) {
      *param_1 = uVar4;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR_panic_00799338)
              (uVar4,&anon_c153c4d816f71af2accb98944a80e600_40_llvm_2617760850115737065);
LAB_006de01e:
    local_80 = (*(code *)PTR_panic_00799338)();
LAB_006de037:
    local_68 = (undefined1 *)&local_88;
    local_78 = &local_80;
    local_70 = PTR_fmt_007991f0;
    local_60 = PTR_fmt_007991f0;
    (*(code *)PTR_panic_fmt_007991a8)
              (&local_88,&anon_c153c4d816f71af2accb98944a80e600_42_llvm_2617760850115737065);
  }
  else {
    if ((uVar3 & 2) != 0) goto LAB_006de01e;
    if ((uVar3 & 8) == 0) {
      local_58[0] = 2;
      <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
      ::set_stage(param_1 + 4,local_58);
LAB_006ddfd3:
      local_88 = 1;
      LOCK();
      uVar3 = *param_1;
      *param_1 = *param_1 - 0x40;
      UNLOCK();
      local_80 = 0;
      if (uVar3 >> 6 != 0) {
        if (uVar3 >> 6 == 1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                    (param_1);
        }
        return;
      }
      goto LAB_006de037;
    }
    if ((uVar3 & 0x10) == 0) goto LAB_006ddfd3;
    if (param_1[0x11] != 0) {
      (**(code **)(param_1[0x11] + 0x10))();
      uVar3 = *param_1;
      do {
        uVar4 = uVar3 & 0xffffffffffffffef;
        LOCK();
        uVar1 = *param_1;
        bVar6 = uVar3 == uVar1;
        if (bVar6) {
          *param_1 = uVar4;
        }
        else {
          uVar3 = uVar1;
        }
        UNLOCK();
      } while (!bVar6);
      if ((uVar3 & 2) == 0) {
        ppuVar5 = &anon_c153c4d816f71af2accb98944a80e600_46_llvm_2617760850115737065;
      }
      else {
        if ((uVar3 & 0x10) != 0) {
          if ((uVar3 & 8) == 0) {
            if (param_1[0x11] != 0) {
              (**(code **)(param_1[0x11] + 0x18))();
            }
            param_1[0x11] = 0;
          }
          goto LAB_006ddfd3;
        }
        ppuVar5 = &anon_c153c4d816f71af2accb98944a80e600_44_llvm_2617760850115737065;
      }
      (*(code *)PTR_panic_00799338)(uVar4,ppuVar5);
      goto LAB_006de0c1;
    }
  }
  (*(code *)PTR_panic_fmt_007991a8)();
LAB_006de0c1:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


