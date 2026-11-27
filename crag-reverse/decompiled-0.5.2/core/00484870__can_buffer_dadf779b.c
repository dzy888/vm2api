// 00484870 can_buffer

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::can_buffer
    */

bool __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::can_buffer(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (0xf < uVar1) {
      return false;
    }
    lVar6 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18);
    if (uVar1 == 0) {
      lVar2 = 0;
      uVar3 = 0;
      lVar5 = 0;
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar3 <= *(ulonglong *)(param_1 + 0x30)) {
        uVar4 = uVar3;
      }
      lVar2 = *(ulonglong *)(param_1 + 0x30) - uVar4;
      lVar5 = uVar1 - (uVar3 - lVar2);
      if (uVar1 < uVar3 - lVar2 || lVar5 == 0) {
        uVar3 = uVar1 + lVar2;
        lVar5 = 0;
      }
    }
    local_20 = *(longlong *)(param_1 + 0x28);
    local_30 = lVar2 * 0x50 + local_20;
    local_28 = uVar3 * 0x50 + local_20;
    local_18 = lVar5 * 0x50 + local_20;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18);
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 == 0) {
      lVar2 = 0;
      uVar3 = 0;
      lVar5 = 0;
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar3 <= *(ulonglong *)(param_1 + 0x30)) {
        uVar4 = uVar3;
      }
      lVar2 = *(ulonglong *)(param_1 + 0x30) - uVar4;
      lVar5 = uVar1 - (uVar3 - lVar2);
      if (uVar1 < uVar3 - lVar2 || lVar5 == 0) {
        uVar3 = uVar1 + lVar2;
        lVar5 = 0;
      }
    }
    local_20 = *(longlong *)(param_1 + 0x28);
    local_30 = lVar2 * 0x50 + local_20;
    local_28 = uVar3 * 0x50 + local_20;
    local_18 = lVar5 * 0x50 + local_20;
  }
  lVar2 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::fold::
          <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
                    (&local_30,0);
  return (ulonglong)(lVar6 + lVar2) < *(ulonglong *)(param_1 + 0x40);
}


