// 004740a0 <hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
          (ulonglong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 < 3) {
    lVar1 = 0x18;
    lVar2 = 8;
  }
  else {
    if ((int)*param_1 == 3) {
      return;
    }
    lVar1 = 0x28;
    lVar2 = 0x18;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)((longlong)param_1 + lVar2) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x004740f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,*(undefined8 *)((longlong)param_1 + lVar1),UNRECOVERED_JUMPTABLE);
  return;
}


