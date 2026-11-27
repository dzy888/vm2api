// 001f7d90 inner

/* std[6c98fd8553dbae28]::env::var::inner */

longlong * __rustcall std[6c98fd8553dbae28]::env::var::inner(longlong *param_1)

{
  longlong lVar1;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  (*(code *)PTR_getenv_0021a1a0)();
  if (local_40 == -1) {
    local_40 = 1;
    local_30 = 0xffffffffffffffff;
    lVar1 = 8;
  }
  else {
    (*(code *)PTR_from_utf8_00219d78)();
    param_1[1] = local_40;
    param_1[2] = local_38;
    lVar1 = 0x18;
  }
  *(undefined8 *)((longlong)param_1 + lVar1) = local_30;
  *param_1 = local_40;
  return param_1;
}


