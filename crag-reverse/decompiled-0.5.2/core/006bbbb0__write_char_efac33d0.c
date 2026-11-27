// 006bbbb0 write_char

/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize_as_core[c0acaeba6ab4c2e0]::fmt::Write>::
write_char(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **local_20;
  
  if (param_2 < 0x80) {
    uVar3 = 1;
  }
  else if (param_2 < 0x800) {
    param_4 = (ulonglong)(param_2 >> 6) | 0xc0;
    uVar3 = 2;
  }
  else {
    param_4 = (ulonglong)(param_2 >> 6) & 0xffffffffffffff3f | 0x80;
    if (param_2 < 0x10000) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
  }
  if ((ulonglong)*(byte *)(param_1 + 0x13) < 0x13) {
    uVar4 = 0x12 - (ulonglong)*(byte *)(param_1 + 0x13);
    uVar2 = uVar3;
    if (uVar4 < uVar3) {
      uVar2 = uVar4;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,uVar2);
    if (uVar3 <= uVar4) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)uVar3;
      return 0;
    }
  }
  else {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_d3057478e380898db632effa827bd31f_4_llvm_2674179329317868992_00792ad8,0x12);
  }
  local_20 = &anon_ef4b14893529305f96204f3f48f3faf4_35_llvm_5442923914717514648;
  (*(code *)PTR_unwrap_failed_00799028)
            (&PTR_<core[c0acaeba6ab4c2e0]::io::error::Error>_00792a20,&local_20,
             &PTR_anon_d3057478e380898db632effa827bd31f_4_llvm_2674179329317868992_00792ac0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


