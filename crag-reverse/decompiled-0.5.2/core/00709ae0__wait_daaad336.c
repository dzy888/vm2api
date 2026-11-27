// 00709ae0 wait

/* <tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>::wait */

bool __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>::wait
          (undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *in_FS_OFFSET;
  
  if (param_3 == -1) {
    lVar1 = *in_FS_OFFSET;
    if (*(char *)(lVar1 + -0xf0) == '\0') {
      cVar3 = *(char *)(lVar1 + -0xf2);
joined_r0x00709b9e:
      if (cVar3 != '\x02') goto LAB_00709bc8;
    }
    else if (*(char *)(lVar1 + -0xf0) == '\x01') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar1 + -0xf0) = 0;
      cVar3 = *(char *)(lVar1 + -0xf2);
      goto joined_r0x00709b9e;
    }
    <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
    <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>();
    bVar4 = true;
  }
  else {
    if (param_2 != 0 || param_3 != 0) {
      lVar1 = *in_FS_OFFSET;
      if (*(char *)(lVar1 + -0xf0) == '\0') {
        cVar3 = *(char *)(lVar1 + -0xf2);
      }
      else {
        if (*(char *)(lVar1 + -0xf0) == '\x02') goto LAB_00709b58;
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(lVar1 + -0xf0) = 0;
        cVar3 = *(char *)(lVar1 + -0xf2);
      }
      if (cVar3 == '\x02') {
LAB_00709b58:
        cVar3 = <tokio[d7d91d38da47d894]::runtime::context::blocking::BlockingRegionGuard>::
                block_on_timeout::<&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<()>>();
        return cVar3 != '\x02';
      }
LAB_00709bc8:
      if (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) ||
         (cVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar3 != '\0')) {
        (*(code *)PTR_panic_fmt_007991a8)();
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = false;
  }
  return bVar4;
}


