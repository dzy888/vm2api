// 001602c0 peek_invalid_type

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::peek_invalid_type
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
peek_invalid_type(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint6 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  int local_50 [2];
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 <= uVar6) {
LAB_00160598:
    local_68 = 10;
    uVar5 = peek_error(param_1,&local_68);
    goto LAB_001605ab;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(lVar3 + uVar6);
  uVar4 = local_68._2_6_;
  switch(cVar1) {
  case '[':
    local_68 = CONCAT71(local_68._1_7_,10);
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
switchD_00160305_caseD_5c:
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_00160598;
    parse_integer(local_40,param_1,1);
    if (local_40[0] == -1) {
      return local_38;
    }
LAB_00160554:
    uVar5 = (*(code *)PTR_invalid_type_00219ce0)();
    goto LAB_001605ab;
  case 'f':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'a') {
        if (uVar2 <= uVar6 + 2) goto LAB_001604e5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'l') {
          if (uVar2 <= uVar6 + 3) goto LAB_001604e5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          *(ulonglong *)(param_1 + 0x28) = uVar6 + 4;
          if (cVar1 == 's') {
            if (uVar2 <= uVar6 + 4) goto LAB_001604e5;
            cVar1 = *(char *)(lVar3 + 4 + uVar6);
            uVar6 = uVar6 + 5;
            *(ulonglong *)(param_1 + 0x28) = uVar6;
            if (cVar1 == 'e') {
              local_68 = (ulonglong)uVar4 << 0x10;
              break;
            }
          }
        }
      }
LAB_00160533:
      local_68 = 9;
      goto LAB_001604ed;
    }
    goto LAB_001604e5;
  case 'n':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'u') {
        if (uVar2 <= uVar6 + 2) goto LAB_001604e5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'l') {
          if (uVar2 <= uVar6 + 3) goto LAB_001604e5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          uVar6 = uVar6 + 4;
          *(ulonglong *)(param_1 + 0x28) = uVar6;
          if (cVar1 == 'l') {
            local_68 = CONCAT71(local_68._1_7_,7);
            break;
          }
        }
      }
      goto LAB_00160533;
    }
    goto LAB_001604e5;
  case 't':
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    if (uVar6 + 1 < uVar2) {
      cVar1 = *(char *)(lVar3 + 1 + uVar6);
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 2;
      if (cVar1 == 'r') {
        if (uVar2 <= uVar6 + 2) goto LAB_001604e5;
        cVar1 = *(char *)(lVar3 + 2 + uVar6);
        *(ulonglong *)(param_1 + 0x28) = uVar6 + 3;
        if (cVar1 == 'u') {
          if (uVar2 <= uVar6 + 3) goto LAB_001604e5;
          cVar1 = *(char *)(lVar3 + 3 + uVar6);
          uVar6 = uVar6 + 4;
          *(ulonglong *)(param_1 + 0x28) = uVar6;
          if (cVar1 == 'e') {
            local_68 = CONCAT62(uVar4,0x100);
            break;
          }
        }
      }
      goto LAB_00160533;
    }
LAB_001604e5:
    local_68 = 5;
LAB_001604ed:
    uVar5 = error(param_1,&local_68);
    return uVar5;
  case '{':
    local_68 = CONCAT71(local_68._1_7_,0xb);
    break;
  default:
    if (cVar1 != '\"') {
      if (cVar1 != '-') goto switchD_00160305_caseD_5c;
      *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
      parse_integer(local_50,param_1,0);
      if (local_50[0] == -1) {
        return local_48;
      }
      goto LAB_00160554;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar6 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    (*(code *)PTR_parse_str_00219c90)(local_30);
    if (local_30[0] == 2) {
      return local_28;
    }
    local_60 = local_28;
    local_58 = local_20;
    local_68 = CONCAT71(local_68._1_7_,5);
    uVar6 = local_20;
  }
  uVar5 = (*(code *)PTR_invalid_type_00219c38)(uVar6,param_3);
LAB_001605ab:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (uVar5,param_1);
  return uVar5;
}


