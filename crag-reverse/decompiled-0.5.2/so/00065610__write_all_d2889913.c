// 00065610 write_all

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_all
    */

undefined ** __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (void)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR_write_000c3ed8;
  ppuVar6 = (undefined **)0x3e;
  do {
    ppuVar5 = ppuVar6;
    uVar3 = (*(code *)puVar1)();
    if ((uVar3 & 1) == 0) {
      if (ppuVar5 == (undefined **)0x0) {
        return &PTR_DAT_000c0498;
      }
      if (ppuVar6 < ppuVar5) {
        (*(code *)PTR_slice_index_fail_000c3bb0)
                  (&PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c04b0,
                   ppuVar6);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                  (ppuVar5,ppuVar6);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      ppuVar6 = (undefined **)((longlong)ppuVar6 - (longlong)ppuVar5);
      goto LAB_00065660;
    }
    switch((uint)ppuVar5 & 3) {
    case 0:
      cVar2 = *(char *)(ppuVar5 + 2);
      goto joined_r0x00065652;
    case 1:
      if (*(char *)((longlong)ppuVar5 + 0x1f) != '#') {
        return ppuVar5;
      }
      (*(code *)PTR_drop_000c3ae0)();
      break;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_000c3c18)();
      cVar2 = (**(code **)(lVar4 + 0x10))();
      if (cVar2 == '\0') {
        return ppuVar5;
      }
      break;
    case 3:
      cVar2 = (char)((ulonglong)ppuVar5 >> 0x20);
      if (0x2a < (ulonglong)ppuVar5 >> 0x20) {
        cVar2 = -1;
      }
joined_r0x00065652:
      if (cVar2 != '#') {
        return ppuVar5;
      }
    }
LAB_00065660:
    if (ppuVar6 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}


