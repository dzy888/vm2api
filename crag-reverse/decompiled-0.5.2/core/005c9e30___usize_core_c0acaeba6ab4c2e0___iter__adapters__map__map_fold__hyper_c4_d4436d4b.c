// 005c9e30 <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::{closure#0},<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::{closure#0}>>::{closure#0}>::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<usize,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,
   usize, usize,
   <hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
   as bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::{closure#0}, <usize as
   core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,
   <hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
   as 
   bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::{closure#0}>>::{closure#0}>::{closure#0}>
    */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
          (longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)param_1[1]) {
                    /* WARNING: Could not recover jumptable at 0x005c9e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_0019d8a0 + *(int *)(&DAT_0019d8a0 + *plVar1 * 4)))
                      (0xcccccccccccccccd,(ulonglong)(param_1[1] - (longlong)plVar1) / 0x50,
                       plVar1 + 9,&DAT_0019d8a0 + *(int *)(&DAT_0019d8a0 + *plVar1 * 4));
    return uVar2;
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 == (longlong *)param_1[3]) {
    return param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x005c9f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_0019d8b4 + *(int *)(&DAT_0019d8b4 + *plVar1 * 4)))
                    (&DAT_0019d8b4 + *(int *)(&DAT_0019d8b4 + *plVar1 * 4),
                     (ulonglong)(param_1[3] - (longlong)plVar1) / 0x50);
  return uVar2;
}


