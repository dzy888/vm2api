// 006b9a10 write_char

/* <hyper[c4782d5b5c5e3493]::common::date::CachedDate as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::common::date::CachedDate_as_core[c0acaeba6ab4c2e0]::fmt::Write>::
write_char(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 < 0x80) {
    lVar4 = 1;
  }
  else if (param_2 < 0x800) {
    lVar4 = 2;
  }
  else if (param_2 < 0x10000) {
    lVar4 = 3;
  }
  else {
    lVar4 = 4;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10) + lVar4;
  if ((uVar1 < *(ulonglong *)(param_1 + 0x10)) || (0x1d < uVar1)) {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_9_llvm_14698491423915303612_007929b0,0x1d)
    ;
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  (*(code *)PTR_memcpy_00799008)();
  *(ulonglong *)(param_1 + 0x10) = uVar1;
  return 0;
}


