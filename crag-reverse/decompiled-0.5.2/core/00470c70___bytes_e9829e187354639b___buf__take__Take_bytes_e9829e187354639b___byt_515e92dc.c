// 00470c70 <bytes[e9829e187354639b]::buf::take::Take<bytes[e9829e187354639b]::bytes::Bytes>>

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::buffer::<bytes[e9829e187354639b]::buf::take::Take<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::buffer::<bytes[e9829e187354639b]::buf::take::Take<bytes[e9829e187354639b]::bytes::Bytes>>
          (longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((char)param_1[9] != '\0') {
    lVar11 = param_2[4];
    lVar10 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[2];
    lVar6 = param_2[3];
    uVar12 = param_1[4];
    uVar9 = param_1[7];
    if (uVar9 == uVar12) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::grow(param_1 + 4);
      uVar12 = param_1[4];
      uVar9 = param_1[7];
    }
    param_1[7] = uVar9 + 1;
    uVar8 = 0;
    if (uVar12 <= uVar9 + param_1[6]) {
      uVar8 = uVar12;
    }
    lVar3 = param_1[5];
    lVar7 = ((uVar9 + param_1[6]) - uVar8) * 0x50;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar7);
    *puVar1 = local_40;
    puVar1[1] = uStack_38;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
    *puVar1 = local_50;
    puVar1[1] = uStack_48;
    plVar2 = (longlong *)(lVar3 + 0x20 + lVar7);
    *plVar2 = lVar6;
    plVar2[1] = lVar11;
    plVar2 = (longlong *)(lVar3 + 0x10 + lVar7);
    *plVar2 = lVar4;
    plVar2[1] = lVar5;
    *(undefined8 *)(lVar3 + lVar7) = 1;
    ((undefined8 *)(lVar3 + lVar7))[1] = lVar10;
    return;
  }
  uVar12 = param_2[2];
  uVar9 = param_2[4];
  uVar8 = uVar12;
  if (uVar9 < uVar12) {
    uVar8 = uVar9;
  }
  uVar13 = (*(code *)PTR_maybe_unshift_00799960)();
  lVar11 = param_2[1];
  if (uVar8 != 0) {
    lVar10 = param_1[2];
    do {
      if ((ulonglong)(*param_1 - lVar10) < uVar8) {
        uVar13 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,uVar8,1,1);
      }
      uVar13 = (*(code *)PTR_memcpy_00799008)(uVar13,uVar8);
      lVar10 = param_1[2] + uVar8;
      param_1[2] = lVar10;
      uVar12 = uVar12 - uVar8;
      param_2[2] = uVar12;
      lVar11 = lVar11 + uVar8;
      param_2[1] = lVar11;
      uVar9 = uVar9 - uVar8;
      param_2[4] = uVar9;
      uVar8 = uVar12;
      if (uVar9 < uVar12) {
        uVar8 = uVar9;
      }
    } while (uVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00470dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(uVar13,uVar12);
  return;
}


