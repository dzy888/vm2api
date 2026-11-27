// 00667620 <bytes[e9829e187354639b]::bytes::Bytes>

/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_and_end::<bytes[e9829e187354639b]::bytes::Bytes>
    */

byte __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_and_end::
<bytes[e9829e187354639b]::bytes::Bytes>(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char *local_70;
  undefined8 local_68;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar1 = *(ulonglong *)(param_2 + 4);
  lVar2 = 0;
  if (*param_1 < -0x7ffffffffffffffe) {
    lVar2 = *param_1 + -0x7fffffffffffffff;
  }
  if (lVar2 == 0) {
    (*(code *)PTR_new_00799dd0)();
    local_28 = local_98;
    local_38 = local_a8;
    uStack_34 = uStack_a4;
    uStack_30 = uStack_a0;
    uStack_2c = uStack_9c;
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    local_98 = param_2[4];
    uStack_94 = param_2[5];
    uStack_90 = param_2[6];
    uStack_8c = param_2[7];
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    local_70 = "\r\n0\r\n\r\n";
    local_68 = 7;
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
    ::buffer::
    <bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>>
              (param_3,&local_a8);
  }
  else {
    if (lVar2 != 1) {
LAB_006676a5:
      <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::buffer::<bytes[e9829e187354639b]::bytes::Bytes>(param_3,param_2);
      return 0;
    }
    local_88 = param_1[1];
    if (local_88 < uVar1 == uVar1 < local_88) {
      <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::buffer::<bytes[e9829e187354639b]::bytes::Bytes>(param_3,param_2);
    }
    else {
      if ((char)((local_88 < uVar1) - (uVar1 < local_88)) != '\x01') goto LAB_006676a5;
      local_a8 = *param_2;
      uStack_a4 = param_2[1];
      uStack_a0 = param_2[2];
      uStack_9c = param_2[3];
      local_98 = param_2[4];
      uStack_94 = param_2[5];
      uStack_90 = param_2[6];
      uStack_8c = param_2[7];
      <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
      ::buffer::<bytes[e9829e187354639b]::buf::take::Take<bytes[e9829e187354639b]::bytes::Bytes>>
                (param_3,&local_a8);
    }
  }
  return *(byte *)(param_1 + 3) ^ 1;
}


