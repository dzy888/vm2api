// 00363280 <<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,
   _> as 
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
          (ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    do {
      if (*param_1 < 3) {
        lVar1 = 0x18;
        uVar2 = 0x10;
        lVar3 = 8;
LAB_003632b4:
        (**(code **)(*(longlong *)((longlong)param_1 + lVar3) + 0x20))
                  (uVar2,*(undefined8 *)((longlong)param_1 + lVar1));
      }
      else if ((int)*param_1 != 3) {
        lVar1 = 0x28;
        uVar2 = 0x20;
        lVar3 = 0x18;
        goto LAB_003632b4;
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 10;
    } while (param_2 != 0);
  }
  return;
}


