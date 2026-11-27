// 000a8290 write_all_vectored

/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as
   std[6c98fd8553dbae28]::io::Write>::write_all_vectored */

undefined ** __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
write_all_vectored(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  undefined **local_38;
  
  puVar3 = PTR_writev_000c42d8;
  if (param_3 != 0) {
    uVar9 = 0;
    lVar8 = 0;
    do {
      if (*(longlong *)(param_2 + 8 + lVar8) != 0) goto LAB_000a82e7;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (param_3 * 0x10 != lVar8);
    uVar9 = (param_3 * 0x10 - 0x10 >> 4) + 1;
LAB_000a82e7:
    if (param_3 < uVar9) {
LAB_000a842f:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1af0,param_3);
LAB_000a8442:
      (*(code *)PTR_panic_fmt_000c3e90)();
LAB_000a845b:
      (*(code *)PTR_panic_fmt_000c3e90)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (&local_38,0x4f);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    param_3 = param_3 - uVar9;
    if (param_3 != 0) {
      plVar11 = (longlong *)(param_2 + uVar9 * 0x10);
      do {
        while (ppuVar5 = (undefined **)(*(code *)puVar3)(),
              ppuVar5 == (undefined **)0xffffffffffffffff) {
          piVar7 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
          iVar2 = *piVar7;
          if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
            (*(code *)PTR_set_functions_inner_000c3d08)();
          }
          ppuVar5 = (undefined **)((longlong)iVar2 << 0x20 | 2);
          local_38 = ppuVar5;
          lVar8 = (*(code *)PTR_get_os_functions_000c3c18)();
          cVar4 = (**(code **)(lVar8 + 0x10))();
          if (cVar4 == '\0') {
            return ppuVar5;
          }
        }
        if (ppuVar5 == (undefined **)0x0) {
          return &PTR_DAT_000c1d58;
        }
        lVar8 = 0;
        uVar9 = 0;
        ppuVar6 = ppuVar5;
        do {
          puVar1 = (ulonglong *)((longlong)plVar11 + lVar8 + 8);
          ppuVar10 = (undefined **)((longlong)ppuVar6 - *puVar1);
          if (ppuVar6 < (undefined **)*puVar1) goto LAB_000a837c;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x10;
          ppuVar6 = ppuVar10;
        } while (param_3 * 0x10 != lVar8);
        uVar9 = (param_3 * 0x10 - 0x10 >> 4) + 1;
LAB_000a837c:
        local_38 = ppuVar5;
        if (param_3 < uVar9) goto LAB_000a842f;
        param_3 = param_3 - uVar9;
        if (param_3 == 0) {
          if (ppuVar6 == (undefined **)0x0) {
            return (undefined **)0x0;
          }
          goto LAB_000a845b;
        }
        plVar11 = plVar11 + uVar9 * 2;
        if ((undefined **)plVar11[1] < ppuVar6) goto LAB_000a8442;
        plVar11[1] = plVar11[1] - (longlong)ppuVar6;
        *plVar11 = *plVar11 + (longlong)ppuVar6;
      } while( true );
    }
  }
  return (undefined **)0x0;
}


