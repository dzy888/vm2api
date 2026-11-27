// 00775940 {closure#1}

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
  undefined3 *puVar6;
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
    local_30 = PTR_fmt_007991f8;
    puVar6 = &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_489_llvm_10049508496007902178;
  }
  else {
    local_48 = (undefined8 *)param_1[1];
    puVar6 = (undefined3 *)&DAT_001869a1;
  }
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  uVar3 = (*(code *)PTR_write_007994b0)(&local_48,puVar6);
  if ((char)uVar3 != '\0') {
    return 1;
  }
  uVar4 = *(ulonglong *)param_1[2];
  if (uVar4 == 0) goto LAB_00775a76;
  if (9 < uVar4) {
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00798300,9);
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  local_58 = param_1[3];
  local_50 = uVar4;
  if ((*(byte *)(param_2 + 0x13) & 0x10) == 0) {
    uVar4 = *(ulonglong *)param_1[4];
    if (0xffff < uVar4) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar3,&PTR_s__rustc_48a229ceaefd4985c50990b14_007982e8);
      goto LAB_00775a32;
    }
  }
  else {
LAB_00775a32:
    uVar4 = (ulonglong)*(ushort *)(param_2 + 0x16);
  }
  local_48 = &local_58;
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_38 = (undefined8 *)0x0;
  local_30 = (undefined *)CONCAT62(local_30._2_6_,(short)uVar4);
  cVar2 = (*(code *)PTR_write_007994b0)(&local_48,&DAT_001c22fe);
  if (cVar2 != '\0') {
    return 1;
  }
LAB_00775a76:
  local_48 = (undefined8 *)param_1[5];
  local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  uVar5 = (*(code *)PTR_write_007994b0)
                    (&local_48,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
  return uVar5;
}


