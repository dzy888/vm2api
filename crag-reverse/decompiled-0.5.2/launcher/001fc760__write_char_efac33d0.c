// 001fc760 write_char

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StdoutLock>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StdoutLock>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 < 0x80) {
    uVar3 = 1;
  }
  else if (param_2 < 0x800) {
    param_4 = (ulonglong)(param_2 >> 6) | 0xc0;
    uVar3 = 2;
  }
  else {
    param_4 = (ulonglong)(param_2 >> 6) & 0xffffffffffffff3f | 0x80;
    if (param_2 < 0x10000) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
  }
  lVar2 = (*(code *)PTR_write_all_0021a0c0)(param_4,uVar3);
  if (lVar2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00219c58)();
      }
    }
    *(longlong *)(param_1 + 8) = lVar2;
  }
  return lVar2 != 0;
}


