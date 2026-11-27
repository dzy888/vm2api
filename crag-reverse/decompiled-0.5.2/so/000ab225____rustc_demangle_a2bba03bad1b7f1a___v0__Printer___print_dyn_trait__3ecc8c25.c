// 000ab225 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_dyn_trait>

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_dyn_trait>
    */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_sep_list::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_dyn_trait>(longlong *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar2 = PTR_fmt_000c3f58;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar5 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      if ((((lVar6 != 0) && (param_1[4] != 0)) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) ||
         (bVar4 = print_path_maybe_open_generics(param_1), bVar4 == 2)) {
        return 1;
      }
      lVar5 = *param_1;
      if (lVar5 == 0) {
LAB_000ab3bb:
        if ((bVar4 & 1) != 0) goto LAB_000ab3bf;
      }
      else {
        do {
          uVar1 = param_1[2];
          if (((ulonglong)param_1[1] <= uVar1) || (*(char *)(lVar5 + uVar1) != 'p'))
          goto LAB_000ab3bb;
          param_1[2] = uVar1 + 1;
          if ((bVar4 & 1) == 0) {
            lVar5 = param_1[4];
          }
          else {
            lVar5 = param_1[4];
          }
          if ((lVar5 != 0) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) {
            return 1;
          }
          if (*param_1 == 0) {
            lVar5 = param_1[4];
            goto joined_r0x000ab401;
          }
          <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_50,param_1);
          if (CONCAT44(uStack_4c,local_50) == 0) {
            if ((param_1[4] == 0) ||
               (cVar3 = (*(code *)PTR_fmt_000c3f58)(&DAT_00016a24), cVar3 == '\0')) {
              *param_1 = 0;
              *(undefined1 *)(param_1 + 1) = (undefined1)uStack_48;
              return 0;
            }
            return 1;
          }
          if (param_1[4] != 0) {
            cVar3 = (*(code *)PTR_fmt_000c4680)();
            if (cVar3 != '\0') {
              return 1;
            }
            if ((param_1[4] != 0) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) {
              return 1;
            }
          }
          if (((*param_1 == 0) || (uVar1 = param_1[2], (ulonglong)param_1[1] <= uVar1)) ||
             (*(char *)(*param_1 + uVar1) != 'K')) {
            cVar3 = print_type(param_1);
          }
          else {
            param_1[2] = uVar1 + 1;
            cVar3 = print_const(param_1,0);
          }
          if (cVar3 != '\0') {
            return 1;
          }
          lVar5 = *param_1;
          bVar4 = 1;
        } while (lVar5 != 0);
LAB_000ab3bf:
        lVar5 = param_1[4];
joined_r0x000ab401:
        if ((lVar5 != 0) && (cVar3 = (*(code *)puVar2)(), cVar3 != '\0')) {
          return 1;
        }
      }
      lVar5 = *param_1;
      lVar6 = lVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
}


