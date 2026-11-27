// 005c7a60 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <craggemini_core[66f3c71560d70857]::license::host::SlotLimit as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined4 * __rustcall
<craggemini_core[66f3c71560d70857]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined4 param_1,undefined4 *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint6 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 local_49;
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38 [2];
  uint local_28;
  uint uStack_24;
  longlong *plStack_20;
  
  uVar5 = *(ulonglong *)(param_3 + 0x20);
  if (uVar5 <= *(ulonglong *)(param_3 + 0x28)) {
LAB_005c7acd:
    local_48 = 5;
LAB_005c7ad6:
    plStack_40 = (longlong *)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error(param_3,&local_48);
LAB_005c7e5d:
    *(longlong **)(param_2 + 2) = plStack_40;
    *param_2 = 1;
    return param_2;
  }
  lVar6 = *(longlong *)(param_3 + 0x18);
  uVar9 = *(ulonglong *)(param_3 + 0x28) + 2;
LAB_005c7aa0:
  bVar3 = *(byte *)(lVar6 + -2 + uVar9);
  uVar12 = (ulonglong)bVar3;
  if (uVar12 < 0x2e) {
    if ((0x100002600U >> (uVar12 & 0x3f) & 1) != 0) goto code_r0x005c7ab5;
    if (uVar12 != 0x22) {
      if (uVar12 != 0x2d) goto code_r0x005c7b45;
      *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
      ::parse_integer(&local_28,param_3,0);
      lVar6 = CONCAT44(uStack_24,local_28);
      plVar8 = plStack_40;
      plStack_40 = plStack_20;
      goto joined_r0x005c7b17;
    }
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f8)(lVar6,param_3);
    if (local_48 != 2) {
      if ((local_38[0] == (longlong *)&DAT_00000009) &&
         ((char)plStack_40[1] == 'd' && *plStack_40 == 0x6574696d696c6e75)) {
        plStack_40 = (longlong *)0x0;
        goto LAB_005c7d74;
      }
      plVar10 = (longlong *)
                <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                ::custom::<&str>(&DAT_0019dd31,0x12);
      goto LAB_005c7ed4;
    }
    goto LAB_005c7e5d;
  }
