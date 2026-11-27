// 00780540 from_str

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <f64 as core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str */

undefined2 * __rustcall
<f64_as_core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str
          (undefined2 *param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  ulonglong uVar6;
  uint3 uVar7;
  ulonglong uVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  undefined2 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar17;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 local_350;
  byte local_348;
  undefined7 uStack_347;
  byte local_33f;
  uint local_48;
  char local_44;
  undefined2 *local_40;
  uint local_34;
  
  if (param_3 == 0) {
    *param_1 = 1;
    return param_1;
  }
  bVar12 = (byte)*param_2;
  if ((bVar12 == 0x2d) || (bVar12 == 0x2b)) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      *param_1 = 0x101;
      return param_1;
    }
    param_2 = (ulonglong *)((longlong)param_2 + 1);
  }
  (*(code *)PTR_parse_number_0079b3c8)(param_4,param_3);
  uVar17 = local_350;
  if (local_33f == 2) {
    if (param_3 == 3) {
      uVar7 = (uint3)*param_2 & 0xdfdfdf;
      if (uVar7 != 0x464e49) {
        if (uVar7 != 0x4e414e) goto LAB_007806d0;
        uVar17 = _s__001853a8;
        goto LAB_007806e9;
      }
    }
    else if ((param_3 != 8) || ((*param_2 & 0xdfdfdfdfdfdfdfdf) != 0x5954494e49464e49)) {
LAB_007806d0:
      *(undefined1 *)((longlong)param_1 + 1) = 1;
      *(undefined1 *)param_1 = 1;
      return param_1;
    }
    uVar17 = _s__001851c0;
LAB_007806e9:
    if (bVar12 == 0x2d) {
      uVar17 = uVar17 ^ (ulonglong)DAT_00184280;
    }
    *(ulonglong *)(param_1 + 4) = uVar17;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  local_34 = (uint)bVar12;
  uVar8 = CONCAT71(uStack_347,local_348);
  local_40 = param_1;
  if ((uVar8 < 0x20000000000001 && 0xffffffffffffffc3 < local_350 - 0x26) && (local_33f & 1) == 0) {
    if ((longlong)local_350 < 0x17) {
      if ((longlong)local_350 < 0) {
        dVar9 = (double)(longlong)uVar8 / *(double *)(&DAT_001c60b8 + local_350 * -8);
      }
      else {
        dVar9 = (double)(longlong)uVar8 * *(double *)(&DAT_001c60b8 + local_350 * 8);
      }
      goto joined_r0x007807f2;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)
                    (core[c0acaeba6ab4c2e0]::unicode::unicode_data::grapheme_extend::OFFSETS +
                    local_350 * 8 + 0x2a3);
    uVar17 = SUB168(auVar1 * auVar2,0);
    if ((bool)(~(SUB168(auVar1 * auVar2,8) != 0) & uVar17 < 0x20000000000001)) {
      dVar9 = (double)(longlong)uVar17 * _DAT_001850f8;
      goto joined_r0x007807f2;
    }
    auVar19 = core[c0acaeba6ab4c2e0]::num::imp::dec2flt::lemire::compute_float::<f64>
                        (local_350,uVar8);
    uVar18 = extraout_XMM0_Qa_01;
LAB_00780739:
    if (auVar19._8_4_ < 0) {
LAB_00780745:
      uVar15 = local_34;
      puVar13 = local_40;
      (*(code *)PTR_parse_decimal_seq_0079b3c0)(uVar18,param_3);
      puVar5 = PTR_right_shift_0079b378;
      if ((int)local_48 < -0x144 || local_350 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0x7ff;
        iVar14 = 0;
        if ((int)local_48 < 0x136) {
          pcVar3 = (code *)PTR_left_shift_0079b370;
          if (0 < (int)local_48) {
            iVar14 = 0;
            do {
              uVar15 = 0x3c;
              if (local_48 < 0x13) {
                uVar15 = (uint)(byte)""[local_48];
              }
              (*(code *)puVar5)();
              if ((int)local_48 < -0x7ff) {
                auVar19 = ZEXT816(0);
                goto LAB_0078078d;
              }
              iVar14 = iVar14 + uVar15;
              pcVar3 = (code *)PTR_left_shift_0079b370;
            } while (0 < (int)local_48);
          }
          do {
            if (local_48 == 0) {
              if (4 < local_348) break;
              uVar15 = (local_348 < 2) + 1;
            }
            else {
              uVar15 = 0x3c;
              if (-local_48 < 0x13) {
                uVar15 = (uint)(byte)""[-local_48];
              }
            }
            (*pcVar3)();
            if (0x7ff < (int)local_48) {
              auVar19 = ZEXT816(0x7ff) << 0x40;
              goto LAB_0078078d;
            }
            iVar14 = iVar14 - uVar15;
          } while ((int)local_48 < 1);
          puVar5 = PTR_right_shift_0079b378;
          uVar15 = iVar14 - 1;
          if ((int)uVar15 < -0x3fe) {
            do {
              uVar16 = -uVar15 - 0x3fe;
              if (0x3b < uVar16) {
                uVar16 = 0x3c;
              }
              (*(code *)puVar5)();
              uVar15 = uVar16 + uVar15;
            } while (uVar15 < 0xfffffc02);
          }
          if ((int)(uVar15 + 0x3ff) < 0x7ff) {
            (*(code *)PTR_left_shift_0079b370)();
            puVar13 = local_40;
            if ((local_350 == 0) || (uVar17 = (ulonglong)(int)local_48, (longlong)uVar17 < 0)) {
              auVar19 = ZEXT416(uVar15 + 0x3fe) << 0x40;
              local_40 = puVar13;
              goto LAB_0078078d;
            }
            if (local_48 < 0x13) {
              if (local_48 == 0) {
                uVar8 = 0;
              }
              else {
                if (local_48 == 1) {
                  uVar8 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar8 = 0;
                  uVar6 = 0;
                  do {
                    uVar10 = uVar6;
                    lVar11 = uVar8 * 10;
                    if (uVar10 < local_350) {
                      lVar11 = lVar11 + (ulonglong)(&local_348)[uVar10];
                    }
                    uVar8 = lVar11 * 10;
                    if (uVar10 + 1 < local_350) {
                      uVar8 = uVar8 + *(byte *)((longlong)&uStack_347 + uVar10);
                    }
                    uVar6 = uVar10 + 2;
                  } while (uVar10 + 2 != (ulonglong)(local_48 & 0x1e));
                  if ((uVar17 & 1) == 0) goto LAB_00780a0f;
                  uVar10 = uVar10 + 2;
                }
                uVar8 = uVar8 * 10;
                if (uVar10 < local_350) {
                  uVar8 = uVar8 + (&local_348)[uVar10];
                }
              }
LAB_00780a0f:
              if (uVar17 < local_350) {
                if (uVar17 + 1 == local_350 && (&local_348)[uVar17] == 5) {
                  if ((local_44 != '\0') ||
                     ((local_48 != 0 && ((*(byte *)((longlong)&local_350 + uVar17 + 7) & 1) != 0))))
                  goto LAB_00780a50;
                }
                else if (4 < (&local_348)[uVar17]) {
LAB_00780a50:
                  uVar8 = uVar8 + 1;
                }
              }
              if (0x1fffffffffffff < uVar8) goto LAB_00780a5b;
            }
            else {
LAB_00780a5b:
              (*(code *)PTR_right_shift_0079b378)();
              uVar8 = (*(code *)PTR_round_0079b380)();
              if (0x7fe < (int)(uVar15 + 0x400)) goto LAB_007808fb;
              uVar15 = uVar15 + 1;
            }
            auVar19._8_4_ = (0x3ff - (uint)(uVar8 < 0x10000000000000)) + uVar15;
            auVar19._0_8_ = uVar8 & 0xfffffffffffff;
            auVar19._12_4_ = 0;
            local_40 = puVar13;
          }
          else {
            puVar13 = local_40;
LAB_007808fb:
            auVar19 = ZEXT816(0x7ff) << 0x40;
            local_40 = puVar13;
          }
          goto LAB_0078078d;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17;
      auVar19 = auVar4 << 0x40;
      local_40 = puVar13;
      local_34 = uVar15;
    }
  }
  else {
    auVar19 = core[c0acaeba6ab4c2e0]::num::imp::dec2flt::lemire::compute_float::<f64>
                        (local_350,uVar8);
    uVar18 = extraout_XMM0_Qa;
    if ((local_33f & -1 < auVar19._8_4_) == 0) goto LAB_00780739;
    auVar20 = core[c0acaeba6ab4c2e0]::num::imp::dec2flt::lemire::compute_float::<f64>
                        (uVar17,uVar8 + 1);
    uVar18 = extraout_XMM0_Qa_00;
    if (auVar20 != auVar19._0_12_) goto LAB_00780745;
  }
LAB_0078078d:
  dVar9 = (double)(auVar19._8_8_ << 0x34 | auVar19._0_8_);
  bVar12 = (byte)local_34;
joined_r0x007807f2:
  if (bVar12 == 0x2d) {
    dVar9 = (double)((ulonglong)dVar9 ^ (ulonglong)DAT_00184280);
  }
  *(double *)(local_40 + 4) = dVar9;
  *(undefined1 *)local_40 = 0;
  return local_40;
}


