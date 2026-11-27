// 00515fa0 <&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>

/* serde_json[dc3825464c436029]::ser::format_escaped_str::<&mut
   bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,
   serde_json[dc3825464c436029]::ser::CompactFormatter> */

undefined ** __rustcall
serde_json[dc3825464c436029]::ser::format_escaped_str::
<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>
          (longlong *param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 8);
  (*(code *)PTR_put_slice_00799c88)(param_4,lVar3 != 0x7fffffffffffffff);
  if (lVar3 != 0x7fffffffffffffff) {
LAB_00515ffd:
    uVar5 = 0;
    do {
      uVar7 = uVar5;
      if (param_4 == uVar7) goto joined_r0x005161a3;
      cVar1 = PTR_ESCAPE_00799c78[*(byte *)(param_3 + uVar7)];
      uVar5 = uVar7 + 1;
    } while (cVar1 == '\0');
    for (; uVar7 != 0; uVar7 = uVar7 - uVar6) {
      lVar3 = *(longlong *)(lVar2 + 8);
      uVar6 = 0x7fffffffffffffffU - lVar3;
      if (uVar7 < 0x7fffffffffffffffU - lVar3) {
        uVar6 = uVar7;
      }
      (*(code *)PTR_put_slice_00799c88)(lVar3,uVar6);
      if (lVar3 == 0x7fffffffffffffff) goto LAB_00515fe2;
    }
    if (cVar1 == 'u') {
      uVar7 = 6;
      do {
        lVar3 = *(longlong *)(lVar2 + 8);
        uVar6 = 0x7fffffffffffffff - lVar3;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        (*(code *)PTR_put_slice_00799c88)();
        if (lVar3 == 0x7fffffffffffffff) goto LAB_00516172;
        uVar7 = uVar7 - uVar6;
      } while (uVar7 != 0);
    }
    else {
      uVar7 = 2;
      do {
        lVar3 = *(longlong *)(lVar2 + 8);
        uVar6 = 0x7fffffffffffffff - lVar3;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        (*(code *)PTR_put_slice_00799c88)();
        if (lVar3 == 0x7fffffffffffffff) goto LAB_00516172;
        uVar7 = uVar7 - uVar6;
      } while (uVar7 != 0);
    }
    ppuVar4 = (undefined **)0x0;
    goto LAB_00516179;
  }
LAB_00515fe2:
  return &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
joined_r0x005161a3:
  while( true ) {
    if (param_4 == 0) {
      ppuVar4 = (undefined **)0x0;
      bVar8 = *(longlong *)(lVar2 + 8) != 0x7fffffffffffffff;
      if (!bVar8) {
        ppuVar4 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
      }
      (*(code *)PTR_put_slice_00799c88)(param_3,bVar8);
      return ppuVar4;
    }
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar5 = 0x7fffffffffffffff - lVar3;
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    (*(code *)PTR_put_slice_00799c88)(param_3,uVar5);
    if (lVar3 == 0x7fffffffffffffff) break;
    param_3 = param_3 + uVar5;
    param_4 = param_4 - uVar5;
  }
  goto LAB_00515fe2;
LAB_00516172:
  ppuVar4 = &anon_30b5cef53457a6ea696e8d7e9f6273d6_735_llvm_8436237269785592069;
LAB_00516179:
  param_3 = param_3 + uVar5;
  param_4 = param_4 - uVar5;
  if (ppuVar4 != (undefined **)0x0) {
    return ppuVar4;
  }
  goto LAB_00515ffd;
}


