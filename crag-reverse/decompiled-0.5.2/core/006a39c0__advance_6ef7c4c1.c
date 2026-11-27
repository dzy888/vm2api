// 006a39c0 advance

/* <bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<&[u8],
   bytes[e9829e187354639b]::bytes::Bytes>, &[u8]> as
   bytes[e9829e187354639b]::buf::buf_impl::Buf>::advance */

void __rustcall
<bytes[e9829e187354639b]::buf::chain::Chain<bytes[e9829e187354639b]::buf::chain::Chain<&[u8],bytes[e9829e187354639b]::bytes::Bytes>,&[u8]>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>
::advance(ulonglong ***param_1,ulonglong **param_2)

{
  code *pcVar1;
  ulonglong **ppuVar2;
  ulonglong **ppuVar3;
  ulonglong **ppuVar4;
  ulonglong **ppuVar5;
  ulonglong **local_30;
  ulonglong **local_28;
  undefined8 ***local_20;
  ulonglong **local_18;
  undefined8 ***local_10;
  code *local_8;
  
  ppuVar3 = param_1[1];
  local_28 = param_1[4];
  ppuVar5 = (ulonglong **)0xffffffffffffffff;
  if (!CARRY8((ulonglong)ppuVar3,(ulonglong)local_28)) {
    ppuVar5 = (ulonglong **)((longlong)ppuVar3 + (longlong)local_28);
  }
  if (ppuVar5 == (ulonglong **)0x0) {
    local_18 = param_1[7];
    ppuVar3 = (ulonglong **)((longlong)local_18 - (longlong)param_2);
    ppuVar2 = param_2;
    ppuVar4 = param_2;
    if (param_2 <= local_18) goto LAB_006a3a45;
  }
  else {
    ppuVar2 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar5);
    if (param_2 < ppuVar5 || ppuVar2 == (ulonglong **)0x0) {
      if (ppuVar3 != (ulonglong **)0x0) {
        ppuVar2 = *param_1;
        ppuVar5 = (ulonglong **)((longlong)ppuVar3 - (longlong)param_2);
        if (param_2 <= ppuVar3) goto LAB_006a3ab8;
        *param_1 = (ulonglong **)((longlong)ppuVar2 + (longlong)ppuVar3);
        param_1[1] = (ulonglong **)0x0;
        param_2 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar3);
      }
      local_30 = param_2;
      if (param_2 <= local_28) {
        param_1[4] = (ulonglong **)((longlong)local_28 - (longlong)param_2);
        param_1[3] = (ulonglong **)((longlong)param_1[3] + (longlong)param_2);
        return;
      }
      goto LAB_006a3ac7;
    }
    if (ppuVar3 == (ulonglong **)0x0) {
LAB_006a3a0f:
      local_30 = ppuVar5;
      if (local_28 < ppuVar5) {
LAB_006a3ac7:
        local_20 = &local_30;
        local_18 = (ulonglong **)<usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_10 = &local_28;
        local_8 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_10,&
                            PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00791708
                  );
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      param_1[4] = (ulonglong **)((longlong)local_28 - (longlong)ppuVar5);
      param_1[3] = (ulonglong **)((longlong)param_1[3] + (longlong)ppuVar5);
      local_18 = param_1[7];
      ppuVar3 = (ulonglong **)((longlong)local_18 - (longlong)ppuVar2);
      ppuVar4 = param_2;
    }
    else {
      if (ppuVar3 < ppuVar5) {
        param_2 = (ulonglong **)((longlong)*param_1 + (longlong)ppuVar3);
        *param_1 = param_2;
        param_1[1] = (ulonglong **)0x0;
        ppuVar5 = (ulonglong **)((longlong)ppuVar5 - (longlong)ppuVar3);
        goto LAB_006a3a0f;
      }
      ppuVar4 = (ulonglong **)((longlong)*param_1 + (longlong)ppuVar5);
      *param_1 = ppuVar4;
      param_1[1] = (ulonglong **)((longlong)ppuVar3 - (longlong)ppuVar5);
      local_18 = param_1[7];
      ppuVar3 = (ulonglong **)((longlong)local_18 - (longlong)ppuVar2);
    }
    param_2 = ppuVar2;
    if (ppuVar2 <= local_18) {
LAB_006a3a45:
      param_1[6] = (ulonglong **)((longlong)param_1[6] + (longlong)param_2);
      param_1[7] = ppuVar3;
      return;
    }
  }
  param_1 = (ulonglong ***)&local_20;
  local_20 = (undefined8 ***)ppuVar2;
  (*(code *)PTR_panic_advance_00799a48)();
  param_2 = ppuVar4;
LAB_006a3ab8:
  *param_1 = (ulonglong **)((longlong)ppuVar2 + (longlong)param_2);
  param_1[1] = ppuVar5;
  return;
}


