// 0014b6b0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

void __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined1 *unaff_RBP;
  undefined1 *puVar14;
  undefined1 *unaff_R13;
  undefined1 *unaff_R15;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  undefined4 local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  char *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78;
  byte bStack_77;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar15 = &local_e8;
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  if (uVar7 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_0014b719:
    local_e8 = (undefined1 *)0x5;
LAB_0014b721:
    uStack_90 = (undefined1 *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(param_2,&local_e8);
    goto LAB_0014bb84;
  }
  puVar12 = *(undefined1 **)(param_2 + 0x18);
  lVar8 = *(ulonglong *)(param_2 + 0x28) + 5;
LAB_0014b6f0:
  bVar5 = puVar12[lVar8 + -5];
  if (((ulonglong)bVar5 < 0x21) && ((0x100002600U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0))
  goto code_r0x0014b701;
  switch(bVar5) {
  case 0x5b:
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    local_b8 = param_1;
    if (*pcVar1 == '\0') {
      local_e8 = (undefined1 *)0x18;
      uVar11 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(param_2,&local_e8);
      *(undefined8 *)(local_b8 + 8) = uVar11;
      *local_b8 = -1;
      return;
    }
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    local_50 = 1;
    local_b0 = (undefined1 *)0x0;
    local_a8 = &DAT_00000008;
    puStack_a0 = (undefined1 *)0x0;
    local_58 = param_2;
    goto LAB_0014b7d7;
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
switchD_0014b74d_caseD_5c:
    if (9 < (byte)(bVar5 - 0x30)) {
      local_e8 = (undefined1 *)0xa;
      unaff_R13 = (undefined1 *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(param_2,&local_e8);
      goto LAB_0014bdba;
    }
    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
    ::parse_integer(&local_98,param_2,1);
    puVar9 = (undefined1 *)CONCAT44(iStack_94,local_98);
    if (puVar9 == (undefined1 *)0xffffffffffffffff) goto LAB_0014bb84;
    if (local_98 == 2) {
LAB_0014bb90:
      local_78 = '\x02';
      unaff_R13 = (undefined1 *)((ulonglong)uStack_90 >> 0x3f);
      unaff_R15 = uStack_90;
      goto LAB_0014bd0a;
    }
    unaff_R15 = uStack_90;
    if (local_98 == 1) {
LAB_0014b8f0:
      local_78 = '\x02';
      unaff_R13 = (undefined1 *)0x0;
      unaff_R15 = uStack_90;
      goto LAB_0014bd0a;
    }
    goto LAB_0014bb9c;
  case 0x66:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar7 <= lVar8 - 4U) goto LAB_0014bb71;
    cVar6 = puVar12[lVar8 + -4];
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar6 == 'a') {
      if (uVar7 <= lVar8 - 3U) goto LAB_0014bb71;
      cVar6 = puVar12[lVar8 + -3];
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
      if (cVar6 == 'l') {
        if (uVar7 <= lVar8 - 2U) goto LAB_0014bb71;
        cVar6 = puVar12[lVar8 + -2];
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 1U;
        if (cVar6 == 's') {
          if (uVar7 <= lVar8 - 1U) goto LAB_0014bb71;
          cVar6 = puVar12[lVar8 + -1];
          *(longlong *)(param_2 + 0x28) = lVar8;
          if (cVar6 == 'e') {
            local_78 = '\x01';
            puVar9 = (undefined1 *)0x0;
            puVar12 = (undefined1 *)0x65;
            goto LAB_0014bd0a;
          }
        }
      }
    }
    break;
  case 0x6e:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar7 <= lVar8 - 4U) goto LAB_0014bb71;
    cVar6 = puVar12[lVar8 + -4];
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar6 != 'u') break;
    if (uVar7 <= lVar8 - 3U) goto LAB_0014bb71;
    cVar6 = puVar12[lVar8 + -3];
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
    if (cVar6 == 'l') {
      if (uVar7 <= lVar8 - 2U) goto LAB_0014bb71;
      cVar6 = puVar12[lVar8 + -2];
      puVar9 = (undefined1 *)(lVar8 + -1);
      *(undefined1 **)(param_2 + 0x28) = puVar9;
      if (cVar6 == 'l') {
        local_78 = '\0';
        puVar12 = (undefined1 *)0x6c;
        goto LAB_0014bd0a;
      }
    }
    break;
  case 0x74:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar7 <= lVar8 - 4U) {
LAB_0014bb71:
      local_e8 = (undefined1 *)0x5;
LAB_0014bb79:
      uStack_90 = (undefined1 *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::error(param_2,&local_e8);
      goto LAB_0014bb84;
    }
    cVar6 = puVar12[lVar8 + -4];
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar6 != 'r') break;
    if (uVar7 <= lVar8 - 3U) goto LAB_0014bb71;
    cVar6 = puVar12[lVar8 + -3];
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
    if (cVar6 == 'u') {
      if (uVar7 <= lVar8 - 2U) goto LAB_0014bb71;
      cVar6 = puVar12[lVar8 + -2];
      *(longlong *)(param_2 + 0x28) = lVar8 + -1;
      if (cVar6 == 'e') {
        puVar9 = (undefined1 *)0x1;
        local_78 = '\x01';
        puVar12 = (undefined1 *)0x65;
        goto LAB_0014bd0a;
      }
    }
    break;
  case 0x7b:
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      local_e8 = (undefined1 *)0x18;
      goto LAB_0014b721;
    }
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_map::
    <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_78,param_2,1);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    unaff_RBP = (undefined1 *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::end_map(param_2);
    local_e8 = (undefined1 *)
               CONCAT44(CONCAT22(uStack_72,uStack_74),
                        CONCAT22(uStack_76,CONCAT11(bStack_77,local_78)));
    iStack_e0 = iStack_70;
    iStack_dc = iStack_6c;
    local_d8 = local_68;
    iStack_d4 = iStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
    puVar9 = unaff_RBP;
    local_c8 = unaff_RBP;
    if (local_78 == -1) goto LAB_0014bbe4;
    if (unaff_RBP == (undefined1 *)0x0) {
      puVar9 = (undefined1 *)(ulonglong)bStack_77;
      local_c0 = CONCAT22(uStack_74,uStack_76);
      local_bc = uStack_72;
      unaff_R13 = (undefined1 *)CONCAT44(iStack_6c,iStack_70);
      puVar15 = (undefined8 *)CONCAT44(iStack_64,local_68);
      puVar12 = (undefined1 *)CONCAT44(uStack_5c,uStack_60);
    }
    else {
      puVar9 = (undefined1 *)
               core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_e8);
      unaff_R13 = unaff_RBP;
      puVar15 = (undefined8 *)unaff_R15;
LAB_0014bbf9:
      local_78 = -1;
    }
    goto LAB_0014bcea;
  default:
    if (bVar5 == 0x22) {
      *(longlong *)(param_2 + 0x28) = lVar8 + -4;
      *(undefined8 *)(param_2 + 0x10) = 0;
      (*(code *)PTR_parse_str_00219c90)(puVar12,param_2);
      param_2 = CONCAT44(iStack_dc,iStack_e0);
      if (local_e8 == (undefined1 *)0x2) {
        *(longlong *)(param_1 + 8) = param_2;
        *param_1 = -1;
        return;
      }
      puVar12 = (undefined1 *)CONCAT44(iStack_d4,local_d8);
      puVar14 = unaff_R15;
      if (iStack_d4 < 0) {
LAB_0014bbd8:
        puVar9 = (undefined1 *)(*(code *)PTR_handle_error_00219c78)();
        unaff_R15 = puVar14;
LAB_0014bbe4:
        unaff_R13 = (undefined1 *)CONCAT44(iStack_dc,iStack_e0);
        puVar15 = (undefined8 *)unaff_R15;
        if (unaff_RBP != (undefined1 *)0x0) {
          puVar9 = (undefined1 *)
                   core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>(unaff_RBP);
        }
        goto LAB_0014bbf9;
      }
      if (puVar12 == (undefined1 *)0x0) {
        unaff_R15 = (undefined1 *)0x1;
        unaff_R13 = (undefined1 *)0x0;
        puVar9 = local_e8;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        unaff_R15 = (undefined1 *)(*(code *)PTR___rust_alloc_00219c88)();
        puVar14 = puVar12;
        if (unaff_R15 == (undefined1 *)0x0) goto LAB_0014bbd8;
        puVar9 = (undefined1 *)(*(code *)PTR_memcpy_00219c60)(puVar12,puVar12);
        unaff_R13 = puVar12;
      }
      local_78 = '\x03';
      goto LAB_0014bd0a;
    }
    if (bVar5 != 0x2d) goto switchD_0014b74d_caseD_5c;
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
    ::parse_integer(&local_98,param_2,0);
    puVar9 = (undefined1 *)CONCAT44(iStack_94,local_98);
    if (puVar9 == (undefined1 *)0xffffffffffffffff) goto LAB_0014bb84;
    unaff_R15 = uStack_90;
    if (puVar9 != (undefined1 *)0x0) {
      if (local_98 == 1) goto LAB_0014b8f0;
      goto LAB_0014bb90;
    }
