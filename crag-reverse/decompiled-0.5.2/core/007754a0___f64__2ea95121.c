// 007754a0 <f64>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_shortest::<f64> */

void __rustcall
core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_shortest::<f64>
          (ulonglong param_1,uint *param_2,ulonglong param_3,short param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined1 uStack_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
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
  char *pcStack_a0;
  ulonglong local_98;
  undefined2 local_90;
  undefined8 local_88;
  char *local_48;
  char *pcStack_40;
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
    if (0xffe3e963 < (&switchD_00775540::switchdataD_001c169c)[bVar9]) {
                    /* WARNING: Could not recover jumptable at 0x00776065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&switchD_00776065::switchdataD_001c16b0 +
                (longlong)(int)(&switchD_00776065::switchdataD_001c16b0)[param_3 & 0xffffffff]))();
      return;
    }
    if (uVar8 == 0x5c) {
      *(undefined2 *)param_2 = 0x5c5c;
      goto LAB_00776154;
    }
    if (uVar8 - 0x20 < 0x5f) {
      *param_2 = uVar8;
      *(undefined1 *)(param_2 + 3) = 0x80;
      *(undefined1 *)((longlong)param_2 + 0xd) = 0x81;
      return;
    }
    puStack_108 = &switchD_00775540::switchdataD_001c169c;
    auVar13._0_4_ = -(uint)(_DAT_00183520 < (int)(uVar8 + _DAT_00184120 ^ _DAT_001844c0));
    auVar13._4_4_ = -(uint)(_UNK_00183524 < (int)(uVar8 + _UNK_00184124 ^ _UNK_001844c4));
    auVar13._8_4_ = -(uint)(_UNK_00183528 < (int)(uVar8 + _UNK_00184128 ^ _UNK_001844c8));
    auVar13._12_4_ = -(uint)(_UNK_0018352c < (int)(uVar8 + _UNK_0018412c ^ _UNK_001844cc));
    iVar3 = movmskps(uVar8 - 0x20,auVar13);
    if ((iVar3 == 0xf) && (uVar8 != 0x20 && 0xfffd < uVar8 - 0x100000)) {
      puVar1 = (undefined1 *)((longlong)register0x00000020 + -8);
      if (uVar8 < 0x85) {
LAB_007760ea:
        puStack_f0 = puVar1;
        cVar2 = <char>::is_assigned(param_3 & 0xffffffff);
        if (cVar2 != '\0') {
          *param_2 = uVar8;
          uVar5 = 0x81;
          cVar2 = -0x80;
          goto LAB_00776233;
        }
      }
      else {
        cVar2 = unicode::unicode_data::white_space::lookup(param_3 & 0xffffffff);
        if (cVar2 == '\0') {
          if ((0x2ff < uVar8 & (byte)param_4) == 0) {
            puVar1 = puStack_f0;
            if (uVar8 < 0xad) goto LAB_007760ea;
          }
          else {
            cVar2 = (*(code *)PTR_lookup_slow_0079b2a0)();
            if (cVar2 != '\0') goto LAB_00776185;
          }
          cVar2 = (*(code *)PTR_lookup_slow_0079b2a8)();
          if ((cVar2 == '\0') &&
             (cVar2 = (*(code *)PTR_lookup_slow_0079b2b0)(), puVar1 = puStack_f0, cVar2 == '\0'))
          goto LAB_007760ea;
        }
      }
    }
LAB_00776185:
    uVar6 = 0x1f;
    if ((uVar8 | 1) != 0) {
      for (; (uVar8 | 1) >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar6 = (uVar6 ^ 0x1c) >> 2;
    cVar2 = (char)uVar6 + -2;
    uStack_110 = 0;
    uStack_112 = 0;
    cStack_10f = "0123456789abcdef"[param_3 >> 0x14 & 0xfff];
    cStack_10e = "0123456789abcdef"[(uint)(param_3 >> 0x10) & 0xf];
    cStack_10d = "0123456789abcdef"[(uint)(param_3 >> 0xc) & 0xf];
    cStack_10c = "0123456789abcdef"[(uint)(param_3 >> 8) & 0xf];
    cStack_10b = "0123456789abcdef"[(uint)(param_3 >> 4) & 0xf];
    uStack_10a = CONCAT11(0x7d,"0123456789abcdef"[uVar8 & 0xf]);
    *(undefined2 *)(local_d9 + ((ulonglong)uVar6 - 0x3b)) = 0x755c;
    local_d9[(ulonglong)uVar6 - 0x39] = 0x7b;
    *(undefined2 *)(param_2 + 2) = uStack_10a;
    *(ulonglong *)param_2 =
         CONCAT17(cStack_10b,
                  CONCAT16(cStack_10c,
                           CONCAT15(cStack_10d,
                                    CONCAT14(cStack_10e,
                                             CONCAT13(cStack_10f,CONCAT12(uStack_110,uStack_112)))))
                 );
    uVar5 = 10;
LAB_00776233:
    *(char *)(param_2 + 3) = cVar2;
    *(undefined1 *)((longlong)param_2 + 0xd) = uVar5;
    return;
  default:
LAB_00776154:
    *(undefined8 *)((longlong)param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((longlong)param_2 + 0xd) = 2;
    return;
  }
  local_c0 = 1;
  if (local_ae < 2) {
    uVar10 = param_1 >> 0x3f;
    pcVar11 = "-";
    pcVar4 = "+";
    if ((longlong)param_1 < 0) {
      pcVar4 = "-";
    }
    else {
      pcVar11 = (char *)0x1;
    }
    if ((char)param_3 != '\0') {
      uVar10 = 1;
      pcVar11 = pcVar4;
    }
    puStack_f0 = (undefined1 *)0x7756ab;
    (*(code *)PTR_format_shortest_opt_0079b340)(0x11,local_d9);
    if (CONCAT62(uStack_a6,local_a8) == 0) {
      puStack_f0 = (undefined1 *)0x775728;
      (*(code *)PTR_format_shortest_0079b348)(0x11,local_d9);
    }
    else {
      local_38 = (undefined2 *)local_98;
      pcStack_40 = pcStack_a0;
    }
    uVar7 = (ulonglong)local_38 & 0xffffffff;
    puStack_f0 = (undefined1 *)0x775749;
    local_38 = (undefined2 *)(*(code *)PTR_digits_to_dec_str_0079b330)(param_4,uVar7,&local_a8,4);
  }
  else if (local_ae == 2) {
    local_a8 = 2;
    pcStack_a0 = "NaN";
    local_98 = 3;
    pcVar11 = (char *)0x1;
    local_38 = &local_a8;
    uVar10 = 0;
    uVar7 = 1;
  }
  else {
    uVar10 = param_1 >> 0x3f;
    pcVar11 = "-";
    pcVar4 = "+";
    if ((longlong)param_1 < 0) {
      pcVar4 = "-";
    }
    uVar7 = 1;
    if ((longlong)param_1 >= 0) {
      pcVar11 = (char *)0x1;
    }
    if ((char)param_3 != '\0') {
      uVar10 = 1;
      pcVar11 = pcVar4;
    }
    if (local_ae == 4) {
      if (param_4 == 0) {
        pcStack_a0 = "0";
        local_98 = 1;
      }
      else {
        pcStack_a0 = "0.";
        local_98 = 2;
        local_90 = 0;
        local_88 = 1;
        uVar7 = 2;
      }
    }
    else {
      pcStack_a0 = "inf";
      local_98 = 3;
    }
    local_a8 = 2;
    local_38 = &local_a8;
  }
  puStack_f0 = (undefined1 *)0x7757ae;
  local_48 = pcVar11;
  pcStack_40 = (char *)uVar10;
  local_30 = uVar7;
  <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts(param_2,&local_48);
  return;
}


