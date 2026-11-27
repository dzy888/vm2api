// 006bb9a0 write_str

/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize_as_core[c0acaeba6ab4c2e0]::fmt::Write>::
write_str(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined **local_20;
  
  if ((ulonglong)*(byte *)(param_1 + 0x13) < 0x13) {
    uVar3 = 0x12 - (ulonglong)*(byte *)(param_1 + 0x13);
    uVar2 = param_3;
    if (uVar3 < param_3) {
      uVar2 = uVar3;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,uVar2);
    if (param_3 <= uVar3) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)param_3;
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


