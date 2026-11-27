// 001ffdcf <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>
    */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>(longlong *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char local_40;
  undefined1 local_3f;
  
  puVar2 = PTR_fmt_00219e18;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar4 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar6 = lVar5 == 0;
      lVar5 = lVar5 + -1;
      if ((bVar6) || (param_1[4] == 0)) {
LAB_001ffe41:
        uVar1 = param_1[2];
        if ((ulonglong)param_1[1] <= uVar1) goto LAB_001ffe91;
        if (*(char *)(lVar4 + uVar1) == 'L') {
          param_1[2] = uVar1 + 1;
          <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::integer_62(&local_40,param_1);
          if (local_40 != '\0') {
            if ((param_1[4] == 0) || (cVar3 = (*(code *)PTR_fmt_00219e18)(), cVar3 == '\0')) {
              *param_1 = 0;
              *(undefined1 *)(param_1 + 1) = local_3f;
              return 0;
            }
            return 1;
          }
          cVar3 = print_lifetime_from_index(param_1);
        }
        else {
          if (*(char *)(lVar4 + uVar1) != 'K') goto LAB_001ffe91;
          param_1[2] = uVar1 + 1;
          cVar3 = print_const(param_1,0);
        }
      }
      else {
        cVar3 = (*(code *)puVar2)();
        if (cVar3 != '\0') {
          return 1;
        }
        lVar4 = *param_1;
        if (lVar4 != 0) goto LAB_001ffe41;
LAB_001ffe91:
        cVar3 = print_type(param_1);
      }
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = *param_1;
    } while (lVar4 != 0);
  }
  return 0;
}


