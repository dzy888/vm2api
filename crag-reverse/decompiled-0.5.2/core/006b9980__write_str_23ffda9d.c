// 006b9980 write_str

/* <hyper[c4782d5b5c5e3493]::common::date::CachedDate as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::common::date::CachedDate_as_core[c0acaeba6ab4c2e0]::fmt::Write>::write_str
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10) + param_3;
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


