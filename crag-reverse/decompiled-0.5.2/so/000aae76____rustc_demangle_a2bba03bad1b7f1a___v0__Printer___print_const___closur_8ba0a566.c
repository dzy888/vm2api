// 000aae76 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#2}>

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#2}>
    */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_2_>(longlong *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar2 = PTR_fmt_000c3f58;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar4 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar6 = lVar5 != 0;
      lVar5 = lVar5 + -1;
      if ((((bVar6) && (param_1[4] != 0)) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) ||
         (cVar3 = print_const(param_1,1), cVar3 != '\0')) {
        return 1;
      }
      lVar4 = *param_1;
    } while (lVar4 != 0);
  }
  return 0;
}


