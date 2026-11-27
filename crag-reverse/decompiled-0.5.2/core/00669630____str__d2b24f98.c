// 00669630 <&str>

/* <http[56314f485c23ccf6]::header::map::HeaderMap>::get::<&str> */

longlong __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap>::get::<&str>
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  int local_20 [4];
  ulonglong local_10;
  
  <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
  <http[56314f485c23ccf6]::header::value::HeaderValue>(local_20,param_2,param_3,param_1);
  if (local_20[0] != 1) {
    return 0;
  }
  if (local_10 < *(ulonglong *)(param_1 + 0x28)) {
    return *(longlong *)(param_1 + 0x20) + local_10 * 0x68 + 0x18;
  }
  (*(code *)PTR_panic_bounds_check_00799520)();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}


