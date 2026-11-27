// 00201659 opt_integer_62

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62 */

undefined1 * __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62
          (undefined1 *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char local_28;
  undefined1 local_27;
  longlong local_20;
  
  uVar1 = param_2[2];
  if ((uVar1 < (ulonglong)param_2[1]) && (*(char *)(*param_2 + uVar1) == param_3)) {
    param_2[2] = uVar1 + 1;
    integer_62(&local_28);
    if (local_28 == '\0') {
      if (local_20 != -1) {
        *(longlong *)(param_1 + 8) = local_20 + 1;
        goto LAB_002016a4;
      }
      param_1[1] = 0;
    }
    else {
      param_1[1] = local_27;
    }
    uVar2 = 1;
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
LAB_002016a4:
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}


