// 00415790 <serde_json[dc3825464c436029]::read::SliceRead>

/* <serde_json[dc3825464c436029]::de::MapAccess<_> as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
          (undefined1 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined8 local_20 [3];
  
  lVar2 = *param_2;
  uVar3 = *(ulonglong *)(lVar2 + 0x20);
  if (*(ulonglong *)(lVar2 + 0x28) < uVar3) {
    uVar6 = *(ulonglong *)(lVar2 + 0x28);
    do {
      uVar5 = uVar6 + 1;
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x7d) {
          param_1[1] = 0;
          goto LAB_0041588f;
        }
        if ((char)param_2[1] != '\0') {
          *(undefined1 *)(param_2 + 1) = 0;
          if (bVar1 == 0x22) goto LAB_0041588b;
          local_20[0] = 0x11;
          goto LAB_004157f7;
        }
        if (bVar1 != 0x2c) {
          local_20[0] = 8;
          goto LAB_004157f7;
        }
        *(ulonglong *)(lVar2 + 0x28) = uVar5;
        if (uVar3 <= uVar5) goto LAB_00415877;
        uVar6 = uVar6 + 2;
        goto LAB_00415851;
      }
      *(ulonglong *)(lVar2 + 0x28) = uVar5;
      uVar6 = uVar5;
    } while (uVar5 != uVar3);
  }
  local_20[0] = 3;
  goto LAB_004157f7;
LAB_00415851:
  do {
    bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar6);
    uVar5 = (ulonglong)bVar1;
    if (0x22 < uVar5) {
LAB_00415899:
      if (bVar1 == 0x7d) {
        local_20[0] = 0x15;
      }
      else {
        local_20[0] = 0x11;
      }
      goto LAB_004157f7;
    }
    if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
      if (uVar5 == 0x22) {
LAB_0041588b:
        param_1[1] = 1;
LAB_0041588f:
        *param_1 = 0;
        return;
      }
      goto LAB_00415899;
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar6;
    bVar7 = uVar6 != uVar3;
    uVar6 = uVar6 + 1;
  } while (bVar7);
LAB_00415877:
  local_20[0] = 5;
LAB_004157f7:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(lVar2,local_20);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 1;
  return;
}


