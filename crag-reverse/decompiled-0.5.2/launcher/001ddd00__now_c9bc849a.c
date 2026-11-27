// 001ddd00 now

/* <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now */

undefined8 __rustcall <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_28;
  ulonglong local_20;
  undefined **local_18;
  
  iVar2 = (*(code *)PTR_clock_gettime_0021a920)();
  if (iVar2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 != &PTR_call_once_002175a8) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    local_18 = (undefined **)((longlong)iVar2 << 0x20 | 2);
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_002177f8,&local_18,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_002178d0);
  }
  else {
    if (local_20 < 1000000000) {
      return local_28;
    }
    local_18 = &PTR_DAT_002178b8;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_002177f8,&local_18,
               &PTR_s__rustc_48a229ceaefd4985c50990b14_002178e8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


