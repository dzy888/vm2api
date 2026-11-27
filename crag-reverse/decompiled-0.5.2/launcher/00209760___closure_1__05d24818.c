// 00209760 {closure#1}

/* <core[c0acaeba6ab4c2e0]::time::Duration as
   core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt::fmt_decimal::{closure#1} */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::time::Duration_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt::fmt_decimal::
_closure_1_(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 *local_38;
  undefined *local_30;
  
  if (*(int *)*param_1 == 1) {
    local_58 = *(undefined8 *)((int *)*param_1 + 2);
    local_48 = (undefined8 *)param_1[1];
    local_38 = &local_58;
    local_30 = PTR_fmt_0021a3b8;
    puVar6 = &DAT_0011511a;
  }
  else {
    local_48 = (undefined8 *)param_1[1];
    puVar6 = &DAT_0011511d;
  }
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  uVar3 = (*(code *)PTR_write_0021a2e0)(&local_48,puVar6);
  if ((char)uVar3 != '\0') {
    return 1;
  }
  uVar4 = *(ulonglong *)param_1[2];
  if (uVar4 == 0) goto LAB_00209896;
  if (9 < uVar4) {
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00219090,9);
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  local_58 = param_1[3];
  local_50 = uVar4;
  if ((*(byte *)(param_2 + 0x13) & 0x10) == 0) {
    uVar4 = *(ulonglong *)param_1[4];
    if (0xffff < uVar4) {
      (*(code *)PTR_panic_fmt_0021a010)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219078);
      goto LAB_00209852;
    }
  }
  else {
LAB_00209852:
    uVar4 = (ulonglong)*(ushort *)(param_2 + 0x16);
  }
  local_48 = &local_58;
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_38 = (undefined8 *)0x0;
  local_30 = (undefined *)CONCAT62(local_30._2_6_,(short)uVar4);
  cVar2 = (*(code *)PTR_write_0021a2e0)(&local_48,&DAT_001303bd);
  if (cVar2 != '\0') {
    return 1;
  }
LAB_00209896:
  local_48 = (undefined8 *)param_1[5];
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  uVar5 = (*(code *)PTR_write_0021a2e0)(&local_48,&DAT_00115987);
  return uVar5;
}


