// 0038d7f0 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::grow(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  <alloc[12e961f32105355]::raw_vec::RawVec<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
  ::grow_one();
  if ((ulonglong)(lVar1 - param_1[3]) < (ulonglong)param_1[2]) {
    lVar2 = *param_1;
    uVar4 = lVar1 - param_1[2];
    uVar3 = param_1[3] - uVar4;
    if (uVar3 <= (ulonglong)(lVar2 - lVar1) && uVar3 < uVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar4,uVar3 * 0x50);
      return;
    }
    (*(code *)PTR_memmove_00799258)(uVar4 * 0x10,uVar4 * 0x50);
    param_1[2] = lVar2 - uVar4;
  }
  return;
}


