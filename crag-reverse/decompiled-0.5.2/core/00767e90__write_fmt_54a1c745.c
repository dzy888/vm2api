// 00767e90 write_fmt

/* WARNING: Removing unreachable block (ram,0x00767ed7) */
/* WARNING: Removing unreachable block (ram,0x00767ee4) */
/* WARNING: Removing unreachable block (ram,0x00767ecb) */
/* WARNING: Removing unreachable block (ram,0x00767ee9) */
/* <alloc[12e961f32105355]::vec::Vec<u8> as std[6c98fd8553dbae28]::io::Write>::write_fmt */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_007994b0)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar2,&PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_00796228
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


