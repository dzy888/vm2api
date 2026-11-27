// 000b4430 <f64>

/* core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_exact::<f64> */

void __rustcall
core[c0acaeba6ab4c2e0]::fmt::float::float_to_decimal_common_exact::<f64>
          (ulonglong param_1,undefined8 param_2,char param_3,int param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *unaff_RBP;
  undefined2 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  int iVar13;
  byte bVar14;
  undefined *puVar15;
  bool bVar16;
  undefined1 local_4e8 [1024];
  ulonglong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  ushort local_d0;
  byte local_ce;
  undefined2 local_c8;
  undefined6 uStack_c6;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  ulonglong local_a8;
  undefined *local_68;
  undefined *puStack_60;
  undefined2 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  int local_3c;
  undefined8 local_38;
  
  puVar8 = (undefined1 *)((longlong)register0x00000020 + -8);
  local_d8 = 0x10000000000000;
  uVar11 = param_1 & 0xfffffffffffff;
  local_d0 = (ushort)(param_1 >> 0x34) & 0x7ff;
  local_e8 = uVar11 + 0x10000000000000;
  if (local_d0 == 0) {
    local_e8 = param_1 * 2 & 0x1ffffffffffffe;
  }
  uVar6 = (uint)local_e8 & 1;
  bVar14 = 4;
  if ((param_1 & 0x7ff0000000000000) == 0) {
    bVar14 = uVar11 == 0 ^ 3;
  }
  if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    bVar14 = uVar11 == 0;
  }
  lVar10 = (longlong)&switchD_000b44d7::switchdataD_00017088 +
           (longlong)(int)(&switchD_000b44d7::switchdataD_00017088)[bVar14];
  uVar12 = (ushort)param_4;
  local_ce = (byte)uVar6;
  switch(bVar14) {
  case 0:
    local_ce = 2;
    break;
  case 1:
    local_ce = 3;
    break;
  case 2:
    local_ce = 4;
    break;
  case 3:
    local_d0 = local_d0 - 0x433;
    local_ce = local_ce ^ 1;
    local_d8 = 1;
    break;
  case 4:
    uVar11 = local_e8 * 2;
    bVar16 = local_e8 == 0x10000000000000;
    local_e8 = 0x40000000000000;
    if (!bVar16) {
      local_e8 = uVar11;
    }
    local_d8 = (ulonglong)bVar16 + 1;
    local_d0 = (local_d0 - bVar16) - 0x434;
    local_ce = local_ce ^ 1;
    break;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000b48f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&switchD_000b48f0::switchdataD_0001709c + (longlong)iRam00000000000732bc))
              ();
    return;
  case 6:
    uVar9 = 0xfbcd;
    lVar10 = 1;
    goto LAB_000b4949;
  case 7:
    uVar9 = 0xfbcc;
    register0x00000020 = (BADSPACEBASE *)local_4e8;
    unaff_RBP = puVar8;
