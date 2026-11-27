// 0070ea20 copy_to_bytes

/* <bytes[e9829e187354639b]::bytes::Bytes as
   bytes[e9829e187354639b]::buf::buf_impl::Buf>::copy_to_bytes */

undefined8 * __rustcall
<bytes[e9829e187354639b]::bytes::Bytes_as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::
copy_to_bytes(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong local_48;
  ulonglong local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong *local_28;
  code *local_20;
  
  local_38 = (undefined1 *)&local_48;
  local_40 = param_2[2];
  if (param_3 == local_40) {
    lVar1 = param_2[1];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    *param_2 = &anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
    param_2[1] = param_3 + lVar1;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else if (param_3 == 0) {
    param_1[1] = param_2[1];
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &anon_e1419182c2f95519b50f33ebe2147d9d_4_llvm_4643690396931717954;
  }
  else {
    local_48 = param_3;
    if (local_40 < param_3) {
      local_30 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
      local_28 = &local_40;
      local_20 = <usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
      (*(code *)PTR_panic_fmt_007991a8)
                (local_28,&
                          PTR_anon_a0bdfe76b4b74febc0fe96214a8c0b42_2_llvm_14698491423915303612_00795878
                );
      pcVar2 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar2)();
      return puVar6;
    }
    (**(code **)*param_2)(local_40,param_2[1]);
    param_2[2] = param_2[2] - param_3;
    param_2[1] = param_2[1] + param_3;
    param_1[2] = param_3;
  }
  return param_1;
}


