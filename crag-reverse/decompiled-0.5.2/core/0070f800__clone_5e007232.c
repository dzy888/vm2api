// 0070f800 clone

/* <bytes[e9829e187354639b]::bytes_mut::BytesMut as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

longlong * __rustcall
<bytes[e9829e187354639b]::bytes_mut::BytesMut_as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(param_2 + 8);
  if (uVar1 == 0) {
    lVar3 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar2 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar2)();
      return plVar5;
    }
    (*(code *)PTR_memcpy_00799008)();
  }
  uVar4 = 0x3f;
  if (uVar1 >> 10 != 0) {
    for (; (uVar1 >> 10) >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  uVar6 = (uVar4 ^ 0xffffffffffffffc0) + 0x41;
  uVar4 = 7;
  if (uVar6 < 7) {
    uVar4 = uVar6;
  }
  *param_1 = lVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = (uVar4 & 0xffffffff) * 4 + 1;
  return param_1;
}


