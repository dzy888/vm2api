// 00704130 write_fmt

/* WARNING: Removing unreachable block (ram,0x006e1c93) */
/* WARNING: Removing unreachable block (ram,0x006e1ca0) */
/* WARNING: Removing unreachable block (ram,0x006e1c88) */
/* WARNING: Removing unreachable block (ram,0x006e1ca5) */
/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_fmt
    */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_007994b0)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar2,&anon_48246b2c7bc3818a1cbc30620defa29e_4_llvm_17816610714767121267);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


