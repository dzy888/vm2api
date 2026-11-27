// 001daf00 {closure#0}

/* std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1}::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1}::_closure_0_
          (undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *local_a8;
  undefined *local_a0;
  undefined **local_98;
  code *local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_58 [2];
  undefined *local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  *(undefined1 *)*param_1 = 1;
  if ((*(char *)param_1[1] == '\0') &&
     ((*(code *)PTR_name_0021a830)(), local_a8 != (longlong *)0xffffffffffffffff)) {
    if ((int)local_a8 == 2) {
      (*(code *)PTR_from_utf8_00219d78)();
      if ((char)local_48 == '\0') {
        uVar6 = local_38;
        uVar8 = local_40;
        goto LAB_001db106;
      }
    }
    else if (local_88 != 0) {
      uVar6 = local_80;
      uVar8 = local_88;
LAB_001db106:
      cVar5 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                        (&DAT_0012e37b,0x1a,uVar8,uVar6);
      pcVar3 = (char *)param_1[2];
      if (cVar5 != '\0') {
        *pcVar3 = '\x01';
        return;
      }
      if (*pcVar3 != '\0') {
        cVar5 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                          (&DAT_0012e395,0x1c,uVar8,uVar6);
        if (cVar5 != '\0') {
          *pcVar3 = '\0';
          return;
        }
        if (*pcVar3 != '\0') goto LAB_001daf2a;
      }
      *(longlong *)param_1[3] = *(longlong *)param_1[3] + 1;
    }
  }
LAB_001daf2a:
  if (*(char *)param_1[2] == '\0') {
    return;
  }
  plVar1 = (longlong *)param_1[3];
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    pcVar3 = (char *)param_1[4];
    if (*pcVar3 == '\0') {
      local_48 = &DAT_0012e3b1;
      if (lVar2 == 1) {
        local_48 = (undefined *)0x1;
      }
      local_40 = (ulonglong)(lVar2 != 1);
      local_a0 = PTR_fmt_00219e40;
      local_98 = &local_48;
      local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_a8 = plVar1;
      (*(code *)PTR_write_0021a2e0)(&local_a8,&DAT_00116485);
    }
    *pcVar3 = '\0';
    *plVar1 = 0;
  }
  local_58[0] = param_1[5];
  local_58[1] = 0;
  uVar6 = *(undefined8 *)((char *)param_1[7] + 8);
  if (*(char *)param_1[7] == '\0') {
    uVar6 = (*(code *)PTR__Unwind_GetIP_0021a818)();
  }
  (*(code *)PTR_name_0021a830)();
  iVar7 = *param_2;
  if (iVar7 == 2) {
LAB_001db0a7:
    local_48 = (undefined *)0x2;
joined_r0x001db0b3:
    if (iVar7 != 2) goto LAB_001db0ba;
  }
  else {
    if (iVar7 != -1) {
      if (*(ulonglong *)(param_2 + 4) == 0) goto LAB_001db0a7;
      local_38 = *(undefined8 *)(param_2 + 6);
      local_48 = (undefined *)0x0;
      local_40 = *(ulonglong *)(param_2 + 4);
      goto joined_r0x001db0b3;
    }
    local_48 = (undefined *)0x2;
  }
  iVar7 = 0;
LAB_001db0ba:
  uVar4 = <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
                    (local_58,uVar6,&local_a8,&local_48,iVar7);
  *(undefined1 *)param_1[6] = uVar4;
  *(longlong *)(local_58[0] + 0x18) = *(longlong *)(local_58[0] + 0x18) + 1;
  return;
}


