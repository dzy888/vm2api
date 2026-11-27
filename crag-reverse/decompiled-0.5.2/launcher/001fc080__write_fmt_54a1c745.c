// 001fc080 write_fmt

/* WARNING: Removing unreachable block (ram,0x001fc0c7) */
/* WARNING: Removing unreachable block (ram,0x001fc0d4) */
/* WARNING: Removing unreachable block (ram,0x001fc0bb) */
/* WARNING: Removing unreachable block (ram,0x001fc0d9) */
/* <alloc[12e961f32105355]::vec::Vec<u8> as std[6c98fd8553dbae28]::io::Write>::write_fmt */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_0021a2e0)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_0021a010)
              (uVar2,&PTR_anon_aa8a284406637d3c026889b109c79dc6_0_llvm_9655133765307635171_002173d8)
    ;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


