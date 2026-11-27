// 005f8a40 write_all

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_all
    */

undefined ** __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_write_0079a0a0;
  if (param_3 != (undefined **)0x0) {
    do {
      ppuVar5 = param_3;
      uVar3 = (*(code *)puVar1)();
      if ((uVar3 & 1) == 0) {
        if (ppuVar5 == (undefined **)0x0) {
          return &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
        }
        if (param_3 < ppuVar5) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&anon_30b5cef53457a6ea696e8d7e9f6273d6_736_llvm_8436237269785592069,param_3);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (ppuVar5,param_3);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_3 = (undefined **)((longlong)param_3 - (longlong)ppuVar5);
        goto LAB_005f8a90;
      }
      switch((uint)ppuVar5 & 3) {
      case 0:
        cVar2 = *(char *)(ppuVar5 + 2);
        goto joined_r0x005f8a85;
      case 1:
        if (*(char *)((longlong)ppuVar5 + 0x1f) != '#') {
          return ppuVar5;
        }
        (*(code *)PTR_drop_00799040)();
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
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
joined_r0x005f8a85:
        if (cVar2 != '#') {
          return ppuVar5;
        }
      }
LAB_005f8a90:
    } while (param_3 != (undefined **)0x0);
  }
  return (undefined **)0x0;
}