LAB_0014bb9c:
    puVar9 = (undefined1 *)((ulonglong)unaff_R15 & 0x7fffffffffffffff);
    puVar12 = (undefined1 *)0x7fefffffffffffff;
    if (puVar9 < (undefined1 *)0x7ff0000000000000) {
      local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      puVar9 = (undefined1 *)
               core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_e8);
      local_78 = '\x02';
    }
    else {
      local_78 = '\0';
    }
    unaff_R13 = (undefined1 *)0x2;
    goto LAB_0014bd0a;
  }
  local_e8 = (undefined1 *)0x9;
  goto LAB_0014bb79;
code_r0x0014b701:
  *(longlong *)(param_2 + 0x28) = lVar8 + -4;
  lVar2 = lVar8 - uVar7;
  lVar8 = lVar8 + 1;
  if (lVar2 == 4) goto LAB_0014b719;
  goto LAB_0014b6f0;
LAB_0014b7d7:
  uVar16 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
           ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_e8,&local_58);
  if ((char)local_e8 == '\x01') goto LAB_0014bb19;
  if (local_e8._1_1_ != '\x01') {
    local_48 = local_a8;
    uStack_40 = puStack_a0;
    uVar13 = 4;
    uStack_90 = local_b0;
    goto LAB_0014bc16;
  }
  uVar16 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     (&local_e8,local_58);
  puVar14 = puStack_a0;
  if ((char)local_e8 == -1) goto LAB_0014bb19;
  uStack_90._0_4_ = iStack_e0;
  uStack_90._4_4_ = iStack_dc;
  local_88 = local_d8;
  iStack_84 = iStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  local_98 = (int)local_e8;
  iStack_94 = local_e8._4_4_;
  if (puStack_a0 == local_b0) {
    (*(code *)PTR_grow_one_00219c68)();
  }
  puVar12 = (undefined1 *)((longlong)puVar14 * 0x20);
  puVar4 = (undefined4 *)(local_a8 + 0x10 + (longlong)puVar12);
  *puVar4 = local_88;
  puVar4[1] = iStack_84;
  puVar4[2] = uStack_80;
  puVar4[3] = uStack_7c;
  piVar3 = (int *)(local_a8 + (longlong)puVar12);
  *piVar3 = local_98;
  piVar3[1] = iStack_94;
  piVar3[2] = (int)uStack_90;
  piVar3[3] = uStack_90._4_4_;
  puStack_a0 = puVar14 + 1;
  goto LAB_0014b7d7;
