// 006a3860 advance

/* WARNING: Type propagation algorithm not settling */
/* <bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,
   bytes[e9829e187354639b]::bytes::Bytes>, &[u8]> as
   bytes[e9829e187354639b]::buf::buf_impl::Buf>::advance */

void __rustcall
<bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<hyper[c4782d5b5c5e3493]::proto::h1::encode::ChunkSize,bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>
::advance(ulonglong ****param_1,ulonglong ***param_2)

{
  char cVar1;
  code *pcVar2;
  ulonglong ***pppuVar3;
  char cVar4;
  ulonglong ***pppuVar5;
  ulonglong ***pppuVar6;
  ulonglong ***pppuVar7;
  ulonglong ***local_30;
  ulonglong ***local_28;
  undefined8 ****local_20;
  ulonglong ***local_18;
  undefined8 ****local_10;
  code *local_8;
  
  cVar4 = *(char *)((longlong)param_1 + 0x32);
  cVar1 = *(char *)((longlong)param_1 + 0x33);
  pppuVar7 = (ulonglong ***)(ulonglong)(byte)(cVar1 - cVar4);
  local_28 = param_1[2];
  pppuVar5 = (ulonglong ***)0xffffffffffffffff;
  if (!CARRY8((ulonglong)pppuVar7,(ulonglong)local_28)) {
    pppuVar5 = (ulonglong ***)((longlong)pppuVar7 + (longlong)local_28);
  }
  if (pppuVar5 == (ulonglong ***)0x0) {
    local_18 = param_1[8];
    pppuVar5 = (ulonglong ***)((longlong)local_18 - (longlong)param_2);
    pppuVar6 = param_2;
    if (param_2 <= local_18) goto LAB_006a390d;
  }
  else {
    pppuVar3 = (ulonglong ***)((longlong)param_2 - (longlong)pppuVar5);
    if (param_2 < pppuVar5 || pppuVar3 == (ulonglong ***)0x0) {
      local_30 = param_2;
      if (cVar1 != cVar4) {
        local_30 = (ulonglong ***)((longlong)param_2 - (longlong)pppuVar7);
        if (param_2 < pppuVar7 || local_30 == (ulonglong ***)0x0) goto LAB_006a3967;
        *(char *)((longlong)param_1 + 0x32) = cVar1;
      }
      if (local_30 <= local_28) {
        param_1[2] = (ulonglong ***)((longlong)local_28 - (longlong)local_30);
        param_1[1] = (ulonglong ***)((longlong)param_1[1] + (longlong)local_30);
        return;
      }
      goto LAB_006a3972;
    }
    if (cVar1 == cVar4) {
joined_r0x006a38f7:
      local_30 = pppuVar5;
      if (local_28 < local_30) {
LAB_006a3972:
        local_20 = &local_30;
        local_18 = (ulonglong ***)<usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_10 = &local_28;
        local_8 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_10,&
                            PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00791708
                  );
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_1[2] = (ulonglong ***)((longlong)local_28 - (longlong)local_30);
      param_1[1] = (ulonglong ***)((longlong)param_1[1] + (longlong)local_30);
      local_18 = param_1[8];
      pppuVar5 = (ulonglong ***)((longlong)local_18 - (longlong)pppuVar3);
      pppuVar6 = local_30;
    }
    else {
      pppuVar6 = (ulonglong ***)((longlong)pppuVar5 - (longlong)pppuVar7);
      if (pppuVar7 <= pppuVar5 && pppuVar6 != (ulonglong ***)0x0) {
        *(char *)((longlong)param_1 + 0x32) = cVar1;
        pppuVar5 = pppuVar6;
        goto joined_r0x006a38f7;
      }
      *(char *)((longlong)param_1 + 0x32) = cVar4 + (char)pppuVar5;
      local_18 = param_1[8];
      pppuVar5 = (ulonglong ***)((longlong)local_18 - (longlong)pppuVar3);
    }
    param_2 = pppuVar3;
    if (pppuVar3 <= local_18) {
LAB_006a390d:
      param_1[7] = (ulonglong ***)((longlong)param_1[7] + (longlong)param_2);
      param_1[8] = pppuVar5;
      return;
    }
  }
  cVar4 = (char)pppuVar5;
  param_1 = (ulonglong ****)&local_20;
  local_20 = (undefined8 ****)param_2;
  (*(code *)PTR_panic_advance_00799a48)();
  param_2 = pppuVar6;
LAB_006a3967:
  *(char *)((longlong)param_1 + 0x32) = cVar4 + (char)param_2;
  return;
}


