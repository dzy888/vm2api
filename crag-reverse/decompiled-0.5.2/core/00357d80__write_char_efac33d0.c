// 00357d80 write_char

/* <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Write>::write_char
          (longlong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  
  lVar1 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar1) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,1,1,1);
    }
    *(byte *)(param_1[1] + lVar1) = (byte)param_2;
    lVar3 = 1;
  }
  else {
    uVar5 = 2;
    if (0x7ff < param_2) {
      uVar5 = 4 - (ulonglong)(param_2 < 0x10000);
    }
    if ((ulonglong)(*param_1 - lVar1) < uVar5) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,uVar5,1,1);
    }
    bVar2 = (byte)param_2 & 0x3f | 0x80;
    lVar3 = param_1[1];
    bVar4 = (byte)(param_2 >> 6);
    if (param_2 < 0x800) {
      *(byte *)(lVar3 + lVar1) = bVar4 | 0xc0;
      *(byte *)(lVar3 + 1 + lVar1) = bVar2;
      lVar3 = 2;
    }
    else {
      bVar4 = bVar4 & 0x3f | 0x80;
      bVar6 = (byte)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        *(byte *)(lVar3 + lVar1) = bVar6 | 0xe0;
        *(byte *)(lVar3 + 1 + lVar1) = bVar4;
        *(byte *)(lVar3 + 2 + lVar1) = bVar2;
        lVar3 = 3;
      }
      else {
        *(byte *)(lVar3 + lVar1) = (byte)(param_2 >> 0x12) | 0xf0;
        *(byte *)(lVar3 + 1 + lVar1) = bVar6 & 0x3f | 0x80;
        *(byte *)(lVar3 + 2 + lVar1) = bVar4;
        *(byte *)(lVar3 + 3 + lVar1) = bVar2;
        lVar3 = 4;
      }
    }
  }
  param_1[2] = lVar3 + lVar1;
  return 0;
}


