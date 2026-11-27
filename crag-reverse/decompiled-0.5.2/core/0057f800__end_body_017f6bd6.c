// 0057f800 end_body

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::end_body */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::end_body(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  uVar1 = lVar3 + 0x7ffffffffffffffe;
  if (3 < uVar1 || uVar1 == 1) {
    lVar5 = 0;
    if (lVar3 < -0x7ffffffffffffffe) {
      lVar5 = lVar3 + -0x7fffffffffffffff;
    }
    if (lVar5 == 0) {
      local_80 = 3;
      local_78 = "0\r\n\r\n";
      local_70 = 5;
      <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::buffer::
      <hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
                (param_1 + 0x30,&local_80);
      lVar3 = *(longlong *)(param_1 + 0x1b8);
      uVar1 = lVar3 + 0x7ffffffffffffffe;
    }
    else if ((lVar5 == 1) && (lVar5 = *(longlong *)(param_1 + 0x1c0), lVar5 != 0)) {
      if ((-0x7fffffffffffffff < lVar3) && (lVar3 != -1)) {
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          lVar4 = lVar5 + 0x38;
          lVar6 = 1 - *(longlong *)(param_1 + 0x1c8);
          do {
            if (*(longlong *)(lVar4 + -0x38) != 0) {
              (**(code **)(*(longlong *)(lVar4 + -0x38) + 0x20))();
            }
            lVar4 = lVar4 + 0x20;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 1);
        }
        if (lVar3 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      *(undefined8 *)(param_1 + 0x1b8) = 0x8000000000000005;
      uVar2 = (*(code *)PTR_new_body_write_aborted_00799e48)();
      <hyper[c4782d5b5c5e3493]::error::Error>::with::
      <hyper[c4782d5b5c5e3493]::proto::h1::encode::NotEof>(uVar2,lVar5);
      return uVar2;
    }
    uVar2 = 0x8000000000000004;
    if (*(char *)(param_1 + 0x1d0) != '\0') {
      uVar2 = 0x8000000000000005;
    }
    if (lVar3 == -0x7fffffffffffffff) {
      uVar2 = 0x8000000000000005;
    }
    if (((3 < uVar1 || uVar1 == 1) && (-0x7fffffffffffffff < lVar3)) && (lVar3 != -1)) {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1c0) + 0x38;
        lVar5 = 1 - *(longlong *)(param_1 + 0x1c8);
        do {
          if (*(longlong *)(lVar3 + -0x38) != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x38) + 0x20))();
          }
          lVar3 = lVar3 + 0x20;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 1);
        lVar3 = *(longlong *)(param_1 + 0x1b8);
      }
      if (lVar3 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  }
  return 0;
}


