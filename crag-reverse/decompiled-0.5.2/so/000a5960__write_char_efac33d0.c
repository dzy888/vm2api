// 000a5960 write_char

/* <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Write>::write_char
          (longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[2];
  uVar6 = 1;
  if ((0x7f < param_2) && (uVar6 = 2, 0x7ff < param_2)) {
    uVar6 = 4 - (ulonglong)(param_2 < 0x10000);
  }
  if ((ulonglong)(*param_1 - lVar1) < uVar6) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,uVar6,1,1);
    lVar2 = param_1[1];
  }
  else {
    lVar2 = param_1[1];
  }
  if (param_2 < 0x80) {
    *(byte *)(lVar2 + lVar1) = (byte)param_2;
  }
  else {
    bVar3 = (byte)param_2 & 0x3f | 0x80;
    bVar4 = (byte)(param_2 >> 6);
    if (param_2 < 0x800) {
      *(byte *)(lVar2 + lVar1) = bVar4 | 0xc0;
      *(byte *)(lVar2 + 1 + lVar1) = bVar3;
    }
    else {
      bVar4 = bVar4 & 0x3f | 0x80;
      bVar5 = (byte)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        *(byte *)(lVar2 + lVar1) = bVar5 | 0xe0;
        *(byte *)(lVar2 + 1 + lVar1) = bVar4;
        *(byte *)(lVar2 + 2 + lVar1) = bVar3;
      }
      else {
        *(byte *)(lVar2 + lVar1) = (byte)(param_2 >> 0x12) | 0xf0;
        *(byte *)(lVar2 + 1 + lVar1) = bVar5 & 0x3f | 0x80;
        *(byte *)(lVar2 + 2 + lVar1) = bVar4;
        *(byte *)(lVar2 + 3 + lVar1) = bVar3;
      }
    }
  }
  param_1[2] = uVar6 + lVar1;
  return 0;
}


