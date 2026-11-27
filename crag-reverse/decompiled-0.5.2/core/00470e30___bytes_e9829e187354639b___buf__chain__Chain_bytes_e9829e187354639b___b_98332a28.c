// 00470e30 <bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>>

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::buffer::<bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,
   bytes[e9829e187354639b]::bytes::Bytes>, &[u8]>> */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::buffer::
<bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>>
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  
  if ((char)param_1[9] != '\0') {
    lVar4 = param_2[8];
    lVar8 = *param_2;
    lVar9 = param_2[1];
    lVar10 = param_2[2];
    lVar11 = param_2[3];
    lVar12 = param_2[4];
    lVar13 = param_2[5];
    lVar14 = param_2[6];
    lVar7 = param_2[7];
    uVar19 = param_1[4];
    uVar16 = param_1[7];
    if (uVar16 == uVar19) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::grow(param_1 + 4);
      uVar19 = param_1[4];
      uVar16 = param_1[7];
    }
    param_1[7] = uVar16 + 1;
    uVar18 = 0;
    if (uVar19 <= uVar16 + param_1[6]) {
      uVar18 = uVar19;
    }
    lVar5 = param_1[5];
    lVar17 = ((uVar16 + param_1[6]) - uVar18) * 0x50;
    plVar1 = (longlong *)(lVar5 + 0x40 + lVar17);
    *plVar1 = lVar7;
    plVar1[1] = lVar4;
    plVar1 = (longlong *)(lVar5 + 0x30 + lVar17);
    *plVar1 = lVar13;
    plVar1[1] = lVar14;
    plVar1 = (longlong *)(lVar5 + 0x20 + lVar17);
    *plVar1 = lVar11;
    plVar1[1] = lVar12;
    plVar1 = (longlong *)(lVar5 + 0x10 + lVar17);
    *plVar1 = lVar9;
    plVar1[1] = lVar10;
    *(undefined8 *)(lVar5 + lVar17) = 2;
    ((undefined8 *)(lVar5 + lVar17))[1] = lVar8;
    return;
  }
  uVar20 = (*(code *)PTR_maybe_unshift_00799960)();
  puVar15 = PTR_memcpy_00799008;
  do {
    bVar2 = *(byte *)((longlong)param_2 + 0x32);
    bVar3 = *(byte *)((longlong)param_2 + 0x33);
    uVar19 = param_2[2];
    if (bVar3 == bVar2 && uVar19 == 0) {
      uVar19 = param_2[8];
    }
    else if (bVar3 != bVar2) {
      if ((bVar3 < bVar2) || (0x12 < bVar3)) {
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&anon_d3057478e380898db632effa827bd31f_624_llvm_2674179329317868992,0x12);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar19 = (ulonglong)bVar3 - (ulonglong)bVar2;
    }
    if (uVar19 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00471001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))();
      return;
    }
    if ((ulonglong)(*param_1 - param_1[2]) < uVar19) {
      uVar20 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_1,param_1[2],uVar19,1,1);
    }
    (*(code *)puVar15)(uVar20,uVar19);
    param_1[2] = param_1[2] + uVar19;
    uVar20 = <bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>
             ::advance(param_2,uVar19);
  } while( true );
}


