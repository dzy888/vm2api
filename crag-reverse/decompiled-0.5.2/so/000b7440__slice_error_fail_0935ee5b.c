// 000b7440 slice_error_fail

/* core[c0acaeba6ab4c2e0]::str::slice_error_fail */

void __rustcall core[c0acaeba6ab4c2e0]::str::slice_error_fail(void)

{
  code *pcVar1;
  
  (*(code *)PTR_slice_error_fail_rt_000c4778)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


