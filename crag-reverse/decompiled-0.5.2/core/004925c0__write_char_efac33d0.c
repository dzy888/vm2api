// 004925c0 write_char

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

bool __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::sys::stdio::unix::Stderr>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  uint local_24;
  undefined1 local_20;
  longlong local_18;
  
  uVar6 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_24 = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_24 = (uint)(CONCAT11(uVar6,uVar2) & 0x3fff | 0x80c0);
      uVar5 = 2;
    }
    else {
      uVar4 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_24 = (uint)(CONCAT12(uVar6,CONCAT11(uVar2,uVar4)) & 0x3f3fff | 0x8080e0);
        uVar5 = 3;
      }
      else {
        local_24 = CONCAT13(uVar6,CONCAT12(uVar2,CONCAT11(uVar4,(char)(param_2 >> 0x12)))) &
                   0x3f3f3fff | 0x808080f0;
        uVar5 = 4;
      }
    }
  }
  lVar3 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
          write_all(*param_1,&local_24,uVar5);
  if (lVar3 != 0) {
    uVar1 = param_1[1];
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        local_18 = uVar1 - 1;
        local_20 = 3;
        (*(code *)PTR_drop_00799040)();
      }
    }
    param_1[1] = lVar3;
  }
  return lVar3 != 0;
}


