// 007633d0 write_str

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut
   [u8]>> as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<core[c0acaeba6ab4c2e0]::io::cursor::Cursor<&mut[u8]>>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = *(ulonglong *)(lVar1 + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  uVar3 = uVar2;
  if (uVar4 < uVar2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 - uVar3;
  uVar3 = param_3;
  if (uVar4 < param_3) {
    uVar3 = uVar4;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,uVar3);
  *(ulonglong *)(lVar1 + 0x10) = uVar3 + uVar2;
  if (uVar4 < param_3) {
    uVar2 = param_1[1];
    if (uVar2 != 0) {
      if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    param_1[1] = (longlong)&PTR_s_failed_to_write_whole_buffer_00796e10;
  }
  return uVar4 < param_3;
}