LAB_0014bb19:
  puVar14 = local_a8;
  puVar15 = &local_e8;
  for (puVar9 = puStack_a0 + 1; puVar9 != (undefined1 *)0x1; puVar9 = puVar9 + -1) {
    puVar14 = puVar14 + 0x20;
    uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>();
    puVar15 = (undefined8 *)puVar14;
  }
  uVar13 = 0xff;
  uStack_90 = (undefined1 *)CONCAT44(iStack_dc,iStack_e0);
  if (local_b0 != (undefined1 *)0x0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar16,8);
  }
LAB_0014bc16:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_98 = CONCAT31(local_98._1_3_,uVar13);
  local_88 = (undefined4)local_48;
  iStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  puVar10 = (undefined1 *)
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_seq(param_2);
  unaff_R13 = uStack_90;
  local_d8 = local_88;
  iStack_d4 = iStack_84;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  local_e8 = (undefined1 *)CONCAT44(iStack_94,local_98);
  puVar14 = local_e8;
  iStack_e0 = (int)uStack_90;
  iStack_dc = uStack_90._4_4_;
  local_e8._0_1_ = (char)local_98;
  local_e8 = puVar14;
  local_c8 = puVar10;
  if ((char)local_e8 == -1) {
    puVar9 = (undefined1 *)0x0;
    if (puVar10 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)
               core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (puVar10);
    }
LAB_0014bc89:
    local_78 = -1;
  }
  else {
    if (puVar10 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)
               core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_e8);
      unaff_R13 = puVar10;
      goto LAB_0014bc89;
    }
    local_e8._1_1_ = (byte)((uint)local_98 >> 8);
    puVar9 = (undefined1 *)(ulonglong)local_e8._1_1_;
    local_e8._2_4_ = SUB84(puVar14,2);
    local_c0 = local_e8._2_4_;
    local_e8._6_2_ = (undefined2)((uint)iStack_94 >> 0x10);
    local_bc = local_e8._6_2_;
    puVar15 = (undefined8 *)CONCAT44(iStack_84,local_88);
    puVar12 = (undefined1 *)CONCAT44(uStack_7c,uStack_80);
    local_78 = (char)local_e8;
  }
  param_1 = local_b8;
LAB_0014bcea:
  unaff_R15 = (undefined1 *)puVar15;
  if (local_78 != -1) {
LAB_0014bd0a:
    *param_1 = local_78;
    param_1[1] = (char)puVar9;
    *(undefined4 *)(param_1 + 2) = local_c0;
    *(undefined2 *)(param_1 + 6) = local_bc;
    *(undefined1 **)(param_1 + 8) = unaff_R13;
    *(undefined1 **)(param_1 + 0x10) = unaff_R15;
    *(undefined1 **)(param_1 + 0x18) = puVar12;
    return;
  }
LAB_0014bdba:
  uStack_90 = (undefined1 *)
              ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
              <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                        (unaff_R13,param_2);
LAB_0014bb84:
  *(undefined1 **)(param_1 + 8) = uStack_90;
  *param_1 = -1;
  return;
}


