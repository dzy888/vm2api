// 001e9e00 flush_buf

/* <std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>::flush_buf
    */

undefined ** __rustcall
<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>
::flush_buf(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined **local_40;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    local_40 = (undefined **)0x0;
  }
  else {
    uVar7 = 0;
    local_40 = &PTR_DAT_00217c48;
    do {
      *(undefined1 *)(param_1 + 0x18) = 1;
      lVar6 = uVar2 - uVar7;
      lVar4 = (*(code *)PTR_write_0021a900)();
      if (lVar4 == -1) {
        piVar5 = (int *)(*(code *)PTR___errno_location_00219f18)();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
        lVar4 = lVar6;
        if (iVar1 == 9) goto LAB_001e9f10;
        lVar4 = (*(code *)PTR_get_os_functions_0021a0e8)();
        cVar3 = (**(code **)(lVar4 + 0x10))();
        if (cVar3 == '\0') {
          local_40 = (undefined **)((longlong)iVar1 << 0x20 | 2);
          goto LAB_001e9f4d;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 0;
LAB_001e9f10:
        if (lVar4 == 0) {
LAB_001e9f4d:
          if (uVar7 == 0) {
            return local_40;
          }
          (*(code *)PTR_memmove_00219fb0)();
          goto LAB_001e9f6a;
        }
        uVar7 = uVar7 + lVar4;
      }
      lVar6 = uVar2 - uVar7;
    } while (uVar2 >= uVar7 && lVar6 != 0);
    if (uVar2 < uVar7) {
      (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00217e40);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
                (param_1,uVar7);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memmove_00219fb0)();
    local_40 = (undefined **)0x0;
LAB_001e9f6a:
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  return local_40;
}


