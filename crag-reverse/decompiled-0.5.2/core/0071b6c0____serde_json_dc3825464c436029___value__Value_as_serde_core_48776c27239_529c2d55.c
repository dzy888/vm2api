// 0071b6c0 <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>

/* <&mut serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_any::<<serde_json[dc3825464c436029]::value::Value
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor> */

void __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_any::
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
          (char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_R12;
  ulonglong unaff_R15;
  longlong lVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined8 local_d8;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  int local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68;
  char cStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar10 = *(ulonglong *)(param_2 + 0x20);
  if (uVar10 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_0071b72a:
    local_d8 = 5;
LAB_0071b732:
    uStack_80 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(param_2,&local_d8);
    goto LAB_0071bcc3;
  }
  lVar14 = *(longlong *)(param_2 + 0x18);
  lVar8 = *(ulonglong *)(param_2 + 0x28) + 5;
  uVar11 = 0x100002600;
LAB_0071b700:
  bVar5 = *(byte *)(lVar14 + -5 + lVar8);
  if (((ulonglong)bVar5 < 0x21) && ((0x100002600U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0))
  goto code_r0x0071b712;
  switch(bVar5) {
  case 0x5b:
    pcVar1 = (char *)(param_2 + 0x48);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      uVar9 = lVar8 - 4;
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      local_a8 = 0;
      local_a0 = 8;
      uStack_98 = 0;
      if (uVar10 <= uVar9) goto LAB_0071b8e7;
      bVar15 = true;
      goto LAB_0071b7aa;
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
switchD_0071b75d_caseD_5c:
    if ((byte)(bVar5 - 0x30) < 10) {
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
      ::parse_integer(&local_88,param_2,1);
      uVar10 = CONCAT44(iStack_84,local_88);
      if (uVar10 != 0xffffffffffffffff) {
        if (local_88 == 2) goto LAB_0071bccf;
        unaff_R15 = uStack_80;
        if (local_88 == 1) {
LAB_0071b9c5:
          local_d8 = uVar10;
          local_68 = '\x02';
          unaff_R12 = 0;
          unaff_R15 = uStack_80;
        }
        else {
LAB_0071bcdb:
          if ((unaff_R15 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
            local_d8 = local_d8 & 0xffffffffffffff00;
            local_d8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_d8);
            local_68 = '\x02';
          }
          else {
            local_68 = '\0';
            local_d8 = unaff_R15 & 0x7fffffffffffffff;
          }
          unaff_R12 = 2;
        }
        goto LAB_0071bd89;
      }
      goto LAB_0071bcc3;
    }
    local_d8 = 10;
    unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(param_2,&local_d8);
    goto LAB_0071bf4a;
  case 0x66:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar10 <= lVar8 - 4U) goto LAB_0071bcb0;
    cVar6 = *(char *)(lVar14 + -4 + lVar8);
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar6 == 'a') {
      if (uVar10 <= lVar8 - 3U) goto LAB_0071bcb0;
      cVar6 = *(char *)(lVar14 + -3 + lVar8);
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
      if (cVar6 == 'l') {
        if (uVar10 <= lVar8 - 2U) goto LAB_0071bcb0;
        cVar6 = *(char *)(lVar14 + -2 + lVar8);
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 1U;
        if (cVar6 == 's') {
          if (uVar10 <= lVar8 - 1U) goto LAB_0071bcb0;
          cVar6 = *(char *)(lVar14 + -1 + lVar8);
          *(longlong *)(param_2 + 0x28) = lVar8;
          if (cVar6 == 'e') {
            local_68 = '\x01';
            cStack_67 = '\0';
            goto LAB_0071bf16;
          }
        }
      }
    }
    goto LAB_0071be26;
  case 0x6e:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (lVar8 - 4U < uVar10) {
      cVar6 = *(char *)(lVar14 + -4 + lVar8);
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
      if (cVar6 == 'u') {
        if (uVar10 <= lVar8 - 3U) goto LAB_0071bcb0;
        cVar6 = *(char *)(lVar14 + -3 + lVar8);
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
        if (cVar6 == 'l') {
          if (uVar10 <= lVar8 - 2U) goto LAB_0071bcb0;
          cVar6 = *(char *)(lVar14 + -2 + lVar8);
          local_d8 = lVar8 - 1;
          *(ulonglong *)(param_2 + 0x28) = local_d8;
          if (cVar6 == 'l') {
            local_68 = '\0';
            goto LAB_0071bd89;
          }
        }
      }
      goto LAB_0071be26;
    }
    goto LAB_0071bcb0;
  case 0x74:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar10 <= lVar8 - 4U) {
LAB_0071bcb0:
      local_d8 = 5;
LAB_0071bcb8:
      uStack_80 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                  ::error(param_2,&local_d8);
      goto LAB_0071bcc3;
    }
    cVar6 = *(char *)(lVar14 + -4 + lVar8);
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar6 != 'r') goto LAB_0071be26;
    if (uVar10 <= lVar8 - 3U) goto LAB_0071bcb0;
    cVar6 = *(char *)(lVar14 + -3 + lVar8);
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
    if (cVar6 == 'u') {
      if (uVar10 <= lVar8 - 2U) goto LAB_0071bcb0;
      cVar6 = *(char *)(lVar14 + -2 + lVar8);
      *(longlong *)(param_2 + 0x28) = lVar8 + -1;
      if (cVar6 == 'e') {
        cStack_67 = '\x01';
        local_68 = '\x01';
        goto LAB_0071bf16;
      }
    }
