// 0048e1d0 drop

/* <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,
   tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  int local_18;
  char local_14;
  ulonglong local_10;
  
  local_58 = *param_1;
  *param_1 = 2;
  if (local_58 == 2) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_4a510ad2c2ece6409108a5920cec5cc2_15_llvm_1700297362806677381_0078add0
              );
    if (iStack_40 != -1) {
      (*(code *)PTR_close_00799030)();
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_58,0x13);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::process::Child>(&local_78);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lStack_38 = param_1[4];
  local_30 = (undefined4)param_1[5];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_28 = (undefined4)param_1[6];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_50._0_4_ = (undefined4)param_1[1];
  uStack_50._4_4_ = (int)((ulonglong)param_1[1] >> 0x20);
  iStack_48 = (int)param_1[2];
  iStack_44 = (int)((ulonglong)param_1[2] >> 0x20);
  iStack_40 = (int)param_1[3];
  uStack_3c = (undefined4)((ulonglong)param_1[3] >> 0x20);
  local_20 = param_1[7];
  local_78 = (undefined4)param_1[4];
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_70 = (undefined4)param_1[5];
  iStack_6c = *(int *)((longlong)param_1 + 0x2c);
  local_68 = (int)param_1[6];
  local_64 = *(int *)((longlong)param_1 + 0x34);
  local_60 = (int)param_1[7];
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_58);
  if (iStack_40 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_58);
  (*(code *)PTR_try_wait_00799a70)();
  if ((local_18 != 0) || (local_14 == '\0')) {
    if (local_18 != 0) {
      if ((1 < ((uint)local_10 & 3) - 2) && ((local_10 & 3) != 0)) {
        uStack_50 = local_10 - 1;
        local_58 = CONCAT71(local_58._1_7_,3);
        (*(code *)PTR_drop_00799040)();
      }
    }
    iStack_48 = local_68;
    iStack_44 = local_64;
    iStack_40 = local_60;
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50._0_4_ = uStack_70;
    uStack_50._4_4_ = iStack_6c;
    (*(code *)PTR_push_orphan_00799a78)();
    return;
  }
  if (iStack_6c != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (local_68 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (local_64 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (local_60 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  return;
}


