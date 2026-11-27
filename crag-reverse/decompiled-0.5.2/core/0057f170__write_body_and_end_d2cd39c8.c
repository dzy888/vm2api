// 0057f170 write_body_and_end

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::write_body_and_end */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::write_body_and_end(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x1b8);
  uVar4 = *(longlong *)(param_1 + 0x1b8) + 0x7ffffffffffffffe;
  if (uVar4 < 4 && uVar4 != 1) {
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar4 < 4,&anon_92c4c5dab1af02541b6de8b875afdfcf_58_llvm_8405253652347736786);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar3 = <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_and_end::
          <bytes[e9829e187354639b]::bytes::Bytes>(plVar1,param_2,param_1 + 0x30);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  if (((lVar5 + 0x7ffffffffffffffeU == 1 || 3 < lVar5 + 0x7ffffffffffffffeU) &&
      (-0x7fffffffffffffff < lVar5)) && (lVar5 != -1)) {
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1c0) + 0x38;
      lVar5 = 1 - *(longlong *)(param_1 + 0x1c8);
      do {
        if (*(longlong *)(lVar6 + -0x38) != 0) {
          (**(code **)(*(longlong *)(lVar6 + -0x38) + 0x20))();
        }
        lVar6 = lVar6 + 0x20;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 1);
      lVar5 = *plVar1;
    }
    if (lVar5 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *plVar1 = ((ulonglong)bVar3 ^ 7) + 0x7ffffffffffffffe;
  return;
}


