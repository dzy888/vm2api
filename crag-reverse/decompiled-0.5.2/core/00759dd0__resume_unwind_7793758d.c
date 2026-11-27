// 00759dd0 resume_unwind

/* std[6c98fd8553dbae28]::panicking::resume_unwind */

void __rustcall std[6c98fd8553dbae28]::panicking::resume_unwind(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *in_FS_OFFSET;
  
  puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  LOCK();
  lVar4 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  *(longlong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 + 1;
  UNLOCK();
  if (*(longlong *)puVar2 == 0 || SCARRY8(lVar4,1) != *(longlong *)puVar2 < 0) {
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(param_1,&DAT_001c06d7,0x16);
    if (uVar3 != 0) {
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
  }
  else {
    lVar4 = *in_FS_OFFSET;
    if (*(char *)(lVar4 + -0x40) == '\0') goto LAB_00759e8b;
    uVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
            write_all(param_1,&DAT_001c06ed,0x32);
    if (uVar3 != 0) {
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
  }
  lVar4 = (*(code *)PTR_abort_00799748)();
LAB_00759e8b:
  *(longlong *)(lVar4 + -0x48) = *(longlong *)(lVar4 + -0x48) + 1;
  *(undefined1 *)(lVar4 + -0x40) = 0;
  (*(code *)PTR_rust_panic_00798f90)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


