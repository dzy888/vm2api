// 0005ddd0 unit_variant

/* <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as serde_core[48776c27239fa21f]::de::VariantAccess>::unit_variant */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
::unit_variant(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_21;
  undefined8 local_20 [3];
  
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x28) < uVar4) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar6 = *(ulonglong *)(param_1 + 0x28) + 4;
    do {
      bVar2 = *(byte *)(lVar5 + -4 + lVar6);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 != 0x6e) {
          uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_1,&local_21,
                                      anon_1682d33f1ffa89977bb076c565204366_26_llvm_17926147656080002477
                                     );
          uVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                  <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                            (uVar7,param_1);
          return uVar7;
        }
        *(ulonglong *)(param_1 + 0x28) = lVar6 - 3U;
        if (lVar6 - 3U < uVar4) {
          cVar3 = *(char *)(lVar5 + -3 + lVar6);
          *(ulonglong *)(param_1 + 0x28) = lVar6 - 2U;
          if (cVar3 == 'u') {
            if (uVar4 <= lVar6 - 2U) goto LAB_0005de98;
            cVar3 = *(char *)(lVar5 + -2 + lVar6);
            *(ulonglong *)(param_1 + 0x28) = lVar6 - 1U;
            if (cVar3 == 'l') {
              if (uVar4 <= lVar6 - 1U) goto LAB_0005de98;
              cVar3 = *(char *)(lVar5 + -1 + lVar6);
              *(longlong *)(param_1 + 0x28) = lVar6;
              if (cVar3 == 'l') {
                return 0;
              }
            }
          }
          local_20[0] = 9;
        }
        else {
LAB_0005de98:
          local_20[0] = 5;
        }
        uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::error(param_1,local_20);
        return uVar7;
      }
      *(longlong *)(param_1 + 0x28) = lVar6 + -3;
      lVar1 = lVar6 - uVar4;
      lVar6 = lVar6 + 1;
    } while (lVar1 != 3);
  }
  local_20[0] = 5;
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_1,local_20);
  return uVar7;
}


