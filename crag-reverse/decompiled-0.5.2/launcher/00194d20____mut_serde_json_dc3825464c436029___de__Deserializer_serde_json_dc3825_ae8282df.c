// 00194d20 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined4 * __rustcall
<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined4 *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  uint6 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_41;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  uVar5 = *(ulonglong *)(param_3 + 0x20);
  if (uVar5 <= *(ulonglong *)(param_3 + 0x28)) {
LAB_00194d8d:
    local_40 = 5;
LAB_00194d96:
    local_38 = (longlong *)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(param_3,&local_40);
LAB_001950da:
    *(longlong **)(param_2 + 2) = local_38;
    *param_2 = 1;
    return param_2;
  }
  lVar9 = *(longlong *)(param_3 + 0x18);
  uVar8 = *(ulonglong *)(param_3 + 0x28) + 2;
LAB_00194d60:
  bVar3 = *(byte *)(lVar9 + -2 + uVar8);
  uVar11 = (ulonglong)bVar3;
  if (uVar11 < 0x2e) {
    if ((0x100002600U >> (uVar11 & 0x3f) & 1) != 0) goto code_r0x00194d75;
    if (uVar11 != 0x22) {
      if (uVar11 != 0x2d) goto code_r0x00194e05;
      *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
      ::parse_integer(&local_28,param_3,0);
      local_38 = local_20;
      goto joined_r0x00194ee4;
    }
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    *(undefined8 *)(param_3 + 0x10) = 0;
    (*(code *)PTR_parse_str_00219c90)(lVar9,param_3);
    if (local_40 != 2) {
      if ((local_30 != 9) || ((char)local_38[1] != 'd' || *local_38 != 0x6574696d696c6e75)) {
        uVar10 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                 ::custom::<&str>("invalid slot limit",0x12);
        goto LAB_0019513c;
      }
      local_38 = (longlong *)0x0;
LAB_00194f13:
      param_2[1] = (int)local_38;
      uVar7 = 0;
      goto LAB_00195150;
    }
    goto LAB_001950da;
  }
