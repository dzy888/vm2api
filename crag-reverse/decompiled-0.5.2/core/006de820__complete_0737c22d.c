// 006de820 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::complete */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::complete(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined4 local_48 [12];
  
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
LAB_006de918:
    local_70 = (*(code *)PTR_panic_00799338)();
LAB_006de931:
    local_58 = (undefined1 *)&local_78;
    local_68 = &local_70;
    local_60 = PTR_fmt_007991f0;
    local_50 = PTR_fmt_007991f0;
    (*(code *)PTR_panic_fmt_007991a8)
              (&local_78,&anon_c153c4d816f71af2accb98944a80e600_42_llvm_2617760850115737065);
  }
  else {
    if ((uVar3 & 2) != 0) goto LAB_006de918;
    if ((uVar3 & 8) == 0) {
      local_48[0] = 2;
      <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
      ::set_stage(param_1 + 4,local_48);
LAB_006de8cd:
      local_78 = 1;
      LOCK();
      uVar3 = *param_1;
      *param_1 = *param_1 - 0x40;
      UNLOCK();
      local_70 = 0;
      if (uVar3 >> 6 != 0) {
        if (uVar3 >> 6 == 1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                    (param_1);
        }
        return;
      }
      goto LAB_006de931;
    }
    if ((uVar3 & 0x10) == 0) goto LAB_006de8cd;
    if (param_1[0xf] != 0) {
      (**(code **)(param_1[0xf] + 0x10))();
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
            if (param_1[0xf] != 0) {
              (**(code **)(param_1[0xf] + 0x18))();
            }
            param_1[0xf] = 0;
          }
          goto LAB_006de8cd;
        }
        ppuVar5 = &anon_c153c4d816f71af2accb98944a80e600_44_llvm_2617760850115737065;
      }
      (*(code *)PTR_panic_00799338)(uVar4,ppuVar5);
      goto LAB_006de9bb;
    }
  }
  (*(code *)PTR_panic_fmt_007991a8)();
LAB_006de9bb:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


