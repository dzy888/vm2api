// 001fc6a0 write_char

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StderrLock>
   as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

void __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<std[6c98fd8553dbae28]::io::stdio::StderrLock>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint local_c;
  
  uVar4 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_c = param_2 & 0xff;
    uVar3 = 1;
  }
  else {
    uVar1 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_c = (uint)(CONCAT11(uVar4,uVar1) & 0x3fff | 0x80c0);
      uVar3 = 2;
    }
    else {
      uVar2 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_c = (uint)(CONCAT12(uVar4,CONCAT11(uVar1,uVar2)) & 0x3f3fff | 0x8080e0);
        uVar3 = 3;
      }
      else {
        local_c = CONCAT13(uVar4,CONCAT12(uVar1,CONCAT11(uVar2,(char)(param_2 >> 0x12)))) &
                  0x3f3f3fff | 0x808080f0;
        uVar3 = 4;
      }
    }
  }
  write_str(param_1,&local_c,uVar3);
  return;
}


