// 000a8490 write_all

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_all
    */

undefined ** __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined **local_38;
  
  puVar2 = PTR_write_000c3be8;
  if (param_3 != 0) {
    do {
      uVar4 = (*(code *)puVar2)();
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
          (*(code *)PTR_set_functions_inner_000c3d08)();
        }
        ppuVar7 = (undefined **)((longlong)iVar1 << 0x20 | 2);
        local_38 = ppuVar7;
        lVar6 = (*(code *)PTR_get_os_functions_000c3c18)();
        cVar3 = (**(code **)(lVar6 + 0x10))();
        if (cVar3 == '\0') {
          return ppuVar7;
        }
      }
      else {
        if (uVar4 == 0) {
          return &PTR_DAT_000c1d58;
        }
        if (param_3 < uVar4) {
          (*(code *)PTR_slice_index_fail_000c3bb0)
                    (&
                     PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c2318
                     ,param_3);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (&local_38,param_3);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_3 = param_3 - uVar4;
      }
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


