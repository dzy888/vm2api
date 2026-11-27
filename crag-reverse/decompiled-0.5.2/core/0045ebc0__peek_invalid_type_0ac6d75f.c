// 0045ebc0 peek_invalid_type

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::peek_invalid_type
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
peek_invalid_type(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint6 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  int local_48 [2];
  undefined8 local_40;
  int local_38 [2];
  undefined8 local_30;
  int local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 <= uVar6) {
LAB_0045eeca:
    local_60 = 10;
    uVar5 = peek_error(param_1,&local_60);
    goto LAB_0045eee0;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(lVar3 + uVar6);
  uVar4 = local_60._2_6_;
  switch(cVar1) {
  case '[':
    local_60 = CONCAT71(local_60._1_7_,10);
    break;
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
switchD_0045ec04_caseD_5c:
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0045eeca;
    parse_integer(local_38,param_1,1);
    if (local_38[0] == -1) {
      return local_30;
    }
LAB_0045ee86:
    uVar5 = (*(code *)PTR_invalid_type_00799938)();
    goto LAB_0045eee0;
  case 'f':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'a') {
        if (uVar2 <= uVar6 + 2) goto LAB_0045edd5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'l') {
          if (uVar2 <= uVar6 + 3) goto LAB_0045edd5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          *(ulonglong *)(param_1 + 0x28) = uVar6 + 4;
          if (cVar1 == 's') {
            if (uVar2 <= uVar6 + 4) goto LAB_0045edd5;
            cVar1 = *(char *)(lVar3 + 4 + uVar6);
            uVar6 = uVar6 + 5;
            *(ulonglong *)(param_1 + 0x28) = uVar6;
            if (cVar1 == 'e') {
              local_60 = (ulonglong)uVar4 << 0x10;
              break;
            }
          }
        }
      }
LAB_0045ee2d:
      local_60 = 9;
      goto LAB_0045edde;
    }
    goto LAB_0045edd5;
  case 'n':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'u') {
        if (uVar2 <= uVar6 + 2) goto LAB_0045edd5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'l') {
          if (uVar2 <= uVar6 + 3) goto LAB_0045edd5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          uVar6 = uVar6 + 4;
          *(ulonglong *)(param_1 + 0x28) = uVar6;
          if (cVar1 == 'l') {
            local_60 = CONCAT71(local_60._1_7_,7);
            break;
          }
        }
      }
      goto LAB_0045ee2d;
    }
    goto LAB_0045edd5;
  case 't':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'r') {
        if (uVar2 <= uVar6 + 2) goto LAB_0045edd5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'u') {
          if (uVar2 <= uVar6 + 3) goto LAB_0045edd5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          uVar6 = uVar6 + 4;
          *(ulonglong *)(param_1 + 0x28) = uVar6;
          if (cVar1 == 'e') {
            local_60 = CONCAT62(uVar4,0x100);
            break;
          }
        }
      }
      goto LAB_0045ee2d;
    }
LAB_0045edd5:
    local_60 = 5;
LAB_0045edde:
    uVar5 = error(param_1,&local_60);
    return uVar5;
  case '{':
    local_60 = CONCAT71(local_60._1_7_,0xb);
    break;
  default:
    if (cVar1 != '\"') {
      if (cVar1 != '-') goto switchD_0045ec04_caseD_5c;
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
      parse_integer(local_48,param_1,0);
      if (local_48[0] == -1) {
        return local_40;
      }
      goto LAB_0045ee86;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f0)(local_28);
    if (local_28[0] == 2) {
      return local_20;
    }
    local_58 = local_20;
    local_50 = local_18;
    local_60 = CONCAT71(local_60._1_7_,5);
    uVar6 = local_18;
  }
  uVar5 = (*(code *)PTR_invalid_type_007997e8)
                    (uVar6,anon_877a5ac8abb067e0da128e2a3fb4e8ff_285_llvm_12784291601945948760);
LAB_0045eee0:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::fix_position::_closure_0_>
                    (uVar5,param_1);
  return uVar5;
}


