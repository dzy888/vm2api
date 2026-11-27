// 00768b70 write_all

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
  
  puVar2 = PTR_write_00799ef8;
  if (param_3 != 0) {
    do {
      uVar4 = (*(code *)puVar2)();
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        ppuVar7 = (undefined **)((longlong)iVar1 << 0x20 | 2);
        local_38 = ppuVar7;
        lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar3 = (**(code **)(lVar6 + 0x10))();
        if (cVar3 == '\0') {
          return ppuVar7;
        }
      }
      else {
        if (uVar4 == 0) {
          return &PTR_s_failed_to_write_whole_buffer_00796e10;
        }
        if (param_3 < uVar4) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_007975c8
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


