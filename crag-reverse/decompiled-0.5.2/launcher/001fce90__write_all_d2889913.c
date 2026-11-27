// 001fce90 write_all

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stdout as std[6c98fd8553dbae28]::io::Write>::write_all
    */

undefined ** __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stdout_as_std[6c98fd8553dbae28]::io::Write>::write_all
          (undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined **local_38;
  
  puVar2 = PTR_write_0021a900;
  if (param_2 != 0) {
    do {
      uVar4 = (*(code *)puVar2)();
      if (uVar4 == 0xffffffffffffffff) {
        piVar5 = (int *)(*(code *)PTR___errno_location_00219f18)();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
        ppuVar7 = (undefined **)((longlong)iVar1 << 0x20 | 2);
        local_38 = ppuVar7;
        lVar6 = (*(code *)PTR_get_os_functions_0021a0e8)();
        cVar3 = (**(code **)(lVar6 + 0x10))();
        if (cVar3 == '\0') {
          return ppuVar7;
        }
      }
      else {
        if (uVar4 == 0) {
          return &PTR_DAT_00217dc0;
        }
        if (param_2 < uVar4) {
          (*(code *)PTR_slice_index_fail_00219d80)
                    (&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_002183d8,
                     param_2);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (&local_38,param_2);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        param_2 = param_2 - uVar4;
      }
    } while (param_2 != 0);
  }
  return (undefined **)0x0;
}


