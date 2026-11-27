// 006016e0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::option::Option<serde_json[dc3825464c436029]::value::Value> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

char * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108 [2];
  char local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  longlong local_90;
  int local_88 [2];
  longlong local_80;
  longlong local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  if (uVar6 < uVar5) {
    lVar7 = *(longlong *)(param_2 + 0x18);
    do {
      bVar3 = *(byte *)(lVar7 + uVar6);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 != 0x6e) goto LAB_006017b5;
        *(ulonglong *)(param_2 + 0x28) = uVar6 + 1;
        if (uVar6 + 1 < uVar5) {
          cVar4 = *(char *)(lVar7 + 1 + uVar6);
          *(ulonglong *)(param_2 + 0x28) = uVar6 + 2;
          if (cVar4 == 'u') {
            if (uVar5 <= uVar6 + 2) goto LAB_00601b2e;
            cVar4 = *(char *)(uVar6 + 2 + lVar7);
            *(ulonglong *)(param_2 + 0x28) = uVar6 + 3;
            if (cVar4 == 'l') {
              if (uVar5 <= uVar6 + 3) goto LAB_00601b2e;
              cVar4 = *(char *)(lVar7 + 3 + uVar6);
              *(ulonglong *)(param_2 + 0x28) = uVar6 + 4;
              if (cVar4 == 'l') {
                *param_1 = -1;
                return param_1;
              }
            }
          }
          local_128 = 9;
        }
        else {
LAB_00601b2e:
          local_128 = 5;
        }
        local_90 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::error(param_2,&local_128);
        goto LAB_00601809;
      }
      uVar6 = uVar6 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar6;
    } while (uVar5 != uVar6);
  }
  else {
LAB_006017b5:
    if (uVar6 < uVar5) {
LAB_006017d0:
      uVar6 = uVar6 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar6);
      if (((ulonglong)bVar3 < 0x21) && ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0))
      goto code_r0x006017e2;
      switch(bVar3) {
      case 0x5b:
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          local_70 = 1;
          local_d0 = 0;
          local_c8 = 8;
          lStack_c0 = 0;
          local_78 = param_2;
          goto LAB_006018aa;
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
        goto switchD_0060182f_caseD_1;
      case 0x66:
        *(ulonglong *)(param_2 + 0x28) = uVar6;
        local_90 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::parse_ident(param_2,"alse",4);
        if (local_90 == 0) {
          uStack_f7 = 0;
          goto LAB_00601a31;
        }
        goto LAB_00601809;
      case 0x6e:
        *(ulonglong *)(param_2 + 0x28) = uVar6;
        local_90 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::parse_ident(param_2,"ull",3);
        if (local_90 != 0) goto LAB_00601809;
        local_f8 = '\0';
        uStack_f0 = param_2;
        goto LAB_00601c20;
      case 0x74:
        *(ulonglong *)(param_2 + 0x28) = uVar6;
        local_90 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::parse_ident(param_2,"rue",3);
        if (local_90 != 0) goto LAB_00601809;
        uStack_f7 = 1;
LAB_00601a31:
        local_f8 = '\x01';
        uStack_f0 = param_2;
        goto LAB_00601c20;
      case 0x7b:
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_map::
          <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_68,param_2,1);
          *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
          local_108[0] = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::end_map(param_2);
          local_128 = CONCAT44(uStack_64,local_68);
          lVar7 = local_128;
          uStack_120 = uStack_60;
          uStack_11c = uStack_5c;
          local_118 = local_58;
          uStack_114 = uStack_54;
          uStack_110 = uStack_50;
          uStack_10c = uStack_4c;
          local_128._0_1_ = (char)local_68;
          bVar10 = (char)local_128 == -1;
          local_128 = lVar7;
          if (bVar10) goto LAB_00601bcb;
          if (local_108[0] == 0) goto LAB_00601c01;
          goto LAB_00601bb7;
        }
        break;
      default:
        if (bVar3 == 0x22) {
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          *(undefined8 *)(param_2 + 0x10) = 0;
          (*(code *)PTR_parse_str_007998f8)(0xffffffc7,param_2);
          local_90 = CONCAT44(uStack_11c,uStack_120);
          if (local_128 == 2) goto LAB_00601809;
          if ((int)local_128 == 1) {
            <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
            ::visit_str::<serde_json[dc3825464c436029]::error::Error>();
          }
          else {
            <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
            ::visit_borrowed_str::<serde_json[dc3825464c436029]::error::Error>
                      (&local_f8,local_90,CONCAT44(uStack_114,local_118));
          }
          goto LAB_00601c12;
        }
        if (bVar3 == 0x2d) {
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(local_98,param_2,0);
          if (local_98[0] == -1) goto LAB_00601809;
          <serde_json[dc3825464c436029]::de::ParserNumber>::visit::
          <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
                    (&local_f8,local_98);
          goto LAB_00601c12;
        }
