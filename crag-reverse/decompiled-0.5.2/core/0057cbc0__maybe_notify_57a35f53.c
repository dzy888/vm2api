// 0057cbc0 maybe_notify

/* WARNING: Switch with 1 destination removed at 0x0057cc72 */
/* WARNING: Switch with 1 destination removed at 0x0057cc80 */
/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::maybe_notify */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::maybe_notify(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  if ((((*(longlong *)(param_1 + 0x150) != 0) ||
       (uVar1 = *(longlong *)(param_1 + 0x1b8) + 0x7ffffffffffffffe, 3 < uVar1)) || (uVar1 == 1)) ||
     (*(char *)(param_1 + 0xb9) != '\0')) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    auVar5 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
             ::poll_read_from_io(param_1);
    if (auVar5._0_8_ == 0) {
      if (auVar5._8_8_ == 0) {
        if (*(char *)(param_1 + 0x247) != '\0') {
          if (((*(longlong *)(param_1 + 0x150) == 1) || ((int)*(longlong *)(param_1 + 0x150) == 2))
             && ((*(uint *)(param_1 + 0x158) < 2 && (*(longlong *)(param_1 + 0x188) != 0)))) {
            (*(code *)PTR_drop_007994e8)();
          }
          *(undefined8 *)(param_1 + 0x150) = 4;
          *(undefined1 *)(param_1 + 0x247) = 2;
          return;
        }
        if (((*(longlong *)(param_1 + 0x150) == 1) || ((int)*(longlong *)(param_1 + 0x150) == 2)) &&
           ((*(uint *)(param_1 + 0x158) < 2 && (*(longlong *)(param_1 + 0x188) != 0)))) {
          (*(code *)PTR_drop_007994e8)();
        }
        *(undefined8 *)(param_1 + 0x150) = 4;
        lVar3 = *(longlong *)(param_1 + 0x1b8);
        if (((3 < lVar3 + 0x7ffffffffffffffeU || lVar3 + 0x7ffffffffffffffeU == 1) &&
            (-0x7fffffffffffffff < lVar3)) && (lVar3 != -1)) {
          if (*(longlong *)(param_1 + 0x1c8) != 0) {
            lVar3 = *(longlong *)(param_1 + 0x1c0) + 0x38;
            lVar4 = 1 - *(longlong *)(param_1 + 0x1c8);
            do {
              if (*(longlong *)(lVar3 + -0x38) != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x38) + 0x20))();
              }
              lVar3 = lVar3 + 0x20;
              lVar4 = lVar4 + 1;
            } while (lVar4 != 1);
            lVar3 = *(longlong *)(param_1 + 0x1b8);
          }
          if (lVar3 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
        *(undefined8 *)(param_1 + 0x1b8) = 0x8000000000000005;
        *(undefined1 *)(param_1 + 0x247) = 2;
        return;
      }
    }
    else {
      if (auVar5._0_8_ == 2) {
        return;
      }
      (*(code *)PTR_close_007995c8)();
      uVar2 = (*(code *)PTR_new_io_00799988)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
                (*(undefined8 *)(param_1 + 0x200));
      *(undefined8 *)(param_1 + 0x200) = uVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x245) = 1;
  return;
}


