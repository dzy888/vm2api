// 0073e8a0 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1}::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::backtrace_rs::symbolize::Symbol,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1}::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::backtrace_rs::symbolize::Symbol,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  longlong alStack_58 [2];
  undefined *puStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)*param_1 = 1;
  if ((*(char *)param_1[1] == '\0') &&
     ((*(code *)PTR_name_0079ad08)(), plStack_a8 != (longlong *)0xffffffffffffffff)) {
    if ((int)plStack_a8 == 2) {
      (*(code *)PTR_from_utf8_00799468)();
      if ((char)puStack_48 == '\0') {
        uVar6 = uStack_38;
        uVar8 = uStack_40;
        goto LAB_0073d456;
      }
    }
    else if (uStack_88 != 0) {
      uVar6 = uStack_80;
      uVar8 = uStack_88;
LAB_0073d456:
      cVar5 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                        (&DAT_001bfdd7,0x1a,uVar8,uVar6);
      pcVar3 = (char *)param_1[2];
      if (cVar5 != '\0') {
        *pcVar3 = '\x01';
        return;
      }
      if (*pcVar3 != '\0') {
        cVar5 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                          (&DAT_001bfdf1,0x1c,uVar8,uVar6);
        if (cVar5 != '\0') {
          *pcVar3 = '\0';
          return;
        }
        if (*pcVar3 != '\0') goto LAB_0073d27a;
      }
      *(longlong *)param_1[3] = *(longlong *)param_1[3] + 1;
    }
  }
LAB_0073d27a:
  if (*(char *)param_1[2] == '\0') {
    return;
  }
  plVar1 = (longlong *)param_1[3];
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    pcVar3 = (char *)param_1[4];
    if (*pcVar3 == '\0') {
      puStack_48 = &DAT_001bfe0d;
      if (lVar2 == 1) {
        puStack_48 = (undefined *)0x1;
      }
      uStack_40 = (ulonglong)(lVar2 != 1);
      puStack_a0 = PTR_fmt_007991f0;
      ppuStack_98 = &puStack_48;
      pcStack_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      plStack_a8 = plVar1;
      (*(code *)PTR_write_007994b0)(&plStack_a8,&DAT_0018a681);
    }
    *pcVar3 = '\0';
    *plVar1 = 0;
  }
  alStack_58[0] = param_1[5];
  alStack_58[1] = 0;
  uVar6 = *(undefined8 *)((char *)param_1[7] + 8);
  if (*(char *)param_1[7] == '\0') {
    uVar6 = (*(code *)PTR__Unwind_GetIP_0079ace0)();
  }
  (*(code *)PTR_name_0079ad08)();
  iVar7 = *param_2;
  if (iVar7 == 2) {
LAB_0073d3f7:
    puStack_48 = (undefined *)0x2;
joined_r0x0073d403:
    if (iVar7 != 2) goto LAB_0073d40a;
  }
  else {
    if (iVar7 != -1) {
      if (*(ulonglong *)(param_2 + 4) == 0) goto LAB_0073d3f7;
      uStack_38 = *(undefined8 *)(param_2 + 6);
      puStack_48 = (undefined *)0x0;
      uStack_40 = *(ulonglong *)(param_2 + 4);
      goto joined_r0x0073d403;
    }
    puStack_48 = (undefined *)0x2;
  }
  iVar7 = 0;
LAB_0073d40a:
  uVar4 = <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
                    (alStack_58,uVar6,&plStack_a8,&puStack_48,iVar7);
  *(undefined1 *)param_1[6] = uVar4;
  *(longlong *)(alStack_58[0] + 0x18) = *(longlong *)(alStack_58[0] + 0x18) + 1;
  return;
}


