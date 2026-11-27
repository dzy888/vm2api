// 0047dad0 to_bytes

/* <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>::to_bytes
    */

undefined8 __rustcall
<http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>::
to_bytes(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  uVar7 = *(ulonglong *)(param_2 + 0x78);
  if (uVar7 == 0) {
    lVar4 = 0;
    goto LAB_0047dc5d;
  }
  uVar3 = *(ulonglong *)(param_2 + 0x70);
  uVar6 = *(ulonglong *)(param_2 + 0x60);
  lVar4 = 0;
  uVar5 = uVar6;
  if (uVar3 < uVar6) {
    uVar5 = 0;
  }
  lVar10 = uVar3 - uVar5;
  uVar9 = uVar6 - lVar10;
  uVar2 = (uVar7 - uVar9) * 0x20;
  if (uVar7 <= uVar9) {
    uVar2 = 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x68);
  uVar8 = lVar10 + uVar7;
  if (uVar9 < uVar7) {
    uVar8 = uVar6;
  }
  uVar8 = uVar8 - lVar10;
  if (uVar8 != 0) {
    if (uVar8 < 4) {
      uVar7 = 0;
      lVar4 = 0;
    }
    else {
      plVar11 = (longlong *)(uVar3 * 0x20 + uVar5 * -0x20 + lVar1 + 0x70);
      uVar7 = 0;
      lVar4 = 0;
      do {
        lVar4 = lVar4 + plVar11[-0xc] + plVar11[-8] + plVar11[-4] + *plVar11;
        uVar7 = uVar7 + 4;
        plVar11 = plVar11 + 0x10;
      } while ((uVar8 & 0xfffffffffffffffc) != uVar7);
      if ((uVar8 & 3) == 0) goto LAB_0047dbdd;
    }
    uVar6 = 0;
    do {
      lVar4 = lVar4 + *(longlong *)
                       (uVar3 * 0x20 + uVar7 * 0x20 + uVar5 * -0x20 + lVar1 + 0x10 + uVar6);
      uVar6 = uVar6 + 0x20;
    } while (((uint)uVar8 & 3) << 5 != uVar6);
  }
LAB_0047dbdd:
  if (uVar2 != 0) {
    uVar7 = uVar2 >> 5;
    if (uVar2 < 0x80) {
      uVar3 = 0;
    }
    else {
      plVar11 = (longlong *)(lVar1 + 0x70);
      uVar3 = 0;
      do {
        lVar4 = lVar4 + plVar11[-0xc] + plVar11[-8] + plVar11[-4] + *plVar11;
        uVar3 = uVar3 + 4;
        plVar11 = plVar11 + 0x10;
      } while ((uVar7 & 0xfffffffffffffffc) != uVar3);
      if ((uVar7 & 3) == 0) goto LAB_0047dc5d;
    }
    uVar6 = 0;
    do {
      lVar4 = lVar4 + *(longlong *)(lVar1 + uVar3 * 0x20 + 0x10 + uVar6);
      uVar6 = uVar6 + 0x20;
    } while (((uint)uVar7 & 3) << 5 != uVar6);
  }
LAB_0047dc5d:
  <http_body_util[89f9933de382700b]::util::BufList<bytes[e9829e187354639b]::bytes::Bytes>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>
  ::copy_to_bytes(param_1,param_2 + 0x60,lVar4);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>
            (param_2);
  return param_1;
}


