// 006f45a0 poll

/* WARNING: Removing unreachable block (ram,0x006f4756) */
/* WARNING: Removing unreachable block (ram,0x006f4761) */
/* <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,
   tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined4 * __rustcall
<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined4 *param_1,int *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  int local_78;
  int iStack_74;
  longlong local_70;
  ulonglong local_60;
  ushort local_58;
  char local_56;
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  code *local_38;
  
  if (*param_2 == 2) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_4a510ad2c2ece6409108a5920cec5cc2_15_llvm_1700297362806677381_007944a0
              );
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
              (&local_60,0x13);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  (*(code *)PTR_poll_ready_0079a880)(0);
  if (local_56 == '\x02') {
    if (((1 < ((uint)local_60 & 3) - 2) && ((local_60 & 3) != 0)) &&
       (*(char *)(local_60 + 0x1f) == ')')) {
      uVar3 = *(undefined8 *)(local_60 - 1);
      lVar4 = *(longlong *)(local_60 + 7);
      lVar5 = (**(code **)(lVar4 + 0x30))();
      if (lVar5 == 0) {
        local_40 = &local_50;
        local_38 = <&dyn_core[c0acaeba6ab4c2e0]::error::Error+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_50 = uVar3;
        local_48 = lVar4;
        (*(code *)PTR_write_007994b0)
                  (&local_40,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
      }
    }
    *param_1 = 1;
    *(ulonglong *)(param_1 + 2) = local_60;
  }
  else if (local_56 == -1) {
    *param_1 = 2;
  }
  else {
    (*(code *)PTR_try_wait_0079a900)();
    if (local_78 != 1) {
      if (iStack_74 == 1) {
        *param_1 = 0;
        param_1[1] = (undefined4)local_70;
        return param_1;
      }
      lVar4 = *(longlong *)(param_2 + 4);
      uVar6 = *(ulonglong *)(lVar4 + 0x90);
      do {
        if (((uint)(uVar6 >> 0x10) & 0x7fff) != (uint)local_58) break;
        puVar1 = (ulonglong *)(lVar4 + 0x90);
        LOCK();
        uVar2 = *puVar1;
        bVar7 = uVar6 == uVar2;
        if (bVar7) {
          *puVar1 = (ulonglong)
                    ((uint)uVar6 & ((uint)local_60 & 0x33 ^ 0x8000003f) |
                    (local_58 & 0x7fff) << 0x10);
        }
        else {
          uVar6 = uVar2;
        }
        UNLOCK();
      } while (!bVar7);
      local_70 = <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>>
                 ::reregister(param_2,1);
      if (local_70 == 0) {
        (**(code **)(*(longlong *)*param_3 + 0x10))();
        *param_1 = 2;
        return param_1;
      }
    }
    *param_1 = 1;
    *(longlong *)(param_1 + 2) = local_70;
  }
  return param_1;
}