LAB_0071be26:
    local_d8 = 9;
    goto LAB_0071bcb8;
  case 0x7b:
    pcVar1 = (char *)(param_2 + 0x48);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 != '\0') {
      *(longlong *)(param_2 + 0x28) = lVar8 + -4;
      <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_map::
      <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>>
                (&local_68,param_2,1);
      *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
      uVar10 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
               ::end_map(param_2);
      local_d8 = CONCAT44(CONCAT22(uStack_62,uStack_64),
                          CONCAT22(uStack_66,CONCAT11(cStack_67,local_68)));
      iStack_d0 = iStack_60;
      iStack_cc = iStack_5c;
      local_c8 = CONCAT44(uStack_54,local_58);
      uStack_c0 = CONCAT44(uStack_4c,uStack_50);
      uVar11 = uVar10;
      local_b8 = uVar10;
      if (local_68 != -1) {
        if (uVar10 == 0) {
          local_90 = CONCAT22(uStack_64,uStack_66);
          local_8c = uStack_62;
          unaff_R12 = CONCAT44(iStack_5c,iStack_60);
          unaff_R15 = CONCAT44(uStack_54,local_58);
          uVar11 = CONCAT44(uStack_4c,uStack_50);
          goto LAB_0071bf10;
        }
        cStack_67 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_d8);
        goto LAB_0071bd9b;
      }
LAB_0071bd1f:
      cStack_67 = (char)uVar10;
      unaff_R12 = CONCAT44(iStack_cc,iStack_d0);
      local_68 = -1;
      if (uVar11 != 0) {
        cStack_67 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::error::Error>(uVar11);
      }
      goto LAB_0071bf10;
    }
    break;
  default:
    if (bVar5 == 0x22) {
      *(longlong *)(param_2 + 0x28) = lVar8 + -4;
      *(undefined8 *)(param_2 + 0x10) = 0;
      (*(code *)PTR_parse_str_007998f0)(uVar10,param_2);
      uVar11 = local_c8;
      param_2 = CONCAT44(iStack_cc,iStack_d0);
      if (local_d8 == 2) {
        *(longlong *)(param_1 + 8) = param_2;
        *param_1 = -1;
        return;
      }
      if ((longlong)local_c8 < 0) {
LAB_0071bd13:
        uVar10 = (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0071bd1f;
      }
      if (local_c8 == 0) {
        unaff_R15 = 1;
        unaff_R12 = 0;
        local_68 = '\x03';
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar10 = (*(code *)PTR___rust_alloc_00799000)();
        if (uVar10 == 0) goto LAB_0071bd13;
        local_d8 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,uVar11);
        local_68 = '\x03';
        unaff_R12 = uVar11;
        unaff_R15 = uVar10;
      }
    }
    else {
      if (bVar5 != 0x2d) goto switchD_0071b75d_caseD_5c;
      *(longlong *)(param_2 + 0x28) = lVar8 + -4;
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
      ::parse_integer(&local_88,param_2,0);
      uVar10 = CONCAT44(iStack_84,local_88);
      if (uVar10 == 0xffffffffffffffff) goto LAB_0071bcc3;
      unaff_R15 = uStack_80;
      if (uVar10 == 0) goto LAB_0071bcdb;
      if (local_88 == 1) goto LAB_0071b9c5;
LAB_0071bccf:
      local_d8 = uVar10;
      local_68 = '\x02';
      unaff_R12 = uStack_80 >> 0x3f;
      unaff_R15 = uStack_80;
    }
