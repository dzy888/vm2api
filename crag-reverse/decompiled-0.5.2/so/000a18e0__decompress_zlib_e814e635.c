// 000a18e0 decompress_zlib

/* std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::decompress_zlib */

bool __rustcall
std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::decompress_zlib
          (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  puVar1 = PTR_memset_000c3cd8;
  (*(code *)PTR_memset_000c3cd8)(param_4,0x120);
  (*(code *)puVar1)(0,0x2780);
  (*(code *)PTR_decompress_000c43a0)(param_2,param_1,param_3,param_4);
  return local_40 == param_4 && (local_50 == param_2 && local_48 == '\0');
}