LAB_000b4949:
    bVar14 = (byte)local_d0 ^ 1;
    *(ulonglong *)(unaff_RBP + -0xc0) = (ulonglong)uVar6;
    *(undefined8 *)(unaff_RBP + -0xb8) = 1;
    *(longlong *)(unaff_RBP + -0xb0) = lVar10;
    *(undefined2 *)(unaff_RBP + -0xa8) = uVar9;
    unaff_RBP[-0xa6] = bVar14;
    if (bVar14 < 2) {
      uVar11 = param_1 >> 0x3f;
      puVar15 = &DAT_00017c01;
      puVar4 = &DAT_00017c02;
      if ((longlong)param_1 < 0) {
        puVar4 = &DAT_00017c01;
      }
      else {
        puVar15 = (undefined *)0x1;
      }
      if (param_3 != '\0') {
        uVar11 = 1;
        puVar15 = puVar4;
      }
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0xb4a5b;
      (*(code *)PTR_format_shortest_opt_000c4748)(0x11,unaff_RBP + -0xd1);
      if (*(longlong *)(unaff_RBP + -0xa0) == 0) {
        *(undefined8 *)((longlong)register0x00000020 + -8) = 0xb4ad8;
        (*(code *)PTR_format_shortest_000c4750)(0x11,unaff_RBP + -0xd1);
      }
      else {
        *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RBP + -0x90);
        *(undefined8 *)(unaff_RBP + -0x40) = *(undefined8 *)(unaff_RBP + -0xa0);
        *(undefined8 *)(unaff_RBP + -0x38) = *(undefined8 *)(unaff_RBP + -0x98);
      }
      uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x30);
      *(undefined8 *)((longlong)register0x00000020 + -8) = 0xb4af9;
      puVar5 = (undefined1 *)
               (*(code *)PTR_digits_to_dec_str_000c4738)
                         (local_e8 & 0xffff,uVar7,unaff_RBP + -0xa0,4);
    }
    else if (bVar14 == 2) {
      *(undefined2 *)(unaff_RBP + -0xa0) = 2;
      *(undefined **)(unaff_RBP + -0x98) = &DAT_00017c03;
      *(undefined8 *)(unaff_RBP + -0x90) = 3;
      puVar15 = (undefined *)0x1;
      puVar5 = unaff_RBP + -0xa0;
      uVar11 = 0;
      uVar7 = 1;
    }
    else {
      uVar11 = param_1 >> 0x3f;
      puVar15 = &DAT_00017c01;
      puVar4 = &DAT_00017c02;
      if ((longlong)param_1 < 0) {
        puVar4 = &DAT_00017c01;
      }
      uVar7 = 1;
      if ((longlong)param_1 >= 0) {
        puVar15 = (undefined *)0x1;
      }
      if (param_3 != '\0') {
        uVar11 = 1;
        puVar15 = puVar4;
      }
      if (bVar14 == 4) {
        *(undefined2 *)(unaff_RBP + -0xa0) = 2;
        if ((short)local_e8 == 0) {
          *(undefined **)(unaff_RBP + -0x98) = &DAT_00017c09;
          *(undefined8 *)(unaff_RBP + -0x90) = 1;
        }
        else {
          *(undefined **)(unaff_RBP + -0x98) = &DAT_00017c0a;
          *(undefined8 *)(unaff_RBP + -0x90) = 2;
          *(undefined2 *)(unaff_RBP + -0x88) = 0;
          *(undefined8 *)(unaff_RBP + -0x80) = 1;
          uVar7 = 2;
        }
      }
      else {
        *(undefined2 *)(unaff_RBP + -0xa0) = 2;
        *(undefined **)(unaff_RBP + -0x98) = &DAT_00017c06;
        *(undefined8 *)(unaff_RBP + -0x90) = 3;
      }
      puVar5 = unaff_RBP + -0xa0;
    }
    *(undefined **)(unaff_RBP + -0x40) = puVar15;
    *(ulonglong *)(unaff_RBP + -0x38) = uVar11;
    *(undefined1 **)(unaff_RBP + -0x30) = puVar5;
    *(ulonglong *)(unaff_RBP + -0x28) = uVar7;
    *(undefined8 *)((longlong)register0x00000020 + -8) = 0xb4b5e;
    <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts(param_2,unaff_RBP + -0x40);
    return;
  }
  local_e0 = 1;
  if (1 < local_ce) {
    if (local_ce == 2) {
      local_c8 = 2;
      puStack_c0 = &DAT_00017c03;
      local_b8 = 3;
      puVar4 = (undefined *)0x1;
      puVar3 = &local_c8;
      uVar11 = 0;
      uVar7 = 1;
    }
    else {
      uVar11 = param_1 >> 0x3f;
      puVar4 = &DAT_00017c01;
      puVar15 = &DAT_00017c02;
      if ((longlong)param_1 < 0) {
        puVar15 = &DAT_00017c01;
      }
      uVar7 = 1;
      if ((longlong)param_1 >= 0) {
        puVar4 = (undefined *)0x1;
      }
      if (param_3 != '\0') {
        uVar11 = 1;
        puVar4 = puVar15;
      }
      if (local_ce == 4) {
        local_c8 = 2;
        if (uVar12 == 0) {
          puStack_c0 = &DAT_00017c09;
          local_b8 = 1;
          puVar3 = &local_c8;
        }
        else {
          puStack_c0 = &DAT_00017c0a;
          local_b8 = 2;
          local_b0 = 0;
          uVar7 = 2;
          puVar3 = &local_c8;
          local_a8 = (ulonglong)uVar12;
        }
      }
      else {
        local_c8 = 2;
        puStack_c0 = &DAT_00017c06;
        local_b8 = 3;
        puVar3 = &local_c8;
      }
    }
    goto LAB_000b47e3;
  }
  uVar11 = param_1 >> 0x3f;
  puVar4 = &DAT_00017c01;
  puVar15 = &DAT_00017c02;
  if ((longlong)param_1 < 0) {
    puVar15 = &DAT_00017c01;
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  if (param_3 != '\0') {
    uVar11 = 1;
    puVar4 = puVar15;
  }
  lVar10 = 5;
  if ((short)local_d0 < 0) {
    lVar10 = -0xc;
  }
  if (0x3ebf < (ulonglong)((short)local_d0 * lVar10)) {
    (*(code *)PTR_panic_000c3b00)(lVar10,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f28);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar10 = ((ulonglong)((short)local_d0 * lVar10) >> 4) + 0x15;
  iVar13 = 0x8000;
  if (-1 < (short)uVar12) {
    iVar13 = -param_4;
  }
  puVar3 = &local_c8;
  local_48 = (ulonglong)uVar12;
  local_3c = param_4;
  local_38 = param_2;
  (*(code *)PTR_format_exact_opt_000c4730)(lVar10,local_4e8,iVar13);
  if (CONCAT62(uStack_c6,local_c8) == 0) {
    (*(code *)PTR_format_exact_000c4740)(lVar10,local_4e8,iVar13);
    uVar12 = (ushort)local_58;
    if ((short)iVar13 < (short)(ushort)local_58) goto LAB_000b46c4;
LAB_000b4752:
    local_c8 = 2;
    if ((short)local_3c == 0) {
      puStack_c0 = &DAT_00017c09;
      local_b8 = 1;
      uVar7 = 1;
    }
    else {
      puStack_c0 = &DAT_00017c0a;
      local_b8 = 2;
      local_b0 = 0;
      local_a8 = local_48;
      uVar7 = 2;
    }
  }
  else {
    local_58 = (undefined2 *)local_b8;
    puVar2 = local_58;
    puStack_60 = puStack_c0;
    local_58._0_2_ = (ushort)local_b8;
    bVar16 = (short)(ushort)local_58 <= (short)iVar13;
    uVar12 = (ushort)local_58;
    local_58 = puVar2;
    if (bVar16) goto LAB_000b4752;
LAB_000b46c4:
    uVar7 = (ulonglong)uVar12;
    puVar3 = (undefined2 *)(*(code *)PTR_digits_to_dec_str_000c4738)(local_48,uVar7,&local_c8,4);
  }
  param_2 = local_38;
LAB_000b47e3:
  local_68 = puVar4;
  puStack_60 = (undefined *)uVar11;
  local_58 = puVar3;
  local_50 = uVar7;
  <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts(param_2,&local_68);
  return;
}


