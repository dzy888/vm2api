// 001f80f0 exec

/* WARNING: Removing unreachable block (ram,0x001f8169) */
/* <std[6c98fd8553dbae28]::process::Command as
   std[6c98fd8553dbae28]::os::unix::process::CommandExt>::exec */

undefined ** __rustcall
<std[6c98fd8553dbae28]::process::Command_as_std[6c98fd8553dbae28]::os::unix::process::CommandExt>::
exec(longlong param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30 [3];
  
  <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::capture_env(local_30,param_1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::setup_io(&local_58,param_1,0);
    if (local_58 == 1) {
      ppuVar2 = (undefined **)CONCAT44(iStack_4c,local_50);
    }
    else {
      local_68 = local_38;
      local_78 = local_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      if (std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK < 0x3ffffffe) {
        std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK =
             std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK + 1;
        LOCK();
        UNLOCK();
      }
      else {
        (*(code *)PTR_read_contended_0021a898)();
      }
      plVar4 = local_30;
      if (local_30[0] == -1) {
        plVar4 = (longlong *)0x0;
      }
      ppuVar2 = (undefined **)
                <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::do_exec
                          (param_1,&local_78,plVar4);
      LOCK();
      uVar1 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      UNLOCK();
      uVar3 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK = uVar1;
      if (SBORROW4(0,uVar3 & 0xbfffffff)) {
        (*(code *)PTR_wake_writer_or_readers_0021a760)();
      }
      if ((char)local_58 == '\0') {
        if (local_54 != -1) {
          (*(code *)PTR_close_00219d60)();
        }
        if (local_50 != -1) {
          (*(code *)PTR_close_00219d60)();
        }
        if (iStack_4c != -1) {
          (*(code *)PTR_close_00219d60)();
        }
      }
    }
  }
  else {
    ppuVar2 = &PTR_DAT_00217930;
  }
  if (local_30[0] != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray>(local_30);
  }
  return ppuVar2;
}


