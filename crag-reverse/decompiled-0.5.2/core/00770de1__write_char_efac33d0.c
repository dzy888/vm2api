// 00770de1 write_char

/* <rustc_demangle[a2bba03bad1b7f1a]::SizeLimitedFmtAdapter<&mut
   core[c0acaeba6ab4c2e0]::fmt::Formatter> as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

void __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::SizeLimitedFmtAdapter<&mut_core[c0acaeba6ab4c2e0]::fmt::Formatter>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(undefined8 param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = 1;
  }
  else if (param_2 < 0x800) {
    param_4 = (ulonglong)(param_2 >> 6) | 0xc0;
    uVar1 = 2;
  }
  else {
    param_4 = (ulonglong)(param_2 >> 6) & 0xffffffffffffff3f | 0x80;
    if (param_2 < 0x10000) {
      uVar1 = 3;
    }
    else {
      uVar1 = 4;
    }
  }
  (*(code *)PTR_write_str_0079b2d8)(param_4,uVar1);
  return;
}


