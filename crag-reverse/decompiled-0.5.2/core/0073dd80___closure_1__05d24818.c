// 0073dd80 {closure#1}

/* std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#1} */

byte __rustcall
std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::_closure_1_(undefined8 *param_1,char *param_2)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_R9;
  undefined8 local_b8 [3];
  char *local_a0;
  char *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong local_78;
  byte *local_70;
  char *local_68;
  char *local_50;
  longlong local_48 [2];
  char local_31;
  
  local_98 = (char *)*param_1;
  if ((*local_98 == '\0') && (100 < *(ulonglong *)param_1[1])) {
    bVar4 = 0;
  }
  else {
    local_31 = '\0';
    local_80 = param_1[6];
    pbVar2 = (byte *)param_1[2];
    lVar3 = param_1[3];
    local_a0 = &local_31;
    local_90 = *(undefined4 *)(param_1 + 4);
    uStack_8c = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_88 = *(undefined4 *)(param_1 + 5);
    uStack_84 = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_50 = (char *)param_1[4];
    cVar1 = *param_2;
    lVar6 = *(longlong *)(param_2 + 8);
    lVar5 = lVar6;
    local_78 = lVar3;
    local_70 = pbVar2;
    local_68 = param_2;
    if (cVar1 == '\0') {
      lVar5 = (*(code *)PTR__Unwind_GetIP_0079ace0)();
    }
    lVar7 = lVar5 + -1;
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Cache>::with_global::
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::resolve::_closure_1_>
              (lVar7,&local_a0,&DAT_007963b0);
    if ((local_31 == '\0') && (*local_50 != '\0')) {
      local_48[1] = 0;
      local_48[0] = lVar3;
      if (cVar1 == '\0') {
        lVar6 = (*(code *)PTR__Unwind_GetIP_0079ace0)();
      }
      local_a0 = (char *)0xffffffffffffffff;
      local_b8[0] = 2;
      bVar4 = <std[6c98fd8553dbae28]::backtrace_rs::print::BacktraceFrameFmt>::print_raw_with_column
                        (local_48,lVar6,&local_a0,local_b8,0,in_R9,0);
      *pbVar2 = bVar4;
      *(longlong *)(local_48[0] + 0x18) = *(longlong *)(local_48[0] + 0x18) + 1;
    }
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    bVar4 = *pbVar2 ^ 1;
  }
  return bVar4;
}


