// 0076f0b9 print_path_maybe_open_generics

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path_maybe_open_generics */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path_maybe_open_generics(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 unaff_R14;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (uVar7 = param_1[2], uVar7 < (ulonglong)param_1[1])) {
    if (*(char *)(lVar1 + uVar7) == 'B') {
      param_1[2] = uVar7 + 1;
      <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::backref(&local_38,param_1);
      if (CONCAT44(uStack_34,local_38) == 0) {
        if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_007994b8)(&DAT_001c1020), cVar5 != '\0')
           ) {
          uVar7 = CONCAT71((int7)((ulonglong)&local_38 >> 8),2);
          goto LAB_0076f1a6;
        }
        param_1[2] = CONCAT44(uStack_24,local_28);
        param_1[3] = CONCAT44(uStack_1c,uStack_20);
        *param_1 = CONCAT44(uStack_34,local_38);
        param_1[1] = CONCAT44(uStack_2c,uStack_30);
      }
      else if (param_1[4] != 0) {
        lVar1 = *param_1;
        lVar2 = param_1[1];
        lVar3 = param_1[2];
        lVar4 = param_1[3];
        *(undefined4 *)param_1 = local_38;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
        *(undefined4 *)(param_1 + 2) = local_28;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
        *(undefined4 *)(param_1 + 3) = uStack_20;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_1c;
        uVar7 = print_path_maybe_open_generics(param_1);
        *param_1 = lVar1;
        param_1[1] = lVar2;
        param_1[2] = lVar3;
        param_1[3] = lVar4;
        return uVar7;
      }
      uVar7 = 0;
      goto LAB_0076f1a6;
    }
    if (*(char *)(lVar1 + uVar7) == 'I') {
      param_1[2] = uVar7 + 1;
      cVar5 = print_path(param_1,0);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),2);
      if ((cVar5 == '\0') &&
         ((param_1[4] == 0 || (cVar5 = (*(code *)PTR_fmt_007994b8)(), cVar5 == '\0')))) {
        uVar8 = print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>
                          (param_1);
        uVar7 = CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 + '\x01');
      }
      goto LAB_0076f1a6;
    }
  }
  uVar6 = print_path(param_1,0);
  uVar7 = (ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),(char)uVar6 * '\x02');
LAB_0076f1a6:
  return uVar7 & 0xffffffff;
}


