// 00488d40 poll_flush

/* WARNING: Removing unreachable block (ram,0x00489519) */
/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::poll_flush
    */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::poll_flush(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined **appuStack_468 [7];
  ulonglong local_430 [128];
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    uVar15 = 0;
    puVar5 = (ulonglong *)0x0;
    if (*(longlong *)(param_1 + 0xa0) != 0) goto LAB_00489501;
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  lVar12 = *(longlong *)(param_1 + 0x48);
  auVar17._8_8_ = *(ulonglong *)(param_1 + 0x68);
  if (auVar17._8_8_ == 0) {
    lVar3 = 0;
    uVar11 = 0;
    lVar7 = 0;
  }
  else {
    uVar11 = *(ulonglong *)(param_1 + 0x50);
    uVar8 = 0;
    if (uVar11 <= *(ulonglong *)(param_1 + 0x60)) {
      uVar8 = uVar11;
    }
    lVar3 = *(ulonglong *)(param_1 + 0x60) - uVar8;
    lVar7 = auVar17._8_8_ - (uVar11 - lVar3);
    if (auVar17._8_8_ < uVar11 - lVar3 || lVar7 == 0) {
      uVar11 = auVar17._8_8_ + lVar3;
      lVar7 = 0;
    }
  }
  local_430[2] = *(longlong *)(param_1 + 0x58);
  local_430[0] = lVar3 * 0x50 + local_430[2];
  local_430[1] = uVar11 * 0x50 + local_430[2];
  local_430[3] = lVar7 * 0x50 + local_430[2];
  appuStack_468[3] = (undefined **)0x488dfe;
  lVar3 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::fold::
          <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
                    (local_430);
  puVar2 = PTR_poll_write_00799a28;
  uVar15 = 0;
  puVar5 = (ulonglong *)0x0;
  if ((lVar4 - lVar12) + lVar3 != 0) {
    appuStack_468[4] = (undefined **)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x78) == '\x01') {
      appuStack_468[5] = (undefined **)param_2;
      do {
        lVar4 = 0x38;
        do {
          *(undefined8 *)((longlong)appuStack_468 + lVar4) = 1;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 8) = 0;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 0x10) = 1;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 0x18) = 0;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 0x20) = 1;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 0x28) = 0;
          *(undefined8 *)((longlong)appuStack_468 + lVar4 + 0x30) = 1;
          *(undefined8 *)((longlong)local_430 + lVar4) = 0;
          lVar4 = lVar4 + 0x40;
        } while (lVar4 != 0x438);
        ppuVar6 = *(undefined ***)(param_1 + 0x40);
        ppuVar10 = *(undefined ***)(param_1 + 0x48);
        lVar4 = (longlong)ppuVar6 - (longlong)ppuVar10;
        if (lVar4 == 0) {
          puVar13 = local_430;
          ppuVar6 = (undefined **)0x0;
          auVar17._8_8_ = *(ulonglong *)(param_1 + 0x68);
          if (auVar17._8_8_ != 0) goto LAB_00488eb4;
LAB_00488f18:
          lVar4 = 0;
          uVar11 = 0;
LAB_00488f1c:
          lVar12 = 0;
        }
        else {
          if (ppuVar6 < ppuVar10) goto LAB_0048959a;
          local_430[0] = (longlong)ppuVar10 + *(longlong *)(param_1 + 0x38);
          ppuVar6 = (undefined **)0x1;
          puVar13 = local_430 + 2;
          auVar17._8_8_ = *(ulonglong *)(param_1 + 0x68);
          local_430[1] = lVar4;
          if (auVar17._8_8_ == 0) goto LAB_00488f18;
LAB_00488eb4:
          uVar11 = *(ulonglong *)(param_1 + 0x50);
          uVar8 = 0;
          if (uVar11 <= *(ulonglong *)(param_1 + 0x60)) {
            uVar8 = uVar11;
          }
          lVar4 = *(ulonglong *)(param_1 + 0x60) - uVar8;
          lVar12 = auVar17._8_8_ - (uVar11 - lVar4);
          if (auVar17._8_8_ < uVar11 - lVar4 || lVar12 == 0) {
            uVar11 = auVar17._8_8_ + lVar4;
            goto LAB_00488f1c;
          }
        }
        lVar3 = 0x40 - (longlong)ppuVar6;
        puVar9 = *(ulonglong **)(param_1 + 0x58);
        puVar14 = puVar9 + lVar4 * 10;
        puVar5 = puVar9 + lVar12 * 10;
        appuStack_468[6] = ppuVar6;
        if ((puVar14 != puVar9 + uVar11 * 10) || (puVar14 = puVar9, puVar9 != puVar5)) {
                    /* WARNING: Could not recover jumptable at 0x00488fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar16._0_8_ = (*(code *)(&DAT_00195500 + *(int *)(&DAT_00195500 + *puVar14 * 4)))();
          auVar16._8_8_ = lVar3;
          return auVar16;
        }
        if ((undefined **)0x40 < ppuVar6) {
LAB_0048956d:
          appuStack_468[3] = (undefined **)0x489587;
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_d4d3cd51d1d91a17bb767b00236b3a9b_2_llvm_17589326713533067298_0078ad40
                     ,0x40);
          goto LAB_00489587;
        }
        puVar9 = local_430;
        appuStack_468[3] = (undefined **)0x4891e5;
        lVar4 = (*(code *)PTR_poll_write_vectored_00799a20)(ppuVar6,puVar9,ppuVar6,puVar13);
        if (lVar4 == 2) {
          uVar15 = 1;
          goto LAB_00489501;
        }
        if (lVar4 == 1) goto LAB_004894fe;
        puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x48));
        if (puVar9 < puVar5 == puVar5 < puVar9) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        else if ((char)((puVar9 < puVar5) - (puVar5 < puVar9)) == '\x01') {
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (longlong)puVar9;
        }
        else {
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined8 *)(param_1 + 0x48) = 0;
          if (puVar9 != puVar5) {
            if (*(longlong *)(param_1 + 0x68) != 0) {
              auVar17._8_8_ = 0;
              if (*(ulonglong *)(param_1 + 0x50) <= *(ulonglong *)(param_1 + 0x60)) {
                auVar17._8_8_ = *(ulonglong *)(param_1 + 0x50);
              }
                    /* WARNING: Could not recover jumptable at 0x004892c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar17._0_8_ =
                   (*(code *)(&DAT_00195514 +
                             *(int *)(&DAT_00195514 +
                                     *(longlong *)
                                      (*(longlong *)(param_1 + 0x58) +
                                      (*(ulonglong *)(param_1 + 0x60) - auVar17._8_8_) * 0x50) * 4))
                   )();
              auVar17._8_8_ = auVar17._8_8_;
              return auVar17;
            }
            appuStack_468[3] = (undefined **)0x48955b;
            (*(code *)PTR_expect_failed_00799440)
                      (0,&PTR_s__vendor_hyper_1_12_0_src_common__0078ae90);
            ppuVar6 = &anon_d3057478e380898db632effa827bd31f_624_llvm_2674179329317868992;
            appuStack_468[3] = (undefined **)0x48956d;
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&anon_d3057478e380898db632effa827bd31f_624_llvm_2674179329317868992,0x12);
            goto LAB_0048956d;
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x40);
        lVar12 = *(longlong *)(param_1 + 0x48);
        auVar17._8_8_ = *(ulonglong *)(param_1 + 0x68);
        if (auVar17._8_8_ == 0) {
          lVar3 = 0;
          uVar11 = 0;
LAB_00489414:
          lVar7 = 0;
        }
        else {
          uVar11 = *(ulonglong *)(param_1 + 0x50);
          uVar8 = 0;
          if (uVar11 <= *(ulonglong *)(param_1 + 0x60)) {
            uVar8 = uVar11;
          }
          lVar3 = *(ulonglong *)(param_1 + 0x60) - uVar8;
          lVar7 = auVar17._8_8_ - (uVar11 - lVar3);
          if (auVar17._8_8_ < uVar11 - lVar3 || lVar7 == 0) {
            uVar11 = auVar17._8_8_ + lVar3;
            goto LAB_00489414;
          }
        }
        local_430[2] = *(longlong *)(param_1 + 0x58);
        local_430[0] = lVar3 * 0x50 + local_430[2];
        local_430[1] = uVar11 * 0x50 + local_430[2];
        local_430[3] = lVar7 * 0x50 + local_430[2];
        appuStack_468[3] = (undefined **)0x48945b;
        lVar3 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                ::fold::
                <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
                          (local_430);
        if ((lVar4 - lVar12) + lVar3 == 0) {
          puVar9 = (ulonglong *)0x0;
          goto LAB_004894fe;
        }
        uVar15 = 0;
      } while (puVar9 != (ulonglong *)0x0);
    }
    else {
      ppuVar6 = *(undefined ***)(param_1 + 0x40);
      ppuVar10 = *(undefined ***)(param_1 + 0x48);
      uVar15 = 0;
      do {
        if (ppuVar6 < ppuVar10) {
LAB_00489587:
          appuStack_468[3] = (undefined **)0x48959a;
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_d4d3cd51d1d91a17bb767b00236b3a9b_2_llvm_17589326713533067298_0078ade8
                     ,ppuVar6);
LAB_0048959a:
          appuStack_468[3] = (undefined **)0x4895aa;
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_anon_d4d3cd51d1d91a17bb767b00236b3a9b_2_llvm_17589326713533067298_0078ade8
                    );
          pcVar1 = (code *)swi(3);
          auVar19._0_8_ = (*pcVar1)();
          auVar19._8_8_ = ppuVar6;
          return auVar19;
        }
        puVar9 = (ulonglong *)((longlong)ppuVar10 + *(longlong *)(param_1 + 0x38));
        appuStack_468[3] = (undefined **)0x4894a8;
        lVar4 = (*(code *)puVar2)((longlong)ppuVar6 - (longlong)ppuVar10);
        if (lVar4 != 0) {
          uVar15 = 1;
          if (lVar4 != 2) goto LAB_004894fe;
          break;
        }
        ppuVar10 = (undefined **)(*(longlong *)(param_1 + 0x48) + (longlong)puVar9);
        *(undefined ***)(param_1 + 0x48) = ppuVar10;
        ppuVar6 = *(undefined ***)(param_1 + 0x40);
        if (ppuVar6 == ppuVar10) {
          *appuStack_468[4] = (undefined *)0x0;
          appuStack_468[4][1] = (undefined *)0x0;
          uVar15 = 0;
          puVar5 = (ulonglong *)0x0;
          goto LAB_00489501;
        }
      } while (puVar9 != (ulonglong *)0x0);
    }
    puVar5 = (ulonglong *)0x1700000003;
  }
  goto LAB_00489501;
LAB_004894fe:
  uVar15 = 0;
  puVar5 = puVar9;
LAB_00489501:
  auVar18._8_8_ = puVar5;
  auVar18._0_8_ = uVar15;
  return auVar18;
}


