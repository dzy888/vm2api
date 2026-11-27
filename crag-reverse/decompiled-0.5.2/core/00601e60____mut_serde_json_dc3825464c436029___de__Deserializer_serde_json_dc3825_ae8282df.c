// 00601e60 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::option::Option<usize> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<usize>as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 local_20 [3];
  
  uVar4 = *(ulonglong *)(param_2 + 0x20);
  if (*(ulonglong *)(param_2 + 0x28) < uVar4) {
    lVar6 = *(longlong *)(param_2 + 0x18);
    uVar5 = *(ulonglong *)(param_2 + 0x28) + 2;
    do {
      bVar2 = *(byte *)(lVar6 + -2 + uVar5);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x6e) {
          *(ulonglong *)(param_2 + 0x28) = uVar5 - 1;
          if (uVar5 - 1 < uVar4) {
            cVar3 = *(char *)(lVar6 + -1 + uVar5);
            *(ulonglong *)(param_2 + 0x28) = uVar5;
            if (cVar3 == 'u') {
              if (uVar4 <= uVar5) goto LAB_00601f3c;
              cVar3 = *(char *)(lVar6 + uVar5);
              *(ulonglong *)(param_2 + 0x28) = uVar5 + 1;
              if (cVar3 == 'l') {
                if (uVar4 <= uVar5 + 1) goto LAB_00601f3c;
                cVar3 = *(char *)(lVar6 + 1 + uVar5);
                *(ulonglong *)(param_2 + 0x28) = uVar5 + 2;
                if (cVar3 == 'l') {
                  lVar6 = 0;
                  goto LAB_00601f30;
                }
              }
            }
            local_20[0] = 9;
          }
          else {
LAB_00601f3c:
            local_20[0] = 5;
          }
          lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::error(param_2,local_20);
          param_1[1] = lVar6;
          lVar6 = 2;
          goto LAB_00601f30;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5 - 1;
      lVar1 = uVar5 - uVar4;
      uVar5 = uVar5 + 1;
    } while (lVar1 != 1);
  }
  auVar7 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
           ::deserialize_u64::
           <<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                     (param_2);
  lVar6 = auVar7._0_8_ + 1;
  param_1[1] = auVar7._8_8_;
LAB_00601f30:
  *param_1 = lVar6;
  return param_1;
}


