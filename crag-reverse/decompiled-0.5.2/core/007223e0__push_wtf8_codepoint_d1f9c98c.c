// 007223e0 push_wtf8_codepoint

/* serde_json[dc3825464c436029]::read::push_wtf8_codepoint */

void __rustcall
serde_json[dc3825464c436029]::read::push_wtf8_codepoint(uint param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_1 < 0x80) {
    lVar1 = param_2[2];
    if (lVar1 == *param_2) {
      (*(code *)PTR_grow_one_007993d0)();
    }
    *(byte *)(param_2[1] + lVar1) = (byte)param_1;
    param_2[2] = lVar1 + 1;
    return;
  }
  lVar1 = param_2[2];
  if ((ulonglong)(*param_2 - lVar1) < 4) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar1,4,1,1);
    lVar1 = param_2[2];
  }
  pbVar2 = (byte *)(param_2[1] + lVar1);
  if (param_1 < 0x800) {
    bVar3 = (byte)(param_1 >> 6) | 0xc0;
    lVar4 = 2;
  }
  else {
    bVar3 = (byte)(param_1 >> 0xc) | 0xe0;
    pbVar2[1] = (byte)(param_1 >> 6) & 0x3f | 0x80;
    lVar4 = 3;
  }
  *pbVar2 = bVar3;
  pbVar2[lVar4 + -1] = (byte)param_1 & 0x3f | 0x80;
  param_2[2] = lVar1 + lVar4;
  return;
}


