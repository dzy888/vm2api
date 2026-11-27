// 00471060 <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>

/* <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>::parse::<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>
    */

longlong * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
::parse::<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  longlong local_208;
  undefined1 local_200;
  
  bVar1 = *(byte *)(param_4 + 4);
  uVar2 = *(ulonglong *)(param_4 + 6);
  while( true ) {
    local_218 = *(undefined8 *)(param_4 + 0x10);
    uVar7 = *param_4;
    uStack_254 = param_4[1];
    uStack_250 = param_4[2];
    uStack_24c = param_4[3];
    local_248 = param_4[4];
    uStack_244 = param_4[5];
    uStack_240 = param_4[6];
    uStack_23c = param_4[7];
    local_238 = param_4[8];
    uStack_234 = param_4[9];
    uStack_230 = param_4[10];
    uStack_22c = param_4[0xb];
    local_228 = param_4[0xc];
    uStack_224 = param_4[0xd];
    uStack_220 = param_4[0xe];
    uStack_21c = param_4[0xf];
    local_258 = uVar7;
    if ((*(longlong *)(param_2 + 0xa0) != 0) &&
       ((*(longlong *)(param_2 + 0x20) == 0 ||
        (cVar5 = (*(code *)PTR_is_complete_fast_00799968)(local_218,*(undefined8 *)(param_2 + 0x28))
        , uVar7 = extraout_XMM0_Da, cVar5 != '\0')))) {
      uVar7 = (*(code *)PTR_parse_00799970)(uVar7,&local_258);
      uVar4 = local_200;
      lVar6 = local_208;
      if (local_208 == -2) {
        lVar6 = (*(code *)PTR_from_00799990)();
        goto LAB_004711d9;
      }
      uVar7 = (*(code *)PTR_memcpy_00799008)(uVar7,0xe7);
      if (lVar6 != -1) {
        (*(code *)PTR_memcpy_00799008)(uVar7,0xe7);
        *(undefined8 *)(param_2 + 0x20) = 0;
        *param_1 = lVar6;
        *(undefined1 *)(param_1 + 1) = uVar4;
        return param_1;
      }
    }
    uVar3 = *(ulonglong *)(param_2 + 0xa0);
    if (((bVar1 & uVar2 <= uVar3) != 0) ||
       (*(ulonglong *)(param_2 + 0x88 + (ulonglong)(*(byte *)(param_2 + 0x80) ^ 1) * 8) <= uVar3)) {
      lVar6 = (*(code *)PTR_new_too_large_00799980)();
      goto LAB_004711d9;
    }
    if (uVar3 != 0) {
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    }
    *(ulonglong *)(param_2 + 0x20) = (ulonglong)(uVar3 != 0);
    auVar8 = poll_read_from_io(param_2,param_3);
    if (auVar8._0_8_ != 0) break;
    if (auVar8._8_8_ == 0) {
      lVar6 = (*(code *)PTR_new_incomplete_00799978)();
LAB_004711d9:
      *param_1 = -1;
      param_1[1] = lVar6;
      return param_1;
    }
  }
  if (auVar8._0_8_ == 2) {
    *param_1 = -2;
    return param_1;
  }
  lVar6 = (*(code *)PTR_new_io_00799988)();
  goto LAB_004711d9;
}


