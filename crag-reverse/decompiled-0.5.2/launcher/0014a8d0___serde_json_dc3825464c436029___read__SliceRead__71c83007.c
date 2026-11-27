// 0014a8d0 <serde_json[dc3825464c436029]::read::SliceRead>

/* <serde_json[dc3825464c436029]::de::SeqAccess<_> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
          (undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_20 [3];
  
  lVar3 = *param_2;
  uVar4 = *(ulonglong *)(lVar3 + 0x20);
  if (*(ulonglong *)(lVar3 + 0x28) < uVar4) {
    uVar5 = *(ulonglong *)(lVar3 + 0x28);
    do {
      uVar6 = uVar5 + 1;
      bVar2 = *(byte *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar6);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5d) {
          param_1[1] = 0;
          goto LAB_0014a9ca;
        }
        if ((char)param_2[1] != '\0') {
          *(undefined1 *)(param_2 + 1) = 0;
          param_1[1] = 1;
          goto LAB_0014a9ca;
        }
        if (bVar2 != 0x2c) {
          local_20[0] = 7;
          goto LAB_0014a937;
        }
        *(ulonglong *)(lVar3 + 0x28) = uVar6;
        if (uVar4 <= uVar6) goto LAB_0014a9ab;
        lVar8 = uVar5 + 2;
        goto LAB_0014a986;
      }
      *(ulonglong *)(lVar3 + 0x28) = uVar6;
      uVar5 = uVar6;
    } while (uVar6 != uVar4);
  }
  local_20[0] = 2;
  goto LAB_0014a937;
  while( true ) {
    *(longlong *)(lVar3 + 0x28) = lVar8;
    lVar1 = (1 - uVar4) + lVar8;
    lVar8 = lVar8 + 1;
    if (lVar1 == 1) break;
LAB_0014a986:
    bVar2 = *(byte *)(*(longlong *)(lVar3 + 0x18) + -1 + lVar8);
    if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x5d) {
        param_1[1] = 1;
LAB_0014a9ca:
        *param_1 = 0;
        return;
      }
      local_20[0] = 0x15;
      goto LAB_0014a937;
    }
  }
LAB_0014a9ab:
  local_20[0] = 5;
LAB_0014a937:
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(lVar3,local_20);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *param_1 = 1;
  return;
}


