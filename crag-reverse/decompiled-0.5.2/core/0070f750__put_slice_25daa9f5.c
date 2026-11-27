// 0070f750 put_slice

/* <bytes[e9829e187354639b]::bytes_mut::BytesMut as
   bytes[e9829e187354639b]::buf::buf_mut::BufMut>::put_slice */

void __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut_as_bytes[e9829e187354639b]::buf::buf_mut::BufMut>::
put_slice(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar2 = *(longlong *)(param_1 + 0x10) - lVar3;
  if (uVar2 < param_3) {
    (*(code *)PTR_reserve_inner_00799a30)(param_4,1);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar2 = *(longlong *)(param_1 + 0x10) - lVar3;
  }
  (*(code *)PTR_memcpy_00799008)(param_4,param_3);
  if (uVar2 < param_3) {
    (*(code *)PTR_panic_advance_00799a48)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(ulonglong *)(param_1 + 8) = lVar3 + param_3;
  return;
}


