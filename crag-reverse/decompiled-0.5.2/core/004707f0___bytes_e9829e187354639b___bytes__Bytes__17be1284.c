// 004707f0 <bytes[e9829e187354639b]::bytes::Bytes>

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::buffer::<bytes[e9829e187354639b]::bytes::Bytes>
    */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::buffer::<bytes[e9829e187354639b]::bytes::Bytes>(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((char)param_1[9] != '\0') {
    lVar4 = *param_2;
    lVar5 = param_2[1];
    lVar6 = param_2[2];
    lVar7 = param_2[3];
    uVar10 = param_1[4];
    uVar8 = param_1[7];
    if (uVar8 == uVar10) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::grow(param_1 + 4);
      uVar10 = param_1[4];
      uVar8 = param_1[7];
    }
    param_1[7] = uVar8 + 1;
    uVar11 = 0;
    if (uVar10 <= uVar8 + param_1[6]) {
      uVar11 = uVar10;
    }
    lVar3 = param_1[5];
    lVar9 = ((uVar8 + param_1[6]) - uVar11) * 0x50;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar9);
    *puVar1 = local_30;
    puVar1[1] = uStack_28;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar9);
    *puVar1 = local_40;
    puVar1[1] = uStack_38;
    plVar2 = (longlong *)(lVar3 + 0x20 + lVar9);
    *plVar2 = lVar7;
    plVar2[1] = lStack_48;
    plVar2 = (longlong *)(lVar3 + 0x10 + lVar9);
    *plVar2 = lVar5;
    plVar2[1] = lVar6;
    *(undefined8 *)(lVar3 + lVar9) = 0;
    ((undefined8 *)(lVar3 + lVar9))[1] = lVar4;
    return;
  }
  uVar10 = param_2[2];
  uVar12 = (*(code *)PTR_maybe_unshift_00799960)();
  if (uVar10 != 0) {
    if ((ulonglong)(*param_1 - param_1[2]) < uVar10) {
      uVar12 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_1,param_1[2],uVar10,1,1);
    }
    uVar12 = (*(code *)PTR_memcpy_00799008)(uVar12,uVar10);
    param_1[2] = param_1[2] + uVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00470903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(uVar12,0);
  return;
}


