// 0070dbd0 static_to_mut

/* bytes[e9829e187354639b]::bytes::static_to_mut */

longlong * __rustcall
bytes[e9829e187354639b]::bytes::static_to_mut
          (longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (param_4 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar1 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar1)();
      return plVar4;
    }
    (*(code *)PTR_memcpy_00799008)();
  }
  uVar3 = 0x3f;
  if (param_4 >> 10 != 0) {
    for (; (param_4 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar5 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
  uVar3 = 7;
  if (uVar5 < 7) {
    uVar3 = uVar5;
  }
  *param_1 = lVar2;
  param_1[1] = param_4;
  param_1[2] = param_4;
  param_1[3] = (uVar3 & 0xffffffff) * 4 + 1;
  return param_1;
}


