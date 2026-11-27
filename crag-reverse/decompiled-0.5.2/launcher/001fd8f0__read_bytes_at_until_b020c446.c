// 001fd8f0 read_bytes_at_until

/* <&[u8] as object[ada3e5732ab50104]::read::read_ref::ReadRef>::read_bytes_at_until */

longlong __rustcall
<&[u8]as_object[ada3e5732ab50104]::read::read_ref::ReadRef>::read_bytes_at_until
          (longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 <= param_4) && (param_4 <= param_2)) {
    lVar2 = param_4 + param_1;
    lVar1 = (**(code **)PTR_FN_0021abf8)();
    if (lVar1 == 1) {
      lVar1 = 0;
      if (lVar2 - (param_3 + param_1) <= param_4 - param_3) {
        lVar1 = param_3 + param_1;
      }
      return lVar1;
    }
  }
  return 0;
}


