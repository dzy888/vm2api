// 006f3dd0 unpark

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::unpark */

void __rustcall <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::unpark(void)

{
  code *pcVar1;
  longlong local_10;
  
  local_10 = (*(code *)PTR_wake_0079a830)();
  if (local_10 != 0) {
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_10,
               &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}


