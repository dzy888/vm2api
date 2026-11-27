// 004895b0 poll_read_from_io

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::poll_read_from_io
    */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::poll_read_from_io(undefined4 param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  ulonglong uVar11;
  undefined **ppuVar10;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_2 + 0xb9) = 0;
  uVar11 = *(ulonglong *)(param_2 + 0x88);
  uVar3 = *(ulonglong *)(param_2 + 0xa0);
  uVar6 = uVar11;
  if (*(char *)(param_2 + 0x80) == '\0') {
    uVar6 = *(ulonglong *)(param_2 + 0x90);
  }
  uVar8 = 0;
  if (uVar3 <= uVar6) {
    uVar8 = uVar6 - uVar3;
  }
  if (uVar11 <= uVar8) {
    uVar8 = uVar11;
  }
  uVar11 = *(ulonglong *)(param_2 + 0xa8);
  if (uVar11 - uVar3 < uVar8) {
    param_1 = (*(code *)PTR_reserve_inner_00799a30)(uVar11 - uVar3,1);
    uVar3 = *(ulonglong *)(param_2 + 0xa0);
    uVar11 = *(ulonglong *)(param_2 + 0xa8);
  }
  if (uVar11 == uVar3) {
    (*(code *)PTR_reserve_inner_00799a30)(param_1,1);
    uVar3 = *(ulonglong *)(param_2 + 0xa0);
    uVar11 = *(ulonglong *)(param_2 + 0xa8);
  }
  ppuVar10 = (undefined **)(uVar11 - uVar3);
  local_40 = (undefined **)(uVar3 + *(longlong *)(param_2 + 0x98));
  local_30 = (undefined **)0x0;
  uStack_28 = 0;
  pppuVar7 = &local_40;
  local_38 = ppuVar10;
  bVar2 = (*(code *)PTR_poll_read_00799a38)();
  ppuVar9 = local_30;
  if (pppuVar7 != (undefined ***)0x0 || (bVar2 & 1) != 0) {
    if ((bVar2 & 1) != 0) {
      *(undefined1 *)(param_2 + 0xb9) = 1;
      return 2;
    }
    if (pppuVar7 != (undefined ***)0x0) {
      return 1;
    }
    lVar4 = *(longlong *)(param_2 + 0xa0);
    ppuVar9 = (undefined **)0x0;
LAB_004896ca:
    *(longlong *)(param_2 + 0xa0) = lVar4 + (longlong)ppuVar9;
    (*(code *)PTR_record_00799a40)();
    return 0;
  }
  if (local_30 <= local_38) {
    if (local_30 <= ppuVar10) {
      lVar4 = *(longlong *)(param_2 + 0xa0);
      ppuVar10 = (undefined **)(*(longlong *)(param_2 + 0xa8) - lVar4);
      if (local_30 <= ppuVar10) goto LAB_004896ca;
      goto LAB_0048972d;
    }
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_d4d3cd51d1d91a17bb767b00236b3a9b_86_llvm_17589326713533067298,ppuVar10);
  }
  ppuVar10 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_711_llvm_8436237269785592069;
  (*(code *)PTR_slice_index_fail_007993c8)();
LAB_0048972d:
  local_40 = ppuVar9;
  local_38 = ppuVar10;
  (*(code *)PTR_panic_advance_00799a48)();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}


