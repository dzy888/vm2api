// 0048dda0 read_mem

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>> as
   hyper[c4782d5b5c5e3493]::proto::h1::io::MemRead>::read_mem */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_hyper[c4782d5b5c5e3493]::proto::h1::io::MemRead>
::read_mem(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined *local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong *local_40;
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  
  uVar4 = *(ulonglong *)(param_2 + 0xa0);
  if (uVar4 == 0) {
    auVar5 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
             ::poll_read_from_io(param_2,param_3);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 0) {
      (*(code *)PTR_split_to_00799a58)();
      if ((local_60 & 1) == 0) {
        local_a8 = PTR_SHARED_VTABLE_00799a60;
      }
      else {
        uVar4 = local_60 >> 5;
        local_50 = local_78 - uVar4;
        local_48 = local_70 + uVar4;
        local_58 = local_68 + uVar4;
        (*(code *)PTR_from_00799a68)();
        local_70 = local_98 - uVar4;
        if (local_98 < uVar4) {
          local_40 = &local_88;
          local_38 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_30 = local_80;
          local_28 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
          local_88 = uVar4;
          (*(code *)PTR_panic_fmt_007991a8)
                    (local_30,&
                              PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_0078adb8
                    );
          goto LAB_0048dff1;
        }
        local_78 = uVar4 + local_a0;
        local_60 = local_90;
      }
      param_1[1] = local_a8;
      param_1[2] = local_78;
      goto LAB_0048dea0;
    }
    uVar3 = 1;
    if (auVar5._0_8_ == 2) goto LAB_0048deaf;
    param_1[1] = 0;
    lVar2 = 0x10;
  }
  else {
    if (uVar4 < param_4) {
      param_4 = uVar4;
    }
    (*(code *)PTR_split_to_00799a58)(param_4,param_4);
    if ((local_60 & 1) == 0) {
      local_a8 = PTR_SHARED_VTABLE_00799a60;
    }
    else {
      uVar4 = local_60 >> 5;
      local_50 = local_78 - uVar4;
      local_48 = local_70 + uVar4;
      local_58 = local_68 + uVar4;
      (*(code *)PTR_from_00799a68)();
      local_70 = local_98 - uVar4;
      if (local_98 < uVar4) {
        local_40 = &local_88;
        local_38 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_30 = local_80;
        local_28 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_88 = uVar4;
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_30,&
                            PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_0078adb8
                  );
LAB_0048dff1:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_78 = uVar4 + local_a0;
      local_60 = local_90;
    }
    param_1[1] = local_a8;
    param_1[2] = local_78;
LAB_0048dea0:
    param_1[3] = local_70;
    lVar2 = 0x20;
    uVar4 = local_60;
  }
  *(ulonglong *)((longlong)param_1 + lVar2) = uVar4;
  uVar3 = 0;
LAB_0048deaf:
  *param_1 = uVar3;
  return param_1;
}


