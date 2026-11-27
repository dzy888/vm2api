// 00704010 write_all

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_all
    */

undefined1 * __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  puVar1 = PTR_write_0079a0a0;
  if (param_3 != (undefined1 *)0x0) {
    do {
      puVar5 = param_3;
      uVar3 = (*(code *)puVar1)();
      if ((uVar3 & 1) == 0) {
        if (puVar5 == (undefined1 *)0x0) {
          return anon_ed01ef58651a73351ccd2244bf431f77_41_llvm_1588049147593173555;
        }
        if (param_3 < puVar5) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&anon_ed01ef58651a73351ccd2244bf431f77_43_llvm_1588049147593173555,param_3);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (puVar5,param_3);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_3 = param_3 + -(longlong)puVar5;
        goto LAB_00704060;
      }
      switch((uint)puVar5 & 3) {
      case 0:
        cVar2 = puVar5[0x10];
        goto joined_r0x00704055;
      case 1:
        if (puVar5[0x1f] != '#') {
          return puVar5;
        }
        (*(code *)PTR_drop_00799040)();
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar4 + 0x10))();
        if (cVar2 == '\0') {
          return puVar5;
        }
        break;
      case 3:
        cVar2 = (char)((ulonglong)puVar5 >> 0x20);
        if (0x2a < (ulonglong)puVar5 >> 0x20) {
          cVar2 = -1;
        }
joined_r0x00704055:
        if (cVar2 != '#') {
          return puVar5;
        }
      }
LAB_00704060:
    } while (param_3 != (undefined1 *)0x0);
  }
  return (undefined1 *)0x0;
}


