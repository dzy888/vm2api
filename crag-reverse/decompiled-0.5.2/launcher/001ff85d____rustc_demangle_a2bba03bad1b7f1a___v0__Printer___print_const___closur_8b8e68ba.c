// 001ff85d <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#3}>

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#3}>
    */

undefined1  [16] __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_3_>(longlong *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_fmt_00219e18;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    lVar5 = 0;
LAB_001ff8e7:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar4 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        goto LAB_001ff8e7;
      }
      if ((((lVar5 != 0) && (param_1[4] != 0)) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) ||
         (cVar3 = print_const(param_1,1), cVar3 != '\0')) {
        uVar6 = 1;
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = *param_1;
    } while (lVar4 != 0);
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