switchD_0060182f_caseD_1:
        if (9 < (byte)(bVar3 - 0x30)) {
          local_128 = 10;
          lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(param_2,&local_128);
          goto LAB_00601c75;
        }
        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
        ::parse_integer(local_88,param_2,1);
        if (local_88[0] == -1) {
          local_90 = local_80;
          goto LAB_00601809;
        }
        <serde_json[dc3825464c436029]::de::ParserNumber>::visit::
        <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
                  (&local_f8,local_88);
        goto LAB_00601c12;
      }
      local_128 = 0x18;
      goto LAB_006017fe;
    }
  }
LAB_006017f6:
  local_128 = 5;
LAB_006017fe:
  local_90 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(param_2,&local_128);
  goto LAB_00601809;
code_r0x006017e2:
  *(ulonglong *)(param_2 + 0x28) = uVar6;
  if (uVar6 == uVar5) goto LAB_006017f6;
  goto LAB_006017d0;
LAB_006018aa:
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
            (&local_128,&local_78);
  if ((char)local_128 == '\x01') goto LAB_00601afc;
  if (local_128._1_1_ != '\x01') {
    local_48 = local_c8;
    uStack_40 = lStack_c0;
    uVar9 = 4;
    uStack_b0 = local_d0;
    goto LAB_00601b6b;
  }
  <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::
  deserialize::
  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            (&local_128,local_78);
  lVar7 = lStack_c0;
  if ((char)local_128 == -1) goto LAB_00601afc;
  uStack_b0._0_4_ = uStack_120;
  uStack_b0._4_4_ = uStack_11c;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  uStack_a0 = uStack_110;
  uStack_9c = uStack_10c;
  local_b8 = (undefined4)local_128;
  uStack_b4 = local_128._4_4_;
  if (lStack_c0 == local_d0) {
    (*(code *)PTR_grow_one_00799310)();
  }
  lVar8 = lVar7 * 0x20;
  puVar2 = (undefined4 *)(local_c8 + 0x10 + lVar8);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a4;
  puVar2[2] = uStack_a0;
  puVar2[3] = uStack_9c;
  puVar2 = (undefined4 *)(local_c8 + lVar8);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b4;
  puVar2[2] = (undefined4)uStack_b0;
  puVar2[3] = uStack_b0._4_4_;
  lStack_c0 = lVar7 + 1;
  goto LAB_006018aa;
LAB_00601afc:
  uVar11 = <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(&local_d0);
  uVar9 = 0xff;
  uStack_b0 = CONCAT44(uStack_11c,uStack_120);
  if (local_d0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
  }
LAB_00601b6b:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_b8 = CONCAT31(local_b8._1_3_,uVar9);
  local_a8 = (undefined4)local_48;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_108[0] = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::end_seq(param_2);
  local_118 = local_a8;
  uStack_114 = uStack_a4;
  uStack_110 = uStack_a0;
  uStack_10c = uStack_9c;
  local_128 = CONCAT44(uStack_b4,local_b8);
  lVar7 = local_128;
  uStack_120 = (undefined4)uStack_b0;
  uStack_11c = uStack_b0._4_4_;
  local_128._0_1_ = (char)local_b8;
  bVar10 = (char)local_128 == -1;
  local_128 = lVar7;
  if (bVar10) {
LAB_00601bcb:
    uStack_f0 = CONCAT44(uStack_11c,uStack_120);
    local_f8 = -1;
    if (local_108[0] != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (local_108);
    }
  }
  else if (local_108[0] == 0) {
    local_68 = local_b8;
    uStack_64 = uStack_b4;
    uStack_60 = (undefined4)uStack_b0;
    uStack_5c = uStack_b0._4_4_;
    local_58 = local_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
LAB_00601c01:
    local_f8 = (char)local_68;
    uStack_f7 = (undefined1)((uint)local_68 >> 8);
    uStack_f6 = (undefined2)((uint)local_68 >> 0x10);
    uStack_f0 = CONCAT44(uStack_5c,uStack_60);
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    local_118 = local_58;
    uStack_114 = uStack_54;
    uStack_110 = uStack_50;
    uStack_10c = uStack_4c;
    uStack_f4 = uStack_64;
    local_e8 = local_58;
    uStack_e4 = uStack_54;
    uStack_e0 = uStack_50;
    uStack_dc = uStack_4c;
  }
  else {
LAB_00601bb7:
    local_f8 = -1;
    uStack_f0 = local_108[0];
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_128)
    ;
  }
LAB_00601c12:
  lVar7 = uStack_f0;
  if (local_f8 != -1) {
LAB_00601c20:
    *(undefined4 *)(param_1 + 4) = uStack_f4;
    *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_f4,CONCAT21(uStack_f6,uStack_f7));
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,local_e8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,uStack_e0);
    *param_1 = local_f8;
    *(longlong *)(param_1 + 8) = uStack_f0;
    return param_1;
  }
LAB_00601c75:
  local_90 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
             <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                       (lVar7,param_2);
LAB_00601809:
  *(longlong *)(param_1 + 8) = local_90;
  *param_1 = -2;
  return param_1;
}