LAB_0071bd89:
    cStack_67 = (char)local_d8;
    goto LAB_0071bf16;
  }
  local_d8 = 0x18;
  goto LAB_0071b732;
code_r0x0071b712:
  *(longlong *)(param_2 + 0x28) = lVar8 + -4;
  lVar2 = lVar8 - uVar10;
  lVar8 = lVar8 + 1;
  if (lVar2 == 4) goto LAB_0071b72a;
  goto LAB_0071b700;
LAB_0071b7aa:
  do {
    uVar13 = uVar9 + 2;
    while( true ) {
      bVar5 = *(byte *)(*(longlong *)(param_2 + 0x18) + uVar9);
      if ((0x20 < (ulonglong)bVar5) || ((0x100002600U >> ((ulonglong)bVar5 & 0x3f) & 1) == 0))
      break;
      uVar9 = uVar9 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar9;
      uVar13 = uVar13 + 1;
      if (uVar10 == uVar9) goto LAB_0071b8e7;
    }
    if (bVar5 == 0x5d) {
      local_48 = local_a0;
      uStack_40 = uStack_98;
      local_68 = '\x04';
      unaff_R12 = local_a8;
      goto LAB_0071bbd2;
    }
    if (!bVar15) {
      if (bVar5 != 0x2c) {
        local_d8 = 7;
        unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,&local_d8);
        uVar16 = extraout_XMM0_Da_02;
        goto LAB_0071b8fd;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar9 + 1;
      if (uVar10 <= uVar9 + 1) {
LAB_0071be0e:
        local_d8 = 5;
        unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,&local_d8);
        uVar16 = extraout_XMM0_Da_01;
        goto LAB_0071b8fd;
      }
      while( true ) {
        bVar5 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar13);
        if ((0x20 < (ulonglong)bVar5) || ((0x100002600U >> ((ulonglong)bVar5 & 0x3f) & 1) == 0))
        break;
        *(ulonglong *)(param_2 + 0x28) = uVar13;
        bVar15 = uVar13 == uVar10;
        uVar13 = uVar13 + 1;
        if (bVar15) goto LAB_0071be0e;
      }
      if (bVar5 == 0x5d) {
        local_d8 = 0x15;
        unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,&local_d8);
        uVar16 = extraout_XMM0_Da_03;
        goto LAB_0071b8fd;
      }
    }
    uVar16 = <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
                       (&local_d8,param_2);
    uVar10 = uStack_98;
    if ((char)local_d8 == -1) {
      unaff_R12 = CONCAT44(iStack_cc,iStack_d0);
      goto LAB_0071b8fd;
    }
    uStack_80._0_4_ = iStack_d0;
    uStack_80._4_4_ = iStack_cc;
    local_78 = (undefined4)local_c8;
    uStack_74 = local_c8._4_4_;
    uStack_70 = (undefined4)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    local_88 = (int)local_d8;
    iStack_84 = local_d8._4_4_;
    if (uStack_98 == local_a8) {
      (*(code *)PTR_grow_one_00799310)();
    }
    lVar14 = uVar10 * 0x20;
    puVar4 = (undefined4 *)(local_a0 + 0x10 + lVar14);
    *puVar4 = local_78;
    puVar4[1] = uStack_74;
    puVar4[2] = uStack_70;
    puVar4[3] = uStack_6c;
    piVar3 = (int *)(local_a0 + lVar14);
    *piVar3 = local_88;
    piVar3[1] = iStack_84;
    piVar3[2] = (int)uStack_80;
    piVar3[3] = uStack_80._4_4_;
    unaff_R15 = uVar10 + 1;
    uVar10 = *(ulonglong *)(param_2 + 0x20);
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    bVar15 = false;
    uStack_98 = unaff_R15;
  } while (uVar9 < uVar10);
LAB_0071b8e7:
  local_d8 = 2;
  unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(param_2,&local_d8);
  uVar16 = extraout_XMM0_Da;
LAB_0071b8fd:
  uVar10 = local_a0;
  for (lVar14 = uStack_98 + 1; lVar14 != 1; lVar14 = lVar14 + -1) {
    uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (uVar10);
    uVar10 = uVar10 + 0x20;
  }
  if (local_a8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
  }
  uVar10 = *(ulonglong *)(param_2 + 0x20);
  uVar9 = *(ulonglong *)(param_2 + 0x28);
  local_68 = -1;
  unaff_R15 = 1;