code_r0x00194e05:
  uVar6 = local_40._2_6_;
  local_38 = param_1;
  switch(bVar3) {
  case 0x5b:
    pcVar1 = (char *)(param_3 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
LAB_00195185:
      local_40 = 0x18;
      goto LAB_00194d96;
    }
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    local_40 = CONCAT71(local_40._1_7_,10);
    uVar10 = (*(code *)PTR_invalid_type_00219c38)
                       (lVar9,anon_1b24917ebd097f132e7c2fe0e448a3c0_42_llvm_6508052046112256635);
    *(char *)(param_3 + 0x38) = *(char *)(param_3 + 0x38) + '\x01';
    lVar9 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_seq(param_3,&local_41);
    break;
  default:
    if (9 < (byte)(bVar3 - 0x30)) {
      local_40 = 10;
      uVar10 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(param_3,&local_40);
      goto LAB_0019513c;
    }
    <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
    ::parse_integer(&local_28,param_3,1);
    local_38 = local_20;
joined_r0x00194ee4:
    if (local_28 == -1) goto LAB_001950da;
    if ((int)local_28 == 1) {
      if (-1 < (longlong)local_38) goto LAB_00194f02;
      uVar10 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
               ::custom::<core[c0acaeba6ab4c2e0]::num::error::TryFromIntError>(2);
    }
    else if ((int)local_28 == 2) {
LAB_00194f02:
      if ((longlong)local_38 - 1U < 0x7fffffff) goto LAB_00194f13;
      uVar10 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
               ::custom::<craggemini[b21da2d71f2da7a3]::license::LicenseError>(3);
    }
    else {
      local_40._1_7_ = (undefined7)((ulonglong)local_40 >> 8);
      local_40 = CONCAT71(local_40._1_7_,3);
LAB_00195116:
      uVar10 = (*(code *)PTR_invalid_type_00219c38)
                         (local_38,anon_1b24917ebd097f132e7c2fe0e448a3c0_42_llvm_6508052046112256635
                         );
    }
    goto LAB_0019513c;
  case 0x66:
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    if (uVar5 <= uVar8 - 1) goto LAB_001950c4;
    cVar4 = *(char *)(lVar9 + -1 + uVar8);
    *(ulonglong *)(param_3 + 0x28) = uVar8;
    if (cVar4 == 'a') {
      if (uVar5 <= uVar8) goto LAB_001950c4;
      cVar4 = *(char *)(lVar9 + uVar8);
      *(ulonglong *)(param_3 + 0x28) = uVar8 + 1;
      if (cVar4 == 'l') {
        if (uVar5 <= uVar8 + 1) goto LAB_001950c4;
        cVar4 = *(char *)(lVar9 + 1 + uVar8);
        *(ulonglong *)(param_3 + 0x28) = uVar8 + 2;
        if (cVar4 == 's') {
          if (uVar5 <= uVar8 + 2) goto LAB_001950c4;
          cVar4 = *(char *)(lVar9 + 2 + uVar8);
          *(ulonglong *)(param_3 + 0x28) = uVar8 + 3;
          if (cVar4 == 'e') {
            local_40 = (ulonglong)uVar6 << 0x10;
            goto LAB_00195116;
          }
        }
      }
    }
LAB_00195177:
    local_40 = 9;
    goto LAB_001950cd;
  case 0x6e:
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    if (uVar8 - 1 < uVar5) {
      cVar4 = *(char *)(lVar9 + -1 + uVar8);
      *(ulonglong *)(param_3 + 0x28) = uVar8;
      if (cVar4 == 'u') {
        if (uVar5 <= uVar8) goto LAB_001950c4;
        cVar4 = *(char *)(lVar9 + uVar8);
        *(ulonglong *)(param_3 + 0x28) = uVar8 + 1;
        if (cVar4 == 'l') {
          if (uVar5 <= uVar8 + 1) goto LAB_001950c4;
          cVar4 = *(char *)(lVar9 + 1 + uVar8);
          *(ulonglong *)(param_3 + 0x28) = uVar8 + 2;
          if (cVar4 == 'l') {
            local_40 = CONCAT71(local_40._1_7_,7);
            goto LAB_00195116;
          }
        }
      }
      goto LAB_00195177;
    }
    goto LAB_001950c4;
  case 0x74:
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    if (uVar8 - 1 < uVar5) {
      cVar4 = *(char *)(lVar9 + -1 + uVar8);
      *(ulonglong *)(param_3 + 0x28) = uVar8;
      if (cVar4 == 'r') {
        if (uVar5 <= uVar8) goto LAB_001950c4;
        cVar4 = *(char *)(lVar9 + uVar8);
        *(ulonglong *)(param_3 + 0x28) = uVar8 + 1;
        if (cVar4 == 'u') {
          if (uVar5 <= uVar8 + 1) goto LAB_001950c4;
          cVar4 = *(char *)(lVar9 + 1 + uVar8);
          *(ulonglong *)(param_3 + 0x28) = uVar8 + 2;
          if (cVar4 == 'e') {
            local_40 = CONCAT62(uVar6,0x100);
            goto LAB_00195116;
          }
        }
      }
      goto LAB_00195177;
    }
LAB_001950c4:
    local_40 = 5;
LAB_001950cd:
    local_38 = (longlong *)
               <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::error(param_3,&local_40);
    goto LAB_001950da;
  case 0x7b:
    pcVar1 = (char *)(param_3 + 0x38);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') goto LAB_00195185;
    *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
    local_40 = CONCAT71(local_40._1_7_,0xb);
    uVar10 = (*(code *)PTR_invalid_type_00219c38)
                       (lVar9,anon_1b24917ebd097f132e7c2fe0e448a3c0_42_llvm_6508052046112256635);
    *(char *)(param_3 + 0x38) = *(char *)(param_3 + 0x38) + '\x01';
    lVar9 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map(param_3,&local_41);
  }
  if (lVar9 != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar9);
  }
LAB_0019513c:
  uVar10 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
           <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                     (uVar10,param_3);
  *(undefined8 *)(param_2 + 2) = uVar10;
  uVar7 = 1;
LAB_00195150:
  *param_2 = uVar7;
  return param_2;
code_r0x00194d75:
  *(ulonglong *)(param_3 + 0x28) = uVar8 - 1;
  lVar2 = uVar8 - uVar5;
  uVar8 = uVar8 + 1;
  if (lVar2 == 1) goto LAB_00194d8d;
  goto LAB_00194d60;
}


