// 0045df60 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::__deserialize_content_v1::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
    */

char * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::__deserialize_content_v1::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
          (char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar4 = *(ulonglong *)(param_2 + 0x20);
  if (uVar4 <= *(ulonglong *)(param_2 + 0x28)) {
LAB_0045dfca:
    local_88 = 5;
LAB_0045dfd2:
    uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::peek_error(param_2,&local_88);
LAB_0045e375:
    *(undefined8 *)(param_1 + 8) = uVar7;
LAB_0045e379:
    *param_1 = -1;
    return param_1;
  }
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar8 = *(ulonglong *)(param_2 + 0x28) + 5;
LAB_0045dfa0:
  bVar3 = *(byte *)(lVar5 + -5 + lVar8);
  if (((ulonglong)bVar3 < 0x21) && ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0))
  goto code_r0x0045dfb2;
  switch(bVar3) {
  case 0x5b:
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_0045e43f:
      local_88 = 0x18;
      goto LAB_0045dfd2;
    }
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_seq::
    <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_50,param_2,1);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    local_60 = param_2;
    local_68 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::end_seq(param_2);
    local_78 = local_40;
    iStack_74 = iStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    local_88 = CONCAT44(uStack_4c,local_50);
    uVar7 = local_88;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    local_88._0_1_ = (char)local_50;
    if ((char)local_88 == -1) {
LAB_0045e317:
      local_88 = uVar7;
      cVar6 = (char)local_68;
      unaff_R14 = CONCAT44(uStack_7c,uStack_80);
      cVar9 = -1;
      if (local_68 != 0) {
        cVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                          (local_68);
      }
    }
    else {
      cVar9 = (char)local_88;
      local_88 = uVar7;
      if (local_68 == 0) goto LAB_0045e2bb;
LAB_0045e06a:
      unaff_R14 = local_68;
      cVar6 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <serde_core[48776c27239fa21f]::private::content::Content>(&local_88);
      cVar9 = -1;
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
switchD_0045e001_caseD_5c:
    if (9 < (byte)(bVar3 - 0x30)) {
      local_88 = 10;
      unaff_R14 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(param_2,&local_88);
      goto LAB_0045e432;
    }
    lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::parse_integer(&local_88,param_2,1);
    lVar5 = local_88;
joined_r0x0045e0a7:
    local_88 = lVar8;
    if (lVar5 != -1) {
      cVar9 = (char)(0x8040a >> ((byte)((int)lVar5 << 3) & 0x1f));
      unaff_R14 = CONCAT44(uStack_7c,uStack_80);
      goto LAB_0045e1e4;
    }
    uVar7 = CONCAT44(uStack_7c,uStack_80);
    goto LAB_0045e375;
  case 0x66:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (uVar4 <= lVar8 - 4U) goto LAB_0045e35f;
    cVar9 = *(char *)(lVar5 + -4 + lVar8);
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
    if (cVar9 == 'a') {
      if (uVar4 <= lVar8 - 3U) goto LAB_0045e35f;
      cVar9 = *(char *)(lVar5 + -3 + lVar8);
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
      if (cVar9 == 'l') {
        if (uVar4 <= lVar8 - 2U) goto LAB_0045e35f;
        cVar9 = *(char *)(lVar5 + -2 + lVar8);
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 1U;
        if (cVar9 == 's') {
          if (uVar4 <= lVar8 - 1U) goto LAB_0045e35f;
          cVar9 = *(char *)(lVar5 + -1 + lVar8);
          *(longlong *)(param_2 + 0x28) = lVar8;
          if (cVar9 == 'e') {
            cVar6 = '\0';
            cVar9 = '\0';
            goto LAB_0045e33b;
          }
        }
      }
    }
LAB_0045e406:
    local_88 = 9;
    goto LAB_0045e367;
  case 0x6e:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (lVar8 - 4U < uVar4) {
      cVar9 = *(char *)(lVar5 + -4 + lVar8);
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
      if (cVar9 == 'u') {
        if (uVar4 <= lVar8 - 3U) goto LAB_0045e35f;
        cVar9 = *(char *)(lVar5 + -3 + lVar8);
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
        if (cVar9 == 'l') {
          if (uVar4 <= lVar8 - 2U) goto LAB_0045e35f;
          cVar9 = *(char *)(lVar5 + -2 + lVar8);
          *(longlong *)(param_2 + 0x28) = lVar8 + -1;
          if (cVar9 == 'l') {
            cVar9 = '\x12';
            local_88 = 0x6c;
            goto LAB_0045e1e4;
          }
        }
      }
      goto LAB_0045e406;
    }
    goto LAB_0045e35f;
  case 0x74:
    *(ulonglong *)(param_2 + 0x28) = lVar8 - 4U;
    if (lVar8 - 4U < uVar4) {
      cVar9 = *(char *)(lVar5 + -4 + lVar8);
      *(ulonglong *)(param_2 + 0x28) = lVar8 - 3U;
      if (cVar9 == 'r') {
        if (uVar4 <= lVar8 - 3U) goto LAB_0045e35f;
        cVar9 = *(char *)(lVar5 + -3 + lVar8);
        *(ulonglong *)(param_2 + 0x28) = lVar8 - 2U;
        if (cVar9 == 'u') {
          if (uVar4 <= lVar8 - 2U) goto LAB_0045e35f;
          cVar9 = *(char *)(lVar5 + -2 + lVar8);
          *(longlong *)(param_2 + 0x28) = lVar8 + -1;
          if (cVar9 == 'e') {
            cVar6 = '\x01';
            cVar9 = '\0';
            goto LAB_0045e33b;
          }
        }
      }
      goto LAB_0045e406;
    }
LAB_0045e35f:
    local_88 = 5;
LAB_0045e367:
    uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::error(param_2,&local_88);
    goto LAB_0045e375;
  case 0x7b:
    pcVar1 = (char *)(param_2 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') goto LAB_0045e43f;
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_map::
    <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_50,param_2,1);
    *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
    local_60 = param_2;
    local_68 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::end_map(param_2);
    local_78 = local_40;
    iStack_74 = iStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    local_88 = CONCAT44(uStack_4c,local_50);
    uVar7 = local_88;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    local_88._0_1_ = (char)local_50;
    if ((char)local_88 == -1) goto LAB_0045e317;
    cVar9 = (char)local_88;
    local_88 = uVar7;
    if (local_68 != 0) goto LAB_0045e06a;
LAB_0045e2bb:
    local_58 = local_88._2_4_;
    local_54 = local_88._6_2_;
    unaff_R14 = CONCAT44(uStack_7c,uStack_80);
    unaff_R12 = CONCAT44(iStack_74,local_78);
    unaff_R15 = CONCAT44(uStack_6c,uStack_70);
    cVar6 = local_88._1_1_;
    break;
  default:
    if (bVar3 != 0x22) {
      if (bVar3 != 0x2d) goto switchD_0045e001_caseD_5c;
      *(longlong *)(param_2 + 0x28) = lVar8 + -4;
      lVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::parse_integer(&local_88,param_2,0);
      lVar5 = local_88;
      goto joined_r0x0045e0a7;
    }
    *(longlong *)(param_2 + 0x28) = lVar8 + -4;
    *(undefined8 *)(param_2 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f8)(lVar8 + -4,param_2);
    if (local_88 != 2) {
      unaff_R15 = CONCAT44(iStack_74,local_78);
      if ((int)local_88 == 1) {
        if (-1 < iStack_74) {
          cVar9 = '\f';
          if (unaff_R15 == 0) {
            unaff_R12 = 1;
            unaff_R15 = 0;
            unaff_R14 = 0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            unaff_R12 = (*(code *)PTR___rust_alloc_00799000)();
            if (unaff_R12 == 0) goto LAB_0045e3a0;
            local_88 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,unaff_R15);
            unaff_R14 = unaff_R15;
          }
          goto LAB_0045e1e4;
        }
LAB_0045e3a0:
        local_88 = (*(code *)PTR_handle_error_00798ff0)();
      }
      cVar9 = '\r';
      unaff_R12 = unaff_R15;
      unaff_R14 = CONCAT44(uStack_7c,uStack_80);
LAB_0045e1e4:
      cVar6 = (char)local_88;
      goto LAB_0045e33b;
    }
    *(longlong *)(param_1 + 8) = CONCAT44(uStack_7c,uStack_80);
    goto LAB_0045e379;
  }
  param_2 = local_60;
  if (cVar9 != -1) {
LAB_0045e33b:
    *param_1 = cVar9;
    param_1[1] = cVar6;
    *(undefined4 *)(param_1 + 2) = local_58;
    *(undefined2 *)(param_1 + 6) = local_54;
    *(longlong *)(param_1 + 8) = unaff_R14;
    *(longlong *)(param_1 + 0x10) = unaff_R12;
    *(longlong *)(param_1 + 0x18) = unaff_R15;
    return param_1;
  }
LAB_0045e432:
  uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (unaff_R14,param_2);
  goto LAB_0045e375;
code_r0x0045dfb2:
  *(longlong *)(param_2 + 0x28) = lVar8 + -4;
  lVar2 = lVar8 - uVar4;
  lVar8 = lVar8 + 1;
  if (lVar2 == 4) goto LAB_0045dfca;
  goto LAB_0045dfa0;
}


