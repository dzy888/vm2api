// 000764b0 detect

/* memchr[cf489ff24f0213f]::arch::x86_64::memchr::count_raw::detect */

void __rustcall
memchr[cf489ff24f0213f]::arch::x86_64::memchr::count_raw::detect
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  short sVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(longlong *)PTR_CACHE_000c3da8 == 0) {
    sVar2 = (*(code *)PTR_detect_and_initialize_000c3db0)();
    puVar1 = (undefined8 *)PTR_FN_000c3fd8;
  }
  else {
    sVar2 = (short)*(longlong *)PTR_CACHE_000c3da8;
    puVar1 = (undefined8 *)PTR_FN_000c3fd8;
  }
  if (sVar2 < 0) {
    UNRECOVERED_JUMPTABLE = find_avx2;
  }
  else {
    UNRECOVERED_JUMPTABLE = find_sse2;
  }
  PTR_FN_000c3fd8 = (undefined *)puVar1;
  *puVar1 = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x00076505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar1,param_3);
  return;
}


