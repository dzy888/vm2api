// 0057b900 write_body

/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::write_body */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::write_body(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  undefined *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 local_40;
  undefined4 local_38;
  char *local_30;
  undefined8 local_28;
  
  uVar1 = *(ulonglong *)(param_1 + 0x1b8);
  uVar3 = uVar1 + 0x7ffffffffffffffe;
  if (uVar3 < 4 && uVar3 != 1) {
    local_70 = param_1 + 0x1b8;
    local_68 = PTR_fmt_00799dd8;
    (*(code *)PTR_panic_fmt_007991a8)
              (CONCAT71((int7)(uVar3 >> 8),uVar3 != 1),
               &anon_92c4c5dab1af02541b6de8b875afdfcf_42_llvm_8405253652347736786);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = 0;
  lVar4 = uVar1 + 0x8000000000000001;
  if (-0x7fffffffffffffff < (longlong)uVar1) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    (*(code *)PTR_new_00799dd0)();
    local_80 = local_68;
    local_78 = uStack_60;
    uVar3 = 2;
  }
  else {
    local_70 = uVar1;
    if (lVar4 == 1) {
      local_70 = *(ulonglong *)(param_1 + 0x1c0);
      if (local_70 < (ulonglong)param_2[2]) {
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        uVar3 = 1;
      }
      else {
        *(ulonglong *)(param_1 + 0x1c0) = local_70 - param_2[2];
        uVar3 = 0;
      }
    }
  }
  local_68 = (undefined *)*param_2;
  uStack_60 = *(undefined4 *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_58 = *(undefined4 *)(param_2 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 3);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_40 = local_80;
  local_38 = local_78;
  local_30 = "\r\n";
  local_28 = 2;
  local_48 = local_70;
  local_70 = uVar3;
  <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
  ::buffer::
  <hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
            (param_1 + 0x30,&local_70);
  if ((*(longlong *)(param_1 + 0x1b8) == -0x8000000000000000) &&
     (*(longlong *)(param_1 + 0x1c0) == 0)) {
    *(ulonglong *)(param_1 + 0x1b8) = (ulonglong)*(byte *)(param_1 + 0x1d0) + 0x8000000000000004;
  }
  return;
}


