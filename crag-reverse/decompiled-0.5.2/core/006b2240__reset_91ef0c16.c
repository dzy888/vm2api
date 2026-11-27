// 006b2240 reset

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hyper[c4782d5b5c5e3493]::common::time::Time>::reset */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::common::time::Time>::reset
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong unaff_R12;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x30);
                    /* WARNING: Could not recover jumptable at 0x006b2263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar12._0_8_ =
         (*UNRECOVERED_JUMPTABLE)
                   (param_4,param_3,*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0,
                    UNRECOVERED_JUMPTABLE);
    auVar12._8_8_ = param_3;
    return auVar12;
  }
  (*(code *)PTR_panic_fmt_007991a8)();
  uVar4 = anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._11_8_;
  uVar2 = _anon_c85774d12d9bb44050bb90c192981910_53_llvm_14911046455123227422;
  uVar8 = s_You_must_supply_a_timer__001a6dcc._16_8_;
  if (anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x24] != '\0') {
    lVar10 = 0;
    goto LAB_006b244b;
  }
  if ((ulonglong)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_ <=
      (ulonglong)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._11_8_ &&
      (ulonglong)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._11_8_ <=
      _anon_c85774d12d9bb44050bb90c192981910_53_llvm_14911046455123227422) {
    uVar9 = (ulonglong)
            (byte)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x1b];
    cVar1 = "keep-aliveinvalid header nameinvalid header valueinvalid response statusinvalid tokeninvalid HTTP version"
            [uVar9 + 0x12];
    uVar11 = anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_;
    if (uVar9 < 5) {
      do {
        uVar6 = uVar4 - uVar11;
        if (uVar6 < 0x10) {
          uVar7 = 0;
          if (uVar6 == 0) goto LAB_006b2428;
          while (*(char *)(uVar11 + uVar8 + uVar7) != cVar1) {
            uVar7 = uVar7 + 1;
            if (uVar6 == uVar7) goto LAB_006b2428;
          }
        }
        else {
          lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
          uVar7 = uVar6;
          if (lVar10 != 1) goto LAB_006b2428;
        }
        uVar11 = uVar11 + uVar7 + 1;
        anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_ = uVar11;
        if ((uVar11 <= uVar2 && uVar9 <= uVar11) &&
           (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
          unaff_R12 = (uVar11 - uVar9) - s_You_must_supply_a_timer__001a6dcc._0_8_;
          lVar10 = uVar8 + s_You_must_supply_a_timer__001a6dcc._0_8_;
          s_You_must_supply_a_timer__001a6dcc._0_8_ = uVar11;
          goto LAB_006b244b;
        }
      } while (uVar11 <= (ulonglong)uVar4);
    }
    else {
      do {
        uVar3 = anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_;
        uVar11 = uVar4 - anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_;
        if (uVar11 < 0x10) {
          uVar6 = 0;
          if (uVar11 == 0) {
            lVar10 = 0;
            uVar11 = uVar6;
          }
          else {
            do {
              if (*(char *)(anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_
                            + uVar8 + uVar6) == cVar1) {
                lVar10 = 1;
                uVar11 = uVar6;
                goto LAB_006b23ff;
              }
              uVar6 = uVar6 + 1;
            } while (uVar11 != uVar6);
            lVar10 = 0;
          }
        }
        else {
          lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
        }
LAB_006b23ff:
        if (lVar10 != 1) goto LAB_006b2428;
        anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_ =
             uVar3 + uVar11 + 1;
        if ((ulonglong)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_ <=
            uVar2 && uVar9 <= (ulonglong)
                              anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422.
                              _3_8_) {
          uVar8 = 4;
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__rustc_48a229ceaefd4985c50990b14_007921a0,4);
          UNRECOVERED_JUMPTABLE = (code *)swi(3);
          auVar14._0_8_ = (*UNRECOVERED_JUMPTABLE)();
          auVar14._8_8_ = uVar8;
          return auVar14;
        }
      } while ((ulonglong)anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._3_8_
               <= (ulonglong)uVar4);
    }
  }
LAB_006b242c:
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x24] = '\x01';
  unaff_R12 = s_You_must_supply_a_timer__001a6dcc._8_8_ - s_You_must_supply_a_timer__001a6dcc._0_8_;
  lVar10 = 0;
  if (unaff_R12 != 0) {
    lVar10 = uVar8 + s_You_must_supply_a_timer__001a6dcc._0_8_;
  }
  if (anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x23] != '\0') {
    lVar10 = uVar8 + s_You_must_supply_a_timer__001a6dcc._0_8_;
  }
LAB_006b244b:
  auVar13._8_8_ = unaff_R12;
  auVar13._0_8_ = lVar10;
  return auVar13;
LAB_006b2428:
  uVar3 = anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._11_8_;
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xb] = (char)uVar4;
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xc] = SUB81(uVar4,1);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xd] = SUB81(uVar4,2);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xe] = SUB81(uVar4,3);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xf] = SUB81(uVar4,4);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x10] = SUB81(uVar4,5);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x11] = SUB81(uVar4,6);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x12] = SUB81(uVar4,7);
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[3] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xb];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[4] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xc];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[5] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xd];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[6] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xe];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[7] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0xf];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[8] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x10];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[9] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x11];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[10] =
       anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422[0x12];
  anon_c85774d12d9bb44050bb90c192981910_55_llvm_14911046455123227422._11_8_ = uVar3;
  goto LAB_006b242c;
}


