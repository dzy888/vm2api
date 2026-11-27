// 0009b330 flush_buf

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
    local_40 = &PTR_DAT_000c1be0;
    do {
      *(undefined1 *)(param_1 + 0x18) = 1;
      lVar6 = uVar2 - uVar7;
      lVar4 = (*(code *)PTR_write_000c3be8)();
      if (lVar4 == -1) {
        piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
        iVar1 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
          (*(code *)PTR_set_functions_inner_000c3d08)();
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
        lVar4 = lVar6;
        if (iVar1 == 9) goto LAB_0009b440;
        lVar4 = (*(code *)PTR_get_os_functions_000c3c18)();
        cVar3 = (**(code **)(lVar4 + 0x10))();
        if (cVar3 == '\0') {
          local_40 = (undefined **)((longlong)iVar1 << 0x20 | 2);
          goto LAB_0009b47d;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 0;
LAB_0009b440:
        if (lVar4 == 0) {
LAB_0009b47d:
          if (uVar7 == 0) {
            return local_40;
          }
          (*(code *)PTR_memmove_000c3c50)();
          goto LAB_0009b49a;
        }
        uVar7 = uVar7 + lVar4;
      }
      lVar6 = uVar2 - uVar7;
    } while (uVar2 >= uVar7 && lVar6 != 0);
    if (uVar2 < uVar7) {
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_a5ba4df77f1b4a3fe3c10524a13d0962_7_llvm_10773032595843144328_000c1dc0);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <<std[6c98fd8553dbae28]::io::buffered::bufwriter::BufWriter<_>>::flush_buf::BufGuard>
                (param_1,uVar7);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memmove_000c3c50)();
    local_40 = (undefined **)0x0;
LAB_0009b49a:
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  return local_40;
}


