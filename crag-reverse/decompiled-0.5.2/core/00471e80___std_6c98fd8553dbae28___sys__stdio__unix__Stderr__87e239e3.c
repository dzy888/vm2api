// 00471e80 <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>

/* WARNING: Removing unreachable block (ram,0x00471ec3) */
/* WARNING: Removing unreachable block (ram,0x00471ed0) */
/* WARNING: Removing unreachable block (ram,0x00471eb8) */
/* WARNING: Removing unreachable block (ram,0x00471ed5) */
/* std[6c98fd8553dbae28]::io::default_write_fmt::<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>
    */

undefined8 __rustcall
std[6c98fd8553dbae28]::io::default_write_fmt::<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_007994b0)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar2,&anon_d4d3cd51d1d91a17bb767b00236b3a9b_13_llvm_17589326713533067298);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


