// 0076b92f <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#5}>

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::{closure#5}>
    */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_5_>(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char local_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  puVar3 = PTR_fmt_007994b8;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar5 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar7 = lVar6 == 0;
      lVar6 = lVar6 + -1;
      if ((bVar7) || (param_1[4] == 0)) {
LAB_0076b9a1:
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_50,param_1,0x73);
        if (local_50 == '\x01') {
          lVar5 = param_1[4];
          uVar2 = uStack_4f;
joined_r0x0076ba7b:
          if ((lVar5 == 0) || (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 == '\0')) {
            *param_1 = 0;
            *(undefined1 *)(param_1 + 1) = uVar2;
            return 0;
          }
          return 1;
        }
        if (*param_1 == 0) goto LAB_0076ba39;
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_50,param_1);
        if (CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,local_50))) == 0) {
          lVar5 = param_1[4];
          uVar2 = uStack_48;
          goto joined_r0x0076ba7b;
        }
        if (param_1[4] != 0) {
          cVar4 = (*(code *)PTR_fmt_0079b288)();
          if (cVar4 != '\0') {
            return 1;
          }
          if ((param_1[4] != 0) && (cVar4 = (*(code *)puVar3)(), cVar4 != '\0')) {
            return 1;
          }
        }
        cVar4 = print_const(param_1,1);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      else {
        cVar4 = (*(code *)puVar3)();
        if (cVar4 != '\0') {
          return 1;
        }
        if (*param_1 != 0) goto LAB_0076b9a1;
LAB_0076ba39:
        if ((param_1[4] != 0) && (cVar4 = (*(code *)puVar3)(), cVar4 != '\0')) {
          return 1;
        }
      }
      lVar5 = *param_1;
    } while (lVar5 != 0);
  }
  return 0;
}


