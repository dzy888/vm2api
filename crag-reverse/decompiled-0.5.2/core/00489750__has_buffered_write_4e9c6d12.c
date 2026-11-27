// 00489750 has_buffered_write

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::has_buffered_write
    */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::has_buffered_write(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(ulonglong *)(param_1 + 0x68);
  if (uVar3 == 0) {
    lVar4 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0x50);
    uVar5 = 0;
    if (uVar7 <= *(ulonglong *)(param_1 + 0x60)) {
      uVar5 = uVar7;
    }
    lVar4 = *(ulonglong *)(param_1 + 0x60) - uVar5;
    lVar6 = uVar3 - (uVar7 - lVar4);
    if (uVar3 < uVar7 - lVar4 || lVar6 == 0) {
      uVar7 = uVar3 + lVar4;
      lVar6 = 0;
    }
  }
  local_18 = *(longlong *)(param_1 + 0x58);
  local_28 = lVar4 * 0x50 + local_18;
  local_20 = uVar7 * 0x50 + local_18;
  local_10 = lVar6 * 0x50 + local_18;
  lVar4 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::fold::
          <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
                    (&local_28,0);
  lVar4 = lVar4 + (lVar1 - lVar2);
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != 0);
}


