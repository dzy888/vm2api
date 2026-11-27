// 0058b3e0 drop

/* <craggemini_core[66f3c71560d70857]::guard::GuardHandle as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined8 local_238;
  longlong *local_230;
  longlong local_228;
  longlong *local_220;
  longlong local_218;
  longlong *plStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 local_170;
  longlong local_d0 [21];
  
  bVar1 = *(byte *)(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar3 = PTR_kill_00799120;
  if ((1 < *(uint *)((longlong)param_1 + 0xec) & bVar1) == 1) {
    (*(code *)PTR_kill_00799120)();
    param_2 = 9;
    (*(code *)puVar3)();
  }
  local_218 = *param_1;
  plStack_210 = (longlong *)param_1[1];
  local_208 = (undefined4)param_1[2];
  uStack_204 = *(undefined4 *)((longlong)param_1 + 0x14);
  iStack_200 = (int)param_1[3];
  uStack_1fc = *(undefined4 *)((longlong)param_1 + 0x1c);
  *param_1 = 2;
  if (local_218 != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_218,param_2);
    if (iStack_200 != -1) {
      (*(code *)PTR_close_00799030)();
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_218);
  }
  uVar8 = (undefined4)param_1[4];
  local_218 = param_1[4];
  plStack_210 = (longlong *)param_1[5];
  local_208 = (undefined4)param_1[6];
  uStack_204 = *(undefined4 *)((longlong)param_1 + 0x34);
  iStack_200 = (int)param_1[7];
  uStack_1fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  param_1[4] = 2;
  if (local_218 != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_218);
    if (iStack_200 != -1) {
      (*(code *)PTR_close_00799030)();
    }
    uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_218);
  }
  lVar2 = param_1[0x1f];
  param_1[0x1f] = 0;
  if (lVar2 != 0) {
    local_218 = lVar2;
    (*(code *)PTR_remote_abort_00799330)();
    cVar5 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    uVar8 = extraout_XMM0_Da;
    if (cVar5 != '\0') {
      uVar8 = (*(code *)PTR_drop_join_handle_slow_00799088)();
    }
  }
  local_d0[0] = param_1[8];
  param_1[8] = -1;
  if (local_d0[0] != -1) {
    (*(code *)PTR_memcpy_00799008)(uVar8,0xa0);
    (*(code *)PTR_try_wait_00799320)();
    if (((int)local_238 == 0) && (local_238._4_4_ == 0)) {
      uVar6 = (*(code *)PTR_start_kill_00799290)();
      if (((uVar6 != 0) && (1 < ((uint)uVar6 & 3) - 2)) && ((uVar6 & 3) != 0)) {
        plStack_210 = (longlong *)(uVar6 - 1);
        local_218 = CONCAT71(local_218._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
      (*(code *)PTR_try_wait_00799320)();
      if (((int)local_238 == 0) && (local_238._4_4_ == 0)) {
        (*(code *)PTR_try_current_00799eb0)();
        puVar4 = PTR_sleep_00799f58;
        puVar3 = PTR_try_wait_00799320;
        if (local_218 == 2) {
          iVar7 = 0x19;
          do {
            (*(code *)puVar4)();
            (*(code *)puVar3)();
            if (((int)local_238 != 0) || (local_238._4_4_ != 0)) {
              if (((int)local_238 != 0) &&
                 ((1 < ((uint)local_230 & 3) - 2 && (((ulonglong)local_230 & 3) != 0)))) {
                plStack_210 = (longlong *)((longlong)local_230 - 1);
                local_218 = CONCAT71(local_218._1_7_,3);
                (*(code *)PTR_drop_00799040)();
              }
              break;
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        else if (local_218 == 0) {
          LOCK();
          *plStack_210 = *plStack_210 + -1;
          UNLOCK();
          if (*plStack_210 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          LOCK();
          *plStack_210 = *plStack_210 + -1;
          UNLOCK();
          if (*plStack_210 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
      }
      else if (((int)local_238 != 0) &&
              ((1 < ((uint)local_230 & 3) - 2 && (((ulonglong)local_230 & 3) != 0)))) {
        plStack_210 = (longlong *)((longlong)local_230 - 1);
        local_218 = CONCAT71(local_218._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
    }
    else if (((int)local_238 != 0) &&
            ((1 < ((uint)local_230 & 3) - 2 && (((ulonglong)local_230 & 3) != 0)))) {
      plStack_210 = (longlong *)((longlong)local_230 - 1);
      local_218 = CONCAT71(local_218._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    iVar7 = (*(code *)PTR_id_00799288)();
    if ((iVar7 == 1) && ((*(code *)PTR_try_current_00799eb0)(), local_228 != 2)) {
      local_238 = local_228;
      local_230 = local_220;
      (*(code *)PTR_memcpy_00799008)(local_220,0xa8);
      puVar3 = PTR_NEXT_ID_00799878;
      local_170 = 0;
      do {
        LOCK();
        lVar2 = *(longlong *)puVar3;
        *(longlong *)puVar3 = *(longlong *)puVar3 + 1;
        UNLOCK();
      } while (lVar2 == 0);
      ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>
                (&local_238,&local_218);
      cVar5 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar5 != '\0') {
        (*(code *)PTR_drop_join_handle_slow_00799088)();
      }
      if ((char)local_238 == '\0') {
        LOCK();
        *local_230 = *local_230 + -1;
        UNLOCK();
        if (*local_230 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        LOCK();
        *local_230 = *local_230 + -1;
        UNLOCK();
        if (*local_230 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
    }
    else {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Child>
                (local_d0,local_d0);
    }
  }
  return;
}


