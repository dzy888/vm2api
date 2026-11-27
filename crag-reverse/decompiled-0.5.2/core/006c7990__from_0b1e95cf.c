// 006c7990 from

/* <http[56314f485c23ccf6]::header::name::HeaderName as
   core[c0acaeba6ab4c2e0]::convert::From<&http[56314f485c23ccf6]::header::name::HeaderName>>::from
    */

undefined8 * __rustcall
<http[56314f485c23ccf6]::header::name::HeaderName_as_core[c0acaeba6ab4c2e0]::convert::From<&http[56314f485c23ccf6]::header::name::HeaderName>>
::from(undefined8 *param_1,longlong *param_2)

{
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1f;
  undefined7 uStack_17;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    local_20 = (undefined1)param_2[1];
    local_28 = 0;
  }
  else {
    (**(code **)*param_2)(param_2[2],param_2[1]);
    local_48 = local_1f;
    uStack_40 = uStack_17;
    uStack_39 = uStack_10;
    uStack_38 = uStack_f;
  }
  *param_1 = local_28;
  *(undefined1 *)(param_1 + 1) = local_20;
  *(undefined8 *)((longlong)param_1 + 9) = local_48;
  *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_39,uStack_40);
  param_1[3] = CONCAT71(uStack_38,uStack_39);
  return param_1;
}


