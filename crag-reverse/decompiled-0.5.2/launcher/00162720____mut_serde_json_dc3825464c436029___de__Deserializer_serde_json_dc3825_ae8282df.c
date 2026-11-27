// 00162720 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <craggemini[b21da2d71f2da7a3]::license::Term as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined1 * __rustcall
<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong local_38;
  longlong local_30;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      uVar6 = (ulonglong)bVar2;
      if (0x22 < uVar6) {
LAB_001627cb:
        if (bVar2 != 0x7b) {
          local_38 = 10;
          goto LAB_0016277c;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_38 = 0x18;
          goto LAB_0016277c;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar4;
        <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_38);
        switch(local_38 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
          local_30 = <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
                     ::unit_variant(local_30);
          if (local_30 == 0) {
            *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
            param_1[1] = (undefined1)local_38;
            uVar4 = *(ulonglong *)(param_2 + 0x28);
            if (*(ulonglong *)(param_2 + 0x20) <= uVar4) goto LAB_0016286d;
            goto LAB_00162848;
          }
        }
        *(longlong *)(param_1 + 8) = local_30;
        *param_1 = 1;
        *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
        return param_1;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_001627cb;
        <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_38);
        switch(local_38 & 0xff) {
        case 0:
          param_1[1] = 0;
          break;
        case 1:
          param_1[1] = 1;
          break;
        case 2:
          param_1[1] = 2;
          break;
        case 3:
          param_1[1] = 3;
          break;
        default:
          *(longlong *)(param_1 + 8) = local_30;
          *param_1 = 1;
          return param_1;
        }
        goto LAB_001628a0;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_38 = 5;
LAB_0016277c:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_38);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *param_1 = 1;
  return param_1;
LAB_00162848:
  uVar4 = uVar4 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
  if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    if (bVar2 == 0x7d) {
      *(ulonglong *)(param_2 + 0x28) = uVar4;
LAB_001628a0:
      uVar3 = 0;
      goto LAB_001628a2;
    }
    local_38 = 10;
    goto LAB_00162875;
  }
  *(ulonglong *)(param_2 + 0x28) = uVar4;
  if (uVar4 == *(ulonglong *)(param_2 + 0x20)) {
LAB_0016286d:
    local_38 = 3;
LAB_00162875:
    uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::error(param_2,&local_38);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar3 = 1;
LAB_001628a2:
    *param_1 = uVar3;
    return param_1;
  }
  goto LAB_00162848;
}


