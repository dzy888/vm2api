// 0008e8d0 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::backtrace_rs::backtrace::Frame,)>>::call_once::{shim:vtable#0}
    */

byte __rustcall
<std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::backtrace_rs::backtrace::Frame,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_R9;
  undefined8 auStack_b8 [3];
  char *pcStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  char *pcStack_68;
  char *pcStack_50;
  longlong alStack_48 [2];
  char cStack_31;
  
  pcStack_98 = (char *)*param_1;
  if ((*pcStack_98 == '\0') && (100 < *(ulonglong *)param_1[1])) {
    bVar4 = 0;
  }
  else {
    cStack_31 = '\0';
    uStack_80 = param_1[6];
    pbVar2 = (byte *)param_1[2];
    lVar3 = param_1[3];
    pcStack_a0 = &cStack_31;
    uStack_90 = *(undefined4 *)(param_1 + 4);
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_88 = *(undefined4 *)(param_1 + 5);
    uStack_84 = *(undefined4 *)((longlong)param_1 + 0x2c);
    pcStack_50 = (char *)param_1[4];
    cVar1 = *param_2;
    lVar6 = *(longlong *)(param_2 + 8);
    lVar5 = lVar6;
    lStack_78 = lVar3;
    pbStack_70 = pbVar2;
    pcStack_68 = param_2;
    if (cVar1 == '\0') {
      lVar5 = (*(code *)PTR__Unwind_GetIP_000c41c0)();
    }
    lVar7 = lVar5 + -1;
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Cache>::with_global::
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::resolve::_closure_1_>
              (lVar7,&pcStack_a0,&DAT_000c1578);
    if ((cStack_31 == '\0') && (*pcStack_50 != '\0')) {
      alStack_48[1] = 0;
      alStack_48[0] = lVar3;
      if (cVar1 == '\0') {
        lVar6 = (*(code *)PTR__Unwind_GetIP_000c41c0)();
      }
      pcStack_a0 = (char *)0xffffffffffffffff;
      auStack_b8[0] = 2;
      bVar4 = <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
                        (alStack_48,lVar6,&pcStack_a0,auStack_b8,0,in_R9,0);
      *pbVar2 = bVar4;
      *(longlong *)(alStack_48[0] + 0x18) = *(longlong *)(alStack_48[0] + 0x18) + 1;
    }
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    bVar4 = *pbVar2 ^ 1;
  }
  return bVar4;
}


