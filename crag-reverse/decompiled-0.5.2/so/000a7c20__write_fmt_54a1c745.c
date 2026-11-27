// 000a7c20 write_fmt

/* WARNING: Removing unreachable block (ram,0x000a7c67) */
/* WARNING: Removing unreachable block (ram,0x000a7c74) */
/* WARNING: Removing unreachable block (ram,0x000a7c5b) */
/* WARNING: Removing unreachable block (ram,0x000a7c79) */
/* <core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut [u8]> as
   std[6c98fd8553dbae28]::io::Write>::write_fmt */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut[u8]>as_std[6c98fd8553dbae28]::io::Write>::write_fmt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = (*(code *)PTR_write_000c3f70)(param_3,param_2);
  if ((char)uVar2 != '\0') {
    (*(code *)PTR_panic_fmt_000c3e90)
              (uVar2,&
                     PTR_anon_a096e19ef5e60642f162739f9e865059_86_llvm_12347187141279222813_000c1460
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return 0;
}


