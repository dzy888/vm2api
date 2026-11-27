// 00779040 _fmt

/* <u64>::_fmt
   <usize>::_fmt */

undefined1  [16] __rustcall <u64>::_fmt(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = _fmt_inner();
  auVar2._0_8_ = lVar1 + param_2;
  auVar2._8_8_ = param_3 - lVar1;
  return auVar2;
}