LAB_0071bbd2:
  iVar7 = local_88;
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  local_88 = CONCAT31(local_88._1_3_,local_68);
  local_78 = (undefined4)local_48;
  uStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
  uStack_80 = unaff_R12;
  if (uVar9 < uVar10) {
    do {
      uVar13 = uVar9 + 1;
      bVar5 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar13);
      uVar12 = (ulonglong)bVar5;
      if (0x2c < uVar12) {
LAB_0071beb5:
        if (bVar5 != 0x5d) {
          local_a8 = 0x16;
          unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                      ::peek_error(param_2,&local_a8);
          goto LAB_0071bc40;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar13;
        uStack_80._0_4_ = (int)unaff_R12;
        uStack_80._4_4_ = (int)(unaff_R12 >> 0x20);
        local_c8 = local_48;
        uStack_c0 = uStack_40;
        local_d8 = CONCAT44(iStack_84,local_88);
        uVar10 = local_d8;
        iStack_d0 = (int)uStack_80;
        iStack_cc = uStack_80._4_4_;
        if (local_68 == -1) goto LAB_0071bf0d;
        local_d8._1_1_ = (char)((uint)iVar7 >> 8);
        local_d8._2_4_ = SUB84(uVar10,2);
        local_90 = local_d8._2_4_;
        local_d8._6_2_ = (undefined2)((uint)iStack_84 >> 0x10);
        local_8c = local_d8._6_2_;
        uVar11 = uStack_40;
        unaff_R15 = local_48;
        cStack_67 = local_d8._1_1_;
        local_d8 = uVar10;
        goto LAB_0071bf10;
      }
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) {
        if (uVar12 != 0x2c) goto LAB_0071beb5;
        *(ulonglong *)(param_2 + 0x28) = uVar13;
        if (uVar10 <= uVar13) goto LAB_0071bf95;
        uVar9 = uVar9 + 2;
        goto LAB_0071be83;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar13;
      uVar9 = uVar13;
    } while (uVar13 != uVar10);
  }
  local_a8 = 2;
  unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(param_2,&local_a8);
  goto LAB_0071bc40;
  while( true ) {
    *(ulonglong *)(param_2 + 0x28) = uVar9;
    bVar15 = uVar9 == uVar10;
    uVar9 = uVar9 + 1;
    if (bVar15) break;
LAB_0071be83:
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9);
    if ((0x20 < (ulonglong)bVar5) || ((0x100002600U >> ((ulonglong)bVar5 & 0x3f) & 1) == 0)) {
      if (bVar5 == 0x5d) {
        local_a8 = 0x15;
        unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                    ::peek_error(param_2,&local_a8);
        goto LAB_0071bc40;
      }
      break;
    }
  }
LAB_0071bf95:
  local_a8 = 0x16;
  unaff_R12 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(param_2,&local_a8);
LAB_0071bc40:
  uVar10 = uStack_80;
  local_c8 = CONCAT44(uStack_74,local_78);
  uStack_c0 = CONCAT44(uStack_6c,uStack_70);
  local_d8 = CONCAT44(iStack_84,local_88);
  uVar9 = local_d8;
  iStack_d0 = (int)uStack_80;
  iStack_cc = uStack_80._4_4_;
  local_d8._0_1_ = (char)local_88;
  local_d8 = uVar9;
  local_b8 = unaff_R12;
  if ((char)local_d8 == -1) {
    cStack_67 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (unaff_R12);
LAB_0071bd9b:
    local_68 = -1;
    uVar11 = uVar10;
    unaff_R12 = uVar10;
  }
  else {
    uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (&local_d8);
LAB_0071bf0d:
    cStack_67 = (char)uVar13;
    local_68 = -1;
  }
LAB_0071bf10:
  if (local_68 == -1) {
LAB_0071bf4a:
    uStack_80 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::fix_position::_closure_0_>
                          (unaff_R12,param_2);
LAB_0071bcc3:
    *(ulonglong *)(param_1 + 8) = uStack_80;
    *param_1 = -1;
  }
  else {
LAB_0071bf16:
    *param_1 = local_68;
    param_1[1] = cStack_67;
    *(undefined4 *)(param_1 + 2) = local_90;
    *(undefined2 *)(param_1 + 6) = local_8c;
    *(ulonglong *)(param_1 + 8) = unaff_R12;
    *(ulonglong *)(param_1 + 0x10) = unaff_R15;
    *(ulonglong *)(param_1 + 0x18) = uVar11;
  }
  return;
}


