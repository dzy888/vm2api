// 00703a90 drop

/* <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_24;
  undefined1 local_20;
  longlong local_18;
  
  local_24 = *(int *)(param_1 + 0x18);
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = -1;
  if (local_24 != -1) {
    lVar2 = 0x240;
    if (*param_1 != '\0') {
      lVar2 = 0x338;
    }
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x44 + lVar2) == -1) {
      (*(code *)PTR_expect_failed_00799440)
                (0x338,&anon_880d723ff0f66ce4ced63274bf095def_24_llvm_12887403613343987975);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
            <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
                      (*(longlong *)(param_1 + 8) + lVar2,param_1 + 0x10,&local_24);
    if (uVar3 != 0) {
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        local_18 = uVar3 - 1;
        local_20 = 3;
        (*(code *)PTR_drop_00799040)();
      }
    }
    (*(code *)PTR_close_00799030)();
  }
  return;
}