code_r0x005c7b45:
  uVar7 = local_48._2_6_;
  switch(bVar3) {
  case 0x5b:
    pcVar1 = (char *)(param_3 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_005c7f15:
      local_48 = 0x18;
      goto LAB_005c7ad6;
    }
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    local_48 = CONCAT71(local_48._1_7_,10);
    plStack_20 = (longlong *)
                 (*(code *)PTR_invalid_type_007997e8)
                           (lVar6,anon_30b5cef53457a6ea696e8d7e9f6273d6_87_llvm_8436237269785592069)
    ;
    *(char *)(param_3 + 0x38) = *(char *)(param_3 + 0x38) + '\x01';
    local_28 = 1;
    local_38[0] = (longlong *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::end_seq(param_3,&local_49);
    break;
  default:
    if (9 < (byte)(bVar3 - 0x30)) {
      local_48 = 10;
      plVar10 = (longlong *)
                <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(param_3,&local_48);
      goto LAB_005c7ed4;
    }
    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
    ::parse_integer(&local_28,param_3,1);
    lVar6 = CONCAT44(uStack_24,local_28);
    plVar8 = plStack_40;
    plStack_40 = plStack_20;
joined_r0x005c7b17:
    if (lVar6 != -1) {
      plStack_20 = plStack_40;
      if ((int)lVar6 == 1) {
        if ((longlong)plStack_40 < 0) {
          plVar10 = (longlong *)
                    <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::custom::<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>(2);
          plStack_40 = plVar8;
          goto LAB_005c7ed4;
        }
      }
      else if ((int)lVar6 != 2) {
        param_1 = SUB84(plStack_40,0);
        local_48._1_7_ = (undefined7)((ulonglong)local_48 >> 8);
        local_48 = CONCAT71(local_48._1_7_,3);
        goto LAB_005c7e98;
      }
      if ((undefined1 *)((longlong)plStack_40 + -1) < (undefined1 *)0x7fffffff) goto LAB_005c7d74;
      plVar10 = (longlong *)
                <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<craggemini_core[66f3c71560d70857]::license::LicenseError>(3);
      plStack_40 = plVar8;
      goto LAB_005c7ed4;
    }
    goto LAB_005c7e5d;
  case 0x66:
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    if (uVar5 <= uVar9 - 1) goto LAB_005c7e47;
    cVar4 = *(char *)(lVar6 + -1 + uVar9);
    *(ulonglong *)(param_3 + 0x28) = uVar9;
    if (cVar4 == 'a') {
      if (uVar5 <= uVar9) goto LAB_005c7e47;
      cVar4 = *(char *)(lVar6 + uVar9);
      *(ulonglong *)(param_3 + 0x28) = uVar9 + 1;
      if (cVar4 == 'l') {
        if (uVar5 <= uVar9 + 1) goto LAB_005c7e47;
        cVar4 = *(char *)(lVar6 + 1 + uVar9);
        *(ulonglong *)(param_3 + 0x28) = uVar9 + 2;
        if (cVar4 == 's') {
          if (uVar5 <= uVar9 + 2) goto LAB_005c7e47;
          cVar4 = *(char *)(lVar6 + 2 + uVar9);
          *(ulonglong *)(param_3 + 0x28) = uVar9 + 3;
          if (cVar4 == 'e') {
            local_48 = (ulonglong)uVar7 << 0x10;
            goto LAB_005c7e98;
          }
        }
      }
    }
LAB_005c7f07:
    local_48 = 9;
    goto LAB_005c7e50;
  case 0x6e:
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    if (uVar9 - 1 < uVar5) {
      cVar4 = *(char *)(lVar6 + -1 + uVar9);
      *(ulonglong *)(param_3 + 0x28) = uVar9;
      if (cVar4 != 'u') goto LAB_005c7f07;
      if (uVar5 <= uVar9) goto LAB_005c7e47;
      cVar4 = *(char *)(lVar6 + uVar9);
      *(ulonglong *)(param_3 + 0x28) = uVar9 + 1;
      if (cVar4 != 'l') goto LAB_005c7f07;
      if (uVar5 <= uVar9 + 1) goto LAB_005c7e47;
      cVar4 = *(char *)(lVar6 + 1 + uVar9);
      *(ulonglong *)(param_3 + 0x28) = uVar9 + 2;
      if (cVar4 != 'l') goto LAB_005c7f07;
      local_48 = CONCAT71(local_48._1_7_,7);
LAB_005c7e98:
      plVar10 = (longlong *)
                (*(code *)PTR_invalid_type_007997e8)
                          (param_1,anon_30b5cef53457a6ea696e8d7e9f6273d6_87_llvm_8436237269785592069
                          );
      goto LAB_005c7ed4;
    }
    goto LAB_005c7e47;
  case 0x74:
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    if (uVar9 - 1 < uVar5) {
      cVar4 = *(char *)(lVar6 + -1 + uVar9);
      *(ulonglong *)(param_3 + 0x28) = uVar9;
      if (cVar4 == 'r') {
        if (uVar5 <= uVar9) goto LAB_005c7e47;
        cVar4 = *(char *)(lVar6 + uVar9);
        *(ulonglong *)(param_3 + 0x28) = uVar9 + 1;
        if (cVar4 == 'u') {
          if (uVar5 <= uVar9 + 1) goto LAB_005c7e47;
          cVar4 = *(char *)(lVar6 + 1 + uVar9);
          *(ulonglong *)(param_3 + 0x28) = uVar9 + 2;
          if (cVar4 == 'e') {
            local_48 = CONCAT62(uVar7,0x100);
            goto LAB_005c7e98;
          }
        }
      }
      goto LAB_005c7f07;
    }
LAB_005c7e47:
    local_48 = 5;
LAB_005c7e50:
    plStack_40 = (longlong *)
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::error(param_3,&local_48);
    goto LAB_005c7e5d;
  case 0x7b:
    pcVar1 = (char *)(param_3 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') goto LAB_005c7f15;
    *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
    local_48 = CONCAT71(local_48._1_7_,0xb);
    plStack_20 = (longlong *)
                 (*(code *)PTR_invalid_type_007997e8)
                           (lVar6,anon_30b5cef53457a6ea696e8d7e9f6273d6_87_llvm_8436237269785592069)
    ;
    *(char *)(param_3 + 0x38) = *(char *)(param_3 + 0x38) + '\x01';
    local_28 = 1;
    local_38[0] = (longlong *)
                  <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::end_map(param_3,&local_49);
  }
  plVar10 = plStack_20;
  local_48 = CONCAT44(uStack_24,local_28);
  plStack_40 = plStack_20;
  if ((local_28 & 1) == 0) {
    plVar10 = local_38[0];
    if (local_38[0] == (longlong *)0x0) {
      plStack_40 = (longlong *)(ulonglong)uStack_24;
LAB_005c7d74:
      param_2[1] = (int)plStack_40;
      *param_2 = 0;
      return param_2;
    }
  }
  else if (local_38[0] != (longlong *)0x0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(local_38);
  }
LAB_005c7ed4:
  uVar11 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
           <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                     (plVar10,param_3);
  *(undefined8 *)(param_2 + 2) = uVar11;
  *param_2 = 1;
  return param_2;
code_r0x005c7ab5:
  *(ulonglong *)(param_3 + 0x28) = uVar9 - 1;
  lVar2 = uVar9 - uVar5;
  uVar9 = uVar9 + 1;
  if (lVar2 == 1) goto LAB_005c7acd;
  goto LAB_005c7aa0;
}


