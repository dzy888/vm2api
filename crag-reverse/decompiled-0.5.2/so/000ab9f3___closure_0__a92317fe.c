// 000ab9f3 {closure#0}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::{closure#0} */

undefined ** __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::_closure_0_
          (undefined4 param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong unaff_R13;
  longlong lVar9;
  ulonglong unaff_R15;
  undefined7 uVar10;
  byte bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong local_c0;
  longlong local_b8;
  undefined *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined2 local_80;
  undefined *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong local_60;
  
  bVar11 = 0;
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_000abcb1:
    if (param_2[4] != 0) {
      cVar2 = (*(code *)PTR_fmt_000c3f58)();
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
      if (cVar2 != '\0') goto LAB_000abd44;
    }
    uVar5 = print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>(param_2);
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
    if (((uVar5 & 1) != 0) ||
       ((param_2[4] != 0 && (cVar2 = (*(code *)PTR_fmt_000c3f58)(), cVar2 != '\0'))))
    goto LAB_000abd44;
    if ((*param_2 == 0) ||
       ((uVar5 = param_2[2], (ulonglong)param_2[1] <= uVar5 || (*(char *)(*param_2 + uVar5) != 'u'))
       )) {
      if ((param_2[4] == 0) || (cVar2 = (*(code *)PTR_fmt_000c3f58)(), cVar2 == '\0')) {
        ppuVar6 = (undefined **)print_type(param_2);
        return ppuVar6;
      }
      goto LAB_000abd44;
    }
    param_2[2] = uVar5 + 1;
  }
  else {
    uVar5 = param_2[1];
    uVar3 = param_2[2];
    if ((uVar3 < uVar5) && (*(char *)(lVar9 + uVar3) == 'U')) {
      uVar3 = uVar3 + 1;
      param_2[2] = uVar3;
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
    }
    else {
      unaff_R15 = 0;
    }
    uVar10 = (undefined7)(unaff_R15 >> 8);
    if ((uVar5 <= uVar3) || (*(char *)(lVar9 + uVar3) != 'K')) {
      if ((char)unaff_R15 != '\0') {
        puVar8 = (undefined *)0x0;
LAB_000aba79:
        if (param_2[4] != 0) {
          cVar2 = (*(code *)PTR_fmt_000c3f58)();
          unaff_R15 = CONCAT71(uVar10,1);
          param_1 = extraout_XMM0_Da;
          if (cVar2 != '\0') goto LAB_000abd44;
        }
        if (puVar8 != (undefined *)0x0) goto LAB_000abae1;
      }
      goto LAB_000abcb1;
    }
    uVar1 = uVar3 + 1;
    param_2[2] = uVar1;
    if ((uVar1 < uVar5) && (*(char *)(lVar9 + uVar1) == 'C')) {
      param_2[2] = uVar3 + 2;
      unaff_R13 = 1;
      local_78 = &DAT_00016aa7;
LAB_000abadc:
      puVar8 = local_78;
      if ((char)unaff_R15 != '\0') goto LAB_000aba79;
LAB_000abae1:
      lVar9 = param_2[4];
      if (lVar9 != 0) {
        cVar2 = (*(code *)PTR_fmt_000c3f58)(param_1,lVar9);
        unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
        if (cVar2 != '\0') goto LAB_000abd44;
      }
      local_c0 = 0;
      local_a0 = 0;
      local_90 = 0x5f0000005f;
      local_88 = 1;
      local_80 = 1;
      local_b8 = unaff_R13;
      local_b0 = puVar8;
      local_a8 = unaff_R13;
      local_98 = unaff_R13;
      lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next();
      if (lVar4 == 0) {
        (*(code *)PTR_unwrap_failed_000c3b08)();
        (*(code *)PTR_demangle_000c4688)();
        if (puStack_120 == (undefined *)0x0) {
          PTR_s__rust_deps_rustc_demangle_0_1_27_000c2530 =
               Elf64_Ehdr_00000000.e_ident_magic_str + 1;
        }
        else {
          _DAT_000c2560 = uStack_f0;
          _UNK_000c2568 = uStack_e8;
          _UNK_000c2550 = uStack_100;
          _UNK_000c2558 = uStack_f8;
          _UNK_000c2540 = uStack_110;
          PTR_s__rust_deps_rustc_demangle_0_1_27_000c2548 = puStack_108;
          PTR_s__rust_deps_rustc_demangle_0_1_27_000c2530 = puStack_120;
          _UNK_000c2538 = uStack_118;
        }
        return &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2530;
      }
      if ((lVar9 == 0) ||
         (cVar2 = (*(code *)PTR_fmt_000c3f58)(extraout_XMM0_Da_00,lVar9), cVar2 == '\0')) {
        plVar7 = &local_c0;
        ppuVar6 = &local_78;
        for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
          *ppuVar6 = (undefined *)*plVar7;
          plVar7 = plVar7 + (ulonglong)bVar11 * -2 + 1;
          ppuVar6 = ppuVar6 + (ulonglong)bVar11 * -2 + 1;
        }
        auVar13 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_78);
        if (auVar13._0_8_ == 0) {
          uVar12 = extraout_XMM0_Da_01;
        }
        else {
          lVar4 = lVar9;
          unaff_R15 = auVar13._8_8_;
          uVar12 = extraout_XMM0_Da_01;
          do {
            if (lVar4 == 0) {
LAB_000abbe6:
              lVar4 = 0;
            }
            else {
              cVar2 = (*(code *)PTR_fmt_000c3f58)(uVar12,lVar4);
              if (cVar2 != '\0') goto LAB_000abca9;
              lVar9 = param_2[4];
              if (lVar9 == 0) {
                lVar9 = 0;
                goto LAB_000abbe6;
              }
              cVar2 = (*(code *)PTR_fmt_000c3f58)(extraout_XMM0_Da_02,lVar9);
              lVar4 = lVar9;
              if (cVar2 != '\0') goto LAB_000abca9;
            }
            auVar13 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_78);
            unaff_R15 = auVar13._8_8_;
            uVar12 = extraout_XMM0_Da_03;
          } while (auVar13._0_8_ != 0);
        }
        if ((lVar9 == 0) || (cVar2 = (*(code *)PTR_fmt_000c3f58)(uVar12,lVar9), cVar2 == '\0'))
        goto LAB_000abcb1;
      }
LAB_000abca9:
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
      goto LAB_000abd44;
    }
    param_1 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_78,param_2);
    if (local_78 == (undefined *)0x0) {
      if (param_2[4] != 0) {
        cVar2 = (*(code *)PTR_fmt_000c3f58)();
        unaff_R15 = CONCAT71(uVar10,1);
        if (cVar2 != '\0') goto LAB_000abd44;
      }
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = local_70;
    }
    else {
      unaff_R13 = CONCAT71(uStack_6f,local_70);
      if ((unaff_R13 != 0) && (local_60 == 0)) goto LAB_000abadc;
      if (param_2[4] != 0) {
        cVar2 = (*(code *)PTR_fmt_000c3f58)();
        unaff_R15 = CONCAT71(uVar10,1);
        if (cVar2 != '\0') goto LAB_000abd44;
      }
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  unaff_R15 = 0;
LAB_000abd44:
  return (undefined **)(unaff_R15 & 0xffffffff);
}


