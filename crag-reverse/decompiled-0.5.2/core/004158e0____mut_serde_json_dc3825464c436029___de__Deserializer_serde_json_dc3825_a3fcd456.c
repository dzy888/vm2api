// 004158e0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>> */

void __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
          (char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *unaff_R12;
  longlong *plVar16;
  longlong *unaff_R13;
  undefined1 *puVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 local_d8 [2];
  undefined1 auStack_d6 [4];
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong *local_a8;
  longlong *local_a0;
  longlong *plStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68;
  byte bStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar13 = *(ulonglong *)(param_2 + 0x20);
  if (uVar13 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_00415949:
    _local_d8 = 5;
LAB_00415951:
    uStack_80 = (longlong *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(param_2,local_d8);
    goto LAB_00415f21;
  }
  plVar11 = (longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar7 = *(ulonglong *)(param_2 + 0x28) + 5;
LAB_00415920:
  bVar12 = *(byte *)(lVar5 + -5 + lVar7);
  if (((ulonglong)bVar12 < 0x21) && ((0x100002600U >> ((ulonglong)bVar12 & 0x3f) & 1) != 0))
  goto code_r0x00415931;
  switch(bVar12) {
  case 0x5b:
    pcVar1 = (char *)(param_2 + 0x48);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      uVar8 = lVar7 - 4;
      *(ulonglong *)(param_2 + 0x28) = uVar8;
      local_a8 = (longlong *)0x0;
      local_a0 = (longlong *)&DAT_00000008;
      plStack_98 = (longlong *)0x0;
      if (uVar13 <= uVar8) goto LAB_00415af0;
      unaff_R13 = (longlong *)(local_d8 + 1);
      bVar18 = true;
      goto LAB_004159c0;
    }
    break;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
switchD_0041597b_caseD_5c:
    if ((byte)(bVar12 - 0x30) < 10) {
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
      ::parse_integer(&local_88,param_2,1);
      if (local_88 != 0xffffffffffffffff) {
        if ((int)local_88 == 2) goto LAB_00415f2d;
        if ((int)local_88 != 1) {
LAB_00415f36:
          bStack_67 = 0xff;
          unaff_R12 = uStack_80;
          bVar12 = 0xff;
          if (((ulonglong)uStack_80 & 0x7fffffffffffffff) < 0x7ff0000000000000) goto LAB_00415f72;
          local_68 = '\0';
          goto LAB_00415f80;
        }
LAB_00415bd1:
        bStack_67 = (byte)local_88;
        local_68 = '\x02';
        unaff_R12 = uStack_80;
        plVar11 = (longlong *)0x0;
        goto LAB_00415f86;
      }
      goto LAB_00415f21;
    }
    _local_d8 = 10;
    plVar11 = (longlong *)
              <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(param_2,local_d8);
    goto LAB_004161a7;
  case 0x66:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar13 <= lVar7 - 4U) goto LAB_00415f0e;
    cVar3 = *(char *)(lVar5 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar3 == 'a') {
      if (uVar13 <= lVar7 - 3U) goto LAB_00415f0e;
      cVar3 = *(char *)(lVar5 + -3 + lVar7);
      *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
      if (cVar3 == 'l') {
        if (uVar13 <= lVar7 - 2U) goto LAB_00415f0e;
        cVar3 = *(char *)(lVar5 + -2 + lVar7);
        *(ulonglong *)(param_2 + 0x28) = lVar7 - 1U;
        if (cVar3 == 's') {
          if (uVar13 <= lVar7 - 1U) goto LAB_00415f0e;
          cVar3 = *(char *)(lVar5 + -1 + lVar7);
          *(longlong *)(param_2 + 0x28) = lVar7;
          if (cVar3 == 'e') {
            local_68 = '\x01';
            bStack_67 = 0;
            goto LAB_00416174;
          }
        }
      }
    }
    goto LAB_00416006;
  case 0x6e:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (lVar7 - 4U < uVar13) {
      cVar3 = *(char *)(lVar5 + -4 + lVar7);
      *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
      if (cVar3 == 'u') {
        if (uVar13 <= lVar7 - 3U) goto LAB_00415f0e;
        cVar3 = *(char *)(lVar5 + -3 + lVar7);
        *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
        if (cVar3 == 'l') {
          if (uVar13 <= lVar7 - 2U) goto LAB_00415f0e;
          cVar3 = *(char *)(lVar5 + -2 + lVar7);
          *(longlong *)(param_2 + 0x28) = lVar7 + -1;
          if (cVar3 == 'l') {
            local_68 = '\0';
            bStack_67 = 0x6c;
            goto LAB_00415f86;
          }
        }
      }
      goto LAB_00416006;
    }
    goto LAB_00415f0e;
  case 0x74:
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 4U;
    if (uVar13 <= lVar7 - 4U) {
LAB_00415f0e:
      _local_d8 = 5;
LAB_00415f16:
      uStack_80 = (longlong *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                  ::error(param_2,local_d8);
      goto LAB_00415f21;
    }
    cVar3 = *(char *)(lVar5 + -4 + lVar7);
    *(ulonglong *)(param_2 + 0x28) = lVar7 - 3U;
    if (cVar3 == 'r') {
      if (uVar13 <= lVar7 - 3U) goto LAB_00415f0e;
      cVar3 = *(char *)(lVar5 + -3 + lVar7);
      *(ulonglong *)(param_2 + 0x28) = lVar7 - 2U;
      if (cVar3 != 'u') goto LAB_00416006;
      if (uVar13 <= lVar7 - 2U) goto LAB_00415f0e;
      cVar3 = *(char *)(lVar5 + -2 + lVar7);
      *(longlong *)(param_2 + 0x28) = lVar7 + -1;
      if (cVar3 == 'e') {
        bStack_67 = 1;
        local_68 = '\x01';
        goto LAB_00416174;
      }
    }
LAB_00416006:
    _local_d8 = 9;
    goto LAB_00415f16;
  case 0x7b:
    pcVar1 = (char *)(param_2 + 0x48);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_map::
      <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>>
                (&local_68,param_2,1);
      *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
      uVar8 = *(ulonglong *)(param_2 + 0x20);
      uVar9 = *(ulonglong *)(param_2 + 0x28);
      uVar13 = uVar8;
      if (uVar8 <= uVar9) goto LAB_00415dac;
      uVar13 = -uVar8;
      bVar12 = (byte)uVar13;
      goto LAB_00415d7f;
    }
    break;
  default:
    if (bVar12 == 0x22) {
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      *(undefined8 *)(param_2 + 0x10) = 0;
      (*(code *)PTR_parse_str_007998f0)(uVar13,param_2);
      bStack_67 = (byte)uVar13;
      if (_local_d8 == 2) {
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *param_1 = -1;
        return;
      }
      unaff_R13 = local_c8;
      if ((longlong)local_c8 < 0) {
LAB_00415f66:
        (*(code *)PTR_handle_error_00798ff0)();
        bVar12 = bStack_67;
LAB_00415f72:
        bStack_67 = bVar12;
        _local_d8 = _local_d8 & 0xffffffffffffff00;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_d8);
        local_68 = '\x02';
LAB_00415f80:
        plVar11 = (longlong *)0x2;
      }
      else if (local_c8 == (longlong *)0x0) {
        unaff_R12 = (longlong *)0x1;
        plVar11 = (longlong *)0x0;
        local_68 = '\x03';
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plVar11 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plVar11 == (longlong *)0x0) goto LAB_00415f66;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,local_c8);
        local_68 = '\x03';
        unaff_R12 = plVar11;
        plVar11 = local_c8;
      }
    }
    else {
      if (bVar12 != 0x2d) goto switchD_0041597b_caseD_5c;
      *(longlong *)(param_2 + 0x28) = lVar7 + -4;
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
      ::parse_integer(&local_88,param_2,0);
      if (local_88 == 0xffffffffffffffff) goto LAB_00415f21;
      if (local_88 == 0) goto LAB_00415f36;
      if ((int)local_88 == 1) goto LAB_00415bd1;
LAB_00415f2d:
      bStack_67 = (byte)local_88;
      local_68 = '\x02';
      unaff_R12 = uStack_80;
      plVar11 = (longlong *)((ulonglong)uStack_80 >> 0x3f);
    }
