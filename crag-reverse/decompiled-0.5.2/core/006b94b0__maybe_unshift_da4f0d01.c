// 006b94b0 maybe_unshift

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Cursor<alloc[12e961f32105355]::vec::Vec<u8>>>::maybe_unshift
    */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Cursor<alloc[12e961f32105355]::vec::Vec<u8>>>::
maybe_unshift(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    if (*param_1 - uVar2 < param_2) {
      lVar4 = uVar2 - uVar1;
      if (uVar2 < uVar1) {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&anon_a0bdfe76b4b74febc0fe96214a8c0b42_13_llvm_14698491423915303612);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1[2] = 0;
      if (lVar4 != 0) {
        (*(code *)PTR_memmove_00799258)(*param_1 - uVar2,lVar4);
        param_1[2] = lVar4;
      }
      param_1[3] = 0;
    }
  }
  return;
}


