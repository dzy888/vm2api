// 00209440 <f64>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_shortest::<f64> */

void __rustcall
core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_shortest::<f64>
          (ulonglong param_1,uint *param_2,ulonglong param_3,short param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined2 uStack_10a;
  uint *puStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  undefined1 *puStack_f0;
  undefined1 local_d9 [17];
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ushort local_b0;
  byte local_ae;
  undefined2 local_a8;
  undefined6 uStack_a6;
  undefined *puStack_a0;
  ulonglong local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined *local_48;
  undefined *puStack_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  puStack_f0 = (undefined1 *)((longlong)register0x00000020 + -8);
  local_b8 = 0x10000000000000;
  local_b0 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_c8 = (param_1 & 0xfffffffffffff) + 0x10000000000000;
  if (local_b0 == 0) {
    local_c8 = param_1 * 2 & 0x1ffffffffffffe;
  }
  local_ae = (byte)local_c8 & 1;
  uStack_100 = param_1 & 0x7ff0000000000000;
  bVar12 = (param_1 & 0xfffffffffffff) == 0;
  uStack_f8 = (ulonglong)bVar12;
  bVar9 = 4;
  if (uStack_100 == 0) {
    bVar9 = bVar12 ^ 3;
  }
  if (uStack_100 == 0x7ff0000000000000) {
    bVar9 = bVar12;
  }
  switch(bVar9) {
  case 0:
    local_ae = 2;
    break;
  case 1:
    local_ae = 3;
    break;
  case 2:
    local_ae = 4;
    break;
  case 3:
    local_b0 = local_b0 - 0x433;
    local_ae = local_ae ^ 1;
    local_b8 = 1;
    break;
  case 4:
    uVar10 = local_c8 * 2;
    bVar12 = local_c8 == 0x10000000000000;
    local_c8 = 0x40000000000000;
    if (!bVar12) {
      local_c8 = uVar10;
    }
    local_b8 = (ulonglong)bVar12 + 1;
    local_b0 = (local_b0 - bVar12) - 0x434;
    local_ae = local_ae ^ 1;
    break;
  case 5:
    uVar8 = (uint)param_3;
    if (0xffed080b < (&switchD_002094e0::switchdataD_0012f7f4)[bVar9]) {
                    /* WARNING: Could not recover jumptable at 0x00209975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&switchD_00209975::switchdataD_0012f808 +
                (longlong)(int)(&switchD_00209975::switchdataD_0012f808)[param_3 & 0xffffffff]))();
      return;
    }
    if (uVar8 == 0x5c) {
      *(undefined2 *)param_2 = 0x5c5c;
      goto LAB_00209a64;
    }
    if (uVar8 - 0x20 < 0x5f) {
      *param_2 = uVar8;
      *(undefined1 *)(param_2 + 3) = 0x80;
      *(undefined1 *)((longlong)param_2 + 0xd) = 0x81;
      return;
    }
    puStack_108 = &switchD_002094e0::switchdataD_0012f7f4;
    auVar13._0_4_ = -(uint)(_DAT_00113c30 < (int)(uVar8 + (int)s__00113f00 ^ _DAT_00114010));
    auVar13._4_4_ = -(uint)(_UNK_00113c34 < (int)(uVar8 + _UNK_00113f04 ^ _UNK_00114014));
    auVar13._8_4_ = -(uint)(_UNK_00113c38 < (int)(uVar8 + _UNK_00113f08 ^ _UNK_00114018));
    auVar13._12_4_ = -(uint)(_UNK_00113c3c < (int)(uVar8 + _UNK_00113f0c ^ _UNK_0011401c));
    iVar3 = movmskps(uVar8 - 0x20,auVar13);
    if ((iVar3 == 0xf) && (uVar8 != 0x20 && 0xfffd < uVar8 - 0x100000)) {
      puVar1 = (undefined1 *)((longlong)register0x00000020 + -8);
      if (uVar8 < 0x85) {
LAB_002099fa:
        puStack_f0 = puVar1;
        cVar2 = <char>::is_assigned(param_3 & 0xffffffff);
        if (cVar2 != '\0') {
          *param_2 = uVar8;
          uVar5 = 0x81;
          cVar2 = -0x80;
          goto LAB_00209b43;
        }
      }
      else {
        cVar2 = unicode::unicode_data::white_space::lookup(param_3 & 0xffffffff);
        if (cVar2 == '\0') {
          if ((0x2ff < uVar8 & (byte)param_4) == 0) {
            puVar1 = puStack_f0;
            if (uVar8 < 0xad) goto LAB_002099fa;
          }
          else {
            cVar2 = (*(code *)PTR_lookup_slow_0021ace8)();
            if (cVar2 != '\0') goto LAB_00209a95;
          }
          cVar2 = (*(code *)PTR_lookup_slow_0021acf0)();
          if ((cVar2 == '\0') &&
             (cVar2 = (*(code *)PTR_lookup_slow_0021acf8)(), puVar1 = puStack_f0, cVar2 == '\0'))
          goto LAB_002099fa;
        }
      }
    }
LAB_00209a95:
    uVar6 = 0x1f;
    if ((uVar8 | 1) != 0) {
      for (; (uVar8 | 1) >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar6 = (uVar6 ^ 0x1c) >> 2;
    cVar2 = (char)uVar6 + -2;
    uStack_110 = 0;
    uStack_112 = 0;
    uStack_10f = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                 [param_3 >> 0x14 & 0xfff];
    uStack_10e = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                 [(uint)(param_3 >> 0x10) & 0xf];
    uStack_10d = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                 [(uint)(param_3 >> 0xc) & 0xf];
    uStack_10c = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                 [(uint)(param_3 >> 8) & 0xf];
    uStack_10b = anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                 [(uint)(param_3 >> 4) & 0xf];
    uStack_10a = CONCAT11(0x7d,anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407
                               [uVar8 & 0xf]);
    *(undefined2 *)(local_d9 + ((ulonglong)uVar6 - 0x3b)) = 0x755c;
    local_d9[(ulonglong)uVar6 - 0x39] = 0x7b;
    *(undefined2 *)(param_2 + 2) = uStack_10a;
    *(ulonglong *)param_2 =
         CONCAT17(uStack_10b,
                  CONCAT16(uStack_10c,
                           CONCAT15(uStack_10d,
                                    CONCAT14(uStack_10e,
                                             CONCAT13(uStack_10f,CONCAT12(uStack_110,uStack_112)))))
                 );
    uVar5 = 10;
LAB_00209b43:
    *(char *)(param_2 + 3) = cVar2;
    *(undefined1 *)((longlong)param_2 + 0xd) = uVar5;
    return;
  default:
LAB_00209a64:
    *(undefined8 *)((longlong)param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((longlong)param_2 + 0xd) = 2;
    return;
  }
  local_c0 = 1;
  if (local_ae < 2) {
    uVar10 = param_1 >> 0x3f;
    puVar11 = &DAT_00130369;
    puVar4 = &DAT_0013036a;
    if ((longlong)param_1 < 0) {
      puVar4 = &DAT_00130369;
    }
    else {
      puVar11 = (undefined *)0x1;
    }
    if ((char)param_3 != '\0') {
      uVar10 = 1;
      puVar11 = puVar4;
    }
    puStack_f0 = (undefined1 *)0x20964b;
    (*(code *)PTR_format_shortest_opt_0021ad98)(0x11,local_d9);
    if (CONCAT62(uStack_a6,local_a8) == 0) {
      puStack_f0 = (undefined1 *)0x2096c8;
      (*(code *)PTR_format_shortest_0021ada0)(0x11,local_d9);
    }
    else {
      local_38 = (undefined2 *)local_98;
      puStack_40 = puStack_a0;
    }
    uVar7 = (ulonglong)local_38 & 0xffffffff;
    puStack_f0 = (undefined1 *)0x2096e9;
    local_38 = (undefined2 *)(*(code *)PTR_digits_to_dec_str_0021ad88)(param_4,uVar7,&local_a8,4);
  }
  else if (local_ae == 2) {
    local_a8 = 2;
    puStack_a0 = &DAT_0013036b;
    local_98 = 3;
    puVar11 = (undefined *)0x1;
    local_38 = &local_a8;
    uVar10 = 0;
    uVar7 = 1;
  }
  else {
    uVar10 = param_1 >> 0x3f;
    puVar11 = &DAT_00130369;
    puVar4 = &DAT_0013036a;
    if ((longlong)param_1 < 0) {
      puVar4 = &DAT_00130369;
    }
    uVar7 = 1;
    if ((longlong)param_1 >= 0) {
      puVar11 = (undefined *)0x1;
    }
    if ((char)param_3 != '\0') {
      uVar10 = 1;
      puVar11 = puVar4;
    }
    if (local_ae == 4) {
      if (param_4 == 0) {
        puStack_a0 = &DAT_00130371;
        local_98 = 1;
      }
      else {
        puStack_a0 = &DAT_00130372;
        local_98 = 2;
        local_90 = 0;
        local_88 = 1;
        uVar7 = 2;
      }
    }
    else {
      puStack_a0 = &DAT_0013036e;
      local_98 = 3;
    }
    local_a8 = 2;
    local_38 = &local_a8;
  }
  puStack_f0 = (undefined1 *)0x20974e;
  local_48 = puVar11;
  puStack_40 = (undefined *)uVar10;
  local_30 = uVar7;
  <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts(param_2,&local_48);
  return;
}


