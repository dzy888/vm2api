// 0057f330 poll_read_keep_alive

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_read_keep_alive */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_read_keep_alive(longlong param_1)

{
  undefined8 uVar1;
  undefined8 unaff_R14;
  undefined1 auVar2 [16];
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x150) == 0) {
    if (*(longlong *)(param_1 + 0x1b8) != -0x7ffffffffffffffe) goto LAB_0057f37a;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
LAB_0057f36d:
      uVar1 = 0;
      unaff_R14 = (*(code *)PTR_new_unexpected_message_00799e40)();
      goto LAB_0057f3b5;
    }
    auVar2 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
             ::poll_read_from_io();
    if (auVar2._0_8_ == 0) {
      if (auVar2._8_8_ == 0) {
        unaff_R14 = 0;
        (*(code *)PTR_close_read_00799568)();
        uVar1 = 0;
        goto LAB_0057f3b5;
      }
      goto LAB_0057f36d;
    }
    if (auVar2._0_8_ == 2) goto LAB_0057f3b5;
    (*(code *)PTR_close_007995c8)();
  }
  else {
    if ((int)*(longlong *)(param_1 + 0x150) == 4) goto LAB_0057f3b5;
LAB_0057f37a:
    if ((*(char *)(param_1 + 0x238) != '\0') || (*(longlong *)(param_1 + 0xa0) != 0))
    goto LAB_0057f3b5;
    auVar2 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
             ::poll_read_from_io();
    if (auVar2._0_8_ == 0) {
      unaff_R14 = 0;
      uVar1 = 0;
      if (auVar2._8_8_ == 0) {
        (*(code *)PTR_close_read_00799568)();
        uVar1 = 0;
        unaff_R14 = (*(code *)PTR_new_incomplete_00799978)();
      }
      goto LAB_0057f3b5;
    }
    if (auVar2._0_8_ == 2) goto LAB_0057f3b5;
    (*(code *)PTR_close_007995c8)();
  }
  unaff_R14 = (*(code *)PTR_new_io_00799988)();
  uVar1 = 0;
LAB_0057f3b5:
  auVar2._8_8_ = unaff_R14;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


