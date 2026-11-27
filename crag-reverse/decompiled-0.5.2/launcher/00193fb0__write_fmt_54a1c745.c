// 00193fb0 write_fmt

/* WARNING: Removing unreachable block (ram,0x00193ff3) */
/* WARNING: Removing unreachable block (ram,0x00194000) */
/* WARNING: Removing unreachable block (ram,0x00193fe8) */
/* WARNING: Removing unreachable block (ram,0x00194005) */
/* <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr as std[6c98fd8553dbae28]::io::Write>::write_fmt
    */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_0021a2e0)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_0021a010)
              (uVar2,&anon_aa8a284406637d3c026889b109c79dc6_6_llvm_9655133765307635171);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


