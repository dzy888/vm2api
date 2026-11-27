// 00090880 now

/* <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now */

undefined8 __rustcall <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_28;
  ulonglong local_20;
  undefined **local_18;
  
  iVar2 = (*(code *)PTR_clock_gettime_000c42f8)();
  if (iVar2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    local_18 = (undefined **)((longlong)iVar2 << 0x20 | 2);
    (*(code *)PTR_unwrap_failed_000c3c78)
              (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_000c1808,&local_18,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_000c18e0);
  }
  else {
    if (local_20 < 1000000000) {
      return local_28;
    }
    local_18 = &PTR_DAT_000c18c8;
    (*(code *)PTR_unwrap_failed_000c3c78)
              (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_000c1808,&local_18,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_000c18f8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