LAB_00415f86:
    goto LAB_00416174;
  }
  _local_d8 = 0x18;
  goto LAB_00415951;
code_r0x00415931:
  *(longlong *)(param_2 + 0x28) = lVar7 + -4;
  lVar2 = lVar7 - uVar13;
  lVar7 = lVar7 + 1;
  if (lVar2 == 4) goto LAB_00415949;
  goto LAB_00415920;
  while( true ) {
    if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) {
      if (uVar14 != 0x2c) goto LAB_00416066;
      local_88 = 0x15;
      plVar11 = (longlong *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(param_2,&local_88);
      goto LAB_00415dc2;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar9;
    if (uVar9 == uVar8) break;
LAB_00415d7f:
    uVar9 = uVar9 + 1;
    bVar4 = *(byte *)(*plVar11 + -1 + uVar9);
    uVar14 = (ulonglong)bVar4;
    if (0x2c < uVar14) {
LAB_00416066:
      if (bVar4 != 0x7d) {
        local_88 = 0x16;
        plVar11 = (longlong *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                  ::peek_error(param_2,&local_88);
        goto LAB_00415dc2;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      local_c8 = (longlong *)CONCAT44(uStack_54,local_58);
      uStack_c0 = (longlong *)CONCAT44(uStack_4c,uStack_50);
      _local_d8 = CONCAT44(CONCAT22(uStack_62,uStack_64),
                           CONCAT22(uStack_66,CONCAT11(bStack_67,local_68)));
      uStack_d0 = uStack_60;
      uStack_cc = uStack_5c;
      if (local_68 == -1) goto LAB_00416169;
      local_90 = CONCAT22(uStack_64,uStack_66);
      local_8c = uStack_62;
      plVar16 = (longlong *)CONCAT44(uStack_54,local_58);
      unaff_R13 = (longlong *)CONCAT44(uStack_4c,uStack_50);
      plVar11 = (longlong *)CONCAT44(uStack_5c,uStack_60);
      goto LAB_00416170;
    }
  }
LAB_00415dac:
  bVar12 = (byte)uVar13;
  local_88 = 3;
  plVar11 = (longlong *)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
            ::peek_error(param_2,&local_88);
LAB_00415dc2:
  _local_d8 = CONCAT44(CONCAT22(uStack_62,uStack_64),
                       CONCAT22(uStack_66,CONCAT11(bStack_67,local_68)));
  local_c8 = (longlong *)CONCAT44(uStack_54,local_58);
  uStack_c0 = (longlong *)CONCAT44(uStack_4c,uStack_50);
  bStack_67 = bVar12;
  uStack_d0 = uStack_60;
  uStack_cc = uStack_5c;
  goto joined_r0x00415de4;
LAB_004159c0:
  do {
    uVar9 = uVar8 + 2;
    while( true ) {
      bVar12 = *(byte *)(*(longlong *)(param_2 + 0x18) + uVar8);
      if ((0x20 < (ulonglong)bVar12) || ((0x100002600U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0))
      break;
      uVar8 = uVar8 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar8;
      uVar9 = uVar9 + 1;
      if (uVar13 == uVar8) goto LAB_00415af0;
    }
    if (bVar12 == 0x5d) {
      local_48 = local_a0;
      uStack_40 = plStack_98;
      local_68 = '\x04';
      unaff_R12 = local_a8;
      goto LAB_00415e23;
    }
    if (!bVar18) {
      if (bVar12 != 0x2c) {
        _local_d8 = 7;
        unaff_R12 = (longlong *)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,local_d8);
        uVar19 = extraout_XMM0_Da_02;
        goto LAB_00415b06;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar8 + 1;
      if (uVar13 <= uVar8 + 1) {
LAB_00415fee:
        _local_d8 = 5;
        unaff_R12 = (longlong *)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,local_d8);
        uVar19 = extraout_XMM0_Da_01;
        goto LAB_00415b06;
      }
      while( true ) {
        bVar12 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9);
        if ((0x20 < (ulonglong)bVar12) || ((0x100002600U >> ((ulonglong)bVar12 & 0x3f) & 1) == 0))
        break;
        *(ulonglong *)(param_2 + 0x28) = uVar9;
        bVar18 = uVar9 == uVar13;
        uVar9 = uVar9 + 1;
        if (bVar18) goto LAB_00415fee;
      }
      if (bVar12 == 0x5d) {
        _local_d8 = 0x15;
        unaff_R12 = (longlong *)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,local_d8);
        uVar19 = extraout_XMM0_Da_03;
        goto LAB_00415b06;
      }
    }
    uVar19 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                       (local_d8,param_2);
    plVar11 = plStack_98;
    if (local_d8[0] == -1) {
      unaff_R12 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
      goto LAB_00415b06;
    }
    uStack_80._0_4_ = uStack_d0;
    uStack_80._4_4_ = uStack_cc;
    local_78 = (undefined4)local_c8;
    uStack_74 = local_c8._4_4_;
    uStack_70 = (undefined4)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    local_88 = _local_d8;
    if (plStack_98 == local_a8) {
      (*(code *)PTR_grow_one_00799310)();
    }
    plVar16 = local_a0 + (longlong)plVar11 * 4 + 2;
    *(undefined4 *)plVar16 = local_78;
    *(undefined4 *)((longlong)plVar16 + 4) = uStack_74;
    *(undefined4 *)(plVar16 + 1) = uStack_70;
    *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_6c;
    plVar16 = local_a0 + (longlong)plVar11 * 4;
    *(undefined4 *)plVar16 = (undefined4)local_88;
    *(undefined4 *)((longlong)plVar16 + 4) = local_88._4_4_;
    *(undefined4 *)(plVar16 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_80._4_4_;
    plStack_98 = (longlong *)((longlong)plVar11 + 1);
    uVar13 = *(ulonglong *)(param_2 + 0x20);
    uVar8 = *(ulonglong *)(param_2 + 0x28);
    bVar18 = false;
  } while (uVar8 < uVar13);
LAB_00415af0:
  _local_d8 = 2;
  unaff_R12 = (longlong *)
              <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(param_2,local_d8);
  uVar19 = extraout_XMM0_Da;
LAB_00415b06:
  plVar11 = local_a0;
  for (puVar17 = (undefined1 *)((longlong)plStack_98 + 1); puVar17 != (undefined1 *)0x1;
      puVar17 = puVar17 + -1) {
    plVar11 = plVar11 + 4;
    uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>();
    unaff_R13 = plVar11;
  }
  if (local_a8 != (longlong *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,8);
  }
  uVar13 = *(ulonglong *)(param_2 + 0x20);
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  local_68 = -1;
LAB_00415e23:
  uVar9 = local_88;
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  local_88 = CONCAT71(local_88._1_7_,local_68);
  uVar14 = local_88;
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  uStack_80 = unaff_R12;
  if (uVar8 < uVar13) {
    do {
      uVar10 = uVar8 + 1;
      bVar12 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar10);
      uVar15 = (ulonglong)bVar12;
      if (0x2c < uVar15) {
LAB_00416119:
        if (bVar12 != 0x5d) {
          local_a8 = (longlong *)&DAT_00000016;
          plVar11 = (longlong *)
                    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,&local_a8);
          bVar12 = (byte)uVar13;
          goto LAB_00415e91;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar10;
        local_88._4_4_ = SUB84(uVar9,4);
        uStack_80._0_4_ = SUB84(unaff_R12,0);
        uStack_80._4_4_ = (undefined4)((ulonglong)unaff_R12 >> 0x20);
        local_c8 = local_48;
        uStack_c0 = uStack_40;
        uVar8 = CONCAT44(local_88._4_4_,(int)uVar14);
        uStack_d0 = (undefined4)uStack_80;
        uStack_cc = uStack_80._4_4_;
        _local_d8 = uVar8;
        local_88 = uVar14;
        if (local_68 == -1) goto LAB_00416169;
        local_d8[1] = (byte)(uVar9 >> 8);
        auStack_d6 = SUB84(uVar8 >> 0x10,0);
        local_90 = auStack_d6;
        uStack_d2 = (undefined2)(uVar9 >> 0x30);
        local_8c = uStack_d2;
        plVar16 = local_48;
        unaff_R13 = uStack_40;
        plVar11 = unaff_R12;
        bStack_67 = local_d8[1];
        goto LAB_00416170;
      }
      if ((0x100002600U >> (uVar15 & 0x3f) & 1) == 0) {
        if (uVar15 != 0x2c) goto LAB_00416119;
        *(ulonglong *)(param_2 + 0x28) = uVar10;
        uVar9 = uVar13;
        if (uVar13 <= uVar10) goto LAB_0041620d;
        uVar8 = uVar8 + 2;
        goto LAB_004160e7;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar10;
      uVar8 = uVar10;
    } while (uVar10 != uVar13);
  }
  local_a8 = (longlong *)0x2;
  plVar11 = (longlong *)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
            ::peek_error(param_2,&local_a8);
  bVar12 = (byte)uVar13;
  goto LAB_00415e91;
LAB_00416169:
  bStack_67 = (byte)uVar13;
  plVar11 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
  goto LAB_0041616e;
  while( true ) {
    *(ulonglong *)(param_2 + 0x28) = uVar8;
    bVar18 = uVar8 == uVar13;
    uVar8 = uVar8 + 1;
    if (bVar18) break;
LAB_004160e7:
    bVar12 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar8);
    uVar9 = (ulonglong)bVar12;
    if ((0x20 < uVar9) || ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0)) {
      if (bVar12 != 0x5d) goto LAB_0041620d;
      local_a8 = (longlong *)&DAT_00000015;
      plVar11 = (longlong *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(param_2,&local_a8);
      goto LAB_00415e91;
    }
  }
  uVar9 = 2;
LAB_0041620d:
  bVar12 = (byte)uVar9;
  local_a8 = (longlong *)&DAT_00000016;
  plVar11 = (longlong *)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
            ::peek_error(param_2,&local_a8);
LAB_00415e91:
  local_c8 = (longlong *)CONCAT44(uStack_74,local_78);
  uStack_c0 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  local_68 = (char)local_88;
  bStack_67 = bVar12;
  uStack_d0 = (undefined4)uStack_80;
  uStack_cc = uStack_80._4_4_;
  _local_d8 = local_88;
joined_r0x00415de4:
  local_b8 = plVar11;
  if (local_68 == -1) {
    plVar6 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(plVar11);
    local_68 = -1;
    plVar16 = unaff_R12;
    plVar11 = plVar6;
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_d8);
LAB_0041616e:
    local_68 = -1;
    plVar16 = unaff_R12;
  }
LAB_00416170:
  unaff_R12 = plVar16;
  if (local_68 == -1) {
LAB_004161a7:
    uStack_80 = (longlong *)
                ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::fix_position::_closure_0_>
                          (plVar11,param_2);
LAB_00415f21:
    *(longlong **)(param_1 + 8) = uStack_80;
    *param_1 = -1;
  }
  else {
LAB_00416174:
    *param_1 = local_68;
    param_1[1] = bStack_67;
    *(undefined4 *)(param_1 + 2) = local_90;
    *(undefined2 *)(param_1 + 6) = local_8c;
    *(longlong **)(param_1 + 8) = plVar11;
    *(longlong **)(param_1 + 0x10) = unaff_R12;
    *(longlong **)(param_1 + 0x18) = unaff_R13;
  }
  return;
}


