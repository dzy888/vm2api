// 0070dc80 static_to_vec

/* bytes[e9829e187354639b]::bytes::static_to_vec */

longlong * __rustcall
bytes[e9829e187354639b]::bytes::static_to_vec
          (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = param_4 == 0;
  if (-1 < param_4) goto LAB_0070dc9f;
  uVar3 = true;
  plVar1 = (longlong *)0x0;
  while( true ) {
    param_1 = plVar1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0070dc9f:
    if ((bool)uVar3) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar3 = lVar2 == 0;
    plVar1 = (longlong *)0x1;
    if (!(bool)uVar3) {
      *param_1 = param_4;
      param_1[1] = lVar2;
      (*(code *)PTR_memcpy_00799008)();
      param_1[2] = param_4;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}


