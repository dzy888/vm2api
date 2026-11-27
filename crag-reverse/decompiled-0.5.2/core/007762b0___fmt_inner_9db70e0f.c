// 007762b0 _fmt_inner

/* <u128>::_fmt_inner */

ulonglong __rustcall
<u128>::_fmt_inner(ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  bool bVar28;
  
  if (param_1 == 0 && param_2 == 0) {
    bVar28 = param_4 != 0;
    param_4 = param_4 - 1;
    if (bVar28) {
      *(undefined1 *)(param_3 + param_4) = 0x30;
      return param_4;
    }
    (*(code *)PTR_panic_bounds_check_00799520)
              (0xffffffffffffffff,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798330);
LAB_007767af:
    (*(code *)PTR_panic_bounds_check_00799520)();
LAB_007767c4:
    (*(code *)PTR_panic_bounds_check_00799520)();
LAB_007767db:
    (*(code *)PTR_panic_bounds_check_00799520)();
LAB_007767f2:
    uVar23 = (*(code *)PTR_panic_bounds_check_00799520)();
  }
  else {
    if (param_2 < (param_1 < 10000000000000000)) {
      uVar22 = 0x27;
      goto joined_r0x007762eb;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = SUB168(auVar5 * ZEXT816(0xd30baf9a1e626a6d),8);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_2;
    auVar17 = auVar6 * ZEXT816(0xd30baf9a1e626a6d) + auVar17;
    uVar27 = auVar17._8_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1;
    uVar23 = SUB168(auVar7 * ZEXT816(0x39a5652fb1137856),8);
    uVar22 = (ulonglong)CARRY8(SUB168(auVar7 * ZEXT816(0x39a5652fb1137856),0),auVar17._0_8_);
    uVar24 = uVar23 + uVar27;
    auVar18[8] = CARRY8(uVar23,uVar27) || CARRY8(uVar24,uVar22);
    auVar18._0_8_ = uVar24 + uVar22;
    auVar18._9_7_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_2;
    auVar18 = auVar8 * ZEXT816(0x39a5652fb1137856) + auVar18;
    uVar22 = auVar18._8_8_;
    uVar24 = auVar18._0_8_ >> 0x33 | uVar22 << 0xd;
    param_1 = uVar24 * -10000000000000000 + param_1;
    if (param_4 < 0x24) goto LAB_007767af;
    iVar25 = (int)(param_1 / 10000);
    iVar26 = (int)param_1 + iVar25 * -10000;
    uVar20 = (uint)(iVar26 * 0x147b) >> 0x13;
    *(undefined *)(param_3 + 0x23) = (&DAT_001c26c4)[(ulonglong)uVar20 * 2];
    if (param_4 == 0x24) goto LAB_007767c4;
    *(undefined *)(param_3 + 0x24) = (&DAT_001c26c5)[(ulonglong)uVar20 * 2];
    if (param_4 < 0x26) goto LAB_007767db;
    uVar23 = (ulonglong)(iVar26 + uVar20 * -100 & 0xffff);
    *(undefined *)(param_3 + 0x25) = (&DAT_001c26c4)[uVar23 * 2];
    if (param_4 == 0x26) goto LAB_007767f2;
    *(undefined *)(param_3 + 0x26) = (&DAT_001c26c5)[uVar23 * 2];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_1 / 10000;
    iVar25 = iVar25 + (SUB164(auVar9 * ZEXT816(0xd1b71758e2197),8) >> 1) * -10000;
    uVar20 = (uint)(iVar25 * 0x147b) >> 0x13;
    *(uint *)(param_3 + 0x1f) =
         CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar25 + uVar20 * -100 & 0xffff) * 2),
                  *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1 / 100000000;
    iVar26 = (int)(param_1 / 100000000) + SUB164(auVar10 * ZEXT816(0x68db8bac710cc),8) * -10000;
    uVar20 = (uint)(iVar26 * 0x147b) >> 0x13;
    uVar23 = (ulonglong)
             CONCAT22(*(undefined2 *)
                       (&DAT_001c26c4 + (ulonglong)(iVar26 + uVar20 * -100 & 0xffff) * 2),
                      *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
    *(uint *)(param_3 + 0x1b) =
         CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar26 + uVar20 * -100 & 0xffff) * 2),
                  *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
    param_4 = 0xb424dc35095cd81;
    if (param_1 < 10000000000000000) {
      uVar22 = uVar22 >> 0x33;
      *(uint *)(param_3 + 0x17) =
           CONCAT22(*(undefined2 *)
                     (&DAT_001c26c4 +
                     (ulonglong)
                     ((int)(param_1 / 1000000000000) +
                      (((uint)(param_1 / 1000000000000 >> 2) & 0xffff) * 0x147b >> 0x11) * -100 &
                     0xffff) * 2),
                    *(undefined2 *)(&DAT_001c26c4 + (uint)((int)(param_1 / 100000000000000) * 2)));
      if (uVar22 < (uVar24 < 10000000000000000)) {
        uVar22 = 0x17;
        param_1 = uVar24;
joined_r0x007762eb:
        uVar24 = param_1;
        if (999 < param_1) {
          do {
            uVar24 = param_1 / 10000;
            iVar26 = (int)param_1 + (int)uVar24 * -10000;
            uVar20 = (uint)(iVar26 * 0x147b) >> 0x13;
            *(uint *)(param_3 + -4 + uVar22) =
                 CONCAT22(*(undefined2 *)
                           (&DAT_001c26c4 + (ulonglong)(iVar26 + uVar20 * -100 & 0xffff) * 2),
                          *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
            uVar22 = uVar22 - 4;
            bVar28 = 9999999 < param_1;
            param_1 = uVar24;
          } while (bVar28);
        }
        if (9 < uVar24) {
          iVar26 = (int)uVar24;
          uVar20 = ((uint)(uVar24 >> 2) & 0xffff) * 0x147b >> 0x11;
          uVar24 = (ulonglong)uVar20;
          *(undefined2 *)(param_3 + -2 + uVar22) =
               *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar26 + uVar20 * -100 & 0xffff) * 2);
          uVar22 = uVar22 - 2;
        }
        if (uVar24 != 0) {
          *(undefined *)(param_3 + -1 + uVar22) = (&DAT_001c26c5)[uVar24 * 2];
          uVar22 = uVar22 - 1;
        }
        return uVar22;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar24;
      uVar27 = SUB168(auVar11 * ZEXT816(0xd30baf9a1e626a6d),8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar22;
      uVar23 = SUB168(auVar12 * ZEXT816(0xd30baf9a1e626a6d),0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar24;
      auVar19._8_8_ = 0;
      auVar19._0_8_ =
           SUB168(auVar13 * ZEXT816(0x39a5652fb1137856),8) +
           SUB168(auVar12 * ZEXT816(0xd30baf9a1e626a6d),8) + (ulonglong)CARRY8(uVar23,uVar27) +
           (ulonglong)CARRY8(SUB168(auVar13 * ZEXT816(0x39a5652fb1137856),0),uVar23 + uVar27);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar22;
      auVar19 = auVar14 * ZEXT816(0x39a5652fb1137856) + auVar19;
      param_1 = auVar19._8_8_ * 0x2000 | auVar19._0_8_ >> 0x33;
      uVar24 = param_1 * -10000000000000000 + uVar24;
      iVar26 = (int)(uVar24 / 10000);
      iVar25 = (int)uVar24 + iVar26 * -10000;
      uVar20 = (uint)(iVar25 * 0x147b) >> 0x13;
      uVar22 = (ulonglong)
               CONCAT22(*(undefined2 *)
                         (&DAT_001c26c4 + (ulonglong)(iVar25 + uVar20 * -100 & 0xffff) * 2),
                        *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24 / 10000;
      iVar26 = iVar26 + (SUB164(auVar15 * ZEXT816(0xd1b71758e2197),8) >> 1) * -10000;
      uVar21 = (uint)(iVar26 * 0x147b) >> 0x13;
      uVar3 = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar21 * 2);
      uVar1 = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar26 + uVar21 * -100 & 0xffff) * 2);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar24 / 100000000;
      iVar26 = (int)(uVar24 / 100000000) + SUB164(auVar16 * ZEXT816(0x68db8bac710cc),8) * -10000;
      uVar21 = (uint)(iVar26 * 0x147b) >> 0x13;
      uVar4 = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar21 * 2);
      uVar2 = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar26 + uVar21 * -100 & 0xffff) * 2);
      *(uint *)(param_3 + 0x13) =
           CONCAT22(*(undefined2 *)
                     (&DAT_001c26c4 + (ulonglong)(iVar25 + uVar20 * -100 & 0xffff) * 2),
                    *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar20 * 2));
      *(uint *)(param_3 + 0xf) = CONCAT22(uVar1,uVar3);
      *(uint *)(param_3 + 0xb) = CONCAT22(uVar2,uVar4);
      param_4 = (ulonglong)(uint)((int)(uVar24 / 100000000000000) * 2);
      if (uVar24 < 10000000000000000) {
        *(uint *)(param_3 + 7) =
             CONCAT22(*(undefined2 *)
                       (&DAT_001c26c4 +
                       (ulonglong)
                       ((int)(uVar24 / 1000000000000) +
                        (((uint)(uVar24 / 1000000000000 >> 2) & 0xffff) * 0x147b >> 0x11) * -100 &
                       0xffff) * 2),*(undefined2 *)(&DAT_001c26c4 + param_4));
        uVar22 = 7;
        goto joined_r0x007762eb;
      }
      goto LAB_0077681b;
    }
  }
  uVar22 = (*(code *)PTR_panic_bounds_check_00799520)
                     (uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798210);
LAB_0077681b:
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar22,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798210);
  return param_4 + 1;
}


