// 00768340 write_char

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut
   [u8]>> as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut[u8]>>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(longlong *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x80) {
    uVar5 = 1;
  }
  else if (param_2 < 0x800) {
    param_4 = (ulonglong)(param_2 >> 6) | 0xc0;
    uVar5 = 2;
  }
  else {
    param_4 = (ulonglong)(param_2 >> 6) & 0xffffffffffffff3f | 0x80;
    if (param_2 < 0x10000) {
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
  }
  lVar1 = *param_1;
  uVar4 = *(ulonglong *)(lVar1 + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  uVar3 = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 - uVar3;
  uVar3 = uVar5;
  if (uVar4 < uVar5) {
    uVar3 = uVar4;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,uVar3);
  *(ulonglong *)(lVar1 + 0x10) = uVar3 + uVar2;
  if (uVar4 < uVar5) {
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    param_1[1] = (longlong)&PTR_s_failed_to_write_whole_buffer_00796e10;
  }
  return uVar4 < uVar5;
}


